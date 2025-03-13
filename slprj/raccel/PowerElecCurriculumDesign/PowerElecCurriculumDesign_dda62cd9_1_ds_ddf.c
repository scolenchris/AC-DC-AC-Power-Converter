#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_ddf.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_ddf ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t17 , NeDsMethodOutput * out ) { real_T t1
; real_T t15 ; real_T t16 ; real_T t2 ; real_T t3 ; t1 = ( ( ( ( - t17 -> mX
. mX [ 1ULL ] + t17 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t17 -> mX . mX [ 20ULL
] ) + t17 -> mX . mX [ 18ULL ] * 1.0E-6 ) + t17 -> mX . mX [ 19ULL ] * -
1.0000000000000011 ) + t17 -> mX . mX [ 17ULL ] ; t2 = - t17 -> mX . mX [
17ULL ] + t17 -> mX . mX [ 20ULL ] ; t3 = ( ( ( - t17 -> mX . mX [ 1ULL ] +
t17 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t17 -> mX . mX [ 20ULL ] ) + t17 -> mX
. mX [ 18ULL ] * 1.0E-6 ) + t17 -> mX . mX [ 19ULL ] * - 1.0000000000000011 ;
if ( ( size_t ) t17 -> mQ . mX [ 0ULL ] == 1ULL ) { out -> mDDF . mX [ 0ULL ]
= 0.0 ; } else if ( ( size_t ) t17 -> mQ . mX [ 0ULL ] == 2ULL ) { out ->
mDDF . mX [ 0ULL ] = 0.0 ; } else if ( ( size_t ) t17 -> mQ . mX [ 0ULL ] ==
3ULL ) { out -> mDDF . mX [ 0ULL ] = 0.0 ; } else if ( ( size_t ) t17 -> mQ .
mX [ 0ULL ] == 4ULL ) { out -> mDDF . mX [ 0ULL ] = 0.0 ; } else if ( t17 ->
mM . mX [ 73ULL ] != 0 ) { t15 = ( t17 -> mD . mX [ 7ULL ] * 0.001 +
0.799999992 ) * ( t17 -> mD . mX [ 7ULL ] * 0.001 + 0.799999992 ) ; t16 = t17
-> mD . mX [ 7ULL ] * 0.001 + 0.799999992 ; out -> mDDF . mX [ 0ULL ] = - ( -
( t1 * t17 -> mD . mX [ 7ULL ] ) / ( t15 == 0.0 ? 1.0E-16 : t15 ) * 0.001 +
t1 / ( t16 == 0.0 ? 1.0E-16 : t16 ) ) ; } else { out -> mDDF . mX [ 0ULL ] =
0.0 ; } if ( ( size_t ) t17 -> mQ . mX [ 1ULL ] == 1ULL ) { out -> mDDF . mX
[ 1ULL ] = 0.0 ; } else if ( ( size_t ) t17 -> mQ . mX [ 1ULL ] == 2ULL ) {
out -> mDDF . mX [ 1ULL ] = 0.0 ; } else if ( ( size_t ) t17 -> mQ . mX [
1ULL ] == 3ULL ) { out -> mDDF . mX [ 1ULL ] = 0.0 ; } else if ( ( size_t )
t17 -> mQ . mX [ 1ULL ] == 4ULL ) { out -> mDDF . mX [ 1ULL ] = 0.0 ; } else
if ( t17 -> mM . mX [ 75ULL ] != 0 ) { t15 = ( t17 -> mD . mX [ 9ULL ] *
0.001 + 0.799999992 ) * ( t17 -> mD . mX [ 9ULL ] * 0.001 + 0.799999992 ) ;
t16 = t17 -> mD . mX [ 9ULL ] * 0.001 + 0.799999992 ; out -> mDDF . mX [ 1ULL
] = - ( - ( t2 * t17 -> mD . mX [ 9ULL ] ) / ( t15 == 0.0 ? 1.0E-16 : t15 ) *
0.001 + t2 / ( t16 == 0.0 ? 1.0E-16 : t16 ) ) ; } else { out -> mDDF . mX [
1ULL ] = 0.0 ; } if ( ( size_t ) t17 -> mQ . mX [ 2ULL ] == 1ULL ) { out ->
mDDF . mX [ 2ULL ] = 0.0 ; } else if ( ( size_t ) t17 -> mQ . mX [ 2ULL ] ==
2ULL ) { out -> mDDF . mX [ 2ULL ] = 0.0 ; } else if ( ( size_t ) t17 -> mQ .
mX [ 2ULL ] == 3ULL ) { out -> mDDF . mX [ 2ULL ] = 0.0 ; } else if ( (
size_t ) t17 -> mQ . mX [ 2ULL ] == 4ULL ) { out -> mDDF . mX [ 2ULL ] = 0.0
; } else if ( t17 -> mM . mX [ 77ULL ] != 0 ) { t15 = ( t17 -> mD . mX [
11ULL ] * 0.001 + 0.799999992 ) * ( t17 -> mD . mX [ 11ULL ] * 0.001 +
0.799999992 ) ; t16 = t17 -> mD . mX [ 11ULL ] * 0.001 + 0.799999992 ; out ->
mDDF . mX [ 2ULL ] = - ( - ( t3 * t17 -> mD . mX [ 11ULL ] ) / ( t15 == 0.0 ?
1.0E-16 : t15 ) * 0.001 + t3 / ( t16 == 0.0 ? 1.0E-16 : t16 ) ) ; } else {
out -> mDDF . mX [ 2ULL ] = 0.0 ; } if ( ( size_t ) t17 -> mQ . mX [ 3ULL ]
== 1ULL ) { out -> mDDF . mX [ 3ULL ] = 0.0 ; } else if ( ( size_t ) t17 ->
mQ . mX [ 3ULL ] == 2ULL ) { out -> mDDF . mX [ 3ULL ] = 0.0 ; } else if ( (
size_t ) t17 -> mQ . mX [ 3ULL ] == 3ULL ) { out -> mDDF . mX [ 3ULL ] = 0.0
; } else if ( ( size_t ) t17 -> mQ . mX [ 3ULL ] == 4ULL ) { out -> mDDF . mX
[ 3ULL ] = 0.0 ; } else if ( t17 -> mM . mX [ 79ULL ] != 0 ) { t15 = ( t17 ->
mD . mX [ 13ULL ] * 0.001 + 0.799999992 ) * ( t17 -> mD . mX [ 13ULL ] *
0.001 + 0.799999992 ) ; t16 = t17 -> mD . mX [ 13ULL ] * 0.001 + 0.799999992
; out -> mDDF . mX [ 3ULL ] = - ( - ( t17 -> mD . mX [ 13ULL ] * t17 -> mX .
mX [ 20ULL ] ) / ( t15 == 0.0 ? 1.0E-16 : t15 ) * 0.001 + t17 -> mX . mX [
20ULL ] / ( t16 == 0.0 ? 1.0E-16 : t16 ) ) ; } else { out -> mDDF . mX [ 3ULL
] = 0.0 ; } ( void ) sys ; ( void ) out ; return 0 ; }
