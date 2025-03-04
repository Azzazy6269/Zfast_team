/********************
Author    : Mohammad Ibraheem Fatehy
Date      : 21 Feb 2025
File_name : GPIO_interface.h
*********************/
#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"

#define GPIO_LOW           0
#define GPIO_HIGH          1

#define GPIO_OUTPUT        0
#define GPIO_INPUT         1

#define GPIO_PORTA         0
#define GPIO_PORTB         1
#define GPIO_PORTC         2

#define GPIO_PIN0          0
#define GPIO_PIN1          1
#define GPIO_PIN2          2
#define GPIO_PIN3          3
#define GPIO_PIN4          4
#define GPIO_PIN5          5
#define GPIO_PIN6          6
#define GPIO_PIN7          7
#define GPIO_PIN8          8
#define GPIO_PIN9          9
#define GPIO_PIN10         10
#define GPIO_PIN11         11
#define GPIO_PIN12         12
#define GPIO_PIN13         13
#define GPIO_PIN14         14
#define GPIO_PIN15         15

//input
#define GPIO_INPUT_ANALOG                        0x00 
#define GPIO_INPUT_FLOATING                      0x04 
#define GPIO_INPUT_PULL_DOWN                     0x08  
#define GPIO_INPUT_PULL_UP                       0x08 

//output
#define GPIO_OUTPUT_PUSH_PULL_10MHZ              0x01   
#define GPIO_OUTPUT_OPEN_DRAIN_10MHZ             0x05   
#define GPIO_OUTPUT_AF_PUSH_PULL_10MHZ           0x09   
#define GPIO_OUTPUT_AF_OPEN_DRAIN_10MHZ          0x0D   
    
#define GPIO_OUTPUT_PUSH_PULL_2MHZ               0x02   
#define GPIO_OUTPUT_OPEN_DRAIN_2MHZ              0x06   
#define GPIO_OUTPUT_AF_PUSH_PULL_2MHZ            0x0A   
#define GPIO_OUTPUT_AF_OPEN_DRAIN_2MHZ           0x0E   
   
#define GPIO_OUTPUT_PUSH_PULL_50MHZ              0x03   
#define GPIO_OUTPUT_OPEN_DRAIN_50MHZ             0x07   
#define GPIO_OUTPUT_AF_PUSH_PULL_50MHZ           0x0B   
#define GPIO_OUTPUT_AF_OPEN_DRAIN_50MHZ          0x0F 





Std_ReturnType GPIO_SetPinMode(u8 Copy_PortId , u8 Copy_PinId , u8 Copy_PinMode);
Std_ReturnType GPIO_Set_Pin_Value(u8 Copy_PortId , u8 Copy_PinId , u8 Copy_PinValue);
Std_ReturnType GPIO_Get_Pin_Value(u8 Copy_PortId , u8 Copy_PinId , u8 * Copy_PinValue);
#endif /*GPIO_INTERFACE_H*/