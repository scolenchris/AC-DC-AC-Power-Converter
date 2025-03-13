#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_obs_il.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_obs_il ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static boolean_T _cg_const_1 [ 717 ] = { true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , false , true , true , true , true , true , false , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , false , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , false , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , false , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , false
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , false , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , false , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , false , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, false , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , false , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , false , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , false , true , true
, false , true , false , true , true , false , true , false , true , true ,
true , true , false , true , true , false , true , false , true , true ,
false , true , false , true , true , true , true , false , true , true ,
false , true , false , true , true , false , true , false , true , true ,
true , true , false , true , true , false , true , false , true , true ,
false , true , false , true , true , true , true , false , true , true ,
false , true , false , true , true , false , true , false , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , false , false
, true , true , true , true , true , false , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , false , false , true ,
true , true , true , true , false , true , true , true , true , false , false
, false , false , false , false , true , true , true , true , true , true ,
false , true , false , true , true , true , true , true , true , true , false
, true , true , true , true , true , true , true , false , true , true , true
, true , true , true , true , false , true , true , true , true , true , true
, true , false , true , true , true , true , true , true , false , false ,
false , false , true , true , true , true , true , true , true , true , true
, false , false , true , false , false , true , true , true , true , true ,
true , true , true , true , true , true , true , false , false , true , false
, false , true , true , true , true , true , true , true , true , true , true
, true , true , false , false , true , false , false , true , true , true ,
true , true , true , true , true , true , true , true , true , false , false
, true , false , false , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true }
; int32_T i ; ( void ) t1 ; for ( i = 0 ; i < 717 ; i ++ ) { out -> mOBS_IL .
mX [ i ] = _cg_const_1 [ i ] ; } ( void ) sys ; ( void ) out ; return 0 ; }
