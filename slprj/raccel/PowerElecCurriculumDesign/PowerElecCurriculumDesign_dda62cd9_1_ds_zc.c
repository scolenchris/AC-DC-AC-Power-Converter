#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_zc.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_zc ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t23 , NeDsMethodOutput * out ) { real_T
Comparator_comparator1_A_v ; real_T Finite_Gain_Op_Amp1_i1 ; real_T
Finite_Gain_Op_Amp2_i1 ; real_T IGBT1_ideal_switch_G ; real_T
IGBT1_ideal_switch_v ; real_T IGBT2_ideal_switch_G ; real_T
IGBT2_ideal_switch_v ; real_T IGBT3_ideal_switch_v ; real_T
IGBT4_ideal_switch_v ; real_T IGBT_ideal_switch_v ; real_T Thyristor1_iak ;
real_T Thyristor1_ideal_switch_v ; real_T Thyristor2_iak ; real_T
Thyristor2_ideal_switch_v ; real_T Thyristor3_ideal_switch_v ; real_T
intrm_sf_mf_39 ; real_T intrm_sf_mf_44 ; real_T intrm_sf_mf_49 ; real_T t21 ;
boolean_T intrm_sf_mf_13 ; boolean_T intrm_sf_mf_14 ; boolean_T
intrm_sf_mf_16 ; boolean_T intrm_sf_mf_17 ; boolean_T t3 ; boolean_T t4 ;
boolean_T t5 ; boolean_T t6 ; boolean_T t7 ; Comparator_comparator1_A_v = t23
-> mX . mX [ 17ULL ] * 0.01 ; Finite_Gain_Op_Amp1_i1 = t23 -> mX . mX [ 29ULL
] * 1.0E-6 + t23 -> mX . mX [ 27ULL ] * - 1.0E-6 ; Finite_Gain_Op_Amp2_i1 =
t23 -> mX . mX [ 25ULL ] * 1.0E-6 + t23 -> mX . mX [ 27ULL ] * - 1.0E-6 ;
IGBT_ideal_switch_v = ( ( ( ( t23 -> mX . mX [ 0ULL ] * 1.0E-6 + t23 -> mX .
mX [ 39ULL ] * 1.0E-6 ) + t23 -> mX . mX [ 18ULL ] * - 1.0E-6 ) + t23 -> mX .
mX [ 19ULL ] * 1.1102230246251565E-15 ) + t23 -> mX . mX [ 1ULL ] ) + t23 ->
mX . mX [ 9ULL ] ; IGBT1_ideal_switch_G = t23 -> mU . mX [ 1ULL ] * 10.0 ;
IGBT1_ideal_switch_v = ( ( t23 -> mX . mX [ 21ULL ] * 1.0E-6 - t23 -> mX . mX
[ 23ULL ] ) + t23 -> mX . mX [ 20ULL ] ) + t23 -> mX . mX [ 2ULL ] ;
IGBT2_ideal_switch_G = t23 -> mU . mX [ 2ULL ] * 10.0 ; IGBT2_ideal_switch_v
= - t23 -> mX . mX [ 20ULL ] + t23 -> mX . mX [ 23ULL ] ;
IGBT3_ideal_switch_v = ( ( t23 -> mX . mX [ 21ULL ] * 1.0E-6 - t23 -> mX . mX
[ 22ULL ] ) + t23 -> mX . mX [ 20ULL ] ) + t23 -> mX . mX [ 2ULL ] ;
IGBT4_ideal_switch_v = - t23 -> mX . mX [ 20ULL ] + t23 -> mX . mX [ 22ULL ]
; Thyristor1_iak = ( ( - t23 -> mX . mX [ 54ULL ] + t23 -> mX . mX [ 19ULL ]
* 1.0E-9 ) - t23 -> mX . mX [ 15ULL ] ) + t23 -> mX . mX [ 0ULL ] ;
Thyristor1_ideal_switch_v = ( ( ( ( - t23 -> mX . mX [ 1ULL ] + t23 -> mX .
mX [ 0ULL ] * - 1.0E-6 ) - t23 -> mX . mX [ 20ULL ] ) + t23 -> mX . mX [
18ULL ] * 1.0E-6 ) + t23 -> mX . mX [ 19ULL ] * - 1.0000000000000011 ) + t23
-> mX . mX [ 17ULL ] ; Thyristor2_iak = ( ( - t23 -> mX . mX [ 54ULL ] + t23
-> mX . mX [ 19ULL ] * 1.0E-9 ) - t23 -> mX . mX [ 16ULL ] ) + t23 -> mX . mX
[ 0ULL ] ; Thyristor2_ideal_switch_v = - t23 -> mX . mX [ 17ULL ] + t23 -> mX
. mX [ 20ULL ] ; Thyristor3_ideal_switch_v = ( ( ( - t23 -> mX . mX [ 1ULL ]
+ t23 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t23 -> mX . mX [ 20ULL ] ) + t23 ->
mX . mX [ 18ULL ] * 1.0E-6 ) + t23 -> mX . mX [ 19ULL ] * -
1.0000000000000011 ; if ( t23 -> mX . mX [ 42ULL ] < 0.0 ) { intrm_sf_mf_13 =
( t23 -> mX . mX [ 41ULL ] > 0.0 ) ; } else { intrm_sf_mf_13 = false ; } if (
t23 -> mX . mX [ 42ULL ] < 0.0 ) { intrm_sf_mf_14 = ( t23 -> mX . mX [ 41ULL
] < 0.0 ) ; } else { intrm_sf_mf_14 = false ; } if ( t23 -> mX . mX [ 44ULL ]
< 0.0 ) { intrm_sf_mf_16 = ( t23 -> mX . mX [ 43ULL ] > 0.0 ) ; } else {
intrm_sf_mf_16 = false ; } if ( t23 -> mX . mX [ 44ULL ] < 0.0 ) {
intrm_sf_mf_17 = ( t23 -> mX . mX [ 43ULL ] < 0.0 ) ; } else { intrm_sf_mf_17
= false ; } intrm_sf_mf_39 = - t23 -> mX . mX [ 13ULL ] * 38.921701457926758
; t21 = - t23 -> mX . mX [ 12ULL ] * 38.921701457926758 ; intrm_sf_mf_49 = -
t23 -> mX . mX [ 14ULL ] * 38.921701457926758 ; intrm_sf_mf_44 = - t23 -> mX
. mX [ 11ULL ] * 38.921701457926758 ; if ( t23 -> mM . mX [ 61ULL ] == 0 ) {
out -> mZC . mX [ 13ULL ] = - ( Finite_Gain_Op_Amp1_i1 * 1.0E+12 ) ; } else {
out -> mZC . mX [ 13ULL ] = 0.0 ; } if ( t23 -> mM . mX [ 63ULL ] == 0 ) {
out -> mZC . mX [ 15ULL ] = - ( Finite_Gain_Op_Amp2_i1 * 1.0E+12 ) ; } else {
out -> mZC . mX [ 15ULL ] = 0.0 ; } if ( t23 -> mM . mX [ 70ULL ] == 0 ) {
out -> mZC . mX [ 17ULL ] = t23 -> mU . mX [ 3ULL ] - 1.0 ; } else { out ->
mZC . mX [ 17ULL ] = 0.0 ; } if ( IGBT_ideal_switch_v > 0.8 ) { t3 = ( t23 ->
mU . mX [ 0ULL ] > 6.0 ) ; } else { t3 = false ; } if ( IGBT1_ideal_switch_v
> 0.8 ) { t4 = ( IGBT1_ideal_switch_G > 6.0 ) ; } else { t4 = false ; } if (
IGBT2_ideal_switch_v > 0.8 ) { t5 = ( IGBT2_ideal_switch_G > 6.0 ) ; } else {
t5 = false ; } if ( IGBT3_ideal_switch_v > 0.8 ) { t6 = (
IGBT2_ideal_switch_G > 6.0 ) ; } else { t6 = false ; } if (
IGBT4_ideal_switch_v > 0.8 ) { t7 = ( IGBT1_ideal_switch_G > 6.0 ) ; } else {
t7 = false ; } if ( ( ( size_t ) t23 -> mQ . mX [ 0ULL ] != 1ULL ) && ( (
size_t ) t23 -> mQ . mX [ 0ULL ] != 2ULL ) && ( ( size_t ) t23 -> mQ . mX [
0ULL ] == 3ULL ) ) { out -> mZC . mX [ 32ULL ] = Thyristor1_ideal_switch_v -
0.8 ; } else { out -> mZC . mX [ 32ULL ] = 0.0 ; } if ( ( ( size_t ) t23 ->
mQ . mX [ 0ULL ] != 1ULL ) && ( ( size_t ) t23 -> mQ . mX [ 0ULL ] != 2ULL )
&& ( ( size_t ) t23 -> mQ . mX [ 0ULL ] != 3ULL ) && ( ( size_t ) t23 -> mQ .
mX [ 0ULL ] == 4ULL ) ) { out -> mZC . mX [ 33ULL ] =
Thyristor1_ideal_switch_v - 0.8 ; } else { out -> mZC . mX [ 33ULL ] = 0.0 ;
} if ( ( ( size_t ) t23 -> mQ . mX [ 1ULL ] != 1ULL ) && ( ( size_t ) t23 ->
mQ . mX [ 1ULL ] != 2ULL ) && ( ( size_t ) t23 -> mQ . mX [ 1ULL ] == 3ULL )
) { out -> mZC . mX [ 43ULL ] = Thyristor2_ideal_switch_v - 0.8 ; } else {
out -> mZC . mX [ 43ULL ] = 0.0 ; } if ( ( ( size_t ) t23 -> mQ . mX [ 1ULL ]
!= 1ULL ) && ( ( size_t ) t23 -> mQ . mX [ 1ULL ] != 2ULL ) && ( ( size_t )
t23 -> mQ . mX [ 1ULL ] != 3ULL ) && ( ( size_t ) t23 -> mQ . mX [ 1ULL ] ==
4ULL ) ) { out -> mZC . mX [ 44ULL ] = Thyristor2_ideal_switch_v - 0.8 ; }
else { out -> mZC . mX [ 44ULL ] = 0.0 ; } if ( ( ( size_t ) t23 -> mQ . mX [
2ULL ] != 1ULL ) && ( ( size_t ) t23 -> mQ . mX [ 2ULL ] != 2ULL ) && ( (
size_t ) t23 -> mQ . mX [ 2ULL ] == 3ULL ) ) { out -> mZC . mX [ 54ULL ] =
Thyristor3_ideal_switch_v - 0.8 ; } else { out -> mZC . mX [ 54ULL ] = 0.0 ;
} if ( ( ( size_t ) t23 -> mQ . mX [ 2ULL ] != 1ULL ) && ( ( size_t ) t23 ->
mQ . mX [ 2ULL ] != 2ULL ) && ( ( size_t ) t23 -> mQ . mX [ 2ULL ] != 3ULL )
&& ( ( size_t ) t23 -> mQ . mX [ 2ULL ] == 4ULL ) ) { out -> mZC . mX [ 55ULL
] = Thyristor3_ideal_switch_v - 0.8 ; } else { out -> mZC . mX [ 55ULL ] =
0.0 ; } if ( ( ( size_t ) t23 -> mQ . mX [ 3ULL ] != 1ULL ) && ( ( size_t )
t23 -> mQ . mX [ 3ULL ] != 2ULL ) && ( ( size_t ) t23 -> mQ . mX [ 3ULL ] ==
3ULL ) ) { out -> mZC . mX [ 65ULL ] = t23 -> mX . mX [ 20ULL ] - 0.8 ; }
else { out -> mZC . mX [ 65ULL ] = 0.0 ; } if ( ( ( size_t ) t23 -> mQ . mX [
3ULL ] != 1ULL ) && ( ( size_t ) t23 -> mQ . mX [ 3ULL ] != 2ULL ) && ( (
size_t ) t23 -> mQ . mX [ 3ULL ] != 3ULL ) && ( ( size_t ) t23 -> mQ . mX [
3ULL ] == 4ULL ) ) { out -> mZC . mX [ 66ULL ] = t23 -> mX . mX [ 20ULL ] -
0.8 ; } else { out -> mZC . mX [ 66ULL ] = 0.0 ; } if ( t23 -> mM . mX [
37ULL ] == 0 ) { out -> mZC . mX [ 77ULL ] = - 39.0 - intrm_sf_mf_39 ; } else
{ out -> mZC . mX [ 77ULL ] = 0.0 ; } if ( t23 -> mM . mX [ 39ULL ] == 0 ) {
out -> mZC . mX [ 79ULL ] = - 39.0 - t21 ; } else { out -> mZC . mX [ 79ULL ]
= 0.0 ; } if ( t23 -> mM . mX [ 41ULL ] == 0 ) { out -> mZC . mX [ 81ULL ] =
- 39.0 - intrm_sf_mf_49 ; } else { out -> mZC . mX [ 81ULL ] = 0.0 ; } if (
t23 -> mM . mX [ 43ULL ] == 0 ) { out -> mZC . mX [ 83ULL ] = - 39.0 -
intrm_sf_mf_44 ; } else { out -> mZC . mX [ 83ULL ] = 0.0 ; } out -> mZC . mX
[ 0ULL ] = ( real_T ) ( t23 -> mX . mX [ 40ULL ] < 0.0 ) ; out -> mZC . mX [
1ULL ] = ( real_T ) intrm_sf_mf_14 ; out -> mZC . mX [ 2ULL ] = ( real_T ) (
( t23 -> mM . mX [ 52ULL ] == 0 ) && intrm_sf_mf_13 ) ; out -> mZC . mX [
3ULL ] = ( real_T ) intrm_sf_mf_17 ; out -> mZC . mX [ 4ULL ] = ( real_T ) (
( t23 -> mM . mX [ 54ULL ] == 0 ) && intrm_sf_mf_16 ) ; out -> mZC . mX [
5ULL ] = ( real_T ) ( t23 -> mX . mX [ 48ULL ] < 0.0 ) ; out -> mZC . mX [
6ULL ] = ( real_T ) ( t23 -> mX . mX [ 49ULL ] < 0.0 ) ; out -> mZC . mX [
7ULL ] = ( real_T ) ( t23 -> mX . mX [ 51ULL ] < 0.0 ) ; out -> mZC . mX [
8ULL ] = ( real_T ) ( t23 -> mX . mX [ 53ULL ] < 0.0 ) ; out -> mZC . mX [
9ULL ] = ( real_T ) ( t23 -> mX . mX [ 55ULL ] < 0.0 ) ; out -> mZC . mX [
10ULL ] = - 79.0 - ( t23 -> mX . mX [ 32ULL ] * 1.0E-6 + t23 -> mX . mX [
7ULL ] ) * 1.602176487E-19 / 4.1186322001386077E-21 ; out -> mZC . mX [ 11ULL
] = - 79.0 - ( t23 -> mX . mX [ 34ULL ] * 1.0E-6 + t23 -> mX . mX [ 8ULL ] )
* 1.602176487E-19 / 4.1186322001386077E-21 ; out -> mZC . mX [ 12ULL ] =
Finite_Gain_Op_Amp1_i1 * 1.0E+12 - 15.0 ; out -> mZC . mX [ 14ULL ] =
Finite_Gain_Op_Amp2_i1 * 1.0E+12 - 15.0 ; out -> mZC . mX [ 16ULL ] = - t23
-> mU . mX [ 3ULL ] ; out -> mZC . mX [ 18ULL ] = - (
Comparator_comparator1_A_v - 0.005 ) ; out -> mZC . mX [ 19ULL ] =
Comparator_comparator1_A_v - 0.005 ; out -> mZC . mX [ 20ULL ] = - ( -
Comparator_comparator1_A_v - 0.005 ) ; out -> mZC . mX [ 21ULL ] = -
Comparator_comparator1_A_v - 0.005 ; out -> mZC . mX [ 22ULL ] = ( real_T )
t3 ; out -> mZC . mX [ 23ULL ] = ( t23 -> mU . mX [ 0ULL ] - 6.0 ) - (
IGBT_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 24ULL ] = ( real_T ) t4 ; out
-> mZC . mX [ 25ULL ] = ( IGBT1_ideal_switch_G - 6.0 ) - (
IGBT1_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 26ULL ] = ( real_T ) t5 ;
out -> mZC . mX [ 27ULL ] = ( IGBT2_ideal_switch_G - 6.0 ) - (
IGBT2_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 28ULL ] = ( real_T ) t6 ;
out -> mZC . mX [ 29ULL ] = ( IGBT2_ideal_switch_G - 6.0 ) - (
IGBT3_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 30ULL ] = ( real_T ) t7 ;
out -> mZC . mX [ 31ULL ] = ( IGBT1_ideal_switch_G - 6.0 ) - (
IGBT4_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 34ULL ] = ( ( size_t ) t23
-> mQ . mX [ 0ULL ] != 1ULL ) && ( ( size_t ) t23 -> mQ . mX [ 0ULL ] != 2ULL
) && ( ( size_t ) t23 -> mQ . mX [ 0ULL ] != 3ULL ) && ( ( size_t ) t23 -> mQ
. mX [ 0ULL ] != 4ULL ) ? Thyristor1_ideal_switch_v : 0.0 ; out -> mZC . mX [
35ULL ] = ( real_T ) ( ( t23 -> mX . mX [ 57ULL ] < 6.0 ) && ( ( size_t ) t23
-> mQ . mX [ 0ULL ] == 1ULL ) ) ; out -> mZC . mX [ 36ULL ] = ( real_T ) ( (
t23 -> mX . mX [ 57ULL ] > 6.0 ) && ( ( size_t ) t23 -> mQ . mX [ 0ULL ] ==
1ULL ) ) ; out -> mZC . mX [ 37ULL ] = ( real_T ) ( (
Thyristor1_ideal_switch_v > 0.8 ) && ( t23 -> mX . mX [ 57ULL ] >= 6.0 ) && (
( size_t ) t23 -> mQ . mX [ 0ULL ] == 2ULL ) ) ; out -> mZC . mX [ 38ULL ] =
( real_T ) ( ( t23 -> mX . mX [ 57ULL ] < 6.0 ) && ( Thyristor1_iak <= 1.0 )
&& ( ( size_t ) t23 -> mQ . mX [ 0ULL ] == 3ULL ) ) ; out -> mZC . mX [ 39ULL
] = ( real_T ) ( ( Thyristor1_iak > 1.0 ) && ( ( size_t ) t23 -> mQ . mX [
0ULL ] == 3ULL ) ) ; out -> mZC . mX [ 40ULL ] = ( real_T ) ( (
Thyristor1_iak <= 1.0 ) && ( ( size_t ) t23 -> mQ . mX [ 0ULL ] == 4ULL ) ) ;
out -> mZC . mX [ 41ULL ] = ( real_T ) ( ( Thyristor1_iak > 1.0 ) && ( (
size_t ) t23 -> mQ . mX [ 0ULL ] == 5ULL ) ) ; out -> mZC . mX [ 42ULL ] = (
real_T ) ( ( ( size_t ) t23 -> mQ . mX [ 0ULL ] == 5ULL ) && ( (
Thyristor1_iak <= 0.0 ) || ( Thyristor1_ideal_switch_v <= 0.0 ) ) ) ; out ->
mZC . mX [ 45ULL ] = ( ( size_t ) t23 -> mQ . mX [ 1ULL ] != 1ULL ) && ( (
size_t ) t23 -> mQ . mX [ 1ULL ] != 2ULL ) && ( ( size_t ) t23 -> mQ . mX [
1ULL ] != 3ULL ) && ( ( size_t ) t23 -> mQ . mX [ 1ULL ] != 4ULL ) ?
Thyristor2_ideal_switch_v : 0.0 ; out -> mZC . mX [ 46ULL ] = ( real_T ) ( (
t23 -> mX . mX [ 56ULL ] < 6.0 ) && ( ( size_t ) t23 -> mQ . mX [ 1ULL ] ==
1ULL ) ) ; out -> mZC . mX [ 47ULL ] = ( real_T ) ( ( t23 -> mX . mX [ 56ULL
] > 6.0 ) && ( ( size_t ) t23 -> mQ . mX [ 1ULL ] == 1ULL ) ) ; out -> mZC .
mX [ 48ULL ] = ( real_T ) ( ( Thyristor2_ideal_switch_v > 0.8 ) && ( t23 ->
mX . mX [ 56ULL ] >= 6.0 ) && ( ( size_t ) t23 -> mQ . mX [ 1ULL ] == 2ULL )
) ; out -> mZC . mX [ 49ULL ] = ( real_T ) ( ( t23 -> mX . mX [ 56ULL ] < 6.0
) && ( Thyristor2_iak <= 1.0 ) && ( ( size_t ) t23 -> mQ . mX [ 1ULL ] ==
3ULL ) ) ; out -> mZC . mX [ 50ULL ] = ( real_T ) ( ( Thyristor2_iak > 1.0 )
&& ( ( size_t ) t23 -> mQ . mX [ 1ULL ] == 3ULL ) ) ; out -> mZC . mX [ 51ULL
] = ( real_T ) ( ( Thyristor2_iak <= 1.0 ) && ( ( size_t ) t23 -> mQ . mX [
1ULL ] == 4ULL ) ) ; out -> mZC . mX [ 52ULL ] = ( real_T ) ( (
Thyristor2_iak > 1.0 ) && ( ( size_t ) t23 -> mQ . mX [ 1ULL ] == 5ULL ) ) ;
out -> mZC . mX [ 53ULL ] = ( real_T ) ( ( ( size_t ) t23 -> mQ . mX [ 1ULL ]
== 5ULL ) && ( ( Thyristor2_iak <= 0.0 ) || ( Thyristor2_ideal_switch_v <=
0.0 ) ) ) ; out -> mZC . mX [ 56ULL ] = ( ( size_t ) t23 -> mQ . mX [ 2ULL ]
!= 1ULL ) && ( ( size_t ) t23 -> mQ . mX [ 2ULL ] != 2ULL ) && ( ( size_t )
t23 -> mQ . mX [ 2ULL ] != 3ULL ) && ( ( size_t ) t23 -> mQ . mX [ 2ULL ] !=
4ULL ) ? Thyristor3_ideal_switch_v : 0.0 ; out -> mZC . mX [ 57ULL ] = (
real_T ) ( ( t23 -> mX . mX [ 56ULL ] < 6.0 ) && ( ( size_t ) t23 -> mQ . mX
[ 2ULL ] == 1ULL ) ) ; out -> mZC . mX [ 58ULL ] = ( real_T ) ( ( t23 -> mX .
mX [ 56ULL ] > 6.0 ) && ( ( size_t ) t23 -> mQ . mX [ 2ULL ] == 1ULL ) ) ;
out -> mZC . mX [ 59ULL ] = ( real_T ) ( ( Thyristor3_ideal_switch_v > 0.8 )
&& ( t23 -> mX . mX [ 56ULL ] >= 6.0 ) && ( ( size_t ) t23 -> mQ . mX [ 2ULL
] == 2ULL ) ) ; out -> mZC . mX [ 60ULL ] = ( real_T ) ( ( t23 -> mX . mX [
56ULL ] < 6.0 ) && ( t23 -> mX . mX [ 15ULL ] <= 0.001 ) && ( ( size_t ) t23
-> mQ . mX [ 2ULL ] == 3ULL ) ) ; out -> mZC . mX [ 61ULL ] = ( real_T ) ( (
t23 -> mX . mX [ 15ULL ] > 0.001 ) && ( ( size_t ) t23 -> mQ . mX [ 2ULL ] ==
3ULL ) ) ; out -> mZC . mX [ 62ULL ] = ( real_T ) ( ( t23 -> mX . mX [ 15ULL
] <= 0.001 ) && ( ( size_t ) t23 -> mQ . mX [ 2ULL ] == 4ULL ) ) ; out -> mZC
. mX [ 63ULL ] = ( real_T ) ( ( t23 -> mX . mX [ 15ULL ] > 0.001 ) && ( (
size_t ) t23 -> mQ . mX [ 2ULL ] == 5ULL ) ) ; out -> mZC . mX [ 64ULL ] = (
real_T ) ( ( ( size_t ) t23 -> mQ . mX [ 2ULL ] == 5ULL ) && ( ( t23 -> mX .
mX [ 15ULL ] <= 0.0 ) || ( Thyristor3_ideal_switch_v <= 0.0 ) ) ) ; out ->
mZC . mX [ 67ULL ] = ( ( size_t ) t23 -> mQ . mX [ 3ULL ] != 1ULL ) && ( (
size_t ) t23 -> mQ . mX [ 3ULL ] != 2ULL ) && ( ( size_t ) t23 -> mQ . mX [
3ULL ] != 3ULL ) && ( ( size_t ) t23 -> mQ . mX [ 3ULL ] != 4ULL ) ? t23 ->
mX . mX [ 20ULL ] : 0.0 ; out -> mZC . mX [ 68ULL ] = ( real_T ) ( ( t23 ->
mX . mX [ 57ULL ] < 6.0 ) && ( ( size_t ) t23 -> mQ . mX [ 3ULL ] == 1ULL ) )
; out -> mZC . mX [ 69ULL ] = ( real_T ) ( ( t23 -> mX . mX [ 57ULL ] > 6.0 )
&& ( ( size_t ) t23 -> mQ . mX [ 3ULL ] == 1ULL ) ) ; out -> mZC . mX [ 70ULL
] = ( real_T ) ( ( t23 -> mX . mX [ 20ULL ] > 0.8 ) && ( t23 -> mX . mX [
57ULL ] >= 6.0 ) && ( ( size_t ) t23 -> mQ . mX [ 3ULL ] == 2ULL ) ) ; out ->
mZC . mX [ 71ULL ] = ( real_T ) ( ( t23 -> mX . mX [ 57ULL ] < 6.0 ) && ( t23
-> mX . mX [ 16ULL ] <= 1.0 ) && ( ( size_t ) t23 -> mQ . mX [ 3ULL ] == 3ULL
) ) ; out -> mZC . mX [ 72ULL ] = ( real_T ) ( ( t23 -> mX . mX [ 16ULL ] >
1.0 ) && ( ( size_t ) t23 -> mQ . mX [ 3ULL ] == 3ULL ) ) ; out -> mZC . mX [
73ULL ] = ( real_T ) ( ( t23 -> mX . mX [ 16ULL ] <= 1.0 ) && ( ( size_t )
t23 -> mQ . mX [ 3ULL ] == 4ULL ) ) ; out -> mZC . mX [ 74ULL ] = ( real_T )
( ( t23 -> mX . mX [ 16ULL ] > 1.0 ) && ( ( size_t ) t23 -> mQ . mX [ 3ULL ]
== 5ULL ) ) ; out -> mZC . mX [ 75ULL ] = ( real_T ) ( ( ( size_t ) t23 -> mQ
. mX [ 3ULL ] == 5ULL ) && ( ( t23 -> mX . mX [ 16ULL ] <= 0.0 ) || ( t23 ->
mX . mX [ 20ULL ] <= 0.0 ) ) ) ; out -> mZC . mX [ 76ULL ] = intrm_sf_mf_39 -
40.0 ; out -> mZC . mX [ 78ULL ] = t21 - 40.0 ; out -> mZC . mX [ 80ULL ] =
intrm_sf_mf_49 - 40.0 ; out -> mZC . mX [ 82ULL ] = intrm_sf_mf_44 - 40.0 ; (
void ) sys ; ( void ) out ; return 0 ; }
