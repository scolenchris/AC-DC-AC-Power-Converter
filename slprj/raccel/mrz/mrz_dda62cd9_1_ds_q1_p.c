#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_q1_p.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_q1_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_2 [ 39 ] = { 0 , 4 , 8 , 11 , 13 , 17 , 18 , 19 , 20 , 21 , 22 , 23
, 24 , 25 , 27 , 28 , 29 , 30 , 32 , 33 , 34 , 35 , 36 , 37 , 38 , 39 , 40 ,
41 , 42 , 43 , 44 , 45 , 46 , 47 , 48 , 49 , 50 , 51 , 52 } ; ( void ) t1 ;
out -> mQ1_P . mNumCol = 1ULL ; out -> mQ1_P . mNumRow = 53ULL ; out -> mQ1_P
. mJc [ 0 ] = 0 ; out -> mQ1_P . mJc [ 1 ] = 39 ; out -> mQ1_P . mIr [ 0 ] =
_cg_const_2 [ 0 ] ; out -> mQ1_P . mIr [ 1 ] = _cg_const_2 [ 1 ] ; out ->
mQ1_P . mIr [ 2 ] = _cg_const_2 [ 2 ] ; out -> mQ1_P . mIr [ 3 ] =
_cg_const_2 [ 3 ] ; out -> mQ1_P . mIr [ 4 ] = _cg_const_2 [ 4 ] ; out ->
mQ1_P . mIr [ 5 ] = _cg_const_2 [ 5 ] ; out -> mQ1_P . mIr [ 6 ] =
_cg_const_2 [ 6 ] ; out -> mQ1_P . mIr [ 7 ] = _cg_const_2 [ 7 ] ; out ->
mQ1_P . mIr [ 8 ] = _cg_const_2 [ 8 ] ; out -> mQ1_P . mIr [ 9 ] =
_cg_const_2 [ 9 ] ; out -> mQ1_P . mIr [ 10 ] = _cg_const_2 [ 10 ] ; out ->
mQ1_P . mIr [ 11 ] = _cg_const_2 [ 11 ] ; out -> mQ1_P . mIr [ 12 ] =
_cg_const_2 [ 12 ] ; out -> mQ1_P . mIr [ 13 ] = _cg_const_2 [ 13 ] ; out ->
mQ1_P . mIr [ 14 ] = _cg_const_2 [ 14 ] ; out -> mQ1_P . mIr [ 15 ] =
_cg_const_2 [ 15 ] ; out -> mQ1_P . mIr [ 16 ] = _cg_const_2 [ 16 ] ; out ->
mQ1_P . mIr [ 17 ] = _cg_const_2 [ 17 ] ; out -> mQ1_P . mIr [ 18 ] =
_cg_const_2 [ 18 ] ; out -> mQ1_P . mIr [ 19 ] = _cg_const_2 [ 19 ] ; out ->
mQ1_P . mIr [ 20 ] = _cg_const_2 [ 20 ] ; out -> mQ1_P . mIr [ 21 ] =
_cg_const_2 [ 21 ] ; out -> mQ1_P . mIr [ 22 ] = _cg_const_2 [ 22 ] ; out ->
mQ1_P . mIr [ 23 ] = _cg_const_2 [ 23 ] ; out -> mQ1_P . mIr [ 24 ] =
_cg_const_2 [ 24 ] ; out -> mQ1_P . mIr [ 25 ] = _cg_const_2 [ 25 ] ; out ->
mQ1_P . mIr [ 26 ] = _cg_const_2 [ 26 ] ; out -> mQ1_P . mIr [ 27 ] =
_cg_const_2 [ 27 ] ; out -> mQ1_P . mIr [ 28 ] = _cg_const_2 [ 28 ] ; out ->
mQ1_P . mIr [ 29 ] = _cg_const_2 [ 29 ] ; out -> mQ1_P . mIr [ 30 ] =
_cg_const_2 [ 30 ] ; out -> mQ1_P . mIr [ 31 ] = _cg_const_2 [ 31 ] ; out ->
mQ1_P . mIr [ 32 ] = _cg_const_2 [ 32 ] ; out -> mQ1_P . mIr [ 33 ] =
_cg_const_2 [ 33 ] ; out -> mQ1_P . mIr [ 34 ] = _cg_const_2 [ 34 ] ; out ->
mQ1_P . mIr [ 35 ] = _cg_const_2 [ 35 ] ; out -> mQ1_P . mIr [ 36 ] =
_cg_const_2 [ 36 ] ; out -> mQ1_P . mIr [ 37 ] = _cg_const_2 [ 37 ] ; out ->
mQ1_P . mIr [ 38 ] = _cg_const_2 [ 38 ] ; ( void ) sys ; ( void ) out ;
return 0 ; }
