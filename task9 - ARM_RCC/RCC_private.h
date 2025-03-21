/********************
Author    : Mohammad Ibraheem Fatehy
Date      : 29 Feb 2025
File_name : RCC_private.h
*********************/

#ifndef RCC_PRIVATE_H
#define RCC_PRIVATE_H


#define RCC_CR                  (*((volatile u32 *)0x40021000))
#define RCC_CFGR                (*((volatile u32 *)0x40021004))
#define RCC_CIR                 (*((volatile u32 *)0x40021008))
#define RCC_APB2RSTR            (*((volatile u32 *)0x4002100C))
#define RCC_APB1RSTR            (*((volatile u32 *)0x40021010))
#define RCC_AHBENR              (*((volatile u32 *)0x40021014))
#define RCC_APB1ENR             (*((volatile u32 *)0x4002101C))
#define RCC_APB2ENR             (*((volatile u32 *)0x40021018))
#define RCC_BDCR                (*((volatile u32 *)0x40021020))
#define RCC_CSR                 (*((volatile u32 *)0x40021024))

#define RCC_HSI             0   /**< High-Speed Internal Clock Source (HSI) */
#define RCC_HSE             1   /**< High-Speed External Clock Source (HSE) */
#define RCC_PLL             2   /**< Phase-Locked Loop Clock Source (PLL) */

#define RCC_CRYSTAL_CLK_    0
#define RCC_RC_CLK_         1

#define RCC_CR_HSION        0
#define RCC_CR_HSIRDY       1
#define RCC_CR_HSEON        16
#define RCC_CR_HSERDY       17
#define RCC_CR_HSEBYP       18
#define RCC_CR_PLLON        24
#define RCC_CR_PLLRDY       25

#define RCC_AHB             0
#define RCC_APB1            1
#define RCC_APB2            2




#endif /*RCC_PRIVATE_H*/