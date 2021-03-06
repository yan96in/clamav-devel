/* TomsFastMath, a fast ISO C bignum library.
 * 
 * This project is meant to fill in where LibTomMath
 * falls short.  That is speed ;-)
 *
 * This project is public domain and free for all purposes.
 * 
 * Tom St Denis, tomstdenis@gmail.com
 */
#include "bignum_fast.h"

int fp_unsigned_bin_size(fp_int *a)
{
  int     size = fp_count_bits (a);
  return (size / 8 + ((size & 7) != 0 ? 1 : 0));
}

/* $Source: /cvs/libtom/tomsfastmath/src/bin/fp_unsigned_bin_size.c,v $ */
/* $Revision: 1.1 $ */
/* $Date: 2006/12/31 21:25:53 $ */
