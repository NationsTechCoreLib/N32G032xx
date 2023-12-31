/*****************************************************************************
 * Copyright (c) 2019, ..\readme.txt Technologies Inc.
 *
 * All rights reserved.
 * ****************************************************************************
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * - Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the disclaimer below.
 *
 * ..\readme.txt' name may not be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * DISCLAIMER: THIS SOFTWARE IS PROVIDED BY ..\readme.txt "AS IS" AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * DISCLAIMED. IN NO EVENT SHALL ..\readme.txt BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA,
 * OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 * LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 * NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * ****************************************************************************/

/**
 * @file n32g032_it.c
 * @author ..\readme.txt
 * @version v1.0.0
 *
 * @copyright Copyright (c) 2019, ..\readme.txt Technologies Inc. All rights reserved.
 */
#include "n32g032_it.h"

/** @addtogroup N32G032_StdPeriph_Template
 * @{
 */

uint8_t RxCounter = 0;
extern uint8_t RxBuffer2[];
extern uint8_t NbrOfDataToRead;

/******************************************************************************/
/*            Cortex-M0 Processor Exceptions Handlers                         */
/******************************************************************************/

/**
 * @brief  This function handles NMI exception.
 */
void NMI_Handler(void)
{
}

/**
 * @brief  This function handles Hard Fault exception.
 */
void HardFault_Handler(void)
{
    /* Go to infinite loop when Hard Fault exception occurs */
    while (1)
    {
    }
}

/**
 * @brief  This function handles SVCall exception.
 */
void SVC_Handler(void)
{
}

/**
 * @brief  This function handles PendSV_Handler exception.
 */
void PendSV_Handler(void)
{
}

/**
 * @brief  This function handles SysTick Handler.
 */
void SysTick_Handler(void)
{
}

/******************************************************************************/
/*                 N32G032 Peripherals Interrupt Handlers                     */
/*  Add here the Interrupt Handler for the used peripheral(s) (PPP), for the  */
/*  available peripheral interrupt handler's name please refer to the startup */
/*  file (startup_n32g032.s).                                                 */
/******************************************************************************/
/**
 * @brief  This function handles USART2 global interrupt request.
 */
void USART1_2_IRQHandler(void)
{
    if (USART_GetIntStatus(USART2, USART_INT_RXDNE) != RESET)
    {
        /* Read one byte from the receive data register */
        RxBuffer2[RxCounter++] = USART_ReceiveData(USART2);

        if (RxCounter == NbrOfDataToRead)
        {
            /* Disable the USART2 Receive interrupt */
            USART_ConfigInt(USART2, USART_INT_RXDNE, DISABLE);
        }
    }
		
		 if(USART_GetFlagStatus(USART2, USART_FLAG_IDLEF | USART_FLAG_OREF | USART_FLAG_NEF | USART_FLAG_FEF | USART_FLAG_PEF) != RESET)
		{
			USART_ReceiveData(USART2);		
		}
}

/**
 * @brief  This function handles UART7 global interrupt request.
 */
void UART5_6_IRQHandler(void)
{
    if (USART_GetIntStatus(UART5, USART_INT_RXDNE) != RESET)
    {
        /* Read one byte from the receive data register */
        RxBuffer2[RxCounter++] = USART_ReceiveData(UART5);

        if (RxCounter == NbrOfDataToRead)
        {
            /* Disable the UART7 Receive interrupt */
            USART_ConfigInt(UART5, USART_INT_RXDNE, DISABLE);
        }
    }
		
		 if(USART_GetFlagStatus(UART5, USART_FLAG_IDLEF | USART_FLAG_OREF | USART_FLAG_NEF | USART_FLAG_FEF | USART_FLAG_PEF) != RESET)
		{
			USART_ReceiveData(UART5);		
		}
}

/**
 * @brief  This function handles PPP interrupt request.
 */
/*void PPP_IRQHandler(void)
{
}*/

/**
 * @}
 */
