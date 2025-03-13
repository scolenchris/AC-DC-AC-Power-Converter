#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_mode.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_mode ( const NeDynamicSystem
* sys , const NeDynamicSystemInput * t8 , NeDsMethodOutput * out ) { real_T
Comparator_comparator1_A_v ; real_T Finite_Gain_Op_Amp1_i1 ; real_T
Finite_Gain_Op_Amp2_i1 ; real_T IGBT1_ideal_switch_G ; real_T
IGBT1_ideal_switch_v ; real_T IGBT2_ideal_switch_G ; real_T
IGBT2_ideal_switch_v ; real_T IGBT3_ideal_switch_v ; real_T
IGBT4_ideal_switch_v ; real_T IGBT_ideal_switch_v ; real_T Thyristor1_iak ;
real_T Thyristor1_ideal_switch_v ; real_T Thyristor2_iak ; real_T
Thyristor2_ideal_switch_v ; real_T Thyristor3_ideal_switch_v ; real_T
intrm_sf_mf_39 ; real_T intrm_sf_mf_44 ; real_T intrm_sf_mf_49 ; real_T t6 ;
boolean_T intrm_sf_mf_13 ; boolean_T intrm_sf_mf_14 ; boolean_T
intrm_sf_mf_16 ; boolean_T intrm_sf_mf_17 ; boolean_T t0 ; boolean_T t1 ;
boolean_T t2 ; boolean_T t3 ; boolean_T t4 ; Comparator_comparator1_A_v = t8
-> mX . mX [ 17ULL ] * 0.01 ; Finite_Gain_Op_Amp1_i1 = t8 -> mX . mX [ 29ULL
] * 1.0E-6 + t8 -> mX . mX [ 27ULL ] * - 1.0E-6 ; Finite_Gain_Op_Amp2_i1 = t8
-> mX . mX [ 25ULL ] * 1.0E-6 + t8 -> mX . mX [ 27ULL ] * - 1.0E-6 ;
IGBT_ideal_switch_v = ( ( ( ( t8 -> mX . mX [ 0ULL ] * 1.0E-6 + t8 -> mX . mX
[ 39ULL ] * 1.0E-6 ) + t8 -> mX . mX [ 18ULL ] * - 1.0E-6 ) + t8 -> mX . mX [
19ULL ] * 1.1102230246251565E-15 ) + t8 -> mX . mX [ 1ULL ] ) + t8 -> mX . mX
[ 9ULL ] ; IGBT1_ideal_switch_G = t8 -> mU . mX [ 1ULL ] * 10.0 ;
IGBT1_ideal_switch_v = ( ( t8 -> mX . mX [ 21ULL ] * 1.0E-6 - t8 -> mX . mX [
23ULL ] ) + t8 -> mX . mX [ 20ULL ] ) + t8 -> mX . mX [ 2ULL ] ;
IGBT2_ideal_switch_G = t8 -> mU . mX [ 2ULL ] * 10.0 ; IGBT2_ideal_switch_v =
- t8 -> mX . mX [ 20ULL ] + t8 -> mX . mX [ 23ULL ] ; IGBT3_ideal_switch_v =
( ( t8 -> mX . mX [ 21ULL ] * 1.0E-6 - t8 -> mX . mX [ 22ULL ] ) + t8 -> mX .
mX [ 20ULL ] ) + t8 -> mX . mX [ 2ULL ] ; IGBT4_ideal_switch_v = - t8 -> mX .
mX [ 20ULL ] + t8 -> mX . mX [ 22ULL ] ; Thyristor1_iak = ( ( - t8 -> mX . mX
[ 54ULL ] + t8 -> mX . mX [ 19ULL ] * 1.0E-9 ) - t8 -> mX . mX [ 15ULL ] ) +
t8 -> mX . mX [ 0ULL ] ; Thyristor1_ideal_switch_v = ( ( ( ( - t8 -> mX . mX
[ 1ULL ] + t8 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t8 -> mX . mX [ 20ULL ] ) +
t8 -> mX . mX [ 18ULL ] * 1.0E-6 ) + t8 -> mX . mX [ 19ULL ] * -
1.0000000000000011 ) + t8 -> mX . mX [ 17ULL ] ; Thyristor2_iak = ( ( - t8 ->
mX . mX [ 54ULL ] + t8 -> mX . mX [ 19ULL ] * 1.0E-9 ) - t8 -> mX . mX [
16ULL ] ) + t8 -> mX . mX [ 0ULL ] ; Thyristor2_ideal_switch_v = - t8 -> mX .
mX [ 17ULL ] + t8 -> mX . mX [ 20ULL ] ; Thyristor3_ideal_switch_v = ( ( ( -
t8 -> mX . mX [ 1ULL ] + t8 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t8 -> mX . mX
[ 20ULL ] ) + t8 -> mX . mX [ 18ULL ] * 1.0E-6 ) + t8 -> mX . mX [ 19ULL ] *
- 1.0000000000000011 ; if ( t8 -> mX . mX [ 42ULL ] < 0.0 ) { intrm_sf_mf_13
= ( t8 -> mX . mX [ 41ULL ] > 0.0 ) ; } else { intrm_sf_mf_13 = false ; } if
( t8 -> mX . mX [ 42ULL ] < 0.0 ) { intrm_sf_mf_14 = ( t8 -> mX . mX [ 41ULL
] < 0.0 ) ; } else { intrm_sf_mf_14 = false ; } if ( t8 -> mX . mX [ 44ULL ]
< 0.0 ) { intrm_sf_mf_16 = ( t8 -> mX . mX [ 43ULL ] > 0.0 ) ; } else {
intrm_sf_mf_16 = false ; } if ( t8 -> mX . mX [ 44ULL ] < 0.0 ) {
intrm_sf_mf_17 = ( t8 -> mX . mX [ 43ULL ] < 0.0 ) ; } else { intrm_sf_mf_17
= false ; } intrm_sf_mf_39 = - t8 -> mX . mX [ 13ULL ] * 38.921701457926758 ;
t6 = - t8 -> mX . mX [ 12ULL ] * 38.921701457926758 ; intrm_sf_mf_49 = - t8
-> mX . mX [ 14ULL ] * 38.921701457926758 ; intrm_sf_mf_44 = - t8 -> mX . mX
[ 11ULL ] * 38.921701457926758 ; if ( IGBT_ideal_switch_v > 0.8 ) { t0 = ( t8
-> mU . mX [ 0ULL ] > 6.0 ) ; } else { t0 = false ; } if (
IGBT1_ideal_switch_v > 0.8 ) { t1 = ( IGBT1_ideal_switch_G > 6.0 ) ; } else {
t1 = false ; } if ( IGBT2_ideal_switch_v > 0.8 ) { t2 = (
IGBT2_ideal_switch_G > 6.0 ) ; } else { t2 = false ; } if (
IGBT3_ideal_switch_v > 0.8 ) { t3 = ( IGBT2_ideal_switch_G > 6.0 ) ; } else {
t3 = false ; } if ( IGBT4_ideal_switch_v > 0.8 ) { t4 = (
IGBT1_ideal_switch_G > 6.0 ) ; } else { t4 = false ; } out -> mMODE . mX [
0ULL ] = ( int32_T ) ( ( ( size_t ) t8 -> mQ . mX [ 0ULL ] == 5ULL ) && ( (
Thyristor1_iak <= 0.0 ) || ( Thyristor1_ideal_switch_v <= 0.0 ) ) ) ; out ->
mMODE . mX [ 1ULL ] = ( int32_T ) ( ( Thyristor1_iak > 1.0 ) && ( ( size_t )
t8 -> mQ . mX [ 0ULL ] == 5ULL ) ) ; out -> mMODE . mX [ 2ULL ] = ( int32_T )
( ( Thyristor2_iak <= 1.0 ) && ( ( size_t ) t8 -> mQ . mX [ 1ULL ] == 4ULL )
) ; out -> mMODE . mX [ 3ULL ] = ( int32_T ) ( ( Thyristor2_iak > 1.0 ) && (
( size_t ) t8 -> mQ . mX [ 1ULL ] == 3ULL ) ) ; out -> mMODE . mX [ 4ULL ] =
( int32_T ) ( ( t8 -> mX . mX [ 56ULL ] < 6.0 ) && ( Thyristor2_iak <= 1.0 )
&& ( ( size_t ) t8 -> mQ . mX [ 1ULL ] == 3ULL ) ) ; out -> mMODE . mX [ 5ULL
] = ( int32_T ) ( ( Thyristor2_ideal_switch_v > 0.8 ) && ( t8 -> mX . mX [
56ULL ] >= 6.0 ) && ( ( size_t ) t8 -> mQ . mX [ 1ULL ] == 2ULL ) ) ; out ->
mMODE . mX [ 6ULL ] = ( int32_T ) ( ( t8 -> mX . mX [ 56ULL ] > 6.0 ) && ( (
size_t ) t8 -> mQ . mX [ 1ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 7ULL ] = (
int32_T ) ( ( t8 -> mX . mX [ 56ULL ] < 6.0 ) && ( ( size_t ) t8 -> mQ . mX [
1ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 8ULL ] = ( int32_T ) ( ( ( size_t )
t8 -> mQ . mX [ 2ULL ] == 5ULL ) && ( ( t8 -> mX . mX [ 15ULL ] <= 0.0 ) || (
Thyristor3_ideal_switch_v <= 0.0 ) ) ) ; out -> mMODE . mX [ 9ULL ] = (
int32_T ) ( ( t8 -> mX . mX [ 15ULL ] > 0.001 ) && ( ( size_t ) t8 -> mQ . mX
[ 2ULL ] == 5ULL ) ) ; out -> mMODE . mX [ 10ULL ] = ( int32_T ) ( ( t8 -> mX
. mX [ 15ULL ] <= 0.001 ) && ( ( size_t ) t8 -> mQ . mX [ 2ULL ] == 4ULL ) )
; out -> mMODE . mX [ 11ULL ] = ( int32_T ) ( ( t8 -> mX . mX [ 15ULL ] >
0.001 ) && ( ( size_t ) t8 -> mQ . mX [ 2ULL ] == 3ULL ) ) ; out -> mMODE .
mX [ 12ULL ] = ( int32_T ) ( ( Thyristor1_iak <= 1.0 ) && ( ( size_t ) t8 ->
mQ . mX [ 0ULL ] == 4ULL ) ) ; out -> mMODE . mX [ 13ULL ] = ( int32_T ) ( (
t8 -> mX . mX [ 56ULL ] < 6.0 ) && ( t8 -> mX . mX [ 15ULL ] <= 0.001 ) && (
( size_t ) t8 -> mQ . mX [ 2ULL ] == 3ULL ) ) ; out -> mMODE . mX [ 14ULL ] =
( int32_T ) ( ( Thyristor3_ideal_switch_v > 0.8 ) && ( t8 -> mX . mX [ 56ULL
] >= 6.0 ) && ( ( size_t ) t8 -> mQ . mX [ 2ULL ] == 2ULL ) ) ; out -> mMODE
. mX [ 15ULL ] = ( int32_T ) ( ( t8 -> mX . mX [ 56ULL ] > 6.0 ) && ( (
size_t ) t8 -> mQ . mX [ 2ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 16ULL ] = (
int32_T ) ( ( t8 -> mX . mX [ 56ULL ] < 6.0 ) && ( ( size_t ) t8 -> mQ . mX [
2ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 17ULL ] = ( int32_T ) ( ( ( size_t )
t8 -> mQ . mX [ 3ULL ] == 5ULL ) && ( ( t8 -> mX . mX [ 16ULL ] <= 0.0 ) || (
t8 -> mX . mX [ 20ULL ] <= 0.0 ) ) ) ; out -> mMODE . mX [ 18ULL ] = (
int32_T ) ( ( t8 -> mX . mX [ 16ULL ] > 1.0 ) && ( ( size_t ) t8 -> mQ . mX [
3ULL ] == 5ULL ) ) ; out -> mMODE . mX [ 19ULL ] = ( int32_T ) ( ( t8 -> mX .
mX [ 16ULL ] <= 1.0 ) && ( ( size_t ) t8 -> mQ . mX [ 3ULL ] == 4ULL ) ) ;
out -> mMODE . mX [ 20ULL ] = ( int32_T ) ( ( t8 -> mX . mX [ 16ULL ] > 1.0 )
&& ( ( size_t ) t8 -> mQ . mX [ 3ULL ] == 3ULL ) ) ; out -> mMODE . mX [
21ULL ] = ( int32_T ) ( ( t8 -> mX . mX [ 57ULL ] < 6.0 ) && ( t8 -> mX . mX
[ 16ULL ] <= 1.0 ) && ( ( size_t ) t8 -> mQ . mX [ 3ULL ] == 3ULL ) ) ; out
-> mMODE . mX [ 22ULL ] = ( int32_T ) ( ( t8 -> mX . mX [ 20ULL ] > 0.8 ) &&
( t8 -> mX . mX [ 57ULL ] >= 6.0 ) && ( ( size_t ) t8 -> mQ . mX [ 3ULL ] ==
2ULL ) ) ; out -> mMODE . mX [ 23ULL ] = ( int32_T ) ( ( Thyristor1_iak > 1.0
) && ( ( size_t ) t8 -> mQ . mX [ 0ULL ] == 3ULL ) ) ; out -> mMODE . mX [
24ULL ] = ( int32_T ) ( ( t8 -> mX . mX [ 57ULL ] > 6.0 ) && ( ( size_t ) t8
-> mQ . mX [ 3ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 25ULL ] = ( int32_T ) (
( t8 -> mX . mX [ 57ULL ] < 6.0 ) && ( ( size_t ) t8 -> mQ . mX [ 3ULL ] ==
1ULL ) ) ; out -> mMODE . mX [ 26ULL ] = ( int32_T ) ( ( t8 -> mX . mX [
57ULL ] < 6.0 ) && ( Thyristor1_iak <= 1.0 ) && ( ( size_t ) t8 -> mQ . mX [
0ULL ] == 3ULL ) ) ; out -> mMODE . mX [ 27ULL ] = ( int32_T ) ( (
Thyristor1_ideal_switch_v > 0.8 ) && ( t8 -> mX . mX [ 57ULL ] >= 6.0 ) && (
( size_t ) t8 -> mQ . mX [ 0ULL ] == 2ULL ) ) ; out -> mMODE . mX [ 28ULL ] =
( int32_T ) ( ( t8 -> mX . mX [ 57ULL ] > 6.0 ) && ( ( size_t ) t8 -> mQ . mX
[ 0ULL ] == 1ULL ) ) ; out -> mMODE . mX [ 29ULL ] = ( int32_T ) ( ( t8 -> mX
. mX [ 57ULL ] < 6.0 ) && ( ( size_t ) t8 -> mQ . mX [ 0ULL ] == 1ULL ) ) ;
out -> mMODE . mX [ 30ULL ] = ( int32_T ) ( ( ( size_t ) t8 -> mQ . mX [ 1ULL
] == 5ULL ) && ( ( Thyristor2_iak <= 0.0 ) || ( Thyristor2_ideal_switch_v <=
0.0 ) ) ) ; out -> mMODE . mX [ 31ULL ] = ( int32_T ) ( ( Thyristor2_iak >
1.0 ) && ( ( size_t ) t8 -> mQ . mX [ 1ULL ] == 5ULL ) ) ; out -> mMODE . mX
[ 32ULL ] = ( int32_T ) ( IGBT_ideal_switch_v - 0.8 <= t8 -> mU . mX [ 0ULL ]
- 6.0 ) ; out -> mMODE . mX [ 33ULL ] = ( int32_T ) ( IGBT1_ideal_switch_v -
0.8 <= IGBT1_ideal_switch_G - 6.0 ) ; out -> mMODE . mX [ 34ULL ] = ( int32_T
) ( IGBT2_ideal_switch_v - 0.8 <= IGBT2_ideal_switch_G - 6.0 ) ; out -> mMODE
. mX [ 35ULL ] = ( int32_T ) ( IGBT3_ideal_switch_v - 0.8 <=
IGBT2_ideal_switch_G - 6.0 ) ; out -> mMODE . mX [ 36ULL ] = ( int32_T ) (
IGBT4_ideal_switch_v - 0.8 <= IGBT1_ideal_switch_G - 6.0 ) ; out -> mMODE .
mX [ 37ULL ] = ( int32_T ) ( intrm_sf_mf_39 > 40.0 ) ; out -> mMODE . mX [
38ULL ] = ( int32_T ) ( intrm_sf_mf_39 < - 39.0 ) ; out -> mMODE . mX [ 39ULL
] = ( int32_T ) ( t6 > 40.0 ) ; out -> mMODE . mX [ 40ULL ] = ( int32_T ) (
t6 < - 39.0 ) ; out -> mMODE . mX [ 41ULL ] = ( int32_T ) ( intrm_sf_mf_49 >
40.0 ) ; out -> mMODE . mX [ 42ULL ] = ( int32_T ) ( intrm_sf_mf_49 < - 39.0
) ; out -> mMODE . mX [ 43ULL ] = ( int32_T ) ( intrm_sf_mf_44 > 40.0 ) ; out
-> mMODE . mX [ 44ULL ] = ( int32_T ) ( intrm_sf_mf_44 < - 39.0 ) ; out ->
mMODE . mX [ 45ULL ] = ( int32_T ) ! ( Comparator_comparator1_A_v > 0.005 ) ;
out -> mMODE . mX [ 46ULL ] = ( int32_T ) ( Comparator_comparator1_A_v >
0.005 ) ; out -> mMODE . mX [ 47ULL ] = ( int32_T ) ! ( -
Comparator_comparator1_A_v > 0.005 ) ; out -> mMODE . mX [ 48ULL ] = (
int32_T ) ( - Comparator_comparator1_A_v > 0.005 ) ; out -> mMODE . mX [
49ULL ] = ( int32_T ) ( t8 -> mX . mX [ 40ULL ] < 0.0 ) ; out -> mMODE . mX [
50ULL ] = ( int32_T ) ( ( t8 -> mX . mX [ 32ULL ] * 1.0E-6 + t8 -> mX . mX [
7ULL ] ) * 1.602176487E-19 / 4.1186322001386077E-21 < - 79.0 ) ; out -> mMODE
. mX [ 51ULL ] = ( int32_T ) ( ( t8 -> mX . mX [ 34ULL ] * 1.0E-6 + t8 -> mX
. mX [ 8ULL ] ) * 1.602176487E-19 / 4.1186322001386077E-21 < - 79.0 ) ; out
-> mMODE . mX [ 52ULL ] = ( int32_T ) intrm_sf_mf_14 ; out -> mMODE . mX [
53ULL ] = ( int32_T ) intrm_sf_mf_13 ; out -> mMODE . mX [ 54ULL ] = (
int32_T ) intrm_sf_mf_17 ; out -> mMODE . mX [ 55ULL ] = ( int32_T )
intrm_sf_mf_16 ; out -> mMODE . mX [ 56ULL ] = ( int32_T ) ( t8 -> mX . mX [
48ULL ] < 0.0 ) ; out -> mMODE . mX [ 57ULL ] = ( int32_T ) ( t8 -> mX . mX [
49ULL ] < 0.0 ) ; out -> mMODE . mX [ 58ULL ] = ( int32_T ) ( t8 -> mX . mX [
51ULL ] < 0.0 ) ; out -> mMODE . mX [ 59ULL ] = ( int32_T ) ( t8 -> mX . mX [
53ULL ] < 0.0 ) ; out -> mMODE . mX [ 60ULL ] = ( int32_T ) ( t8 -> mX . mX [
55ULL ] < 0.0 ) ; out -> mMODE . mX [ 61ULL ] = ( int32_T ) (
Finite_Gain_Op_Amp1_i1 * 1.0E+12 > 15.0 ) ; out -> mMODE . mX [ 62ULL ] = (
int32_T ) ( Finite_Gain_Op_Amp1_i1 * 1.0E+12 < 0.0 ) ; out -> mMODE . mX [
63ULL ] = ( int32_T ) ( Finite_Gain_Op_Amp2_i1 * 1.0E+12 > 15.0 ) ; out ->
mMODE . mX [ 64ULL ] = ( int32_T ) ( Finite_Gain_Op_Amp2_i1 * 1.0E+12 < 0.0 )
; out -> mMODE . mX [ 65ULL ] = ( int32_T ) t0 ; out -> mMODE . mX [ 66ULL ]
= ( int32_T ) t1 ; out -> mMODE . mX [ 67ULL ] = ( int32_T ) t2 ; out ->
mMODE . mX [ 68ULL ] = ( int32_T ) t3 ; out -> mMODE . mX [ 69ULL ] = (
int32_T ) t4 ; out -> mMODE . mX [ 70ULL ] = ( int32_T ) ( t8 -> mU . mX [
3ULL ] < 0.0 ) ; out -> mMODE . mX [ 71ULL ] = ( int32_T ) ( t8 -> mU . mX [
3ULL ] > 1.0 ) ; out -> mMODE . mX [ 72ULL ] = ( int32_T ) (
Thyristor1_ideal_switch_v >= 0.8 ) ; out -> mMODE . mX [ 73ULL ] = ( int32_T
) ( Thyristor1_ideal_switch_v > 0.0 ) ; out -> mMODE . mX [ 74ULL ] = (
int32_T ) ( Thyristor2_ideal_switch_v >= 0.8 ) ; out -> mMODE . mX [ 75ULL ]
= ( int32_T ) ( Thyristor2_ideal_switch_v > 0.0 ) ; out -> mMODE . mX [ 76ULL
] = ( int32_T ) ( Thyristor3_ideal_switch_v >= 0.8 ) ; out -> mMODE . mX [
77ULL ] = ( int32_T ) ( Thyristor3_ideal_switch_v > 0.0 ) ; out -> mMODE . mX
[ 78ULL ] = ( int32_T ) ( t8 -> mX . mX [ 20ULL ] >= 0.8 ) ; out -> mMODE .
mX [ 79ULL ] = ( int32_T ) ( t8 -> mX . mX [ 20ULL ] > 0.0 ) ; ( void ) sys ;
( void ) out ; return 0 ; }
