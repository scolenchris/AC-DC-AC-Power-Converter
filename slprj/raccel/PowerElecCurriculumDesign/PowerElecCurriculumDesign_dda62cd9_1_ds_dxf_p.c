#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dxf_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_dxf_p ( const NeDynamicSystem
* sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static
int32_T _cg_const_2 [ 147 ] = { 39 , 43 , 56 , 57 , 58 , 39 , 43 , 56 , 58 ,
22 , 31 , 32 , 33 , 36 , 44 , 46 , 36 , 38 , 23 , 24 , 21 , 22 , 32 , 36 , 43
, 22 , 32 , 36 , 26 , 50 , 51 , 29 , 48 , 49 , 48 , 49 , 50 , 51 , 56 , 58 ,
57 , 59 , 56 , 57 , 22 , 39 , 43 , 56 , 58 , 39 , 43 , 56 , 57 , 58 , 31 , 33
, 35 , 37 , 44 , 45 , 46 , 47 , 56 , 57 , 58 , 59 , 22 , 31 , 32 , 33 , 36 ,
44 , 46 , 33 , 37 , 46 , 47 , 31 , 35 , 44 , 45 , 36 , 38 , 29 , 42 , 23 , 41
, 42 , 52 , 53 , 29 , 26 , 41 , 24 , 26 , 23 , 24 , 25 , 26 , 27 , 28 , 29 ,
30 , 21 , 22 , 32 , 36 , 43 , 21 , 22 , 25 , 26 , 26 , 27 , 28 , 29 , 29 , 30
, 32 , 34 , 36 , 38 , 32 , 44 , 32 , 36 , 38 , 46 , 31 , 32 , 33 , 34 , 36 ,
45 , 35 , 36 , 38 , 47 , 37 , 38 , 40 , 56 , 57 , 39 , 40 , 41 , 42 } ;
static int32_T _cg_const_1 [ 63 ] = { 0 , 5 , 9 , 16 , 18 , 18 , 18 , 18 , 19
, 20 , 25 , 28 , 31 , 34 , 36 , 38 , 40 , 42 , 44 , 49 , 54 , 66 , 73 , 77 ,
81 , 83 , 85 , 86 , 90 , 91 , 93 , 94 , 95 , 96 , 96 , 97 , 97 , 100 , 103 ,
103 , 108 , 110 , 112 , 114 , 116 , 118 , 122 , 124 , 128 , 130 , 132 , 134 ,
136 , 138 , 140 , 143 , 145 , 146 , 147 , 147 , 147 , 147 , 147 } ; int32_T
i1 ; ( void ) t1 ; out -> mDXF_P . mNumCol = 62ULL ; out -> mDXF_P . mNumRow
= 62ULL ; out -> mDXF_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mDXF_P . mJc
[ 1 ] = _cg_const_1 [ 1 ] ; out -> mDXF_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ;
out -> mDXF_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out -> mDXF_P . mJc [ 4 ] =
_cg_const_1 [ 4 ] ; out -> mDXF_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out ->
mDXF_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out -> mDXF_P . mJc [ 7 ] =
_cg_const_1 [ 7 ] ; out -> mDXF_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out ->
mDXF_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out -> mDXF_P . mJc [ 10 ] =
_cg_const_1 [ 10 ] ; out -> mDXF_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out ->
mDXF_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out -> mDXF_P . mJc [ 13 ] =
_cg_const_1 [ 13 ] ; out -> mDXF_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ; out ->
mDXF_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out -> mDXF_P . mJc [ 16 ] =
_cg_const_1 [ 16 ] ; out -> mDXF_P . mJc [ 17 ] = _cg_const_1 [ 17 ] ; out ->
mDXF_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out -> mDXF_P . mJc [ 19 ] =
_cg_const_1 [ 19 ] ; out -> mDXF_P . mJc [ 20 ] = _cg_const_1 [ 20 ] ; out ->
mDXF_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out -> mDXF_P . mJc [ 22 ] =
_cg_const_1 [ 22 ] ; out -> mDXF_P . mJc [ 23 ] = _cg_const_1 [ 23 ] ; out ->
mDXF_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out -> mDXF_P . mJc [ 25 ] =
_cg_const_1 [ 25 ] ; out -> mDXF_P . mJc [ 26 ] = _cg_const_1 [ 26 ] ; out ->
mDXF_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out -> mDXF_P . mJc [ 28 ] =
_cg_const_1 [ 28 ] ; out -> mDXF_P . mJc [ 29 ] = _cg_const_1 [ 29 ] ; out ->
mDXF_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out -> mDXF_P . mJc [ 31 ] =
_cg_const_1 [ 31 ] ; out -> mDXF_P . mJc [ 32 ] = _cg_const_1 [ 32 ] ; out ->
mDXF_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out -> mDXF_P . mJc [ 34 ] =
_cg_const_1 [ 34 ] ; out -> mDXF_P . mJc [ 35 ] = _cg_const_1 [ 35 ] ; out ->
mDXF_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out -> mDXF_P . mJc [ 37 ] =
_cg_const_1 [ 37 ] ; out -> mDXF_P . mJc [ 38 ] = _cg_const_1 [ 38 ] ; out ->
mDXF_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out -> mDXF_P . mJc [ 40 ] =
_cg_const_1 [ 40 ] ; out -> mDXF_P . mJc [ 41 ] = _cg_const_1 [ 41 ] ; out ->
mDXF_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out -> mDXF_P . mJc [ 43 ] =
_cg_const_1 [ 43 ] ; out -> mDXF_P . mJc [ 44 ] = _cg_const_1 [ 44 ] ; out ->
mDXF_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out -> mDXF_P . mJc [ 46 ] =
_cg_const_1 [ 46 ] ; out -> mDXF_P . mJc [ 47 ] = _cg_const_1 [ 47 ] ; out ->
mDXF_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out -> mDXF_P . mJc [ 49 ] =
_cg_const_1 [ 49 ] ; out -> mDXF_P . mJc [ 50 ] = _cg_const_1 [ 50 ] ; out ->
mDXF_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out -> mDXF_P . mJc [ 52 ] =
_cg_const_1 [ 52 ] ; out -> mDXF_P . mJc [ 53 ] = _cg_const_1 [ 53 ] ; out ->
mDXF_P . mJc [ 54 ] = _cg_const_1 [ 54 ] ; out -> mDXF_P . mJc [ 55 ] =
_cg_const_1 [ 55 ] ; out -> mDXF_P . mJc [ 56 ] = _cg_const_1 [ 56 ] ; out ->
mDXF_P . mJc [ 57 ] = _cg_const_1 [ 57 ] ; out -> mDXF_P . mJc [ 58 ] =
_cg_const_1 [ 58 ] ; out -> mDXF_P . mJc [ 59 ] = _cg_const_1 [ 59 ] ; out ->
mDXF_P . mJc [ 60 ] = _cg_const_1 [ 60 ] ; out -> mDXF_P . mJc [ 61 ] =
_cg_const_1 [ 61 ] ; out -> mDXF_P . mJc [ 62 ] = _cg_const_1 [ 62 ] ; for (
i1 = 0 ; i1 < 147 ; i1 ++ ) { out -> mDXF_P . mIr [ i1 ] = _cg_const_2 [ i1 ]
; } ( void ) sys ; ( void ) out ; return 0 ; }
