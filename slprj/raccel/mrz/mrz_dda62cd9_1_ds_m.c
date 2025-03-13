#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_m.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_m ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static real_T
_cg_const_1 [ 17 ] = { - 5.0E-12 , - 5.0E-12 , - 1.0E-9 , - 5.0E-12 , -
1.0E-9 , - 5.0E-12 , - 1.0E-9 , - 5.0E-12 , - 0.1 , - 0.0006 , - 1.0E-8 , -
0.05 , - 4.9999999999999996E-6 , - 0.095 , - 9.9999999999999991E-6 , -
5.0E-12 , - 1.0E-9 } ; ( void ) t1 ; out -> mM . mX [ 0 ] = _cg_const_1 [ 0 ]
; out -> mM . mX [ 1 ] = _cg_const_1 [ 1 ] ; out -> mM . mX [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mM . mX [ 3 ] = _cg_const_1 [ 3 ] ; out -> mM . mX
[ 4 ] = _cg_const_1 [ 4 ] ; out -> mM . mX [ 5 ] = _cg_const_1 [ 5 ] ; out ->
mM . mX [ 6 ] = _cg_const_1 [ 6 ] ; out -> mM . mX [ 7 ] = _cg_const_1 [ 7 ]
; out -> mM . mX [ 8 ] = _cg_const_1 [ 8 ] ; out -> mM . mX [ 9 ] =
_cg_const_1 [ 9 ] ; out -> mM . mX [ 10 ] = _cg_const_1 [ 10 ] ; out -> mM .
mX [ 11 ] = _cg_const_1 [ 11 ] ; out -> mM . mX [ 12 ] = _cg_const_1 [ 12 ] ;
out -> mM . mX [ 13 ] = _cg_const_1 [ 13 ] ; out -> mM . mX [ 14 ] =
_cg_const_1 [ 14 ] ; out -> mM . mX [ 15 ] = _cg_const_1 [ 15 ] ; out -> mM .
mX [ 16 ] = _cg_const_1 [ 16 ] ; ( void ) sys ; ( void ) out ; return 0 ; }
