/********************
Author    : Mohammad Ibraheem Fatehy
Date      : 29 Feb 2025
File_name : RCC_config.h
*********************/

#ifndef  RCC_CONFIG_H
#define RCC_CONFIG_H

/**
*  @brief
*  your options : RCC_HSI
*                 RCC_HCE
*                 RCC_PLL
*/
#define RCC_SYSCLK      RCC_HSI


/**
* @brief
* your options : RCC_RC_CLK_       -> RC will be the source of the clock system
*                RCC_CRYSTAL_CLK_  -> Crystal will be the source of the clock system
*/
#if RCC_SYSCLK == RCC_HCE 
		#define RCC_CLK_BYPASS     RCC_CRYSTAL_CLK_
#endif /*RCC_SYSCLK*/



#endif /*RCC_CONFIG_H*/