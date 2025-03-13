#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_update2_i.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_update2_i ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t5 , NeDsMethodOutput *
out ) { real_T Thyristor1_iak ; real_T Thyristor1_ideal_switch_v ; real_T
Thyristor2_iak ; real_T Thyristor2_ideal_switch_v ; real_T
Thyristor3_ideal_switch_v ; size_t t0 ; size_t t1 ; size_t t2 ; size_t t3 ;
Thyristor1_iak = ( ( - t5 -> mX . mX [ 54ULL ] + t5 -> mX . mX [ 19ULL ] *
1.0E-9 ) - t5 -> mX . mX [ 15ULL ] ) + t5 -> mX . mX [ 0ULL ] ;
Thyristor1_ideal_switch_v = ( ( ( ( - t5 -> mX . mX [ 1ULL ] + t5 -> mX . mX
[ 0ULL ] * - 1.0E-6 ) - t5 -> mX . mX [ 20ULL ] ) + t5 -> mX . mX [ 18ULL ] *
1.0E-6 ) + t5 -> mX . mX [ 19ULL ] * - 1.0000000000000011 ) + t5 -> mX . mX [
17ULL ] ; Thyristor2_iak = ( ( - t5 -> mX . mX [ 54ULL ] + t5 -> mX . mX [
19ULL ] * 1.0E-9 ) - t5 -> mX . mX [ 16ULL ] ) + t5 -> mX . mX [ 0ULL ] ;
Thyristor2_ideal_switch_v = - t5 -> mX . mX [ 17ULL ] + t5 -> mX . mX [ 20ULL
] ; Thyristor3_ideal_switch_v = ( ( ( - t5 -> mX . mX [ 1ULL ] + t5 -> mX .
mX [ 0ULL ] * - 1.0E-6 ) - t5 -> mX . mX [ 20ULL ] ) + t5 -> mX . mX [ 18ULL
] * 1.0E-6 ) + t5 -> mX . mX [ 19ULL ] * - 1.0000000000000011 ; if ( ( t5 ->
mCI . mX [ 33ULL ] == 0 ) && ( t5 -> mX . mX [ 57ULL ] < 0.0 ) && ( ( size_t
) t5 -> mQ . mX [ 0ULL ] == 1ULL ) ) { t0 = 2ULL ; } else if ( ( t5 -> mCI .
mX [ 32ULL ] == 0 ) && ( t5 -> mX . mX [ 57ULL ] > 0.0 ) && ( ( size_t ) t5
-> mQ . mX [ 0ULL ] == 1ULL ) ) { t0 = 3ULL ; } else if ( ( t5 -> mCI . mX [
31ULL ] == 0 ) && ( t5 -> mX . mX [ 57ULL ] > 0.0 ) && (
Thyristor1_ideal_switch_v > 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 0ULL ] ==
2ULL ) ) { t0 = 3ULL ; } else if ( ( t5 -> mCI . mX [ 30ULL ] == 0 ) && (
Thyristor1_iak < 0.0 ) && ( t5 -> mX . mX [ 57ULL ] < 0.0 ) && ( ( size_t )
t5 -> mQ . mX [ 0ULL ] == 3ULL ) ) { t0 = 2ULL ; } else if ( ( t5 -> mCI . mX
[ 29ULL ] == 0 ) && ( Thyristor1_iak > 0.0 ) && ( ( size_t ) t5 -> mQ . mX [
0ULL ] == 3ULL ) ) { t0 = 4ULL ; } else if ( ( t5 -> mCI . mX [ 28ULL ] == 0
) && ( Thyristor1_iak < 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 0ULL ] == 4ULL
) ) { t0 = 5ULL ; } else if ( ( t5 -> mCI . mX [ 27ULL ] == 0 ) && (
Thyristor1_iak > 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 0ULL ] == 5ULL ) ) {
t0 = 4ULL ; } else if ( ( t5 -> mCI . mX [ 26ULL ] == 0 ) && ( ( size_t ) t5
-> mQ . mX [ 0ULL ] == 5ULL ) && ( ( Thyristor1_iak < 0.0 ) || (
Thyristor1_ideal_switch_v < 0.0 ) ) ) { t0 = 2ULL ; } else { t0 = ( size_t )
t5 -> mQ . mX [ 0ULL ] ; } if ( ( t5 -> mCI . mX [ 42ULL ] == 0 ) && ( t5 ->
mX . mX [ 56ULL ] < 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 1ULL ] == 1ULL ) )
{ t1 = 2ULL ; } else if ( ( t5 -> mCI . mX [ 41ULL ] == 0 ) && ( t5 -> mX .
mX [ 56ULL ] > 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 1ULL ] == 1ULL ) ) { t1
= 3ULL ; } else if ( ( t5 -> mCI . mX [ 40ULL ] == 0 ) && ( t5 -> mX . mX [
56ULL ] > 0.0 ) && ( Thyristor2_ideal_switch_v > 0.0 ) && ( ( size_t ) t5 ->
mQ . mX [ 1ULL ] == 2ULL ) ) { t1 = 3ULL ; } else if ( ( t5 -> mCI . mX [
39ULL ] == 0 ) && ( Thyristor2_iak < 0.0 ) && ( t5 -> mX . mX [ 56ULL ] < 0.0
) && ( ( size_t ) t5 -> mQ . mX [ 1ULL ] == 3ULL ) ) { t1 = 2ULL ; } else if
( ( t5 -> mCI . mX [ 38ULL ] == 0 ) && ( Thyristor2_iak > 0.0 ) && ( ( size_t
) t5 -> mQ . mX [ 1ULL ] == 3ULL ) ) { t1 = 4ULL ; } else if ( ( t5 -> mCI .
mX [ 37ULL ] == 0 ) && ( Thyristor2_iak < 0.0 ) && ( ( size_t ) t5 -> mQ . mX
[ 1ULL ] == 4ULL ) ) { t1 = 5ULL ; } else if ( ( t5 -> mCI . mX [ 36ULL ] ==
0 ) && ( Thyristor2_iak > 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 1ULL ] ==
5ULL ) ) { t1 = 4ULL ; } else if ( ( t5 -> mCI . mX [ 35ULL ] == 0 ) && ( (
size_t ) t5 -> mQ . mX [ 1ULL ] == 5ULL ) && ( ( Thyristor2_iak < 0.0 ) || (
Thyristor2_ideal_switch_v < 0.0 ) ) ) { t1 = 2ULL ; } else { t1 = ( size_t )
t5 -> mQ . mX [ 1ULL ] ; } if ( ( t5 -> mCI . mX [ 51ULL ] == 0 ) && ( t5 ->
mX . mX [ 56ULL ] < 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 2ULL ] == 1ULL ) )
{ t2 = 2ULL ; } else if ( ( t5 -> mCI . mX [ 50ULL ] == 0 ) && ( t5 -> mX .
mX [ 56ULL ] > 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 2ULL ] == 1ULL ) ) { t2
= 3ULL ; } else if ( ( t5 -> mCI . mX [ 49ULL ] == 0 ) && ( t5 -> mX . mX [
56ULL ] > 0.0 ) && ( Thyristor3_ideal_switch_v > 0.0 ) && ( ( size_t ) t5 ->
mQ . mX [ 2ULL ] == 2ULL ) ) { t2 = 3ULL ; } else if ( ( t5 -> mCI . mX [
48ULL ] == 0 ) && ( t5 -> mX . mX [ 15ULL ] < 0.0 ) && ( t5 -> mX . mX [
56ULL ] < 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 2ULL ] == 3ULL ) ) { t2 =
2ULL ; } else if ( ( t5 -> mCI . mX [ 47ULL ] == 0 ) && ( t5 -> mX . mX [
15ULL ] > 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 2ULL ] == 3ULL ) ) { t2 =
4ULL ; } else if ( ( t5 -> mCI . mX [ 46ULL ] == 0 ) && ( t5 -> mX . mX [
15ULL ] < 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 2ULL ] == 4ULL ) ) { t2 =
5ULL ; } else if ( ( t5 -> mCI . mX [ 44ULL ] == 0 ) && ( t5 -> mX . mX [
15ULL ] > 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 2ULL ] == 5ULL ) ) { t2 =
4ULL ; } else if ( ( t5 -> mCI . mX [ 43ULL ] == 0 ) && ( ( size_t ) t5 -> mQ
. mX [ 2ULL ] == 5ULL ) && ( ( t5 -> mX . mX [ 15ULL ] < 0.0 ) || (
Thyristor3_ideal_switch_v < 0.0 ) ) ) { t2 = 2ULL ; } else { t2 = ( size_t )
t5 -> mQ . mX [ 2ULL ] ; } if ( ( t5 -> mCI . mX [ 60ULL ] == 0 ) && ( t5 ->
mX . mX [ 57ULL ] < 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 3ULL ] == 1ULL ) )
{ t3 = 2ULL ; } else if ( ( t5 -> mCI . mX [ 59ULL ] == 0 ) && ( t5 -> mX .
mX [ 57ULL ] > 0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 3ULL ] == 1ULL ) ) { t3
= 3ULL ; } else if ( ( t5 -> mCI . mX [ 58ULL ] == 0 ) && ( t5 -> mX . mX [
57ULL ] > 0.0 ) && ( t5 -> mX . mX [ 20ULL ] > 0.0 ) && ( ( size_t ) t5 -> mQ
. mX [ 3ULL ] == 2ULL ) ) { t3 = 3ULL ; } else if ( ( t5 -> mCI . mX [ 57ULL
] == 0 ) && ( t5 -> mX . mX [ 16ULL ] < 0.0 ) && ( t5 -> mX . mX [ 57ULL ] <
0.0 ) && ( ( size_t ) t5 -> mQ . mX [ 3ULL ] == 3ULL ) ) { t3 = 2ULL ; } else
if ( ( t5 -> mCI . mX [ 55ULL ] == 0 ) && ( t5 -> mX . mX [ 16ULL ] > 0.0 )
&& ( ( size_t ) t5 -> mQ . mX [ 3ULL ] == 3ULL ) ) { t3 = 4ULL ; } else if (
( t5 -> mCI . mX [ 54ULL ] == 0 ) && ( t5 -> mX . mX [ 16ULL ] < 0.0 ) && ( (
size_t ) t5 -> mQ . mX [ 3ULL ] == 4ULL ) ) { t3 = 5ULL ; } else if ( ( t5 ->
mCI . mX [ 53ULL ] == 0 ) && ( t5 -> mX . mX [ 16ULL ] > 0.0 ) && ( ( size_t
) t5 -> mQ . mX [ 3ULL ] == 5ULL ) ) { t3 = 4ULL ; } else if ( ( t5 -> mCI .
mX [ 52ULL ] == 0 ) && ( ( size_t ) t5 -> mQ . mX [ 3ULL ] == 5ULL ) && ( (
t5 -> mX . mX [ 16ULL ] < 0.0 ) || ( t5 -> mX . mX [ 20ULL ] < 0.0 ) ) ) { t3
= 2ULL ; } else { t3 = ( size_t ) t5 -> mQ . mX [ 3ULL ] ; } out ->
mUPDATE2_I . mX [ 0ULL ] = ( int32_T ) t0 ; out -> mUPDATE2_I . mX [ 1ULL ] =
( int32_T ) t1 ; out -> mUPDATE2_I . mX [ 2ULL ] = ( int32_T ) t2 ; out ->
mUPDATE2_I . mX [ 3ULL ] = ( int32_T ) t3 ; out -> mUPDATE2_I . mX [ 4ULL ] =
( int32_T ) ( t5 -> mQ . mX [ 4ULL ] != 0 ) ; ( void ) sys ; ( void ) out ;
return 0 ; }
