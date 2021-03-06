/*  clock.s
 *
 *  This file contains the assembly code for the IDT 4650 clock driver.
 *
 *  Author:     Craig Lebakken <craigl@transition.com>
 *
 *  COPYRIGHT (c) 1996 by Transition Networks Inc.
 *
 *  To anyone who acknowledges that this file is provided "AS IS"
 *  without any express or implied warranty:
 *      permission to use, copy, modify, and distribute this file
 *      for any purpose is hereby granted without fee, provided that
 *      the above copyright notice and this notice appears in all
 *      copies, and that the name of Transition Networks not be used in
 *      advertising or publicity pertaining to distribution of the
 *      software without specific, written prior permission.
 *      Transition Networks makes no representations about the suitability
 *      of this software for any purpose.
 *
 *  $Id: clock.h,v 1.2 2001-09-27 12:01:22 chris Exp $
 */

/* @(#)clock.h       08/20/96     1.2 */

extern void mips_set_timer( unsigned32 timer_clock_interval );
