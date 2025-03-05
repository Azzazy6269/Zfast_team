/********************
Author    : Mohammad Ibraheem Fatehy
Date      : 29 Feb 2025
File_name : RCC_program.c
*********************/


#include "RCC_interface.h"
#include "RCC_private.h"
#include "RCC_config.h"


Std_ReturnType Mcal_Rcc_InitSysClock(void){
Std_ReturnType Local_FunctionStatus = E_NOT_OK ;
#if RCC_SYSCLK == RCC_HSE
	  /*select which external clock will be CLK system*/
		#if RCC_CLK_BYPASS == RCC_RC_CLK_
	      SET_BIT(RCC_CR , RCC_CR_HSEBYP); //choose RC as sysclk
		#elif RCC_CLK_BYPASS == RCC_CRYSTAL_CLK_
	      CLR_BIT(RCC_CR , RCC_CR_HSEBYP); //choose crystal as sysclk	
		#else 
				#error "wrong choice RCC_CLK_BYPASS "
				return Local_FunctionStatus;
	  #endif
	   /*Enable HSE*/
	   SET_BIT(RCC_CR, RCC_CR_HSEON);	
		/*wait until the CLK be ready(stable)*/
		while(!GET_BIT(RCC_CR,RCC_CR_HSERDY));
		/*select HSE to be the SYSCLK*/
		RCC_CFGR = 0x00000001;
		Local_FunctionStatus = E_OK ;
#elif RCC_SYSCLK == RCC_HSI
		/*Enable HSI*/
		SET_BIT(RCC_CR, RCC_CR_HSION);
		/*wait until the clk is ready(stable)*/
	  while(!GET_BIT(RCC_CR,RCC_CR_HSIRDY));
		/*select HSI to be the SYSCLK*/
		RCC_CFGR = 0x00000000;
		Local_FunctionStatus = E_OK ;
#elif RCC_SYSCLK == RCC_PLL 
		/*Enable HSI*/
		SET_BIT(RCC_CR,RCC_CR_PLLON);
		/*wait until the clk is ready(stable)*/
	  while(!GET_BIT(RCC_CR,RCC_CR_PLLRDY));
		/*select HSE to be the SYSCLK*/
		RCC_CFGR = 0x00000020;
		Local_FunctionStatus = E_OK ;	
#else 
			#error "wrong choice RCC_SYSCLK"	
			return Local_FunctionStatus;
#endif
return Local_FunctionStatus;
}



Std_ReturnType Mcal_Rcc_EnablePeripheral(u8 Copy_PeripheralId , u8 Copy_BusId){
Std_ReturnType Local_FunctionStatus = E_NOT_OK ;
		switch(Copy_BusId)
		{
			case RCC_AHB:
					SET_BIT(RCC_AHBENR,Copy_PeripheralId);
					Local_FunctionStatus = E_OK;
			break;
			
			case RCC_APB1:
					SET_BIT(RCC_APB1ENR,Copy_PeripheralId);
					Local_FunctionStatus = E_OK;
			break;
			
			case RCC_APB2:
					SET_BIT(RCC_APB2ENR,Copy_PeripheralId);
					Local_FunctionStatus = E_OK;
			break;
			
			default:
				Local_FunctionStatus = E_NOT_OK;
		}
return Local_FunctionStatus;
}
	
Std_ReturnType Mcal_Rcc_DisablePeripheral(u8 Copy_PeripheralId , u8 Copy_BusId){
	Std_ReturnType Local_FunctionStatus = E_NOT_OK ;
		switch(Copy_BusId)
		{
			case RCC_AHB:
					CLR_BIT(RCC_AHBENR,Copy_PeripheralId);
					Local_FunctionStatus = E_OK;
			break;
			
			case RCC_APB1:
					CLR_BIT(RCC_APB1ENR,Copy_PeripheralId);
					Local_FunctionStatus = E_OK;
			break;
			
			case RCC_APB2:
					CLR_BIT(RCC_APB2ENR,Copy_PeripheralId);
					Local_FunctionStatus = E_OK;
			break;
			
			default:
				Local_FunctionStatus = E_NOT_OK;
		}
return Local_FunctionStatus;
}