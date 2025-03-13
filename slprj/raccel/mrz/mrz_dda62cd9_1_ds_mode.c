#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_mode.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_mode ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t7 , NeDsMethodOutput * out ) { real_T CMOS_AND1_A_v ;
real_T CMOS_AND1_J_v ; real_T CMOS_AND_J_v ; real_T Finite_Gain_Op_Amp1_i1 ;
real_T Finite_Gain_Op_Amp_i1 ; real_T IGBT2_ideal_switch_v ; real_T
IGBT3_ideal_switch_v ; real_T IGBT_ideal_switch_v ; real_T Resistor3_n_v ;
real_T Thyristor_Piecewise_Linear1_iak ; real_T
Thyristor_Piecewise_Linear2_ideal_switch_v ; real_T
Thyristor_Piecewise_Linear_iak ; real_T
Thyristor_Piecewise_Linear_ideal_switch_v ; real_T intrm_sf_mf_1 ; real_T
intrm_sf_mf_10 ; real_T intrm_sf_mf_18 ; boolean_T t0 ; boolean_T t1 ;
boolean_T t2 ; boolean_T t3 ; boolean_T t4 ; intrm_sf_mf_18 = t7 -> mX . mX [
21ULL ] * 0.01 + t7 -> mX . mX [ 0ULL ] ; CMOS_AND_J_v = t7 -> mX . mX [
23ULL ] * 1.0E-6 + t7 -> mX . mX [ 2ULL ] ; CMOS_AND1_A_v = t7 -> mX . mX [
27ULL ] * 1.0E-6 + t7 -> mX . mX [ 4ULL ] ; CMOS_AND1_J_v = t7 -> mX . mX [
29ULL ] * 1.0E-6 + t7 -> mX . mX [ 6ULL ] ; Finite_Gain_Op_Amp_i1 = t7 -> mX
. mX [ 39ULL ] * - 1.0E-6 + t7 -> mX . mX [ 40ULL ] * 1.0E-6 ;
Finite_Gain_Op_Amp1_i1 = t7 -> mX . mX [ 39ULL ] * - 1.0E-6 + t7 -> mX . mX [
41ULL ] * 1.0E-6 ; IGBT_ideal_switch_v = ( - t7 -> mX . mX [ 34ULL ] - t7 ->
mX . mX [ 35ULL ] ) + t7 -> mX . mX [ 32ULL ] ; IGBT2_ideal_switch_v = - t7
-> mX . mX [ 37ULL ] + t7 -> mX . mX [ 34ULL ] ; IGBT3_ideal_switch_v = - t7
-> mX . mX [ 36ULL ] + t7 -> mX . mX [ 34ULL ] ; Resistor3_n_v = t7 -> mX .
mX [ 52ULL ] * 0.01 + t7 -> mX . mX [ 15ULL ] ;
Thyristor_Piecewise_Linear_iak = ( t7 -> mX . mX [ 33ULL ] * 1.0E-9 - t7 ->
mX . mX [ 19ULL ] ) + t7 -> mX . mX [ 8ULL ] ;
Thyristor_Piecewise_Linear_ideal_switch_v = ( - t7 -> mX . mX [ 32ULL ] - t7
-> mX . mX [ 33ULL ] ) + t7 -> mX . mX [ 18ULL ] ;
Thyristor_Piecewise_Linear1_iak = ( t7 -> mX . mX [ 33ULL ] * 1.0E-9 - t7 ->
mX . mX [ 20ULL ] ) + t7 -> mX . mX [ 8ULL ] ;
Thyristor_Piecewise_Linear2_ideal_switch_v = ( - t7 -> mX . mX [ 32ULL ] - t7
-> mX . mX [ 33ULL ] ) + t7 -> mX . mX [ 17ULL ] ; intrm_sf_mf_1 = ( t7 -> mX
. mX [ 22ULL ] * 0.01 + t7 -> mX . mX [ 1ULL ] ) - 1.0 ; intrm_sf_mf_10 = (
t7 -> mX . mX [ 28ULL ] * 0.01 + t7 -> mX . mX [ 5ULL ] ) - 1.0 ; if (
IGBT_ideal_switch_v > 0.8 ) { t0 = ( t7 -> mU . mX [ 0ULL ] > 6.0 ) ; } else
{ t0 = false ; } if ( t7 -> mX . mX [ 37ULL ] > 0.8 ) { t1 = ( t7 -> mU . mX
[ 2ULL ] > 6.0 ) ; } else { t1 = false ; } if ( IGBT2_ideal_switch_v > 0.8 )
{ t2 = ( t7 -> mU . mX [ 1ULL ] > 6.0 ) ; } else { t2 = false ; } if (
IGBT3_ideal_switch_v > 0.8 ) { t3 = ( t7 -> mU . mX [ 2ULL ] > 6.0 ) ; } else
{ t3 = false ; } if ( t7 -> mX . mX [ 36ULL ] > 0.8 ) { t4 = ( t7 -> mU . mX
[ 1ULL ] > 6.0 ) ; } else { t4 = false ; } out -> mMODE . mX [ 0ULL ] = (
int32_T ) ( ( Resistor3_n_v >= 0.1 ) && ( ( size_t ) t7 -> mQ . mX [ 0ULL ]
== 4ULL ) ) ; out -> mMODE . mX [ 1ULL ] = ( int32_T ) ( ( Resistor3_n_v <= -
0.1 ) && ( ( size_t ) t7 -> mQ . mX [ 0ULL ] == 3ULL ) ) ; out -> mMODE . mX
[ 2ULL ] = ( int32_T ) ( ( CMOS_AND1_J_v > 3.0 ) && ( ( size_t ) t7 -> mQ .
mX [ 1ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 3ULL ] = ( int32_T ) ( (
CMOS_AND1_J_v < 3.0 ) && ( ( size_t ) t7 -> mQ . mX [ 1ULL ] == 1ULL ) ) ;
out -> mMODE . mX [ 4ULL ] = ( int32_T ) ( ( ( size_t ) t7 -> mQ . mX [ 2ULL
] == 5ULL ) && ( ( Thyristor_Piecewise_Linear1_iak <= 0.0 ) || ( - t7 -> mX .
mX [ 18ULL ] <= 0.0 ) ) ) ; out -> mMODE . mX [ 5ULL ] = ( int32_T ) ( (
Thyristor_Piecewise_Linear1_iak > 1.0 ) && ( ( size_t ) t7 -> mQ . mX [ 2ULL
] == 5ULL ) ) ; out -> mMODE . mX [ 6ULL ] = ( int32_T ) ( (
Thyristor_Piecewise_Linear1_iak <= 1.0 ) && ( ( size_t ) t7 -> mQ . mX [ 2ULL
] == 4ULL ) ) ; out -> mMODE . mX [ 7ULL ] = ( int32_T ) ( (
Thyristor_Piecewise_Linear1_iak > 1.0 ) && ( ( size_t ) t7 -> mQ . mX [ 2ULL
] == 3ULL ) ) ; out -> mMODE . mX [ 8ULL ] = ( int32_T ) ( ( CMOS_AND_J_v <
3.0 ) && ( Thyristor_Piecewise_Linear1_iak <= 1.0 ) && ( ( size_t ) t7 -> mQ
. mX [ 2ULL ] == 3ULL ) ) ; out -> mMODE . mX [ 9ULL ] = ( int32_T ) ( ( - t7
-> mX . mX [ 18ULL ] > 0.8 ) && ( CMOS_AND_J_v >= 3.0 ) && ( ( size_t ) t7 ->
mQ . mX [ 2ULL ] == 2ULL ) ) ; out -> mMODE . mX [ 10ULL ] = ( int32_T ) ( (
CMOS_AND_J_v > 3.0 ) && ( ( size_t ) t7 -> mQ . mX [ 2ULL ] == 1ULL ) ) ; out
-> mMODE . mX [ 11ULL ] = ( int32_T ) ( ( CMOS_AND_J_v < 3.0 ) && ( ( size_t
) t7 -> mQ . mX [ 2ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 12ULL ] = (
int32_T ) ( ( Resistor3_n_v >= 0.1 ) && ( ( size_t ) t7 -> mQ . mX [ 0ULL ]
== 2ULL ) ) ; out -> mMODE . mX [ 13ULL ] = ( int32_T ) ( ( ( size_t ) t7 ->
mQ . mX [ 3ULL ] == 5ULL ) && ( ( t7 -> mX . mX [ 19ULL ] <= 0.0 ) || (
Thyristor_Piecewise_Linear2_ideal_switch_v <= 0.0 ) ) ) ; out -> mMODE . mX [
14ULL ] = ( int32_T ) ( ( t7 -> mX . mX [ 19ULL ] > 1.0 ) && ( ( size_t ) t7
-> mQ . mX [ 3ULL ] == 5ULL ) ) ; out -> mMODE . mX [ 15ULL ] = ( int32_T ) (
( t7 -> mX . mX [ 19ULL ] <= 1.0 ) && ( ( size_t ) t7 -> mQ . mX [ 3ULL ] ==
4ULL ) ) ; out -> mMODE . mX [ 16ULL ] = ( int32_T ) ( ( t7 -> mX . mX [
19ULL ] > 1.0 ) && ( ( size_t ) t7 -> mQ . mX [ 3ULL ] == 3ULL ) ) ; out ->
mMODE . mX [ 17ULL ] = ( int32_T ) ( ( CMOS_AND_J_v < 3.0 ) && ( t7 -> mX .
mX [ 19ULL ] <= 1.0 ) && ( ( size_t ) t7 -> mQ . mX [ 3ULL ] == 3ULL ) ) ;
out -> mMODE . mX [ 18ULL ] = ( int32_T ) ( (
Thyristor_Piecewise_Linear2_ideal_switch_v > 0.8 ) && ( CMOS_AND_J_v >= 3.0 )
&& ( ( size_t ) t7 -> mQ . mX [ 3ULL ] == 2ULL ) ) ; out -> mMODE . mX [
19ULL ] = ( int32_T ) ( ( CMOS_AND_J_v > 3.0 ) && ( ( size_t ) t7 -> mQ . mX
[ 3ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 20ULL ] = ( int32_T ) ( (
CMOS_AND_J_v < 3.0 ) && ( ( size_t ) t7 -> mQ . mX [ 3ULL ] == 1ULL ) ) ; out
-> mMODE . mX [ 21ULL ] = ( int32_T ) ( ( ( size_t ) t7 -> mQ . mX [ 4ULL ]
== 5ULL ) && ( ( t7 -> mX . mX [ 20ULL ] <= 0.0 ) || ( - t7 -> mX . mX [
17ULL ] <= 0.0 ) ) ) ; out -> mMODE . mX [ 22ULL ] = ( int32_T ) ( ( t7 -> mX
. mX [ 20ULL ] > 1.0 ) && ( ( size_t ) t7 -> mQ . mX [ 4ULL ] == 5ULL ) ) ;
out -> mMODE . mX [ 23ULL ] = ( int32_T ) ( ( Resistor3_n_v < 0.1 ) && ( (
size_t ) t7 -> mQ . mX [ 0ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 24ULL ] = (
int32_T ) ( ( t7 -> mX . mX [ 20ULL ] <= 1.0 ) && ( ( size_t ) t7 -> mQ . mX
[ 4ULL ] == 4ULL ) ) ; out -> mMODE . mX [ 25ULL ] = ( int32_T ) ( ( t7 -> mX
. mX [ 20ULL ] > 1.0 ) && ( ( size_t ) t7 -> mQ . mX [ 4ULL ] == 3ULL ) ) ;
out -> mMODE . mX [ 26ULL ] = ( int32_T ) ( ( CMOS_AND1_J_v < 3.0 ) && ( t7
-> mX . mX [ 20ULL ] <= 1.0 ) && ( ( size_t ) t7 -> mQ . mX [ 4ULL ] == 3ULL
) ) ; out -> mMODE . mX [ 27ULL ] = ( int32_T ) ( ( - t7 -> mX . mX [ 17ULL ]
> 0.8 ) && ( CMOS_AND1_J_v >= 3.0 ) && ( ( size_t ) t7 -> mQ . mX [ 4ULL ] ==
2ULL ) ) ; out -> mMODE . mX [ 28ULL ] = ( int32_T ) ( ( CMOS_AND1_J_v > 3.0
) && ( ( size_t ) t7 -> mQ . mX [ 4ULL ] == 1ULL ) ) ; out -> mMODE . mX [
29ULL ] = ( int32_T ) ( ( CMOS_AND1_J_v < 3.0 ) && ( ( size_t ) t7 -> mQ . mX
[ 4ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 30ULL ] = ( int32_T ) ( ( ( size_t
) t7 -> mQ . mX [ 1ULL ] == 5ULL ) && ( ( Thyristor_Piecewise_Linear_iak <=
0.0 ) || ( Thyristor_Piecewise_Linear_ideal_switch_v <= 0.0 ) ) ) ; out ->
mMODE . mX [ 31ULL ] = ( int32_T ) ( ( Thyristor_Piecewise_Linear_iak > 1.0 )
&& ( ( size_t ) t7 -> mQ . mX [ 1ULL ] == 5ULL ) ) ; out -> mMODE . mX [
32ULL ] = ( int32_T ) ( ( Thyristor_Piecewise_Linear_iak <= 1.0 ) && ( (
size_t ) t7 -> mQ . mX [ 1ULL ] == 4ULL ) ) ; out -> mMODE . mX [ 33ULL ] = (
int32_T ) ( ( Thyristor_Piecewise_Linear_iak > 1.0 ) && ( ( size_t ) t7 -> mQ
. mX [ 1ULL ] == 3ULL ) ) ; out -> mMODE . mX [ 34ULL ] = ( int32_T ) ( (
CMOS_AND1_J_v < 3.0 ) && ( Thyristor_Piecewise_Linear_iak <= 1.0 ) && ( (
size_t ) t7 -> mQ . mX [ 1ULL ] == 3ULL ) ) ; out -> mMODE . mX [ 35ULL ] = (
int32_T ) ( ( Thyristor_Piecewise_Linear_ideal_switch_v > 0.8 ) && (
CMOS_AND1_J_v >= 3.0 ) && ( ( size_t ) t7 -> mQ . mX [ 1ULL ] == 2ULL ) ) ;
out -> mMODE . mX [ 36ULL ] = ( int32_T ) ( IGBT_ideal_switch_v - 0.8 <= t7
-> mU . mX [ 0ULL ] - 6.0 ) ; out -> mMODE . mX [ 37ULL ] = ( int32_T ) ( t7
-> mX . mX [ 37ULL ] - 0.8 <= t7 -> mU . mX [ 2ULL ] - 6.0 ) ; out -> mMODE .
mX [ 38ULL ] = ( int32_T ) ( IGBT2_ideal_switch_v - 0.8 <= t7 -> mU . mX [
1ULL ] - 6.0 ) ; out -> mMODE . mX [ 39ULL ] = ( int32_T ) (
IGBT3_ideal_switch_v - 0.8 <= t7 -> mU . mX [ 2ULL ] - 6.0 ) ; out -> mMODE .
mX [ 40ULL ] = ( int32_T ) ( t7 -> mX . mX [ 36ULL ] - 0.8 <= t7 -> mU . mX [
1ULL ] - 6.0 ) ; out -> mMODE . mX [ 41ULL ] = ( int32_T ) ( intrm_sf_mf_18 -
1.0 > 1.0 ) ; out -> mMODE . mX [ 42ULL ] = ( int32_T ) ( intrm_sf_mf_18 -
1.0 < 0.0 ) ; out -> mMODE . mX [ 43ULL ] = ( int32_T ) ( intrm_sf_mf_1 > 1.0
) ; out -> mMODE . mX [ 44ULL ] = ( int32_T ) ( intrm_sf_mf_1 < 0.0 ) ; out
-> mMODE . mX [ 45ULL ] = ( int32_T ) ( CMOS_AND1_A_v - 1.0 > 1.0 ) ; out ->
mMODE . mX [ 46ULL ] = ( int32_T ) ( CMOS_AND1_A_v - 1.0 < 0.0 ) ; out ->
mMODE . mX [ 47ULL ] = ( int32_T ) ( intrm_sf_mf_10 > 1.0 ) ; out -> mMODE .
mX [ 48ULL ] = ( int32_T ) ( intrm_sf_mf_10 < 0.0 ) ; out -> mMODE . mX [
49ULL ] = ( int32_T ) ( ( intrm_sf_mf_18 - 2.5 ) / 0.5 > 0.5 ) ; out -> mMODE
. mX [ 50ULL ] = ( int32_T ) ( ( ( - t7 -> mX . mX [ 45ULL ] + t7 -> mX . mX
[ 35ULL ] * 1.0E-9 ) + t7 -> mX . mX [ 11ULL ] ) + ( - t7 -> mX . mX [ 34ULL
] - t7 -> mX . mX [ 35ULL ] ) < 0.600000006 ) ; out -> mMODE . mX [ 51ULL ] =
( int32_T ) ( ( ( ( ( - t7 -> mX . mX [ 48ULL ] + t7 -> mX . mX [ 38ULL ] *
1.0E-9 ) + t7 -> mX . mX [ 46ULL ] ) + t7 -> mX . mX [ 47ULL ] ) + t7 -> mX .
mX [ 13ULL ] ) - t7 -> mX . mX [ 37ULL ] < 0.600000006 ) ; out -> mMODE . mX
[ 52ULL ] = ( int32_T ) ( t7 -> mX . mX [ 46ULL ] + ( - t7 -> mX . mX [ 34ULL
] + t7 -> mX . mX [ 37ULL ] ) < 0.600000006 ) ; out -> mMODE . mX [ 53ULL ] =
( int32_T ) ( ( ( ( ( - t7 -> mX . mX [ 51ULL ] + t7 -> mX . mX [ 38ULL ] *
9.9999999947364415E-10 ) + t7 -> mX . mX [ 49ULL ] ) + t7 -> mX . mX [ 50ULL
] ) + t7 -> mX . mX [ 13ULL ] ) + ( - t7 -> mX . mX [ 34ULL ] + t7 -> mX . mX
[ 36ULL ] ) < 0.600000006 ) ; out -> mMODE . mX [ 54ULL ] = ( int32_T ) ( t7
-> mX . mX [ 49ULL ] - t7 -> mX . mX [ 36ULL ] < 0.600000006 ) ; out -> mMODE
. mX [ 55ULL ] = ( int32_T ) ( Finite_Gain_Op_Amp_i1 * 1.0E+12 > 5.0 ) ; out
-> mMODE . mX [ 56ULL ] = ( int32_T ) ( Finite_Gain_Op_Amp_i1 * 1.0E+12 < 0.0
) ; out -> mMODE . mX [ 57ULL ] = ( int32_T ) ( Finite_Gain_Op_Amp1_i1 *
1.0E+12 > 5.0 ) ; out -> mMODE . mX [ 58ULL ] = ( int32_T ) (
Finite_Gain_Op_Amp1_i1 * 1.0E+12 < 0.0 ) ; out -> mMODE . mX [ 59ULL ] = (
int32_T ) t0 ; out -> mMODE . mX [ 60ULL ] = ( int32_T ) t1 ; out -> mMODE .
mX [ 61ULL ] = ( int32_T ) t2 ; out -> mMODE . mX [ 62ULL ] = ( int32_T ) t3
; out -> mMODE . mX [ 63ULL ] = ( int32_T ) t4 ; out -> mMODE . mX [ 64ULL ]
= ( int32_T ) ( t7 -> mU . mX [ 3ULL ] < 0.0 ) ; out -> mMODE . mX [ 65ULL ]
= ( int32_T ) ( t7 -> mU . mX [ 3ULL ] > 1.0 ) ; out -> mMODE . mX [ 66ULL ]
= ( int32_T ) ( Thyristor_Piecewise_Linear_ideal_switch_v >= 0.8 ) ; out ->
mMODE . mX [ 67ULL ] = ( int32_T ) (
Thyristor_Piecewise_Linear_ideal_switch_v > 0.0 ) ; out -> mMODE . mX [ 68ULL
] = ( int32_T ) ( - t7 -> mX . mX [ 18ULL ] >= 0.8 ) ; out -> mMODE . mX [
69ULL ] = ( int32_T ) ( - t7 -> mX . mX [ 18ULL ] > 0.0 ) ; out -> mMODE . mX
[ 70ULL ] = ( int32_T ) ( Thyristor_Piecewise_Linear2_ideal_switch_v >= 0.8 )
; out -> mMODE . mX [ 71ULL ] = ( int32_T ) (
Thyristor_Piecewise_Linear2_ideal_switch_v > 0.0 ) ; out -> mMODE . mX [
72ULL ] = ( int32_T ) ( - t7 -> mX . mX [ 17ULL ] >= 0.8 ) ; out -> mMODE .
mX [ 73ULL ] = ( int32_T ) ( - t7 -> mX . mX [ 17ULL ] > 0.0 ) ; ( void ) sys
; ( void ) out ; return 0 ; }
