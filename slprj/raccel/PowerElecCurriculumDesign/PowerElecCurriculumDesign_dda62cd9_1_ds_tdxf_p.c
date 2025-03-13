#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_tdxf_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_tdxf_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static int32_T _cg_const_2 [ 255 ] = { 0 , 8 , 39 , 43 , 56 , 57 , 58
, 0 , 39 , 43 , 56 , 58 , 1 , 9 , 22 , 31 , 32 , 33 , 36 , 44 , 46 , 2 , 10 ,
16 , 36 , 38 , 2 , 16 , 3 , 17 , 4 , 18 , 6 , 23 , 60 , 7 , 24 , 61 , 5 , 9 ,
21 , 22 , 32 , 36 , 43 , 9 , 22 , 32 , 36 , 13 , 14 , 26 , 50 , 51 , 55 , 11
, 12 , 29 , 48 , 49 , 54 , 12 , 48 , 49 , 54 , 14 , 50 , 51 , 55 , 56 , 58 ,
57 , 59 , 15 , 19 , 20 , 56 , 57 , 0 , 22 , 39 , 43 , 56 , 58 , 0 , 8 , 39 ,
43 , 56 , 57 , 58 , 31 , 33 , 35 , 37 , 44 , 45 , 46 , 47 , 56 , 57 , 58 , 59
, 1 , 9 , 22 , 31 , 32 , 33 , 36 , 44 , 46 , 2 , 16 , 33 , 37 , 46 , 47 , 2 ,
16 , 31 , 35 , 44 , 45 , 2 , 10 , 16 , 36 , 38 , 3 , 12 , 17 , 29 , 42 , 52 ,
54 , 60 , 3 , 17 , 23 , 60 , 3 , 4 , 17 , 18 , 41 , 42 , 52 , 53 , 3 , 11 ,
12 , 17 , 29 , 54 , 4 , 14 , 18 , 26 , 41 , 52 , 55 , 61 , 4 , 18 , 24 , 61 ,
4 , 13 , 14 , 18 , 26 , 55 , 6 , 23 , 60 , 19 , 60 , 7 , 24 , 61 , 20 , 61 ,
14 , 25 , 26 , 27 , 55 , 12 , 28 , 29 , 30 , 54 , 52 , 53 , 5 , 9 , 21 , 22 ,
32 , 36 , 43 , 21 , 22 , 25 , 26 , 27 , 25 , 26 , 27 , 28 , 29 , 30 , 28 , 29
, 30 , 32 , 34 , 36 , 38 , 32 , 44 , 32 , 36 , 38 , 46 , 31 , 32 , 33 , 34 ,
36 , 45 , 35 , 36 , 38 , 47 , 37 , 38 , 40 , 56 , 57 , 39 , 40 , 41 , 42 , 11
, 12 , 48 , 12 , 49 , 13 , 14 , 50 , 14 , 51 } ; static int32_T _cg_const_1 [
63 ] = { 0 , 7 , 12 , 21 , 26 , 28 , 30 , 32 , 35 , 38 , 45 , 49 , 55 , 61 ,
65 , 69 , 71 , 73 , 78 , 84 , 91 , 103 , 112 , 118 , 124 , 129 , 137 , 141 ,
149 , 155 , 163 , 167 , 173 , 176 , 178 , 181 , 183 , 188 , 193 , 195 , 202 ,
204 , 207 , 210 , 213 , 216 , 220 , 222 , 226 , 228 , 230 , 232 , 234 , 236 ,
238 , 241 , 243 , 244 , 245 , 248 , 250 , 253 , 255 } ; int32_T i1 ; ( void )
t1 ; out -> mTDXF_P . mNumCol = 62ULL ; out -> mTDXF_P . mNumRow = 62ULL ;
out -> mTDXF_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mTDXF_P . mJc [ 1 ] =
_cg_const_1 [ 1 ] ; out -> mTDXF_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out ->
mTDXF_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out -> mTDXF_P . mJc [ 4 ] =
_cg_const_1 [ 4 ] ; out -> mTDXF_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out ->
mTDXF_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out -> mTDXF_P . mJc [ 7 ] =
_cg_const_1 [ 7 ] ; out -> mTDXF_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out ->
mTDXF_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out -> mTDXF_P . mJc [ 10 ] =
_cg_const_1 [ 10 ] ; out -> mTDXF_P . mJc [ 11 ] = _cg_const_1 [ 11 ] ; out
-> mTDXF_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out -> mTDXF_P . mJc [ 13 ] =
_cg_const_1 [ 13 ] ; out -> mTDXF_P . mJc [ 14 ] = _cg_const_1 [ 14 ] ; out
-> mTDXF_P . mJc [ 15 ] = _cg_const_1 [ 15 ] ; out -> mTDXF_P . mJc [ 16 ] =
_cg_const_1 [ 16 ] ; out -> mTDXF_P . mJc [ 17 ] = _cg_const_1 [ 17 ] ; out
-> mTDXF_P . mJc [ 18 ] = _cg_const_1 [ 18 ] ; out -> mTDXF_P . mJc [ 19 ] =
_cg_const_1 [ 19 ] ; out -> mTDXF_P . mJc [ 20 ] = _cg_const_1 [ 20 ] ; out
-> mTDXF_P . mJc [ 21 ] = _cg_const_1 [ 21 ] ; out -> mTDXF_P . mJc [ 22 ] =
_cg_const_1 [ 22 ] ; out -> mTDXF_P . mJc [ 23 ] = _cg_const_1 [ 23 ] ; out
-> mTDXF_P . mJc [ 24 ] = _cg_const_1 [ 24 ] ; out -> mTDXF_P . mJc [ 25 ] =
_cg_const_1 [ 25 ] ; out -> mTDXF_P . mJc [ 26 ] = _cg_const_1 [ 26 ] ; out
-> mTDXF_P . mJc [ 27 ] = _cg_const_1 [ 27 ] ; out -> mTDXF_P . mJc [ 28 ] =
_cg_const_1 [ 28 ] ; out -> mTDXF_P . mJc [ 29 ] = _cg_const_1 [ 29 ] ; out
-> mTDXF_P . mJc [ 30 ] = _cg_const_1 [ 30 ] ; out -> mTDXF_P . mJc [ 31 ] =
_cg_const_1 [ 31 ] ; out -> mTDXF_P . mJc [ 32 ] = _cg_const_1 [ 32 ] ; out
-> mTDXF_P . mJc [ 33 ] = _cg_const_1 [ 33 ] ; out -> mTDXF_P . mJc [ 34 ] =
_cg_const_1 [ 34 ] ; out -> mTDXF_P . mJc [ 35 ] = _cg_const_1 [ 35 ] ; out
-> mTDXF_P . mJc [ 36 ] = _cg_const_1 [ 36 ] ; out -> mTDXF_P . mJc [ 37 ] =
_cg_const_1 [ 37 ] ; out -> mTDXF_P . mJc [ 38 ] = _cg_const_1 [ 38 ] ; out
-> mTDXF_P . mJc [ 39 ] = _cg_const_1 [ 39 ] ; out -> mTDXF_P . mJc [ 40 ] =
_cg_const_1 [ 40 ] ; out -> mTDXF_P . mJc [ 41 ] = _cg_const_1 [ 41 ] ; out
-> mTDXF_P . mJc [ 42 ] = _cg_const_1 [ 42 ] ; out -> mTDXF_P . mJc [ 43 ] =
_cg_const_1 [ 43 ] ; out -> mTDXF_P . mJc [ 44 ] = _cg_const_1 [ 44 ] ; out
-> mTDXF_P . mJc [ 45 ] = _cg_const_1 [ 45 ] ; out -> mTDXF_P . mJc [ 46 ] =
_cg_const_1 [ 46 ] ; out -> mTDXF_P . mJc [ 47 ] = _cg_const_1 [ 47 ] ; out
-> mTDXF_P . mJc [ 48 ] = _cg_const_1 [ 48 ] ; out -> mTDXF_P . mJc [ 49 ] =
_cg_const_1 [ 49 ] ; out -> mTDXF_P . mJc [ 50 ] = _cg_const_1 [ 50 ] ; out
-> mTDXF_P . mJc [ 51 ] = _cg_const_1 [ 51 ] ; out -> mTDXF_P . mJc [ 52 ] =
_cg_const_1 [ 52 ] ; out -> mTDXF_P . mJc [ 53 ] = _cg_const_1 [ 53 ] ; out
-> mTDXF_P . mJc [ 54 ] = _cg_const_1 [ 54 ] ; out -> mTDXF_P . mJc [ 55 ] =
_cg_const_1 [ 55 ] ; out -> mTDXF_P . mJc [ 56 ] = _cg_const_1 [ 56 ] ; out
-> mTDXF_P . mJc [ 57 ] = _cg_const_1 [ 57 ] ; out -> mTDXF_P . mJc [ 58 ] =
_cg_const_1 [ 58 ] ; out -> mTDXF_P . mJc [ 59 ] = _cg_const_1 [ 59 ] ; out
-> mTDXF_P . mJc [ 60 ] = _cg_const_1 [ 60 ] ; out -> mTDXF_P . mJc [ 61 ] =
_cg_const_1 [ 61 ] ; out -> mTDXF_P . mJc [ 62 ] = _cg_const_1 [ 62 ] ; for (
i1 = 0 ; i1 < 255 ; i1 ++ ) { out -> mTDXF_P . mIr [ i1 ] = _cg_const_2 [ i1
] ; } ( void ) sys ; ( void ) out ; return 0 ; }
