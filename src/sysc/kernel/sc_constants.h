/*****************************************************************************

  The following code is derived, directly or indirectly, from the SystemC
  source code Copyright (c) 1996-2011 by all Contributors.
  All Rights reserved.

  The contents of this file are subject to the restrictions and limitations
  set forth in the SystemC Open Source License Version 2.4 (the "License");
  You may not use this file except in compliance with such restrictions and
  limitations. You may obtain instructions on how to receive a copy of the
  License at http://www.systemc.org/. Software distributed by Contributors
  under the License is distributed on an "AS IS" basis, WITHOUT WARRANTY OF
  ANY KIND, either express or implied. See the License for the specific
  language governing rights and limitations under the License.

 *****************************************************************************/

/*****************************************************************************

  sc_constants.h -- Default constants whose values may need to be
                    changed depending on the application.

  Original Author: Ali Dasdan, Synopsys, Inc.

 *****************************************************************************/

/*****************************************************************************

  MODIFICATION LOG - modifiers, enter your name, affiliation, date and
  changes you are making here.

      Name, Affiliation, Date:
  Description of Modification:

 *****************************************************************************/
// $Log: sc_constants.h,v $
// Revision 1.4  2011/02/13 21:47:37  acg
//  Andy Goodrich: update copyright notice.
//
// Revision 1.3  2010/03/15 18:29:25  acg
//  Andy Goodrich: Changed the default stack size to 128K from 64K.
//
// Revision 1.2  2008/05/22 17:06:24  acg
//  Andy Goodrich: updated copyright notice to include 2008.
//
// Revision 1.1.1.1  2006/12/15 20:20:05  acg
// SystemC 2.3
//
// Revision 1.3  2006/01/13 18:44:29  acg
// Added $Log to record CVS changes into the source.
//

#ifndef SC_CONSTANTS_H
#define SC_CONSTANTS_H

namespace sc_core {

// Maximum number of bits for arbitrary precision arithmetic. If
// defined, the arithmetic becomes faster. If not defined, the
// arithmetic becomes slower and the precision becomes infinite.  It
// is a good idea to define this constant as a multiple of
// BITS_PER_DIGIT, which is defined in numeric_bit/sc_nbdefs.h.
//#define SC_MAX_NBITS    510    // 17 * BITS_PER_DIGIT


const int SC_DEFAULT_STACK_SIZE   =
#if !defined(SC_USE_PTHREADS) && \
    ( defined(__CYGWIN32__) || defined(__CYGWIN32) )
  0x50000;
#else
  0x20000;
#endif
const int SC_MAX_WATCH_LEVEL      = 16;

#ifdef DEBUG_SYSTEMC
const int SC_MAX_NUM_DELTA_CYCLES = 10000;
#endif

} // namespace sc_core

#endif
