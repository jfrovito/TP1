/* Copyright 2019, Raúl Antonio Chaparro, Fernando García, Juan Francisco Rovito
 * All rights reserved.
 *
 * This file is part sAPI library for microcontrollers.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

/* Date: 2019-09-26 */

#ifndef _SYSTICK_H_
#define _SYSTICK_H_

/*==================[inclusions]=============================================*/

#include "sapi.h"

/*==================[cplusplus]==============================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*==================[macros]=================================================*/

#define TICKRATE_1MS	(1)				/* 1000 ticks per second */
#define TICKRATE_10MS	(10)			/* 100 ticks per second */
#define TICKRATE_100MS	(100)			/* 10 ticks per second */
#define TICKRATE_MS		(TICKRATE_1MS)	/* ¿? ticks per second */

#define LED_TOGGLE_100MS	(100)
#define LED_TOGGLE_500MS	(500)
#define LED_TOGGLE_1000MS	(1000)
#define LED_TOGGLE_MS		(LED_TOGGLE_1000MS / TICKRATE_MS)

/*==================[typedef]================================================*/

/*==================[external data declaration]==============================*/

volatile bool LED_Time_Flag = FALSE;

/*==================[external functions declaration]=========================*/

void myTickHook( void * );

/*==================[cplusplus]==============================================*/

#ifdef __cplusplus
}
#endif

/*==================[end of file]============================================*/
#endif /* #ifndef _SYSTICK_H_ */
