/*  set_vector
 *
 *  This routine installs an interrupt vector on the target Board/CPU.
 *  This routine is allowed to be as board dependent as necessary.
 *
 *  INPUT:
 *    handler - interrupt handler entry point
 *    vector  - vector number
 *    type    - 0 indicates raw hardware connect
 *              1 indicates RTEMS interrupt connect
 *
 *  RETURNS:
 *    address of previous interrupt handler
 *
 *  COPYRIGHT (c) 1989-1997.
 *  On-Line Applications Research Corporation (OAR).
 *  Copyright assigned to U.S. Government, 1994.
 *
 *  The license and distribution terms for this file may in
 *  the file LICENSE in this distribution or at
 *  http://www.OARcorp.com/rtems/license.html.
 *
 *  $Id: setvec.c,v 1.2 2001-09-27 12:00:35 chris Exp $
 */

#include <rtems.h>
#include <bsp.h>

/*PAGE
 *
 *  set_vector
 *
 *  This routine installs an interrupt handler for vector.
 */

rtems_isr_entry set_vector(                    /* returns old vector */
  rtems_isr_entry     handler,                  /* isr routine        */
  rtems_vector_number vector,                   /* vector number      */
  int                 type                      /* RTEMS or RAW intr  */
)
{
  rtems_isr_entry previous_isr;
  rtems_status_code status;

  /* 
   * vectors greater than PPC603e_IRQ_LAST are handled by the General purpose
   * interupt handler.
   */
  if ( vector > PPC_IRQ_LAST )  {
    set_EE_vector ( handler, vector );
  }
  else  {
    status = rtems_interrupt_catch(
       handler, vector, (rtems_isr_entry *) &previous_isr );
  }
  return previous_isr;
}

