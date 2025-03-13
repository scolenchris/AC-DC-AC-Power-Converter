#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_a_p.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_a_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_2 [ 103 ] = { 0 , 6 , 9 , 18 , 42 , 45 , 1 , 2 , 20 , 0 , 18 , 3 ,
7 , 21 , 4 , 5 , 23 , 3 , 21 , 8 , 13 , 25 , 8 , 25 , 9 , 42 , 10 , 12 , 26 ,
10 , 26 , 11 , 14 , 27 , 11 , 27 , 15 , 44 , 16 , 45 , 17 , 44 , 17 , 44 , 0
, 6 , 9 , 18 , 42 , 45 , 1 , 2 , 20 , 0 , 16 , 18 , 45 , 0 , 18 , 19 , 20 , 3
, 7 , 21 , 4 , 5 , 23 , 3 , 21 , 24 , 22 , 23 , 8 , 25 , 8 , 13 , 25 , 10 ,
26 , 10 , 12 , 26 , 11 , 27 , 11 , 27 , 11 , 14 , 27 , 40 , 40 , 42 , 43 , 40
, 43 , 42 , 51 , 43 , 52 , 40 , 41 , 15 , 44 } ; static int32_T _cg_const_1 [
54 ] = { 0 , 6 , 7 , 9 , 11 , 14 , 15 , 17 , 19 , 22 , 24 , 26 , 29 , 31 , 34
, 36 , 38 , 40 , 42 , 44 , 44 , 44 , 50 , 51 , 53 , 57 , 59 , 61 , 64 , 65 ,
67 , 70 , 72 , 74 , 77 , 79 , 82 , 84 , 86 , 89 , 90 , 93 , 95 , 97 , 99 ,
101 , 101 , 101 , 101 , 101 , 101 , 101 , 101 , 103 } ; int32_T i1 ; ( void )
t1 ; out -> mA_P . mNumCol = 53ULL ; out -> mA_P . mNumRow = 53ULL ; out ->
mA_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mA_P . mJc [ 1 ] = _cg_const_1
[ 1 ] ; out -> mA_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mA_P . mJc [ 3 ]
= _cg_const_1 [ 3 ] ; out -> mA_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out ->
mA_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out -> mA_P . mJc [ 6 ] = _cg_const_1
[ 6 ] ; out -> mA_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out -> mA_P . mJc [ 8 ]
= _cg_const_1 [ 8 ] ; out -> mA_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out ->
mA_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out -> mA_P . mJc [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mA_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out ->
mA_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out -> mA_P . mJc [ 14 ] =
_cg_const_1 [ 14 ] ; out -> mA_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out ->
mA_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out -> mA_P . mJc [ 17 ] =
_cg_const_1 [ 17 ] ; out -> mA_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out ->
mA_P . mJc [ 19 ] = _cg_const_1 [ 19 ] ; out -> mA_P . mJc [ 20 ] =
_cg_const_1 [ 20 ] ; out -> mA_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out ->
mA_P . mJc [ 22 ] = _cg_const_1 [ 22 ] ; out -> mA_P . mJc [ 23 ] =
_cg_const_1 [ 23 ] ; out -> mA_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out ->
mA_P . mJc [ 25 ] = _cg_const_1 [ 25 ] ; out -> mA_P . mJc [ 26 ] =
_cg_const_1 [ 26 ] ; out -> mA_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out ->
mA_P . mJc [ 28 ] = _cg_const_1 [ 28 ] ; out -> mA_P . mJc [ 29 ] =
_cg_const_1 [ 29 ] ; out -> mA_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out ->
mA_P . mJc [ 31 ] = _cg_const_1 [ 31 ] ; out -> mA_P . mJc [ 32 ] =
_cg_const_1 [ 32 ] ; out -> mA_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out ->
mA_P . mJc [ 34 ] = _cg_const_1 [ 34 ] ; out -> mA_P . mJc [ 35 ] =
_cg_const_1 [ 35 ] ; out -> mA_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out ->
mA_P . mJc [ 37 ] = _cg_const_1 [ 37 ] ; out -> mA_P . mJc [ 38 ] =
_cg_const_1 [ 38 ] ; out -> mA_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out ->
mA_P . mJc [ 40 ] = _cg_const_1 [ 40 ] ; out -> mA_P . mJc [ 41 ] =
_cg_const_1 [ 41 ] ; out -> mA_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out ->
mA_P . mJc [ 43 ] = _cg_const_1 [ 43 ] ; out -> mA_P . mJc [ 44 ] =
_cg_const_1 [ 44 ] ; out -> mA_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out ->
mA_P . mJc [ 46 ] = _cg_const_1 [ 46 ] ; out -> mA_P . mJc [ 47 ] =
_cg_const_1 [ 47 ] ; out -> mA_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out ->
mA_P . mJc [ 49 ] = _cg_const_1 [ 49 ] ; out -> mA_P . mJc [ 50 ] =
_cg_const_1 [ 50 ] ; out -> mA_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out ->
mA_P . mJc [ 52 ] = _cg_const_1 [ 52 ] ; out -> mA_P . mJc [ 53 ] =
_cg_const_1 [ 53 ] ; for ( i1 = 0 ; i1 < 103 ; i1 ++ ) { out -> mA_P . mIr [
i1 ] = _cg_const_2 [ i1 ] ; } ( void ) sys ; ( void ) out ; return 0 ; }
