/****************************************************************************
 * arch/arm/include/sam34/sam4s_irq.h
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

/* This file should never be included directly but, rather,
 * only indirectly through nuttx/irq.h
 */

#ifndef __ARCH_ARM_INCLUDE_SAM34_SAM4S_IRQ_H
#define __ARCH_ARM_INCLUDE_SAM34_SAM4S_IRQ_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

/****************************************************************************
 * Pre-processor Prototypes
 ****************************************************************************/

/* SAM4S Peripheral Identifiers */

#define SAM_PID_SUPC          (0)  /* Supply Controller */
#define SAM_PID_RSTC          (1)  /* Reset Controller */
#define SAM_PID_RTC           (2)  /* Real Time Clock */
#define SAM_PID_RTT           (3)  /* Real Time Timer */
#define SAM_PID_WDT           (4)  /* Watchdog Timer */
#define SAM_PID_PMC           (5)  /* Power Management Controller */
#define SAM_PID_EEFC0         (6)  /* Enhanced Embedded Flash Controller 0 */
#define SAM_PID_EEFC1         (7)  /* Enhanced Embedded Flash Controller 1 */
#define SAM_PID_UART0         (8)  /* Universal Asynchronous Receiver Transmitter 0 */
#define SAM_PID_UART1         (9)  /* Universal Asynchronous Receiver Transmitter 1 */
#define SAM_PID_SMC          (10)  /* Static Memory Controller */
#define SAM_PID_PIOA         (11)  /* Parallel I/O Controller A */
#define SAM_PID_PIOB         (12)  /* Parallel I/O Controller B */
#define SAM_PID_PIOC         (13)  /* Parallel I/O Controller C */
#define SAM_PID_USART0       (14)  /* USART 0 */
#define SAM_PID_USART1       (15)  /* USART 1 */
#define SAM_PID_RESERVED_16  (16)  /* Reserved */
#define SAM_PID_RESERVED_17  (17)  /* Reserved */
#define SAM_PID_HSMCI        (18)  /* High Speed Multimedia Card Interface */
#define SAM_PID_TWI0         (19)  /* Two-Wire Interface 0 */
#define SAM_PID_TWI1         (20)  /* Two-Wire Interface 1 */
#define SAM_PID_SPI0         (21)  /* Serial Peripheral Interface */
#define SAM_PID_SSC          (22)  /* Synchronous Serial Controller */
#define SAM_PID_TC0          (23)  /* Timer Counter 0 */
#define SAM_PID_TC1          (24)  /* Timer Counter 1 */
#define SAM_PID_TC2          (25)  /* Timer Counter 2 */
#define SAM_PID_TC3          (26)  /* Timer Counter 3 */
#define SAM_PID_TC4          (27)  /* Timer Counter 4 */
#define SAM_PID_TC5          (28)  /* Timer Counter 5 */
#define SAM_PID_ADC          (29)  /* Analog To Digital Converter */
#define SAM_PID_DACC         (30)  /* Digital To Analog Converter */
#define SAM_PID_PWM          (31)  /* Pulse Width Modulation */
#define SAM_PID_CRCCU        (32)  /* CRC Calculation Unit */
#define SAM_PID_ACC          (33)  /* Analog Comparator */
#define SAM_PID_UDP          (34)  /* USB Device Port */
#define NR_PIDS              (35)  /* Number of peripheral identifiers */

/* External interrupts (vectors >= 16) */

#define SAM_IRQ_SUPC         (SAM_IRQ_EXTINT+SAM_PID_SUPC)        /* PID 0: Supply Controller */
#define SAM_IRQ_RSTC         (SAM_IRQ_EXTINT+SAM_PID_RSTC)        /* PID 1: Reset Controller */
#define SAM_IRQ_RTC          (SAM_IRQ_EXTINT+SAM_PID_RTC)         /* PID 2: Real Time Clock */
#define SAM_IRQ_RTT          (SAM_IRQ_EXTINT+SAM_PID_RTT)         /* PID 3: Real Time Timer */
#define SAM_IRQ_WDT          (SAM_IRQ_EXTINT+SAM_PID_WDT)         /* PID 4: Watchdog Timer */
#define SAM_IRQ_PMC          (SAM_IRQ_EXTINT+SAM_PID_PMC)         /* PID 5: Power Management Controller */
#define SAM_IRQ_EEFC0        (SAM_IRQ_EXTINT+SAM_PID_EEFC0)       /* PID 6: Enhanced Embedded Flash Controller 0 */
#define SAM_IRQ_EEFC1        (SAM_IRQ_EXTINT+SAM_PID_EEFC1)       /* PID 7: Enhanced Embedded Flash Controller 1 */
#define SAM_IRQ_UART0        (SAM_IRQ_EXTINT+SAM_PID_UART0)       /* PID 8: Universal Asynchronous Receiver Transmitter 0 */
#define SAM_IRQ_UART1        (SAM_IRQ_EXTINT+SAM_PID_UART1)       /* PID 9: Universal Asynchronous Receiver Transmitter 1 */
#define SAM_IRQ_SMC          (SAM_IRQ_EXTINT+SAM_PID_SMC)         /* PID 10: Static Memory Controller */
#define SAM_IRQ_PIOA         (SAM_IRQ_EXTINT+SAM_PID_PIOA)        /* PID 11: Parallel I/O Controller A */
#define SAM_IRQ_PIOB         (SAM_IRQ_EXTINT+SAM_PID_PIOB)        /* PID 12: Parallel I/O Controller B */
#define SAM_IRQ_PIOC         (SAM_IRQ_EXTINT+SAM_PID_PIOC)        /* PID 13: Parallel I/O Controller C */
#define SAM_IRQ_USART0       (SAM_IRQ_EXTINT+SAM_PID_USART0)      /* PID 14: USART 0 */
#define SAM_IRQ_USART1       (SAM_IRQ_EXTINT+SAM_PID_USART1)      /* PID 15: USART 1 */
#define SAM_IRQ_RESERVED_16  (SAM_IRQ_EXTINT+SAM_PID_RESERVED_16) /* PID 16: Reserved */
#define SAM_IRQ_RESERVED_17  (SAM_IRQ_EXTINT+SAM_PID_RESERVED_17) /* PID 17: Reserved */
#define SAM_IRQ_HSMCI        (SAM_IRQ_EXTINT+SAM_PID_HSMCI)       /* PID 18: High Speed Multimedia Card Interface */
#define SAM_IRQ_TWI0         (SAM_IRQ_EXTINT+SAM_PID_TWI0)        /* PID 19: Two-Wire Interface 0 */
#define SAM_IRQ_TWI1         (SAM_IRQ_EXTINT+SAM_PID_TWI1)        /* PID 20: Two-Wire Interface 1 */
#define SAM_IRQ_SPI0         (SAM_IRQ_EXTINT+SAM_PID_SPI0)        /* PIC 21: Serial Peripheral Interface */
#define SAM_IRQ_SSC          (SAM_IRQ_EXTINT+SAM_PID_SSC)         /* PID 22: Synchronous Serial Controller */
#define SAM_IRQ_TC0          (SAM_IRQ_EXTINT+SAM_PID_TC0)         /* PID 23: Timer Counter 0 */
#define SAM_IRQ_TC1          (SAM_IRQ_EXTINT+SAM_PID_TC1)         /* PID 24: Timer Counter 1 */
#define SAM_IRQ_TC2          (SAM_IRQ_EXTINT+SAM_PID_TC2)         /* PID 25: Timer Counter 2 */
#define SAM_IRQ_TC3          (SAM_IRQ_EXTINT+SAM_PID_TC3)         /* PID 26: Timer Counter 3 */
#define SAM_IRQ_TC4          (SAM_IRQ_EXTINT+SAM_PID_TC4)         /* PID 27: Timer Counter 4 */
#define SAM_IRQ_TC5          (SAM_IRQ_EXTINT+SAM_PID_TC5)         /* PID 28: Timer Counter 5 */
#define SAM_IRQ_ADC          (SAM_IRQ_EXTINT+SAM_PID_ADC)         /* PID 29: Analog To Digital Converter */
#define SAM_IRQ_DACC         (SAM_IRQ_EXTINT+SAM_PID_DACC)        /* PID 30: Digital To Analog Converter */
#define SAM_IRQ_PWM          (SAM_IRQ_EXTINT+SAM_PID_PWM)         /* PID 31: Pulse Width Modulation */
#define SAM_IRQ_CRCCU        (SAM_IRQ_EXTINT+SAM_PID_CRCCU)       /* PID 32: CRC Calculation Unit */
#define SAM_IRQ_ACC          (SAM_IRQ_EXTINT+SAM_PID_ACC)         /* PID 33: Analog Comparator */
#define SAM_IRQ_UDP          (SAM_IRQ_EXTINT+SAM_PID_UDP)         /* PID 34: USB Device Port */

#define SAM_IRQ_NEXTINT      NR_PIDS                              /* Total number of external interrupt numbers */
#define SAM_IRQ_NIRQS        (SAM_IRQ_EXTINT + NR_PIDS)           /* The number of real IRQs */

/* GPIO interrupts (derived from SAM_IRQ_PIOA/B/C) */

#ifdef CONFIG_SAM34_GPIOA_IRQ
#  define SAM_IRQ_GPIOA_PINS (SAM_IRQ_EXTINT + SAM_IRQ_NEXTINT)
#  define SAM_IRQ_PA0        (SAM_IRQ_GPIOA_PINS+0)               /* GPIOA, PIN 0 */
#  define SAM_IRQ_PA1        (SAM_IRQ_GPIOA_PINS+1)               /* GPIOA, PIN 1 */
#  define SAM_IRQ_PA2        (SAM_IRQ_GPIOA_PINS+2)               /* GPIOA, PIN 2 */
#  define SAM_IRQ_PA3        (SAM_IRQ_GPIOA_PINS+3)               /* GPIOA, PIN 3 */
#  define SAM_IRQ_PA4        (SAM_IRQ_GPIOA_PINS+4)               /* GPIOA, PIN 4 */
#  define SAM_IRQ_PA5        (SAM_IRQ_GPIOA_PINS+5)               /* GPIOA, PIN 5 */
#  define SAM_IRQ_PA6        (SAM_IRQ_GPIOA_PINS+6)               /* GPIOA, PIN 6 */
#  define SAM_IRQ_PA7        (SAM_IRQ_GPIOA_PINS+7)               /* GPIOA, PIN 7 */
#  define SAM_IRQ_PA8        (SAM_IRQ_GPIOA_PINS+8)               /* GPIOA, PIN 8 */
#  define SAM_IRQ_PA9        (SAM_IRQ_GPIOA_PINS+9)               /* GPIOA, PIN 9 */
#  define SAM_IRQ_PA10       (SAM_IRQ_GPIOA_PINS+10)              /* GPIOA, PIN 10 */
#  define SAM_IRQ_PA11       (SAM_IRQ_GPIOA_PINS+11)              /* GPIOA, PIN 11 */
#  define SAM_IRQ_PA12       (SAM_IRQ_GPIOA_PINS+12)              /* GPIOA, PIN 12 */
#  define SAM_IRQ_PA13       (SAM_IRQ_GPIOA_PINS+13)              /* GPIOA, PIN 13 */
#  define SAM_IRQ_PA14       (SAM_IRQ_GPIOA_PINS+14)              /* GPIOA, PIN 14 */
#  define SAM_IRQ_PA15       (SAM_IRQ_GPIOA_PINS+15)              /* GPIOA, PIN 15 */
#  define SAM_IRQ_PA16       (SAM_IRQ_GPIOA_PINS+16)              /* GPIOA, PIN 16 */
#  define SAM_IRQ_PA17       (SAM_IRQ_GPIOA_PINS+17)              /* GPIOA, PIN 17 */
#  define SAM_IRQ_PA18       (SAM_IRQ_GPIOA_PINS+18)              /* GPIOA, PIN 18 */
#  define SAM_IRQ_PA19       (SAM_IRQ_GPIOA_PINS+19)              /* GPIOA, PIN 19 */
#  define SAM_IRQ_PA20       (SAM_IRQ_GPIOA_PINS+20)              /* GPIOA, PIN 20 */
#  define SAM_IRQ_PA21       (SAM_IRQ_GPIOA_PINS+21)              /* GPIOA, PIN 21 */
#  define SAM_IRQ_PA22       (SAM_IRQ_GPIOA_PINS+22)              /* GPIOA, PIN 22 */
#  define SAM_IRQ_PA23       (SAM_IRQ_GPIOA_PINS+23)              /* GPIOA, PIN 23 */
#  define SAM_IRQ_PA24       (SAM_IRQ_GPIOA_PINS+24)              /* GPIOA, PIN 24 */
#  define SAM_IRQ_PA25       (SAM_IRQ_GPIOA_PINS+25)              /* GPIOA, PIN 25 */
#  define SAM_IRQ_PA26       (SAM_IRQ_GPIOA_PINS+26)              /* GPIOA, PIN 26 */
#  define SAM_IRQ_PA27       (SAM_IRQ_GPIOA_PINS+27)              /* GPIOA, PIN 27 */
#  define SAM_IRQ_PA28       (SAM_IRQ_GPIOA_PINS+28)              /* GPIOA, PIN 28 */
#  define SAM_IRQ_PA29       (SAM_IRQ_GPIOA_PINS+29)              /* GPIOA, PIN 29 */
#  define SAM_IRQ_PA30       (SAM_IRQ_GPIOA_PINS+30)              /* GPIOA, PIN 30 */
#  define SAM_IRQ_PA31       (SAM_IRQ_GPIOA_PINS+31)              /* GPIOA, PIN 31 */
#  define SAM_NGPIOAIRQS     32
#else
#  define SAM_NGPIOAIRQS     0
#endif

#ifdef CONFIG_SAM34_GPIOB_IRQ
#  define SAM_IRQ_GPIOB_PINS (SAM_IRQ_EXTINT + SAM_IRQ_NEXTINT + SAM_NGPIOAIRQS)
#  define SAM_IRQ_PB0        (SAM_IRQ_GPIOB_PINS+0)               /* GPIOB, PIN 0 */
#  define SAM_IRQ_PB1        (SAM_IRQ_GPIOB_PINS+1)               /* GPIOB, PIN 1 */
#  define SAM_IRQ_PB2        (SAM_IRQ_GPIOB_PINS+2)               /* GPIOB, PIN 2 */
#  define SAM_IRQ_PB3        (SAM_IRQ_GPIOB_PINS+3)               /* GPIOB, PIN 3 */
#  define SAM_IRQ_PB4        (SAM_IRQ_GPIOB_PINS+4)               /* GPIOB, PIN 4 */
#  define SAM_IRQ_PB5        (SAM_IRQ_GPIOB_PINS+5)               /* GPIOB, PIN 5 */
#  define SAM_IRQ_PB6        (SAM_IRQ_GPIOB_PINS+6)               /* GPIOB, PIN 6 */
#  define SAM_IRQ_PB7        (SAM_IRQ_GPIOB_PINS+7)               /* GPIOB, PIN 7 */
#  define SAM_IRQ_PB8        (SAM_IRQ_GPIOB_PINS+8)               /* GPIOB, PIN 8 */
#  define SAM_IRQ_PB9        (SAM_IRQ_GPIOB_PINS+9)               /* GPIOB, PIN 9 */
#  define SAM_IRQ_PB10       (SAM_IRQ_GPIOB_PINS+10)              /* GPIOB, PIN 10 */
#  define SAM_IRQ_PB11       (SAM_IRQ_GPIOB_PINS+11)              /* GPIOB, PIN 11 */
#  define SAM_IRQ_PB12       (SAM_IRQ_GPIOB_PINS+12)              /* GPIOB, PIN 12 */
#  define SAM_IRQ_PB13       (SAM_IRQ_GPIOB_PINS+13)              /* GPIOB, PIN 13 */
#  define SAM_IRQ_PB14       (SAM_IRQ_GPIOB_PINS+14)              /* GPIOB, PIN 14 */
#  define SAM_IRQ_PB15       (SAM_IRQ_GPIOB_PINS+15)              /* GPIOB, PIN 15 */
#  define SAM_IRQ_PB16       (SAM_IRQ_GPIOB_PINS+16)              /* GPIOB, PIN 16 */
#  define SAM_IRQ_PB17       (SAM_IRQ_GPIOB_PINS+17)              /* GPIOB, PIN 17 */
#  define SAM_IRQ_PB18       (SAM_IRQ_GPIOB_PINS+18)              /* GPIOB, PIN 18 */
#  define SAM_IRQ_PB19       (SAM_IRQ_GPIOB_PINS+19)              /* GPIOB, PIN 19 */
#  define SAM_IRQ_PB20       (SAM_IRQ_GPIOB_PINS+20)              /* GPIOB, PIN 20 */
#  define SAM_IRQ_PB21       (SAM_IRQ_GPIOB_PINS+21)              /* GPIOB, PIN 21 */
#  define SAM_IRQ_PB22       (SAM_IRQ_GPIOB_PINS+22)              /* GPIOB, PIN 22 */
#  define SAM_IRQ_PB23       (SAM_IRQ_GPIOB_PINS+23)              /* GPIOB, PIN 23 */
#  define SAM_IRQ_PB24       (SAM_IRQ_GPIOB_PINS+24)              /* GPIOB, PIN 24 */
#  define SAM_IRQ_PB25       (SAM_IRQ_GPIOB_PINS+25)              /* GPIOB, PIN 25 */
#  define SAM_IRQ_PB26       (SAM_IRQ_GPIOB_PINS+26)              /* GPIOB, PIN 26 */
#  define SAM_IRQ_PB27       (SAM_IRQ_GPIOB_PINS+27)              /* GPIOB, PIN 27 */
#  define SAM_IRQ_PB28       (SAM_IRQ_GPIOB_PINS+28)              /* GPIOB, PIN 28 */
#  define SAM_IRQ_PB29       (SAM_IRQ_GPIOB_PINS+29)              /* GPIOB, PIN 29 */
#  define SAM_IRQ_PB30       (SAM_IRQ_GPIOB_PINS+30)              /* GPIOB, PIN 30 */
#  define SAM_IRQ_PB31       (SAM_IRQ_GPIOB_PINS+31)              /* GPIOB, PIN 31 */
#  define SAM_NGPIOBIRQS     32
#else
#  define SAM_NGPIOBIRQS     0
#endif

#ifdef CONFIG_SAM34_GPIOC_IRQ
#  define SAM_IRQ_GPIOC_PINS (SAM_IRQ_EXTINT + SAM_IRQ_NEXTINT + SAM_NGPIOAIRQS + SAM_NGPIOBIRQS)
#  define SAM_IRQ_PC0        (SAM_IRQ_GPIOC_PINS+0)               /* GPIOC, PIN 0 */
#  define SAM_IRQ_PC1        (SAM_IRQ_GPIOC_PINS+1)               /* GPIOC, PIN 1 */
#  define SAM_IRQ_PC2        (SAM_IRQ_GPIOC_PINS+2)               /* GPIOC, PIN 2 */
#  define SAM_IRQ_PC3        (SAM_IRQ_GPIOC_PINS+3)               /* GPIOC, PIN 3 */
#  define SAM_IRQ_PC4        (SAM_IRQ_GPIOC_PINS+4)               /* GPIOC, PIN 4 */
#  define SAM_IRQ_PC5        (SAM_IRQ_GPIOC_PINS+5)               /* GPIOC, PIN 5 */
#  define SAM_IRQ_PC6        (SAM_IRQ_GPIOC_PINS+6)               /* GPIOC, PIN 6 */
#  define SAM_IRQ_PC7        (SAM_IRQ_GPIOC_PINS+7)               /* GPIOC, PIN 7 */
#  define SAM_IRQ_PC8        (SAM_IRQ_GPIOC_PINS+8)               /* GPIOC, PIN 8 */
#  define SAM_IRQ_PC9        (SAM_IRQ_GPIOC_PINS+9)               /* GPIOC, PIN 9 */
#  define SAM_IRQ_PC10       (SAM_IRQ_GPIOC_PINS+10)              /* GPIOC, PIN 10 */
#  define SAM_IRQ_PC11       (SAM_IRQ_GPIOC_PINS+11)              /* GPIOC, PIN 11 */
#  define SAM_IRQ_PC12       (SAM_IRQ_GPIOC_PINS+12)              /* GPIOC, PIN 12 */
#  define SAM_IRQ_PC13       (SAM_IRQ_GPIOC_PINS+13)              /* GPIOC, PIN 13 */
#  define SAM_IRQ_PC14       (SAM_IRQ_GPIOC_PINS+14)              /* GPIOC, PIN 14 */
#  define SAM_IRQ_PC15       (SAM_IRQ_GPIOC_PINS+15)              /* GPIOC, PIN 15 */
#  define SAM_IRQ_PC16       (SAM_IRQ_GPIOC_PINS+16)              /* GPIOC, PIN 16 */
#  define SAM_IRQ_PC17       (SAM_IRQ_GPIOC_PINS+17)              /* GPIOC, PIN 17 */
#  define SAM_IRQ_PC18       (SAM_IRQ_GPIOC_PINS+18)              /* GPIOC, PIN 18 */
#  define SAM_IRQ_PC19       (SAM_IRQ_GPIOC_PINS+19)              /* GPIOC, PIN 19 */
#  define SAM_IRQ_PC20       (SAM_IRQ_GPIOC_PINS+20)              /* GPIOC, PIN 20 */
#  define SAM_IRQ_PC21       (SAM_IRQ_GPIOC_PINS+21)              /* GPIOC, PIN 21 */
#  define SAM_IRQ_PC22       (SAM_IRQ_GPIOC_PINS+22)              /* GPIOC, PIN 22 */
#  define SAM_IRQ_PC23       (SAM_IRQ_GPIOC_PINS+23)              /* GPIOC, PIN 23 */
#  define SAM_IRQ_PC24       (SAM_IRQ_GPIOC_PINS+24)              /* GPIOC, PIN 24 */
#  define SAM_IRQ_PC25       (SAM_IRQ_GPIOC_PINS+25)              /* GPIOC, PIN 25 */
#  define SAM_IRQ_PC26       (SAM_IRQ_GPIOC_PINS+26)              /* GPIOC, PIN 26 */
#  define SAM_IRQ_PC27       (SAM_IRQ_GPIOC_PINS+27)              /* GPIOC, PIN 27 */
#  define SAM_IRQ_PC28       (SAM_IRQ_GPIOC_PINS+28)              /* GPIOC, PIN 28 */
#  define SAM_IRQ_PC29       (SAM_IRQ_GPIOC_PINS+29)              /* GPIOC, PIN 29 */
#  define SAM_IRQ_PC30       (SAM_IRQ_GPIOC_PINS+30)              /* GPIOC, PIN 30 */
#  define SAM_IRQ_PC31       (SAM_IRQ_GPIOC_PINS+31)              /* GPIOC, PIN 31 */
#  define SAM_NGPIOCIRQS     32
#else
#  define SAM_NGPIOCIRQS     0
#endif

/* Total number of IRQ numbers */

#define NR_IRQS              (SAM_IRQ_EXTINT + SAM_IRQ_NEXTINT + \
                              SAM_NGPIOAIRQS + SAM_NGPIOBIRQS + SAM_NGPIOCIRQS)

/****************************************************************************
 * Public Types
 ****************************************************************************/

/****************************************************************************
 * Inline functions
 ****************************************************************************/

/****************************************************************************
 * Public Data
 ****************************************************************************/

/****************************************************************************
 * Public Function Prototypes
 ****************************************************************************/

#ifndef __ASSEMBLY__
#ifdef __cplusplus
#define EXTERN extern "C"
extern "C"
{
#else
#define EXTERN extern
#endif

#undef EXTERN
#ifdef __cplusplus
}
#endif
#endif

#endif /* __ARCH_ARM_INCLUDE_SAM34_SAM4S_IRQ_H */
