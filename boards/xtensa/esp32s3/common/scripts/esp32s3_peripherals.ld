/****************************************************************************
 * boards/xtensa/esp32s3/common/scripts/esp32s3_peripherals.ld
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

PROVIDE ( UART0 = 0x60000000 );
PROVIDE ( SPIMEM1 = 0x60002000 );
PROVIDE ( SPIMEM0 = 0x60003000 );
PROVIDE ( GPIO = 0x60004000 );
PROVIDE ( SIGMADELTA = 0x60004f00 );
PROVIDE ( RTCCNTL = 0x60008000 );
PROVIDE ( RTCIO = 0x60008400 );
PROVIDE ( SENS = 0x60008800 );
PROVIDE ( HINF = 0x6000B000 );
PROVIDE ( I2S0 = 0x6000F000 );
PROVIDE ( I2S1 = 0x6002D000 );
PROVIDE ( UART1 = 0x60010000 );
PROVIDE ( I2C0 = 0x60013000 );
PROVIDE ( UHCI0 = 0x60014000 );
PROVIDE ( UHCI1 = 0x60014000 );
PROVIDE ( HOST = 0x60015000 );
PROVIDE ( RMT = 0x60016000 );
PROVIDE ( RMTMEM = 0x60016800 );
PROVIDE ( PCNT = 0x60017000 );
PROVIDE ( SLC = 0x60018000 );
PROVIDE ( LEDC = 0x60019000 );
PROVIDE ( MCPWM0 = 0x6001E000 );
PROVIDE ( MCPWM1 = 0x6002C000 );
PROVIDE ( MCP = 0x600c3000 );
PROVIDE ( TIMERG0 = 0x6001F000 );
PROVIDE ( TIMERG1 = 0x60020000 );
PROVIDE ( SYSTIMER = 0x60023000 );
PROVIDE ( GPSPI2  = 0x60024000 );
PROVIDE ( GPSPI3  = 0x60025000 );
PROVIDE ( SYSCON = 0x60026000 );
PROVIDE ( I2C1 = 0x60027000 );
PROVIDE ( SDMMC = 0x60028000 );
PROVIDE ( TWAI = 0x6002B000 );
PROVIDE ( GPSPI4 = 0x60037000 );
PROVIDE ( GDMA = 0x6003F000 );
PROVIDE ( UART2  = 0x6002E000 );
PROVIDE ( DMA = 0x6003F000 );
PROVIDE ( APB_SARADC = 0x60040000 );
PROVIDE ( LCD_CAM    = 0x60041000 );
PROVIDE ( USB_SERIAL_JTAG  = 0x60038000 );
PROVIDE ( USB0     = 0x60080000 );
PROVIDE ( USBH     = 0x60080000 );
PROVIDE ( USB_WRAP = 0x60039000 );
