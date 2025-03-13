#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_q1.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_q1 ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static real_T
_cg_const_1 [ 39 ] = { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 2.0E-8 , - 1.0E-8 , - 1.0E-8 , - 1.5000000000000002E-5 , -
1.5000000000000002E-5 , - 0.01 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 } ; ( void ) t1 ; out -> mQ1 . mX [ 0 ] = _cg_const_1 [ 0 ] ; out -> mQ1
. mX [ 1 ] = _cg_const_1 [ 1 ] ; out -> mQ1 . mX [ 2 ] = _cg_const_1 [ 2 ] ;
out -> mQ1 . mX [ 3 ] = _cg_const_1 [ 3 ] ; out -> mQ1 . mX [ 4 ] =
_cg_const_1 [ 4 ] ; out -> mQ1 . mX [ 5 ] = _cg_const_1 [ 5 ] ; out -> mQ1 .
mX [ 6 ] = _cg_const_1 [ 6 ] ; out -> mQ1 . mX [ 7 ] = _cg_const_1 [ 7 ] ;
out -> mQ1 . mX [ 8 ] = _cg_const_1 [ 8 ] ; out -> mQ1 . mX [ 9 ] =
_cg_const_1 [ 9 ] ; out -> mQ1 . mX [ 10 ] = _cg_const_1 [ 10 ] ; out -> mQ1
. mX [ 11 ] = _cg_const_1 [ 11 ] ; out -> mQ1 . mX [ 12 ] = _cg_const_1 [ 12
] ; out -> mQ1 . mX [ 13 ] = _cg_const_1 [ 13 ] ; out -> mQ1 . mX [ 14 ] =
_cg_const_1 [ 14 ] ; out -> mQ1 . mX [ 15 ] = _cg_const_1 [ 15 ] ; out -> mQ1
. mX [ 16 ] = _cg_const_1 [ 16 ] ; out -> mQ1 . mX [ 17 ] = _cg_const_1 [ 17
] ; out -> mQ1 . mX [ 18 ] = _cg_const_1 [ 18 ] ; out -> mQ1 . mX [ 19 ] =
_cg_const_1 [ 19 ] ; out -> mQ1 . mX [ 20 ] = _cg_const_1 [ 20 ] ; out -> mQ1
. mX [ 21 ] = _cg_const_1 [ 21 ] ; out -> mQ1 . mX [ 22 ] = _cg_const_1 [ 22
] ; out -> mQ1 . mX [ 23 ] = _cg_const_1 [ 23 ] ; out -> mQ1 . mX [ 24 ] =
_cg_const_1 [ 24 ] ; out -> mQ1 . mX [ 25 ] = _cg_const_1 [ 25 ] ; out -> mQ1
. mX [ 26 ] = _cg_const_1 [ 26 ] ; out -> mQ1 . mX [ 27 ] = _cg_const_1 [ 27
] ; out -> mQ1 . mX [ 28 ] = _cg_const_1 [ 28 ] ; out -> mQ1 . mX [ 29 ] =
_cg_const_1 [ 29 ] ; out -> mQ1 . mX [ 30 ] = _cg_const_1 [ 30 ] ; out -> mQ1
. mX [ 31 ] = _cg_const_1 [ 31 ] ; out -> mQ1 . mX [ 32 ] = _cg_const_1 [ 32
] ; out -> mQ1 . mX [ 33 ] = _cg_const_1 [ 33 ] ; out -> mQ1 . mX [ 34 ] =
_cg_const_1 [ 34 ] ; out -> mQ1 . mX [ 35 ] = _cg_const_1 [ 35 ] ; out -> mQ1
. mX [ 36 ] = _cg_const_1 [ 36 ] ; out -> mQ1 . mX [ 37 ] = _cg_const_1 [ 37
] ; out -> mQ1 . mX [ 38 ] = _cg_const_1 [ 38 ] ; ( void ) sys ; ( void ) out
; return 0 ; }
