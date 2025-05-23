/****************************************************************************
 * arch/arm/src/imxrt/imxrt_clrpend.c
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

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include <nuttx/config.h>

#include <arch/irq.h>
#include <assert.h>

#include "nvic.h"
#include "arm_internal.h"
#include "imxrt_irq.h"

/****************************************************************************
 * Public Functions
 ****************************************************************************/

/****************************************************************************
 * Name: imxrt_clrpend
 *
 * Description:
 *   Clear a pending interrupt at the NVIC. This does not seem to be required
 *   for most interrupts.  Don't know why... but the LPC54xx Ethernet EMAC
 *   interrupt definitely needs it!
 *
 *   This function is logically a part of imxrt_irq.c, but I will keep it in
 *   a separate file so that it will not increase the footprint on LPC54xx
 *   platforms that do not need this function.
 *
 ****************************************************************************/

void imxrt_clrpend(int irq)
{
  /* Check for external interrupt */

  if (irq >= IMXRT_IRQ_EXTINT)
    {
      if (irq < (IMXRT_IRQ_EXTINT + 32))
        {
          putreg32(1 << (irq - IMXRT_IRQ_EXTINT),
                  NVIC_IRQ0_31_CLRPEND);
        }
#if IMXRT_IRQ_NEXTINT >= 64
      else if (irq < (IMXRT_IRQ_EXTINT + 64))
        {
          putreg32(1 << (irq - IMXRT_IRQ_EXTINT - 32),
                   NVIC_IRQ32_63_CLRPEND);
        }
#endif
#if IMXRT_IRQ_NEXTINT >= 96
      else if (irq < (IMXRT_IRQ_EXTINT + 96))
        {
          putreg32(1 << (irq - IMXRT_IRQ_EXTINT - 64),
                   NVIC_IRQ64_95_CLRPEND);
        }
#endif
#if IMXRT_IRQ_NEXTINT >= 128
      else if (irq < (IMXRT_IRQ_EXTINT + 128))
        {
          putreg32(1 << (irq - IMXRT_IRQ_EXTINT - 96),
                   NVIC_IRQ96_127_CLRPEND);
        }
#endif
#if IMXRT_IRQ_NEXTINT >= 160
      else if (irq < (IMXRT_IRQ_EXTINT + 160))
        {
          putreg32(1 << (irq - IMXRT_IRQ_EXTINT - 128),
                   NVIC_IRQ128_159_CLRPEND);
        }
#endif
      else
        {
          DEBUGPANIC();
        }
    }
}
