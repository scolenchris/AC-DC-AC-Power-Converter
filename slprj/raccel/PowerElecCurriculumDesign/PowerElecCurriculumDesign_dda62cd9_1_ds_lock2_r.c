#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_lock2_r.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_lock2_r ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { real_T Thyristor1_iak ; real_T Thyristor1_ideal_switch_v ; real_T
Thyristor2_iak ; real_T Thyristor2_ideal_switch_v ; real_T
Thyristor3_ideal_switch_v ; boolean_T indicator4 ; boolean_T indicator5 ;
boolean_T indicator6 ; boolean_T indicator7 ; Thyristor1_iak = ( ( - t1 -> mX
. mX [ 54ULL ] + t1 -> mX . mX [ 19ULL ] * 1.0E-9 ) - t1 -> mX . mX [ 15ULL ]
) + t1 -> mX . mX [ 0ULL ] ; Thyristor1_ideal_switch_v = ( ( ( ( - t1 -> mX .
mX [ 1ULL ] + t1 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t1 -> mX . mX [ 20ULL ] )
+ t1 -> mX . mX [ 18ULL ] * 1.0E-6 ) + t1 -> mX . mX [ 19ULL ] * -
1.0000000000000011 ) + t1 -> mX . mX [ 17ULL ] ; Thyristor2_iak = ( ( - t1 ->
mX . mX [ 54ULL ] + t1 -> mX . mX [ 19ULL ] * 1.0E-9 ) - t1 -> mX . mX [
16ULL ] ) + t1 -> mX . mX [ 0ULL ] ; Thyristor2_ideal_switch_v = - t1 -> mX .
mX [ 17ULL ] + t1 -> mX . mX [ 20ULL ] ; Thyristor3_ideal_switch_v = ( ( ( -
t1 -> mX . mX [ 1ULL ] + t1 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t1 -> mX . mX
[ 20ULL ] ) + t1 -> mX . mX [ 18ULL ] * 1.0E-6 ) + t1 -> mX . mX [ 19ULL ] *
- 1.0000000000000011 ; if ( ( t1 -> mCI . mX [ 33ULL ] == 0 ) && ( t1 -> mX .
mX [ 57ULL ] < 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 1ULL ) ) {
indicator4 = true ; } else if ( ( t1 -> mCI . mX [ 32ULL ] == 0 ) && ( t1 ->
mX . mX [ 57ULL ] > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 1ULL ) )
{ indicator4 = true ; } else if ( ( t1 -> mCI . mX [ 31ULL ] == 0 ) && ( t1
-> mX . mX [ 57ULL ] > 0.0 ) && ( Thyristor1_ideal_switch_v > 0.0 ) && ( (
size_t ) t1 -> mQ . mX [ 0ULL ] == 2ULL ) ) { indicator4 = true ; } else if (
( t1 -> mCI . mX [ 30ULL ] == 0 ) && ( Thyristor1_iak < 0.0 ) && ( t1 -> mX .
mX [ 57ULL ] < 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 3ULL ) ) {
indicator4 = true ; } else if ( ( t1 -> mCI . mX [ 29ULL ] == 0 ) && (
Thyristor1_iak > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 3ULL ) ) {
indicator4 = true ; } else if ( ( t1 -> mCI . mX [ 28ULL ] == 0 ) && (
Thyristor1_iak < 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 4ULL ) ) {
indicator4 = true ; } else if ( ( t1 -> mCI . mX [ 27ULL ] == 0 ) && (
Thyristor1_iak > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 5ULL ) ) {
indicator4 = true ; } else { indicator4 = ( ( t1 -> mCI . mX [ 26ULL ] == 0 )
&& ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 5ULL ) && ( ( Thyristor1_iak < 0.0
) || ( Thyristor1_ideal_switch_v < 0.0 ) ) ) ; } if ( ( t1 -> mCI . mX [
42ULL ] == 0 ) && ( t1 -> mX . mX [ 56ULL ] < 0.0 ) && ( ( size_t ) t1 -> mQ
. mX [ 1ULL ] == 1ULL ) ) { indicator5 = true ; } else if ( ( t1 -> mCI . mX
[ 41ULL ] == 0 ) && ( t1 -> mX . mX [ 56ULL ] > 0.0 ) && ( ( size_t ) t1 ->
mQ . mX [ 1ULL ] == 1ULL ) ) { indicator5 = true ; } else if ( ( t1 -> mCI .
mX [ 40ULL ] == 0 ) && ( t1 -> mX . mX [ 56ULL ] > 0.0 ) && (
Thyristor2_ideal_switch_v > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] ==
2ULL ) ) { indicator5 = true ; } else if ( ( t1 -> mCI . mX [ 39ULL ] == 0 )
&& ( Thyristor2_iak < 0.0 ) && ( t1 -> mX . mX [ 56ULL ] < 0.0 ) && ( (
size_t ) t1 -> mQ . mX [ 1ULL ] == 3ULL ) ) { indicator5 = true ; } else if (
( t1 -> mCI . mX [ 38ULL ] == 0 ) && ( Thyristor2_iak > 0.0 ) && ( ( size_t )
t1 -> mQ . mX [ 1ULL ] == 3ULL ) ) { indicator5 = true ; } else if ( ( t1 ->
mCI . mX [ 37ULL ] == 0 ) && ( Thyristor2_iak < 0.0 ) && ( ( size_t ) t1 ->
mQ . mX [ 1ULL ] == 4ULL ) ) { indicator5 = true ; } else if ( ( t1 -> mCI .
mX [ 36ULL ] == 0 ) && ( Thyristor2_iak > 0.0 ) && ( ( size_t ) t1 -> mQ . mX
[ 1ULL ] == 5ULL ) ) { indicator5 = true ; } else { indicator5 = ( ( t1 ->
mCI . mX [ 35ULL ] == 0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 5ULL ) &&
( ( Thyristor2_iak < 0.0 ) || ( Thyristor2_ideal_switch_v < 0.0 ) ) ) ; } if
( ( t1 -> mCI . mX [ 51ULL ] == 0 ) && ( t1 -> mX . mX [ 56ULL ] < 0.0 ) && (
( size_t ) t1 -> mQ . mX [ 2ULL ] == 1ULL ) ) { indicator6 = true ; } else if
( ( t1 -> mCI . mX [ 50ULL ] == 0 ) && ( t1 -> mX . mX [ 56ULL ] > 0.0 ) && (
( size_t ) t1 -> mQ . mX [ 2ULL ] == 1ULL ) ) { indicator6 = true ; } else if
( ( t1 -> mCI . mX [ 49ULL ] == 0 ) && ( t1 -> mX . mX [ 56ULL ] > 0.0 ) && (
Thyristor3_ideal_switch_v > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] ==
2ULL ) ) { indicator6 = true ; } else if ( ( t1 -> mCI . mX [ 48ULL ] == 0 )
&& ( t1 -> mX . mX [ 15ULL ] < 0.0 ) && ( t1 -> mX . mX [ 56ULL ] < 0.0 ) &&
( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 3ULL ) ) { indicator6 = true ; } else
if ( ( t1 -> mCI . mX [ 47ULL ] == 0 ) && ( t1 -> mX . mX [ 15ULL ] > 0.0 )
&& ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 3ULL ) ) { indicator6 = true ; }
else if ( ( t1 -> mCI . mX [ 46ULL ] == 0 ) && ( t1 -> mX . mX [ 15ULL ] <
0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 4ULL ) ) { indicator6 = true
; } else if ( ( t1 -> mCI . mX [ 44ULL ] == 0 ) && ( t1 -> mX . mX [ 15ULL ]
> 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 5ULL ) ) { indicator6 =
true ; } else { indicator6 = ( ( t1 -> mCI . mX [ 43ULL ] == 0 ) && ( (
size_t ) t1 -> mQ . mX [ 2ULL ] == 5ULL ) && ( ( t1 -> mX . mX [ 15ULL ] <
0.0 ) || ( Thyristor3_ideal_switch_v < 0.0 ) ) ) ; } if ( ( t1 -> mCI . mX [
60ULL ] == 0 ) && ( t1 -> mX . mX [ 57ULL ] < 0.0 ) && ( ( size_t ) t1 -> mQ
. mX [ 3ULL ] == 1ULL ) ) { indicator7 = true ; } else if ( ( t1 -> mCI . mX
[ 59ULL ] == 0 ) && ( t1 -> mX . mX [ 57ULL ] > 0.0 ) && ( ( size_t ) t1 ->
mQ . mX [ 3ULL ] == 1ULL ) ) { indicator7 = true ; } else if ( ( t1 -> mCI .
mX [ 58ULL ] == 0 ) && ( t1 -> mX . mX [ 57ULL ] > 0.0 ) && ( t1 -> mX . mX [
20ULL ] > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 2ULL ) ) {
indicator7 = true ; } else if ( ( t1 -> mCI . mX [ 57ULL ] == 0 ) && ( t1 ->
mX . mX [ 16ULL ] < 0.0 ) && ( t1 -> mX . mX [ 57ULL ] < 0.0 ) && ( ( size_t
) t1 -> mQ . mX [ 3ULL ] == 3ULL ) ) { indicator7 = true ; } else if ( ( t1
-> mCI . mX [ 55ULL ] == 0 ) && ( t1 -> mX . mX [ 16ULL ] > 0.0 ) && ( (
size_t ) t1 -> mQ . mX [ 3ULL ] == 3ULL ) ) { indicator7 = true ; } else if (
( t1 -> mCI . mX [ 54ULL ] == 0 ) && ( t1 -> mX . mX [ 16ULL ] < 0.0 ) && ( (
size_t ) t1 -> mQ . mX [ 3ULL ] == 4ULL ) ) { indicator7 = true ; } else if (
( t1 -> mCI . mX [ 53ULL ] == 0 ) && ( t1 -> mX . mX [ 16ULL ] > 0.0 ) && ( (
size_t ) t1 -> mQ . mX [ 3ULL ] == 5ULL ) ) { indicator7 = true ; } else {
indicator7 = ( ( t1 -> mCI . mX [ 52ULL ] == 0 ) && ( ( size_t ) t1 -> mQ .
mX [ 3ULL ] == 5ULL ) && ( ( t1 -> mX . mX [ 16ULL ] < 0.0 ) || ( t1 -> mX .
mX [ 20ULL ] < 0.0 ) ) ) ; } out -> mLOCK2_R . mX [ 0ULL ] = false ; out ->
mLOCK2_R . mX [ 1ULL ] = false ; out -> mLOCK2_R . mX [ 2ULL ] = false ; out
-> mLOCK2_R . mX [ 3ULL ] = false ; out -> mLOCK2_R . mX [ 4ULL ] = false ;
out -> mLOCK2_R . mX [ 5ULL ] = false ; out -> mLOCK2_R . mX [ 6ULL ] =
indicator4 ; out -> mLOCK2_R . mX [ 7ULL ] = indicator4 ; out -> mLOCK2_R .
mX [ 8ULL ] = indicator5 ; out -> mLOCK2_R . mX [ 9ULL ] = indicator5 ; out
-> mLOCK2_R . mX [ 10ULL ] = indicator6 ; out -> mLOCK2_R . mX [ 11ULL ] =
indicator6 ; out -> mLOCK2_R . mX [ 12ULL ] = indicator7 ; out -> mLOCK2_R .
mX [ 13ULL ] = indicator7 ; ( void ) sys ; ( void ) out ; return 0 ; }
