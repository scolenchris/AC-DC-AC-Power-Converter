#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_ddf_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_ddf_p ( const NeDynamicSystem
* sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static
int32_T _cg_const_1 [ 15 ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 1 , 1 , 2 , 2
, 3 , 3 , 4 } ; ( void ) t1 ; out -> mDDF_P . mNumCol = 14ULL ; out -> mDDF_P
. mNumRow = 62ULL ; out -> mDDF_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out ->
mDDF_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mDDF_P . mJc [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mDDF_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mDDF_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mDDF_P . mJc [ 5 ] =
_cg_const_1 [ 5 ] ; out -> mDDF_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out ->
mDDF_P . mJc [ 7 ] = _cg_const_1 [ 7 ] ; out -> mDDF_P . mJc [ 8 ] =
_cg_const_1 [ 8 ] ; out -> mDDF_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out ->
mDDF_P . mJc [ 10 ] = _cg_const_1 [ 10 ] ; out -> mDDF_P . mJc [ 11 ] =
_cg_const_1 [ 11 ] ; out -> mDDF_P . mJc [ 12 ] = _cg_const_1 [ 12 ] ; out ->
mDDF_P . mJc [ 13 ] = _cg_const_1 [ 13 ] ; out -> mDDF_P . mJc [ 14 ] =
_cg_const_1 [ 14 ] ; out -> mDDF_P . mIr [ 0 ] = 56 ; out -> mDDF_P . mIr [ 1
] = 57 ; out -> mDDF_P . mIr [ 2 ] = 58 ; out -> mDDF_P . mIr [ 3 ] = 59 ; (
void ) sys ; ( void ) out ; return 0 ; }
