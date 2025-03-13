#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_f.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_f ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t43 , NeDsMethodOutput * out ) { real_T
Thyristor_Piecewise_Linear1_iak ; real_T
Thyristor_Piecewise_Linear2_ideal_switch_v ; real_T
Thyristor_Piecewise_Linear_iak ; real_T
Thyristor_Piecewise_Linear_ideal_switch_v ; real_T piece0 ; real_T t0 ;
real_T t1 ; real_T t15 ; real_T t2 ; real_T t3 ; real_T t32 ; real_T t35 ;
real_T t5 ; real_T t6 ; real_T t7 ; real_T t8 ; real_T t9 ; real_T zc_int10 ;
real_T zc_int11 ; real_T zc_int12 ; t6 = t43 -> mX . mX [ 22ULL ] * 0.01 +
t43 -> mX . mX [ 1ULL ] ; t7 = t43 -> mX . mX [ 28ULL ] * 0.01 + t43 -> mX .
mX [ 5ULL ] ; t1 = ( - t43 -> mX . mX [ 45ULL ] + t43 -> mX . mX [ 35ULL ] *
1.0E-9 ) + t43 -> mX . mX [ 11ULL ] ; t2 = - t43 -> mX . mX [ 34ULL ] - t43
-> mX . mX [ 35ULL ] ; t3 = ( ( ( - t43 -> mX . mX [ 48ULL ] + t43 -> mX . mX
[ 38ULL ] * 1.0E-9 ) + t43 -> mX . mX [ 46ULL ] ) + t43 -> mX . mX [ 47ULL ]
) + t43 -> mX . mX [ 13ULL ] ; t5 = - t43 -> mX . mX [ 34ULL ] + t43 -> mX .
mX [ 37ULL ] ; t8 = ( ( ( - t43 -> mX . mX [ 51ULL ] + t43 -> mX . mX [ 38ULL
] * 9.9999999947364415E-10 ) + t43 -> mX . mX [ 49ULL ] ) + t43 -> mX . mX [
50ULL ] ) + t43 -> mX . mX [ 13ULL ] ; t9 = - t43 -> mX . mX [ 34ULL ] + t43
-> mX . mX [ 36ULL ] ; t15 = ( - t43 -> mX . mX [ 34ULL ] - t43 -> mX . mX [
35ULL ] ) + t43 -> mX . mX [ 32ULL ] ; t35 = - t43 -> mX . mX [ 37ULL ] + t43
-> mX . mX [ 34ULL ] ; t32 = - t43 -> mX . mX [ 36ULL ] + t43 -> mX . mX [
34ULL ] ; Thyristor_Piecewise_Linear_iak = ( t43 -> mX . mX [ 33ULL ] *
1.0E-9 - t43 -> mX . mX [ 19ULL ] ) + t43 -> mX . mX [ 8ULL ] ;
Thyristor_Piecewise_Linear_ideal_switch_v = ( - t43 -> mX . mX [ 32ULL ] -
t43 -> mX . mX [ 33ULL ] ) + t43 -> mX . mX [ 18ULL ] ;
Thyristor_Piecewise_Linear1_iak = ( t43 -> mX . mX [ 33ULL ] * 1.0E-9 - t43
-> mX . mX [ 20ULL ] ) + t43 -> mX . mX [ 8ULL ] ;
Thyristor_Piecewise_Linear2_ideal_switch_v = ( - t43 -> mX . mX [ 32ULL ] -
t43 -> mX . mX [ 33ULL ] ) + t43 -> mX . mX [ 17ULL ] ; if ( t43 -> mM . mX [
45ULL ] != 0 ) { zc_int11 = 1.0 ; } else { zc_int11 = t43 -> mM . mX [ 46ULL
] != 0 ? 0.0 : ( t43 -> mX . mX [ 27ULL ] * 1.0E-6 + t43 -> mX . mX [ 4ULL ]
) - 1.0 ; } if ( t43 -> mM . mX [ 47ULL ] != 0 ) { zc_int12 = 1.0 ; } else {
zc_int12 = t43 -> mM . mX [ 48ULL ] != 0 ? 0.0 : t7 - 1.0 ; } zc_int10 =
zc_int11 * zc_int12 ; if ( t43 -> mM . mX [ 64ULL ] != 0 ) { zc_int12 = 0.0 ;
} else { zc_int12 = t43 -> mM . mX [ 65ULL ] != 0 ? 10000.0 : t43 -> mU . mX
[ 3ULL ] * 10000.0 ; } if ( t43 -> mM . mX [ 41ULL ] != 0 ) { t0 = 1.0 ; }
else { t0 = t43 -> mM . mX [ 42ULL ] != 0 ? 0.0 : ( t43 -> mX . mX [ 21ULL ]
* 0.01 + t43 -> mX . mX [ 0ULL ] ) - 1.0 ; } if ( t43 -> mM . mX [ 43ULL ] !=
0 ) { piece0 = 1.0 ; } else { piece0 = t43 -> mM . mX [ 44ULL ] != 0 ? 0.0 :
t6 - 1.0 ; } if ( t43 -> mM . mX [ 50ULL ] != 0 ) { out -> mF . mX [ 28ULL ]
= t1 - t2 * 1.0E-8 ; } else { out -> mF . mX [ 28ULL ] = t2 - ( t1 * 0.3 +
0.59999999819999994 ) ; } if ( t43 -> mM . mX [ 51ULL ] != 0 ) { out -> mF .
mX [ 29ULL ] = t3 - - t43 -> mX . mX [ 37ULL ] * 1.0E-8 ; } else { out -> mF
. mX [ 29ULL ] = - t43 -> mX . mX [ 37ULL ] - ( t3 * 0.3 +
0.59999999819999994 ) ; } if ( t43 -> mM . mX [ 52ULL ] != 0 ) { out -> mF .
mX [ 30ULL ] = t43 -> mX . mX [ 46ULL ] - t5 * 1.0E-8 ; } else { out -> mF .
mX [ 30ULL ] = t5 - ( t43 -> mX . mX [ 46ULL ] * 0.3 + 0.59999999819999994 )
; } if ( t43 -> mM . mX [ 53ULL ] != 0 ) { out -> mF . mX [ 31ULL ] = t8 - t9
* 1.0E-8 ; } else { out -> mF . mX [ 31ULL ] = t9 - ( t8 * 0.3 +
0.59999999819999994 ) ; } if ( t43 -> mM . mX [ 54ULL ] != 0 ) { out -> mF .
mX [ 32ULL ] = t43 -> mX . mX [ 49ULL ] - - t43 -> mX . mX [ 36ULL ] * 1.0E-8
; } else { out -> mF . mX [ 32ULL ] = - t43 -> mX . mX [ 36ULL ] - ( t43 ->
mX . mX [ 49ULL ] * 0.3 + 0.59999999819999994 ) ; } if ( t43 -> mM . mX [
55ULL ] != 0 ) { t5 = t6 - ( - t43 -> mX . mX [ 22ULL ] * 100.0 + 5.0 ) ; }
else if ( t43 -> mM . mX [ 56ULL ] != 0 ) { t5 = t6 - - t43 -> mX . mX [
22ULL ] * 100.0 ; } else { t5 = t6 - ( ( t43 -> mX . mX [ 39ULL ] * - 1.0E-6
+ t43 -> mX . mX [ 40ULL ] * 1.0E-6 ) * 1.0E+12 + - t43 -> mX . mX [ 22ULL ]
* 100.0 ) ; } if ( t43 -> mM . mX [ 57ULL ] != 0 ) { t6 = t7 - ( - t43 -> mX
. mX [ 28ULL ] * 100.0 + 5.0 ) ; } else if ( t43 -> mM . mX [ 58ULL ] != 0 )
{ t6 = t7 - - t43 -> mX . mX [ 28ULL ] * 100.0 ; } else { t6 = t7 - ( ( t43
-> mX . mX [ 39ULL ] * - 1.0E-6 + t43 -> mX . mX [ 41ULL ] * 1.0E-6 ) *
1.0E+12 + - t43 -> mX . mX [ 28ULL ] * 100.0 ) ; } if ( t43 -> mM . mX [
59ULL ] != 0 ) { out -> mF . mX [ 35ULL ] = t43 -> mX . mX [ 45ULL ] - ( t15
- 0.799999992 ) / 0.001 ; } else { out -> mF . mX [ 35ULL ] = t43 -> mX . mX
[ 45ULL ] - t15 * 1.0E-5 ; } if ( t43 -> mM . mX [ 60ULL ] != 0 ) { out -> mF
. mX [ 36ULL ] = t43 -> mX . mX [ 47ULL ] - ( t43 -> mX . mX [ 37ULL ] -
0.799999992 ) / 0.001 ; } else { out -> mF . mX [ 36ULL ] = t43 -> mX . mX [
47ULL ] - t43 -> mX . mX [ 37ULL ] * 1.0E-5 ; } if ( t43 -> mM . mX [ 61ULL ]
!= 0 ) { out -> mF . mX [ 37ULL ] = t43 -> mX . mX [ 48ULL ] - ( t35 -
0.799999992 ) / 0.001 ; } else { out -> mF . mX [ 37ULL ] = t43 -> mX . mX [
48ULL ] - t35 * 1.0E-5 ; } if ( t43 -> mM . mX [ 62ULL ] != 0 ) { out -> mF .
mX [ 38ULL ] = t43 -> mX . mX [ 50ULL ] - ( t32 - 0.799999992 ) / 0.001 ; }
else { out -> mF . mX [ 38ULL ] = t43 -> mX . mX [ 50ULL ] - t32 * 1.0E-5 ; }
if ( t43 -> mM . mX [ 63ULL ] != 0 ) { out -> mF . mX [ 39ULL ] = t43 -> mX .
mX [ 51ULL ] - ( t43 -> mX . mX [ 36ULL ] - 0.799999992 ) / 0.001 ; } else {
out -> mF . mX [ 39ULL ] = t43 -> mX . mX [ 51ULL ] - t43 -> mX . mX [ 36ULL
] * 1.0E-5 ; } if ( ( size_t ) t43 -> mQ . mX [ 0ULL ] == 1ULL ) { out -> mF
. mX [ 46ULL ] = t43 -> mX . mX [ 25ULL ] - - 5.0 ; } else if ( ( size_t )
t43 -> mQ . mX [ 0ULL ] == 2ULL ) { out -> mF . mX [ 46ULL ] = t43 -> mX . mX
[ 25ULL ] - 5.0 ; } else if ( ( size_t ) t43 -> mQ . mX [ 0ULL ] == 3ULL ) {
out -> mF . mX [ 46ULL ] = t43 -> mX . mX [ 25ULL ] - 5.0 ; } else { out ->
mF . mX [ 46ULL ] = t43 -> mX . mX [ 25ULL ] - - 5.0 ; } if ( ( size_t ) t43
-> mQ . mX [ 1ULL ] == 1ULL ) { out -> mF . mX [ 47ULL ] =
Thyristor_Piecewise_Linear_iak - Thyristor_Piecewise_Linear_ideal_switch_v *
1.0E-5 ; } else if ( ( size_t ) t43 -> mQ . mX [ 1ULL ] == 2ULL ) { out -> mF
. mX [ 47ULL ] = Thyristor_Piecewise_Linear_iak -
Thyristor_Piecewise_Linear_ideal_switch_v * 1.0E-5 ; } else if ( ( size_t )
t43 -> mQ . mX [ 1ULL ] == 3ULL ) { if ( t43 -> mM . mX [ 66ULL ] != 0 ) {
out -> mF . mX [ 47ULL ] = Thyristor_Piecewise_Linear_iak - (
Thyristor_Piecewise_Linear_ideal_switch_v * 1.0E-5 + (
Thyristor_Piecewise_Linear_ideal_switch_v - 0.8 ) * 0.99999999 / 0.001 ) ; }
else { out -> mF . mX [ 47ULL ] = Thyristor_Piecewise_Linear_iak -
Thyristor_Piecewise_Linear_ideal_switch_v * 1.0E-5 ; } } else if ( ( size_t )
t43 -> mQ . mX [ 1ULL ] == 4ULL ) { if ( t43 -> mM . mX [ 66ULL ] != 0 ) {
out -> mF . mX [ 47ULL ] = Thyristor_Piecewise_Linear_iak - (
Thyristor_Piecewise_Linear_ideal_switch_v * 1.0E-5 + (
Thyristor_Piecewise_Linear_ideal_switch_v - 0.8 ) * 0.99999999 / 0.001 ) ; }
else { out -> mF . mX [ 47ULL ] = Thyristor_Piecewise_Linear_iak -
Thyristor_Piecewise_Linear_ideal_switch_v * 1.0E-5 ; } } else if ( t43 -> mM
. mX [ 67ULL ] != 0 ) { zc_int11 = t43 -> mD . mX [ 3ULL ] * 0.001 +
0.799999992 ; out -> mF . mX [ 47ULL ] = Thyristor_Piecewise_Linear_iak -
Thyristor_Piecewise_Linear_ideal_switch_v * t43 -> mD . mX [ 3ULL ] / (
zc_int11 == 0.0 ? 1.0E-16 : zc_int11 ) ; } else { out -> mF . mX [ 47ULL ] =
Thyristor_Piecewise_Linear_iak - Thyristor_Piecewise_Linear_ideal_switch_v *
1.0E-5 ; } if ( ( size_t ) t43 -> mQ . mX [ 2ULL ] == 1ULL ) { out -> mF . mX
[ 48ULL ] = Thyristor_Piecewise_Linear1_iak - - t43 -> mX . mX [ 18ULL ] *
1.0E-5 ; } else if ( ( size_t ) t43 -> mQ . mX [ 2ULL ] == 2ULL ) { out -> mF
. mX [ 48ULL ] = Thyristor_Piecewise_Linear1_iak - - t43 -> mX . mX [ 18ULL ]
* 1.0E-5 ; } else if ( ( size_t ) t43 -> mQ . mX [ 2ULL ] == 3ULL ) { if (
t43 -> mM . mX [ 68ULL ] != 0 ) { out -> mF . mX [ 48ULL ] =
Thyristor_Piecewise_Linear1_iak - ( - t43 -> mX . mX [ 18ULL ] * 1.0E-5 + ( -
t43 -> mX . mX [ 18ULL ] - 0.8 ) * 0.99999999 / 0.001 ) ; } else { out -> mF
. mX [ 48ULL ] = Thyristor_Piecewise_Linear1_iak - - t43 -> mX . mX [ 18ULL ]
* 1.0E-5 ; } } else if ( ( size_t ) t43 -> mQ . mX [ 2ULL ] == 4ULL ) { if (
t43 -> mM . mX [ 68ULL ] != 0 ) { out -> mF . mX [ 48ULL ] =
Thyristor_Piecewise_Linear1_iak - ( - t43 -> mX . mX [ 18ULL ] * 1.0E-5 + ( -
t43 -> mX . mX [ 18ULL ] - 0.8 ) * 0.99999999 / 0.001 ) ; } else { out -> mF
. mX [ 48ULL ] = Thyristor_Piecewise_Linear1_iak - - t43 -> mX . mX [ 18ULL ]
* 1.0E-5 ; } } else if ( t43 -> mM . mX [ 69ULL ] != 0 ) { zc_int11 = t43 ->
mD . mX [ 5ULL ] * 0.001 + 0.799999992 ; out -> mF . mX [ 48ULL ] =
Thyristor_Piecewise_Linear1_iak - - t43 -> mX . mX [ 18ULL ] * t43 -> mD . mX
[ 5ULL ] / ( zc_int11 == 0.0 ? 1.0E-16 : zc_int11 ) ; } else { out -> mF . mX
[ 48ULL ] = Thyristor_Piecewise_Linear1_iak - - t43 -> mX . mX [ 18ULL ] *
1.0E-5 ; } if ( ( size_t ) t43 -> mQ . mX [ 3ULL ] == 1ULL ) { out -> mF . mX
[ 49ULL ] = t43 -> mX . mX [ 19ULL ] -
Thyristor_Piecewise_Linear2_ideal_switch_v * 1.0E-5 ; } else if ( ( size_t )
t43 -> mQ . mX [ 3ULL ] == 2ULL ) { out -> mF . mX [ 49ULL ] = t43 -> mX . mX
[ 19ULL ] - Thyristor_Piecewise_Linear2_ideal_switch_v * 1.0E-5 ; } else if (
( size_t ) t43 -> mQ . mX [ 3ULL ] == 3ULL ) { if ( t43 -> mM . mX [ 70ULL ]
!= 0 ) { out -> mF . mX [ 49ULL ] = t43 -> mX . mX [ 19ULL ] - (
Thyristor_Piecewise_Linear2_ideal_switch_v * 1.0E-5 + (
Thyristor_Piecewise_Linear2_ideal_switch_v - 0.8 ) * 0.99999999 / 0.001 ) ; }
else { out -> mF . mX [ 49ULL ] = t43 -> mX . mX [ 19ULL ] -
Thyristor_Piecewise_Linear2_ideal_switch_v * 1.0E-5 ; } } else if ( ( size_t
) t43 -> mQ . mX [ 3ULL ] == 4ULL ) { if ( t43 -> mM . mX [ 70ULL ] != 0 ) {
out -> mF . mX [ 49ULL ] = t43 -> mX . mX [ 19ULL ] - (
Thyristor_Piecewise_Linear2_ideal_switch_v * 1.0E-5 + (
Thyristor_Piecewise_Linear2_ideal_switch_v - 0.8 ) * 0.99999999 / 0.001 ) ; }
else { out -> mF . mX [ 49ULL ] = t43 -> mX . mX [ 19ULL ] -
Thyristor_Piecewise_Linear2_ideal_switch_v * 1.0E-5 ; } } else if ( t43 -> mM
. mX [ 71ULL ] != 0 ) { zc_int11 = t43 -> mD . mX [ 7ULL ] * 0.001 +
0.799999992 ; out -> mF . mX [ 49ULL ] = t43 -> mX . mX [ 19ULL ] -
Thyristor_Piecewise_Linear2_ideal_switch_v * t43 -> mD . mX [ 7ULL ] / (
zc_int11 == 0.0 ? 1.0E-16 : zc_int11 ) ; } else { out -> mF . mX [ 49ULL ] =
t43 -> mX . mX [ 19ULL ] - Thyristor_Piecewise_Linear2_ideal_switch_v *
1.0E-5 ; } if ( ( size_t ) t43 -> mQ . mX [ 4ULL ] == 1ULL ) { out -> mF . mX
[ 50ULL ] = t43 -> mX . mX [ 20ULL ] - - t43 -> mX . mX [ 17ULL ] * 1.0E-5 ;
} else if ( ( size_t ) t43 -> mQ . mX [ 4ULL ] == 2ULL ) { out -> mF . mX [
50ULL ] = t43 -> mX . mX [ 20ULL ] - - t43 -> mX . mX [ 17ULL ] * 1.0E-5 ; }
else if ( ( size_t ) t43 -> mQ . mX [ 4ULL ] == 3ULL ) { if ( t43 -> mM . mX
[ 72ULL ] != 0 ) { out -> mF . mX [ 50ULL ] = t43 -> mX . mX [ 20ULL ] - ( -
t43 -> mX . mX [ 17ULL ] * 1.0E-5 + ( - t43 -> mX . mX [ 17ULL ] - 0.8 ) *
0.99999999 / 0.001 ) ; } else { out -> mF . mX [ 50ULL ] = t43 -> mX . mX [
20ULL ] - - t43 -> mX . mX [ 17ULL ] * 1.0E-5 ; } } else if ( ( size_t ) t43
-> mQ . mX [ 4ULL ] == 4ULL ) { if ( t43 -> mM . mX [ 72ULL ] != 0 ) { out ->
mF . mX [ 50ULL ] = t43 -> mX . mX [ 20ULL ] - ( - t43 -> mX . mX [ 17ULL ] *
1.0E-5 + ( - t43 -> mX . mX [ 17ULL ] - 0.8 ) * 0.99999999 / 0.001 ) ; } else
{ out -> mF . mX [ 50ULL ] = t43 -> mX . mX [ 20ULL ] - - t43 -> mX . mX [
17ULL ] * 1.0E-5 ; } } else if ( t43 -> mM . mX [ 73ULL ] != 0 ) { zc_int11 =
t43 -> mD . mX [ 9ULL ] * 0.001 + 0.799999992 ; out -> mF . mX [ 50ULL ] =
t43 -> mX . mX [ 20ULL ] - - t43 -> mX . mX [ 17ULL ] * t43 -> mD . mX [ 9ULL
] / ( zc_int11 == 0.0 ? 1.0E-16 : zc_int11 ) ; } else { out -> mF . mX [
50ULL ] = t43 -> mX . mX [ 20ULL ] - - t43 -> mX . mX [ 17ULL ] * 1.0E-5 ; }
out -> mF . mX [ 0ULL ] = - 0.0 ; out -> mF . mX [ 1ULL ] = - 0.0 ; out -> mF
. mX [ 2ULL ] = - 0.0 ; out -> mF . mX [ 3ULL ] = - 0.0 ; out -> mF . mX [
4ULL ] = - 0.0 ; out -> mF . mX [ 5ULL ] = - 0.0 ; out -> mF . mX [ 6ULL ] =
- 0.0 ; out -> mF . mX [ 7ULL ] = - 0.0 ; out -> mF . mX [ 8ULL ] = - 0.0 ;
out -> mF . mX [ 9ULL ] = - 0.0 ; out -> mF . mX [ 10ULL ] = - 0.0 ; out ->
mF . mX [ 11ULL ] = - 0.0 ; out -> mF . mX [ 12ULL ] = - 0.0 ; out -> mF . mX
[ 13ULL ] = - 0.0 ; out -> mF . mX [ 14ULL ] = - 0.0 ; out -> mF . mX [ 15ULL
] = - 0.0 ; out -> mF . mX [ 16ULL ] = - 0.0 ; out -> mF . mX [ 17ULL ] = - (
sin ( t43 -> mT . mX [ 0ULL ] * 314.15926535897933 ) * 311.0 ) ; out -> mF .
mX [ 18ULL ] = 0.0 ; out -> mF . mX [ 19ULL ] = - ( t0 * piece0 ) / 0.2 ; out
-> mF . mX [ 20ULL ] = 0.0 ; out -> mF . mX [ 21ULL ] = 0.0 ; out -> mF . mX
[ 22ULL ] = - zc_int10 / 0.2 ; out -> mF . mX [ 23ULL ] = 0.0 ; out -> mF .
mX [ 24ULL ] = ( real_T ) ( t43 -> mM . mX [ 49ULL ] != 0 ) / 0.2 - 5.0 ; out
-> mF . mX [ 25ULL ] = 0.0 ; out -> mF . mX [ 26ULL ] = 0.0 ; out -> mF . mX
[ 27ULL ] = 0.0 ; out -> mF . mX [ 33ULL ] = t5 / 100.0 ; out -> mF . mX [
34ULL ] = t6 / 100.0 ; out -> mF . mX [ 40ULL ] = - ( ( 5.0 - t43 -> mX . mX
[ 39ULL ] ) / ( zc_int12 == 0.0 ? 1.0E-16 : zc_int12 ) ) ; out -> mF . mX [
41ULL ] = - ( - t43 -> mX . mX [ 39ULL ] / ( 10000.0 - zc_int12 == 0.0 ?
1.0E-16 : 10000.0 - zc_int12 ) ) ; out -> mF . mX [ 42ULL ] = 0.0 ; out -> mF
. mX [ 43ULL ] = 0.0 ; out -> mF . mX [ 44ULL ] = - 0.0 ; out -> mF . mX [
45ULL ] = 0.0 ; out -> mF . mX [ 51ULL ] = - 0.005 ; out -> mF . mX [ 52ULL ]
= - 0.005 ; ( void ) sys ; ( void ) out ; return 0 ; }
