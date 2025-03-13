#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_ic.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_ic ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static real_T
_cg_const_1 [ 53 ] = { 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , - 5.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 0.0
, 0.0 , 0.0 , 0.0 , 0.0 , 0.0 } ; ( void ) t1 ; out -> mIC . mX [ 0 ] =
_cg_const_1 [ 0 ] ; out -> mIC . mX [ 1 ] = _cg_const_1 [ 1 ] ; out -> mIC .
mX [ 2 ] = _cg_const_1 [ 2 ] ; out -> mIC . mX [ 3 ] = _cg_const_1 [ 3 ] ;
out -> mIC . mX [ 4 ] = _cg_const_1 [ 4 ] ; out -> mIC . mX [ 5 ] =
_cg_const_1 [ 5 ] ; out -> mIC . mX [ 6 ] = _cg_const_1 [ 6 ] ; out -> mIC .
mX [ 7 ] = _cg_const_1 [ 7 ] ; out -> mIC . mX [ 8 ] = _cg_const_1 [ 8 ] ;
out -> mIC . mX [ 9 ] = _cg_const_1 [ 9 ] ; out -> mIC . mX [ 10 ] =
_cg_const_1 [ 10 ] ; out -> mIC . mX [ 11 ] = _cg_const_1 [ 11 ] ; out -> mIC
. mX [ 12 ] = _cg_const_1 [ 12 ] ; out -> mIC . mX [ 13 ] = _cg_const_1 [ 13
] ; out -> mIC . mX [ 14 ] = _cg_const_1 [ 14 ] ; out -> mIC . mX [ 15 ] =
_cg_const_1 [ 15 ] ; out -> mIC . mX [ 16 ] = _cg_const_1 [ 16 ] ; out -> mIC
. mX [ 17 ] = _cg_const_1 [ 17 ] ; out -> mIC . mX [ 18 ] = _cg_const_1 [ 18
] ; out -> mIC . mX [ 19 ] = _cg_const_1 [ 19 ] ; out -> mIC . mX [ 20 ] =
_cg_const_1 [ 20 ] ; out -> mIC . mX [ 21 ] = _cg_const_1 [ 21 ] ; out -> mIC
. mX [ 22 ] = _cg_const_1 [ 22 ] ; out -> mIC . mX [ 23 ] = _cg_const_1 [ 23
] ; out -> mIC . mX [ 24 ] = _cg_const_1 [ 24 ] ; out -> mIC . mX [ 25 ] =
_cg_const_1 [ 25 ] ; out -> mIC . mX [ 26 ] = _cg_const_1 [ 26 ] ; out -> mIC
. mX [ 27 ] = _cg_const_1 [ 27 ] ; out -> mIC . mX [ 28 ] = _cg_const_1 [ 28
] ; out -> mIC . mX [ 29 ] = _cg_const_1 [ 29 ] ; out -> mIC . mX [ 30 ] =
_cg_const_1 [ 30 ] ; out -> mIC . mX [ 31 ] = _cg_const_1 [ 31 ] ; out -> mIC
. mX [ 32 ] = _cg_const_1 [ 32 ] ; out -> mIC . mX [ 33 ] = _cg_const_1 [ 33
] ; out -> mIC . mX [ 34 ] = _cg_const_1 [ 34 ] ; out -> mIC . mX [ 35 ] =
_cg_const_1 [ 35 ] ; out -> mIC . mX [ 36 ] = _cg_const_1 [ 36 ] ; out -> mIC
. mX [ 37 ] = _cg_const_1 [ 37 ] ; out -> mIC . mX [ 38 ] = _cg_const_1 [ 38
] ; out -> mIC . mX [ 39 ] = _cg_const_1 [ 39 ] ; out -> mIC . mX [ 40 ] =
_cg_const_1 [ 40 ] ; out -> mIC . mX [ 41 ] = _cg_const_1 [ 41 ] ; out -> mIC
. mX [ 42 ] = _cg_const_1 [ 42 ] ; out -> mIC . mX [ 43 ] = _cg_const_1 [ 43
] ; out -> mIC . mX [ 44 ] = _cg_const_1 [ 44 ] ; out -> mIC . mX [ 45 ] =
_cg_const_1 [ 45 ] ; out -> mIC . mX [ 46 ] = _cg_const_1 [ 46 ] ; out -> mIC
. mX [ 47 ] = _cg_const_1 [ 47 ] ; out -> mIC . mX [ 48 ] = _cg_const_1 [ 48
] ; out -> mIC . mX [ 49 ] = _cg_const_1 [ 49 ] ; out -> mIC . mX [ 50 ] =
_cg_const_1 [ 50 ] ; out -> mIC . mX [ 51 ] = _cg_const_1 [ 51 ] ; out -> mIC
. mX [ 52 ] = _cg_const_1 [ 52 ] ; ( void ) sys ; ( void ) out ; return 0 ; }
