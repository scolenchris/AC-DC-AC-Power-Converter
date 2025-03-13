#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_a_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_a_p ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static
int32_T _cg_const_2 [ 103 ] = { 0 , 8 , 0 , 1 , 9 , 2 , 10 , 16 , 2 , 16 , 3
, 17 , 4 , 18 , 6 , 60 , 7 , 61 , 5 , 9 , 9 , 13 , 14 , 55 , 11 , 12 , 54 ,
12 , 54 , 14 , 55 , 15 , 0 , 0 , 8 , 1 , 9 , 2 , 16 , 2 , 16 , 2 , 10 , 16 ,
3 , 12 , 17 , 52 , 54 , 60 , 3 , 17 , 60 , 3 , 4 , 17 , 18 , 52 , 3 , 11 , 12
, 17 , 54 , 4 , 14 , 18 , 52 , 55 , 61 , 4 , 18 , 61 , 4 , 13 , 14 , 18 , 55
, 6 , 60 , 19 , 60 , 7 , 61 , 20 , 61 , 14 , 55 , 12 , 54 , 52 , 53 , 5 , 9 ,
11 , 12 , 48 , 12 , 49 , 13 , 14 , 50 , 14 , 51 } ; static int32_T
_cg_const_1 [ 63 ] = { 0 , 2 , 3 , 5 , 8 , 10 , 12 , 14 , 16 , 18 , 20 , 21 ,
24 , 27 , 29 , 31 , 31 , 31 , 32 , 33 , 35 , 35 , 37 , 39 , 41 , 44 , 50 , 53
, 58 , 63 , 69 , 72 , 77 , 79 , 81 , 83 , 85 , 87 , 89 , 91 , 93 , 93 , 93 ,
93 , 93 , 93 , 93 , 93 , 93 , 93 , 93 , 93 , 93 , 93 , 93 , 93 , 93 , 93 , 93
, 96 , 98 , 101 , 103 } ; int32_T i1 ; ( void ) t1 ; out -> mA_P . mNumCol =
62ULL ; out -> mA_P . mNumRow = 62ULL ; out -> mA_P . mJc [ 0 ] = _cg_const_1
[ 0 ] ; out -> mA_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mA_P . mJc [ 2 ]
= _cg_const_1 [ 2 ] ; out -> mA_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mA_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mA_P . mJc [ 5 ] = _cg_const_1
[ 5 ] ; out -> mA_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out -> mA_P . mJc [ 7 ]
= _cg_const_1 [ 7 ] ; out -> mA_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out ->
mA_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out -> mA_P . mJc [ 10 ] = _cg_const_1
[ 10 ] ; out -> mA_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out -> mA_P . mJc [
12 ] = _cg_const_1 [ 12 ] ; out -> mA_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ;
out -> mA_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ; out -> mA_P . mJc [ 15 ] =
_cg_const_1 [ 15 ] ; out -> mA_P . mJc [ 16 ] = _cg_const_1 [ 16 ] ; out ->
mA_P . mJc [ 17 ] = _cg_const_1 [ 17 ] ; out -> mA_P . mJc [ 18 ] =
_cg_const_1 [ 18 ] ; out -> mA_P . mJc [ 19 ] = _cg_const_1 [ 19 ] ; out ->
mA_P . mJc [ 20 ] = _cg_const_1 [ 20 ] ; out -> mA_P . mJc [ 21 ] =
_cg_const_1 [ 21 ] ; out -> mA_P . mJc [ 22 ] = _cg_const_1 [ 22 ] ; out ->
mA_P . mJc [ 23 ] = _cg_const_1 [ 23 ] ; out -> mA_P . mJc [ 24 ] =
_cg_const_1 [ 24 ] ; out -> mA_P . mJc [ 25 ] = _cg_const_1 [ 25 ] ; out ->
mA_P . mJc [ 26 ] = _cg_const_1 [ 26 ] ; out -> mA_P . mJc [ 27 ] =
_cg_const_1 [ 27 ] ; out -> mA_P . mJc [ 28 ] = _cg_const_1 [ 28 ] ; out ->
mA_P . mJc [ 29 ] = _cg_const_1 [ 29 ] ; out -> mA_P . mJc [ 30 ] =
_cg_const_1 [ 30 ] ; out -> mA_P . mJc [ 31 ] = _cg_const_1 [ 31 ] ; out ->
mA_P . mJc [ 32 ] = _cg_const_1 [ 32 ] ; out -> mA_P . mJc [ 33 ] =
_cg_const_1 [ 33 ] ; out -> mA_P . mJc [ 34 ] = _cg_const_1 [ 34 ] ; out ->
mA_P . mJc [ 35 ] = _cg_const_1 [ 35 ] ; out -> mA_P . mJc [ 36 ] =
_cg_const_1 [ 36 ] ; out -> mA_P . mJc [ 37 ] = _cg_const_1 [ 37 ] ; out ->
mA_P . mJc [ 38 ] = _cg_const_1 [ 38 ] ; out -> mA_P . mJc [ 39 ] =
_cg_const_1 [ 39 ] ; out -> mA_P . mJc [ 40 ] = _cg_const_1 [ 40 ] ; out ->
mA_P . mJc [ 41 ] = _cg_const_1 [ 41 ] ; out -> mA_P . mJc [ 42 ] =
_cg_const_1 [ 42 ] ; out -> mA_P . mJc [ 43 ] = _cg_const_1 [ 43 ] ; out ->
mA_P . mJc [ 44 ] = _cg_const_1 [ 44 ] ; out -> mA_P . mJc [ 45 ] =
_cg_const_1 [ 45 ] ; out -> mA_P . mJc [ 46 ] = _cg_const_1 [ 46 ] ; out ->
mA_P . mJc [ 47 ] = _cg_const_1 [ 47 ] ; out -> mA_P . mJc [ 48 ] =
_cg_const_1 [ 48 ] ; out -> mA_P . mJc [ 49 ] = _cg_const_1 [ 49 ] ; out ->
mA_P . mJc [ 50 ] = _cg_const_1 [ 50 ] ; out -> mA_P . mJc [ 51 ] =
_cg_const_1 [ 51 ] ; out -> mA_P . mJc [ 52 ] = _cg_const_1 [ 52 ] ; out ->
mA_P . mJc [ 53 ] = _cg_const_1 [ 53 ] ; out -> mA_P . mJc [ 54 ] =
_cg_const_1 [ 54 ] ; out -> mA_P . mJc [ 55 ] = _cg_const_1 [ 55 ] ; out ->
mA_P . mJc [ 56 ] = _cg_const_1 [ 56 ] ; out -> mA_P . mJc [ 57 ] =
_cg_const_1 [ 57 ] ; out -> mA_P . mJc [ 58 ] = _cg_const_1 [ 58 ] ; out ->
mA_P . mJc [ 59 ] = _cg_const_1 [ 59 ] ; out -> mA_P . mJc [ 60 ] =
_cg_const_1 [ 60 ] ; out -> mA_P . mJc [ 61 ] = _cg_const_1 [ 61 ] ; out ->
mA_P . mJc [ 62 ] = _cg_const_1 [ 62 ] ; for ( i1 = 0 ; i1 < 103 ; i1 ++ ) {
out -> mA_P . mIr [ i1 ] = _cg_const_2 [ i1 ] ; } ( void ) sys ; ( void ) out
; return 0 ; }
