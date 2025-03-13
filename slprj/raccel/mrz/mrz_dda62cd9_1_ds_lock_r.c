#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_lock_r.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_lock_r ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { real_T CMOS_AND1_J_v ;
real_T CMOS_AND_J_v ; real_T Thyristor_Piecewise_Linear1_iak ; real_T
Thyristor_Piecewise_Linear2_ideal_switch_v ; real_T
Thyristor_Piecewise_Linear_iak ; real_T
Thyristor_Piecewise_Linear_ideal_switch_v ; boolean_T indicator1 ; boolean_T
indicator2 ; boolean_T indicator3 ; boolean_T indicator4 ; CMOS_AND_J_v = t1
-> mX . mX [ 23ULL ] * 1.0E-6 + t1 -> mX . mX [ 2ULL ] ; CMOS_AND1_J_v = t1
-> mX . mX [ 29ULL ] * 1.0E-6 + t1 -> mX . mX [ 6ULL ] ;
Thyristor_Piecewise_Linear_iak = ( t1 -> mX . mX [ 33ULL ] * 1.0E-9 - t1 ->
mX . mX [ 19ULL ] ) + t1 -> mX . mX [ 8ULL ] ;
Thyristor_Piecewise_Linear_ideal_switch_v = ( - t1 -> mX . mX [ 32ULL ] - t1
-> mX . mX [ 33ULL ] ) + t1 -> mX . mX [ 18ULL ] ;
Thyristor_Piecewise_Linear1_iak = ( t1 -> mX . mX [ 33ULL ] * 1.0E-9 - t1 ->
mX . mX [ 20ULL ] ) + t1 -> mX . mX [ 8ULL ] ;
Thyristor_Piecewise_Linear2_ideal_switch_v = ( - t1 -> mX . mX [ 32ULL ] - t1
-> mX . mX [ 33ULL ] ) + t1 -> mX . mX [ 17ULL ] ; if ( ( ( t1 -> mCI . mX [
3ULL ] == 0 ) && ( CMOS_AND1_J_v < 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL
] == 1ULL ) ) || ( ( CMOS_AND1_J_v < 3.0 ) && ( ( size_t ) t1 -> mQ . mX [
1ULL ] == 1ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) { indicator1 = true ;
} else if ( ( ( t1 -> mCI . mX [ 2ULL ] == 0 ) && ( CMOS_AND1_J_v > 3.0 ) &&
( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 1ULL ) ) || ( ( CMOS_AND1_J_v > 3.0 )
&& ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 1ULL ) && ( t1 -> mQ . mX [ 5ULL ]
!= 0 ) ) ) { indicator1 = true ; } else if ( ( ( t1 -> mCI . mX [ 71ULL ] ==
0 ) && ( Thyristor_Piecewise_Linear_ideal_switch_v > 0.8 ) && ( CMOS_AND1_J_v
>= 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 2ULL ) ) || ( (
Thyristor_Piecewise_Linear_ideal_switch_v > 0.8 ) && ( CMOS_AND1_J_v >= 3.0 )
&& ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 2ULL ) && ( t1 -> mQ . mX [ 5ULL ]
!= 0 ) ) ) { indicator1 = true ; } else if ( ( ( t1 -> mCI . mX [ 70ULL ] ==
0 ) && ( CMOS_AND1_J_v < 3.0 ) && ( Thyristor_Piecewise_Linear_iak <= 1.0 )
&& ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 3ULL ) ) || ( ( CMOS_AND1_J_v < 3.0
) && ( Thyristor_Piecewise_Linear_iak <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX
[ 1ULL ] == 3ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) { indicator1 = true
; } else if ( ( ( t1 -> mCI . mX [ 67ULL ] == 0 ) && (
Thyristor_Piecewise_Linear_iak > 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ]
== 3ULL ) ) || ( ( Thyristor_Piecewise_Linear_iak > 1.0 ) && ( ( size_t ) t1
-> mQ . mX [ 1ULL ] == 3ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) {
indicator1 = true ; } else if ( ( ( t1 -> mCI . mX [ 56ULL ] == 0 ) && (
Thyristor_Piecewise_Linear_iak <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL
] == 4ULL ) ) || ( ( Thyristor_Piecewise_Linear_iak <= 1.0 ) && ( ( size_t )
t1 -> mQ . mX [ 1ULL ] == 4ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) {
indicator1 = true ; } else if ( ( ( t1 -> mCI . mX [ 45ULL ] == 0 ) && (
Thyristor_Piecewise_Linear_iak > 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ]
== 5ULL ) ) || ( ( Thyristor_Piecewise_Linear_iak > 1.0 ) && ( ( size_t ) t1
-> mQ . mX [ 1ULL ] == 5ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) {
indicator1 = true ; } else { indicator1 = ( ( ( t1 -> mCI . mX [ 34ULL ] == 0
) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 5ULL ) && ( (
Thyristor_Piecewise_Linear_iak <= 0.0 ) || (
Thyristor_Piecewise_Linear_ideal_switch_v <= 0.0 ) ) ) || ( ( ( size_t ) t1
-> mQ . mX [ 1ULL ] == 5ULL ) && ( ( Thyristor_Piecewise_Linear_iak <= 0.0 )
|| ( Thyristor_Piecewise_Linear_ideal_switch_v <= 0.0 ) ) && ( t1 -> mQ . mX
[ 5ULL ] != 0 ) ) ) ; } if ( ( ( t1 -> mCI . mX [ 11ULL ] == 0 ) && (
CMOS_AND_J_v < 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 1ULL ) ) || (
( CMOS_AND_J_v < 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 1ULL ) && (
t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) { indicator2 = true ; } else if ( ( ( t1 ->
mCI . mX [ 10ULL ] == 0 ) && ( CMOS_AND_J_v > 3.0 ) && ( ( size_t ) t1 -> mQ
. mX [ 2ULL ] == 1ULL ) ) || ( ( CMOS_AND_J_v > 3.0 ) && ( ( size_t ) t1 ->
mQ . mX [ 2ULL ] == 1ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) {
indicator2 = true ; } else if ( ( ( t1 -> mCI . mX [ 9ULL ] == 0 ) && ( - t1
-> mX . mX [ 18ULL ] > 0.8 ) && ( CMOS_AND_J_v >= 3.0 ) && ( ( size_t ) t1 ->
mQ . mX [ 2ULL ] == 2ULL ) ) || ( ( - t1 -> mX . mX [ 18ULL ] > 0.8 ) && (
CMOS_AND_J_v >= 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 2ULL ) && (
t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) { indicator2 = true ; } else if ( ( ( t1 ->
mCI . mX [ 8ULL ] == 0 ) && ( CMOS_AND_J_v < 3.0 ) && (
Thyristor_Piecewise_Linear1_iak <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL
] == 3ULL ) ) || ( ( CMOS_AND_J_v < 3.0 ) && (
Thyristor_Piecewise_Linear1_iak <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL
] == 3ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) { indicator2 = true ; }
else if ( ( ( t1 -> mCI . mX [ 7ULL ] == 0 ) && (
Thyristor_Piecewise_Linear1_iak > 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL
] == 3ULL ) ) || ( ( Thyristor_Piecewise_Linear1_iak > 1.0 ) && ( ( size_t )
t1 -> mQ . mX [ 2ULL ] == 3ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) {
indicator2 = true ; } else if ( ( ( t1 -> mCI . mX [ 6ULL ] == 0 ) && (
Thyristor_Piecewise_Linear1_iak <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL
] == 4ULL ) ) || ( ( Thyristor_Piecewise_Linear1_iak <= 1.0 ) && ( ( size_t )
t1 -> mQ . mX [ 2ULL ] == 4ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) {
indicator2 = true ; } else if ( ( ( t1 -> mCI . mX [ 5ULL ] == 0 ) && (
Thyristor_Piecewise_Linear1_iak > 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL
] == 5ULL ) ) || ( ( Thyristor_Piecewise_Linear1_iak > 1.0 ) && ( ( size_t )
t1 -> mQ . mX [ 2ULL ] == 5ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) {
indicator2 = true ; } else { indicator2 = ( ( ( t1 -> mCI . mX [ 4ULL ] == 0
) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 5ULL ) && ( (
Thyristor_Piecewise_Linear1_iak <= 0.0 ) || ( - t1 -> mX . mX [ 18ULL ] <=
0.0 ) ) ) || ( ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 5ULL ) && ( (
Thyristor_Piecewise_Linear1_iak <= 0.0 ) || ( - t1 -> mX . mX [ 18ULL ] <=
0.0 ) ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) ; } if ( ( ( t1 -> mCI . mX [
20ULL ] == 0 ) && ( CMOS_AND_J_v < 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL
] == 1ULL ) ) || ( ( CMOS_AND_J_v < 3.0 ) && ( ( size_t ) t1 -> mQ . mX [
3ULL ] == 1ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) { indicator3 = true ;
} else if ( ( ( t1 -> mCI . mX [ 19ULL ] == 0 ) && ( CMOS_AND_J_v > 3.0 ) &&
( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 1ULL ) ) || ( ( CMOS_AND_J_v > 3.0 )
&& ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 1ULL ) && ( t1 -> mQ . mX [ 5ULL ]
!= 0 ) ) ) { indicator3 = true ; } else if ( ( ( t1 -> mCI . mX [ 18ULL ] ==
0 ) && ( Thyristor_Piecewise_Linear2_ideal_switch_v > 0.8 ) && ( CMOS_AND_J_v
>= 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 2ULL ) ) || ( (
Thyristor_Piecewise_Linear2_ideal_switch_v > 0.8 ) && ( CMOS_AND_J_v >= 3.0 )
&& ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 2ULL ) && ( t1 -> mQ . mX [ 5ULL ]
!= 0 ) ) ) { indicator3 = true ; } else if ( ( ( t1 -> mCI . mX [ 17ULL ] ==
0 ) && ( CMOS_AND_J_v < 3.0 ) && ( t1 -> mX . mX [ 19ULL ] <= 1.0 ) && ( (
size_t ) t1 -> mQ . mX [ 3ULL ] == 3ULL ) ) || ( ( CMOS_AND_J_v < 3.0 ) && (
t1 -> mX . mX [ 19ULL ] <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] ==
3ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) { indicator3 = true ; } else if
( ( ( t1 -> mCI . mX [ 16ULL ] == 0 ) && ( t1 -> mX . mX [ 19ULL ] > 1.0 ) &&
( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 3ULL ) ) || ( ( t1 -> mX . mX [ 19ULL
] > 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 3ULL ) && ( t1 -> mQ . mX
[ 5ULL ] != 0 ) ) ) { indicator3 = true ; } else if ( ( ( t1 -> mCI . mX [
15ULL ] == 0 ) && ( t1 -> mX . mX [ 19ULL ] <= 1.0 ) && ( ( size_t ) t1 -> mQ
. mX [ 3ULL ] == 4ULL ) ) || ( ( t1 -> mX . mX [ 19ULL ] <= 1.0 ) && ( (
size_t ) t1 -> mQ . mX [ 3ULL ] == 4ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 )
) ) { indicator3 = true ; } else if ( ( ( t1 -> mCI . mX [ 14ULL ] == 0 ) &&
( t1 -> mX . mX [ 19ULL ] > 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] ==
5ULL ) ) || ( ( t1 -> mX . mX [ 19ULL ] > 1.0 ) && ( ( size_t ) t1 -> mQ . mX
[ 3ULL ] == 5ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) { indicator3 = true
; } else { indicator3 = ( ( ( t1 -> mCI . mX [ 13ULL ] == 0 ) && ( ( size_t )
t1 -> mQ . mX [ 3ULL ] == 5ULL ) && ( ( t1 -> mX . mX [ 19ULL ] <= 0.0 ) || (
Thyristor_Piecewise_Linear2_ideal_switch_v <= 0.0 ) ) ) || ( ( ( size_t ) t1
-> mQ . mX [ 3ULL ] == 5ULL ) && ( ( t1 -> mX . mX [ 19ULL ] <= 0.0 ) || (
Thyristor_Piecewise_Linear2_ideal_switch_v <= 0.0 ) ) && ( t1 -> mQ . mX [
5ULL ] != 0 ) ) ) ; } if ( ( ( t1 -> mCI . mX [ 29ULL ] == 0 ) && (
CMOS_AND1_J_v < 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 1ULL ) ) || (
( CMOS_AND1_J_v < 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 1ULL ) && (
t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) { indicator4 = true ; } else if ( ( ( t1 ->
mCI . mX [ 28ULL ] == 0 ) && ( CMOS_AND1_J_v > 3.0 ) && ( ( size_t ) t1 -> mQ
. mX [ 4ULL ] == 1ULL ) ) || ( ( CMOS_AND1_J_v > 3.0 ) && ( ( size_t ) t1 ->
mQ . mX [ 4ULL ] == 1ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) {
indicator4 = true ; } else if ( ( ( t1 -> mCI . mX [ 27ULL ] == 0 ) && ( - t1
-> mX . mX [ 17ULL ] > 0.8 ) && ( CMOS_AND1_J_v >= 3.0 ) && ( ( size_t ) t1
-> mQ . mX [ 4ULL ] == 2ULL ) ) || ( ( - t1 -> mX . mX [ 17ULL ] > 0.8 ) && (
CMOS_AND1_J_v >= 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 2ULL ) && (
t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) { indicator4 = true ; } else if ( ( ( t1 ->
mCI . mX [ 26ULL ] == 0 ) && ( CMOS_AND1_J_v < 3.0 ) && ( t1 -> mX . mX [
20ULL ] <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 3ULL ) ) || ( (
CMOS_AND1_J_v < 3.0 ) && ( t1 -> mX . mX [ 20ULL ] <= 1.0 ) && ( ( size_t )
t1 -> mQ . mX [ 4ULL ] == 3ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) {
indicator4 = true ; } else if ( ( ( t1 -> mCI . mX [ 25ULL ] == 0 ) && ( t1
-> mX . mX [ 20ULL ] > 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 3ULL )
) || ( ( t1 -> mX . mX [ 20ULL ] > 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL
] == 3ULL ) && ( t1 -> mQ . mX [ 5ULL ] != 0 ) ) ) { indicator4 = true ; }
else if ( ( ( t1 -> mCI . mX [ 24ULL ] == 0 ) && ( t1 -> mX . mX [ 20ULL ] <=
1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 4ULL ) ) || ( ( t1 -> mX . mX
[ 20ULL ] <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 4ULL ) && ( t1
-> mQ . mX [ 5ULL ] != 0 ) ) ) { indicator4 = true ; } else if ( ( ( t1 ->
mCI . mX [ 22ULL ] == 0 ) && ( t1 -> mX . mX [ 20ULL ] > 1.0 ) && ( ( size_t
) t1 -> mQ . mX [ 4ULL ] == 5ULL ) ) || ( ( t1 -> mX . mX [ 20ULL ] > 1.0 )
&& ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 5ULL ) && ( t1 -> mQ . mX [ 5ULL ]
!= 0 ) ) ) { indicator4 = true ; } else { indicator4 = ( ( ( t1 -> mCI . mX [
21ULL ] == 0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 5ULL ) && ( ( t1 ->
mX . mX [ 20ULL ] <= 0.0 ) || ( - t1 -> mX . mX [ 17ULL ] <= 0.0 ) ) ) || ( (
( size_t ) t1 -> mQ . mX [ 4ULL ] == 5ULL ) && ( ( t1 -> mX . mX [ 20ULL ] <=
0.0 ) || ( - t1 -> mX . mX [ 17ULL ] <= 0.0 ) ) && ( t1 -> mQ . mX [ 5ULL ]
!= 0 ) ) ) ; } out -> mLOCK_R . mX [ 0ULL ] = false ; out -> mLOCK_R . mX [
1ULL ] = false ; out -> mLOCK_R . mX [ 2ULL ] = indicator1 ; out -> mLOCK_R .
mX [ 3ULL ] = indicator1 ; out -> mLOCK_R . mX [ 4ULL ] = indicator2 ; out ->
mLOCK_R . mX [ 5ULL ] = indicator2 ; out -> mLOCK_R . mX [ 6ULL ] =
indicator3 ; out -> mLOCK_R . mX [ 7ULL ] = indicator3 ; out -> mLOCK_R . mX
[ 8ULL ] = indicator4 ; out -> mLOCK_R . mX [ 9ULL ] = indicator4 ; ( void )
sys ; ( void ) out ; return 0 ; }
