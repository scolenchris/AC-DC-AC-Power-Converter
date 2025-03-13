#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dxicr_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_dxicr_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_1 [ 63 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 1 , 2 , 3 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4
, 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 ,
4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 , 4 } ; static
int32_T _cg_const_2 [ 4 ] = { 12 , 10 , 11 , 13 } ; ( void ) t1 ; out ->
mDXICR_P . mNumCol = 62ULL ; out -> mDXICR_P . mNumRow = 14ULL ; out ->
mDXICR_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mDXICR_P . mJc [ 1 ] =
_cg_const_1 [ 1 ] ; out -> mDXICR_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out ->
mDXICR_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out -> mDXICR_P . mJc [ 4 ] =
_cg_const_1 [ 4 ] ; out -> mDXICR_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out ->
mDXICR_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out -> mDXICR_P . mJc [ 7 ] =
_cg_const_1 [ 7 ] ; out -> mDXICR_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out ->
mDXICR_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out -> mDXICR_P . mJc [ 10 ] =
_cg_const_1 [ 10 ] ; out -> mDXICR_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out
-> mDXICR_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out -> mDXICR_P . mJc [ 13 ]
= _cg_const_1 [ 13 ] ; out -> mDXICR_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ;
out -> mDXICR_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out -> mDXICR_P . mJc [
16 ] = _cg_const_1 [ 16 ] ; out -> mDXICR_P . mJc [ 17 ] = _cg_const_1 [ 17 ]
; out -> mDXICR_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out -> mDXICR_P . mJc [
19 ] = _cg_const_1 [ 19 ] ; out -> mDXICR_P . mJc [ 20 ] = _cg_const_1 [ 20 ]
; out -> mDXICR_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out -> mDXICR_P . mJc [
22 ] = _cg_const_1 [ 22 ] ; out -> mDXICR_P . mJc [ 23 ] = _cg_const_1 [ 23 ]
; out -> mDXICR_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out -> mDXICR_P . mJc [
25 ] = _cg_const_1 [ 25 ] ; out -> mDXICR_P . mJc [ 26 ] = _cg_const_1 [ 26 ]
; out -> mDXICR_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out -> mDXICR_P . mJc [
28 ] = _cg_const_1 [ 28 ] ; out -> mDXICR_P . mJc [ 29 ] = _cg_const_1 [ 29 ]
; out -> mDXICR_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out -> mDXICR_P . mJc [
31 ] = _cg_const_1 [ 31 ] ; out -> mDXICR_P . mJc [ 32 ] = _cg_const_1 [ 32 ]
; out -> mDXICR_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out -> mDXICR_P . mJc [
34 ] = _cg_const_1 [ 34 ] ; out -> mDXICR_P . mJc [ 35 ] = _cg_const_1 [ 35 ]
; out -> mDXICR_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out -> mDXICR_P . mJc [
37 ] = _cg_const_1 [ 37 ] ; out -> mDXICR_P . mJc [ 38 ] = _cg_const_1 [ 38 ]
; out -> mDXICR_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out -> mDXICR_P . mJc [
40 ] = _cg_const_1 [ 40 ] ; out -> mDXICR_P . mJc [ 41 ] = _cg_const_1 [ 41 ]
; out -> mDXICR_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out -> mDXICR_P . mJc [
43 ] = _cg_const_1 [ 43 ] ; out -> mDXICR_P . mJc [ 44 ] = _cg_const_1 [ 44 ]
; out -> mDXICR_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out -> mDXICR_P . mJc [
46 ] = _cg_const_1 [ 46 ] ; out -> mDXICR_P . mJc [ 47 ] = _cg_const_1 [ 47 ]
; out -> mDXICR_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out -> mDXICR_P . mJc [
49 ] = _cg_const_1 [ 49 ] ; out -> mDXICR_P . mJc [ 50 ] = _cg_const_1 [ 50 ]
; out -> mDXICR_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out -> mDXICR_P . mJc [
52 ] = _cg_const_1 [ 52 ] ; out -> mDXICR_P . mJc [ 53 ] = _cg_const_1 [ 53 ]
; out -> mDXICR_P . mJc [ 54 ] = _cg_const_1 [ 54 ] ; out -> mDXICR_P . mJc [
55 ] = _cg_const_1 [ 55 ] ; out -> mDXICR_P . mJc [ 56 ] = _cg_const_1 [ 56 ]
; out -> mDXICR_P . mJc [ 57 ] = _cg_const_1 [ 57 ] ; out -> mDXICR_P . mJc [
58 ] = _cg_const_1 [ 58 ] ; out -> mDXICR_P . mJc [ 59 ] = _cg_const_1 [ 59 ]
; out -> mDXICR_P . mJc [ 60 ] = _cg_const_1 [ 60 ] ; out -> mDXICR_P . mJc [
61 ] = _cg_const_1 [ 61 ] ; out -> mDXICR_P . mJc [ 62 ] = _cg_const_1 [ 62 ]
; out -> mDXICR_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out -> mDXICR_P . mIr [ 1
] = _cg_const_2 [ 1 ] ; out -> mDXICR_P . mIr [ 2 ] = _cg_const_2 [ 2 ] ; out
-> mDXICR_P . mIr [ 3 ] = _cg_const_2 [ 3 ] ; ( void ) sys ; ( void ) out ;
return 0 ; }
