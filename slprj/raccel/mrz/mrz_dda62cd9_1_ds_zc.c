#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_zc.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_zc ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t18 , NeDsMethodOutput * out ) { real_T CMOS_AND1_J_v
; real_T CMOS_AND_J_v ; real_T Finite_Gain_Op_Amp1_i1 ; real_T
Finite_Gain_Op_Amp_i1 ; real_T IGBT2_ideal_switch_v ; real_T
IGBT3_ideal_switch_v ; real_T IGBT_ideal_switch_v ; real_T Resistor3_n_v ;
real_T Thyristor_Piecewise_Linear1_iak ; real_T
Thyristor_Piecewise_Linear2_ideal_switch_v ; real_T
Thyristor_Piecewise_Linear_iak ; real_T
Thyristor_Piecewise_Linear_ideal_switch_v ; real_T intrm_sf_mf_1 ; real_T
intrm_sf_mf_10 ; real_T intrm_sf_mf_18 ; real_T t0 ; boolean_T t3 ; boolean_T
t4 ; boolean_T t5 ; boolean_T t6 ; boolean_T t7 ; intrm_sf_mf_18 = t18 -> mX
. mX [ 21ULL ] * 0.01 + t18 -> mX . mX [ 0ULL ] ; CMOS_AND_J_v = t18 -> mX .
mX [ 23ULL ] * 1.0E-6 + t18 -> mX . mX [ 2ULL ] ; t0 = t18 -> mX . mX [ 27ULL
] * 1.0E-6 + t18 -> mX . mX [ 4ULL ] ; CMOS_AND1_J_v = t18 -> mX . mX [ 29ULL
] * 1.0E-6 + t18 -> mX . mX [ 6ULL ] ; Finite_Gain_Op_Amp_i1 = t18 -> mX . mX
[ 39ULL ] * - 1.0E-6 + t18 -> mX . mX [ 40ULL ] * 1.0E-6 ;
Finite_Gain_Op_Amp1_i1 = t18 -> mX . mX [ 39ULL ] * - 1.0E-6 + t18 -> mX . mX
[ 41ULL ] * 1.0E-6 ; IGBT_ideal_switch_v = ( - t18 -> mX . mX [ 34ULL ] - t18
-> mX . mX [ 35ULL ] ) + t18 -> mX . mX [ 32ULL ] ; IGBT2_ideal_switch_v = -
t18 -> mX . mX [ 37ULL ] + t18 -> mX . mX [ 34ULL ] ; IGBT3_ideal_switch_v =
- t18 -> mX . mX [ 36ULL ] + t18 -> mX . mX [ 34ULL ] ; Resistor3_n_v = t18
-> mX . mX [ 52ULL ] * 0.01 + t18 -> mX . mX [ 15ULL ] ;
Thyristor_Piecewise_Linear_iak = ( t18 -> mX . mX [ 33ULL ] * 1.0E-9 - t18 ->
mX . mX [ 19ULL ] ) + t18 -> mX . mX [ 8ULL ] ;
Thyristor_Piecewise_Linear_ideal_switch_v = ( - t18 -> mX . mX [ 32ULL ] -
t18 -> mX . mX [ 33ULL ] ) + t18 -> mX . mX [ 18ULL ] ;
Thyristor_Piecewise_Linear1_iak = ( t18 -> mX . mX [ 33ULL ] * 1.0E-9 - t18
-> mX . mX [ 20ULL ] ) + t18 -> mX . mX [ 8ULL ] ;
Thyristor_Piecewise_Linear2_ideal_switch_v = ( - t18 -> mX . mX [ 32ULL ] -
t18 -> mX . mX [ 33ULL ] ) + t18 -> mX . mX [ 17ULL ] ; intrm_sf_mf_1 = ( t18
-> mX . mX [ 22ULL ] * 0.01 + t18 -> mX . mX [ 1ULL ] ) - 1.0 ;
intrm_sf_mf_10 = ( t18 -> mX . mX [ 28ULL ] * 0.01 + t18 -> mX . mX [ 5ULL ]
) - 1.0 ; if ( t18 -> mM . mX [ 55ULL ] == 0 ) { out -> mZC . mX [ 6ULL ] = -
( Finite_Gain_Op_Amp_i1 * 1.0E+12 ) ; } else { out -> mZC . mX [ 6ULL ] = 0.0
; } if ( t18 -> mM . mX [ 57ULL ] == 0 ) { out -> mZC . mX [ 8ULL ] = - (
Finite_Gain_Op_Amp1_i1 * 1.0E+12 ) ; } else { out -> mZC . mX [ 8ULL ] = 0.0
; } if ( t18 -> mM . mX [ 64ULL ] == 0 ) { out -> mZC . mX [ 10ULL ] = t18 ->
mU . mX [ 3ULL ] - 1.0 ; } else { out -> mZC . mX [ 10ULL ] = 0.0 ; } if (
IGBT_ideal_switch_v > 0.8 ) { t3 = ( t18 -> mU . mX [ 0ULL ] > 6.0 ) ; } else
{ t3 = false ; } if ( t18 -> mX . mX [ 37ULL ] > 0.8 ) { t4 = ( t18 -> mU .
mX [ 2ULL ] > 6.0 ) ; } else { t4 = false ; } if ( IGBT2_ideal_switch_v > 0.8
) { t5 = ( t18 -> mU . mX [ 1ULL ] > 6.0 ) ; } else { t5 = false ; } if (
IGBT3_ideal_switch_v > 0.8 ) { t6 = ( t18 -> mU . mX [ 2ULL ] > 6.0 ) ; }
else { t6 = false ; } if ( t18 -> mX . mX [ 36ULL ] > 0.8 ) { t7 = ( t18 ->
mU . mX [ 1ULL ] > 6.0 ) ; } else { t7 = false ; } if ( ( ( size_t ) t18 ->
mQ . mX [ 1ULL ] != 1ULL ) && ( ( size_t ) t18 -> mQ . mX [ 1ULL ] != 2ULL )
&& ( ( size_t ) t18 -> mQ . mX [ 1ULL ] == 3ULL ) ) { out -> mZC . mX [ 34ULL
] = Thyristor_Piecewise_Linear_ideal_switch_v - 0.8 ; } else { out -> mZC .
mX [ 34ULL ] = 0.0 ; } if ( ( ( size_t ) t18 -> mQ . mX [ 1ULL ] != 1ULL ) &&
( ( size_t ) t18 -> mQ . mX [ 1ULL ] != 2ULL ) && ( ( size_t ) t18 -> mQ . mX
[ 1ULL ] != 3ULL ) && ( ( size_t ) t18 -> mQ . mX [ 1ULL ] == 4ULL ) ) { out
-> mZC . mX [ 35ULL ] = Thyristor_Piecewise_Linear_ideal_switch_v - 0.8 ; }
else { out -> mZC . mX [ 35ULL ] = 0.0 ; } if ( ( ( size_t ) t18 -> mQ . mX [
2ULL ] != 1ULL ) && ( ( size_t ) t18 -> mQ . mX [ 2ULL ] != 2ULL ) && ( (
size_t ) t18 -> mQ . mX [ 2ULL ] == 3ULL ) ) { out -> mZC . mX [ 45ULL ] = -
t18 -> mX . mX [ 18ULL ] - 0.8 ; } else { out -> mZC . mX [ 45ULL ] = 0.0 ; }
if ( ( ( size_t ) t18 -> mQ . mX [ 2ULL ] != 1ULL ) && ( ( size_t ) t18 -> mQ
. mX [ 2ULL ] != 2ULL ) && ( ( size_t ) t18 -> mQ . mX [ 2ULL ] != 3ULL ) &&
( ( size_t ) t18 -> mQ . mX [ 2ULL ] == 4ULL ) ) { out -> mZC . mX [ 46ULL ]
= - t18 -> mX . mX [ 18ULL ] - 0.8 ; } else { out -> mZC . mX [ 46ULL ] = 0.0
; } if ( ( ( size_t ) t18 -> mQ . mX [ 3ULL ] != 1ULL ) && ( ( size_t ) t18
-> mQ . mX [ 3ULL ] != 2ULL ) && ( ( size_t ) t18 -> mQ . mX [ 3ULL ] == 3ULL
) ) { out -> mZC . mX [ 56ULL ] = Thyristor_Piecewise_Linear2_ideal_switch_v
- 0.8 ; } else { out -> mZC . mX [ 56ULL ] = 0.0 ; } if ( ( ( size_t ) t18 ->
mQ . mX [ 3ULL ] != 1ULL ) && ( ( size_t ) t18 -> mQ . mX [ 3ULL ] != 2ULL )
&& ( ( size_t ) t18 -> mQ . mX [ 3ULL ] != 3ULL ) && ( ( size_t ) t18 -> mQ .
mX [ 3ULL ] == 4ULL ) ) { out -> mZC . mX [ 57ULL ] =
Thyristor_Piecewise_Linear2_ideal_switch_v - 0.8 ; } else { out -> mZC . mX [
57ULL ] = 0.0 ; } if ( ( ( size_t ) t18 -> mQ . mX [ 4ULL ] != 1ULL ) && ( (
size_t ) t18 -> mQ . mX [ 4ULL ] != 2ULL ) && ( ( size_t ) t18 -> mQ . mX [
4ULL ] == 3ULL ) ) { out -> mZC . mX [ 67ULL ] = - t18 -> mX . mX [ 17ULL ] -
0.8 ; } else { out -> mZC . mX [ 67ULL ] = 0.0 ; } if ( ( ( size_t ) t18 ->
mQ . mX [ 4ULL ] != 1ULL ) && ( ( size_t ) t18 -> mQ . mX [ 4ULL ] != 2ULL )
&& ( ( size_t ) t18 -> mQ . mX [ 4ULL ] != 3ULL ) && ( ( size_t ) t18 -> mQ .
mX [ 4ULL ] == 4ULL ) ) { out -> mZC . mX [ 68ULL ] = - t18 -> mX . mX [
17ULL ] - 0.8 ; } else { out -> mZC . mX [ 68ULL ] = 0.0 ; } out -> mZC . mX
[ 0ULL ] = 0.600000006 - ( ( ( - t18 -> mX . mX [ 45ULL ] + t18 -> mX . mX [
35ULL ] * 1.0E-9 ) + t18 -> mX . mX [ 11ULL ] ) + ( - t18 -> mX . mX [ 34ULL
] - t18 -> mX . mX [ 35ULL ] ) ) ; out -> mZC . mX [ 1ULL ] = 0.600000006 - (
( ( ( ( - t18 -> mX . mX [ 48ULL ] + t18 -> mX . mX [ 38ULL ] * 1.0E-9 ) +
t18 -> mX . mX [ 46ULL ] ) + t18 -> mX . mX [ 47ULL ] ) + t18 -> mX . mX [
13ULL ] ) - t18 -> mX . mX [ 37ULL ] ) ; out -> mZC . mX [ 2ULL ] =
0.600000006 - ( t18 -> mX . mX [ 46ULL ] + ( - t18 -> mX . mX [ 34ULL ] + t18
-> mX . mX [ 37ULL ] ) ) ; out -> mZC . mX [ 3ULL ] = 0.600000006 - ( ( ( ( (
- t18 -> mX . mX [ 51ULL ] + t18 -> mX . mX [ 38ULL ] *
9.9999999947364415E-10 ) + t18 -> mX . mX [ 49ULL ] ) + t18 -> mX . mX [
50ULL ] ) + t18 -> mX . mX [ 13ULL ] ) + ( - t18 -> mX . mX [ 34ULL ] + t18
-> mX . mX [ 36ULL ] ) ) ; out -> mZC . mX [ 4ULL ] = 0.600000006 - ( t18 ->
mX . mX [ 49ULL ] - t18 -> mX . mX [ 36ULL ] ) ; out -> mZC . mX [ 5ULL ] =
Finite_Gain_Op_Amp_i1 * 1.0E+12 - 5.0 ; out -> mZC . mX [ 7ULL ] =
Finite_Gain_Op_Amp1_i1 * 1.0E+12 - 5.0 ; out -> mZC . mX [ 9ULL ] = - t18 ->
mU . mX [ 3ULL ] ; out -> mZC . mX [ 11ULL ] = ( intrm_sf_mf_18 - 1.0 ) - 1.0
; out -> mZC . mX [ 12ULL ] = t18 -> mM . mX [ 41ULL ] == 0 ? - (
intrm_sf_mf_18 - 1.0 ) : 0.0 ; out -> mZC . mX [ 13ULL ] = intrm_sf_mf_1 -
1.0 ; out -> mZC . mX [ 14ULL ] = t18 -> mM . mX [ 43ULL ] == 0 ? -
intrm_sf_mf_1 : 0.0 ; out -> mZC . mX [ 15ULL ] = ( t0 - 1.0 ) - 1.0 ; out ->
mZC . mX [ 16ULL ] = t18 -> mM . mX [ 45ULL ] == 0 ? - ( t0 - 1.0 ) : 0.0 ;
out -> mZC . mX [ 17ULL ] = intrm_sf_mf_10 - 1.0 ; out -> mZC . mX [ 18ULL ]
= t18 -> mM . mX [ 47ULL ] == 0 ? - intrm_sf_mf_10 : 0.0 ; out -> mZC . mX [
19ULL ] = ( intrm_sf_mf_18 - 2.5 ) / 0.5 - 0.5 ; out -> mZC . mX [ 20ULL ] =
( real_T ) t3 ; out -> mZC . mX [ 21ULL ] = ( t18 -> mU . mX [ 0ULL ] - 6.0 )
- ( IGBT_ideal_switch_v - 0.8 ) ; out -> mZC . mX [ 22ULL ] = ( real_T ) t4 ;
out -> mZC . mX [ 23ULL ] = ( t18 -> mU . mX [ 2ULL ] - 6.0 ) - ( t18 -> mX .
mX [ 37ULL ] - 0.8 ) ; out -> mZC . mX [ 24ULL ] = ( real_T ) t5 ; out -> mZC
. mX [ 25ULL ] = ( t18 -> mU . mX [ 1ULL ] - 6.0 ) - ( IGBT2_ideal_switch_v -
0.8 ) ; out -> mZC . mX [ 26ULL ] = ( real_T ) t6 ; out -> mZC . mX [ 27ULL ]
= ( t18 -> mU . mX [ 2ULL ] - 6.0 ) - ( IGBT3_ideal_switch_v - 0.8 ) ; out ->
mZC . mX [ 28ULL ] = ( real_T ) t7 ; out -> mZC . mX [ 29ULL ] = ( t18 -> mU
. mX [ 1ULL ] - 6.0 ) - ( t18 -> mX . mX [ 36ULL ] - 0.8 ) ; out -> mZC . mX
[ 30ULL ] = ( real_T ) ( ( Resistor3_n_v < 0.1 ) && ( ( size_t ) t18 -> mQ .
mX [ 0ULL ] == 1ULL ) ) ; out -> mZC . mX [ 31ULL ] = ( real_T ) ( (
Resistor3_n_v >= 0.1 ) && ( ( size_t ) t18 -> mQ . mX [ 0ULL ] == 2ULL ) ) ;
out -> mZC . mX [ 32ULL ] = ( real_T ) ( ( Resistor3_n_v <= - 0.1 ) && ( (
size_t ) t18 -> mQ . mX [ 0ULL ] == 3ULL ) ) ; out -> mZC . mX [ 33ULL ] = (
real_T ) ( ( Resistor3_n_v >= 0.1 ) && ( ( size_t ) t18 -> mQ . mX [ 0ULL ]
== 4ULL ) ) ; out -> mZC . mX [ 36ULL ] = ( ( size_t ) t18 -> mQ . mX [ 1ULL
] != 1ULL ) && ( ( size_t ) t18 -> mQ . mX [ 1ULL ] != 2ULL ) && ( ( size_t )
t18 -> mQ . mX [ 1ULL ] != 3ULL ) && ( ( size_t ) t18 -> mQ . mX [ 1ULL ] !=
4ULL ) ? Thyristor_Piecewise_Linear_ideal_switch_v : 0.0 ; out -> mZC . mX [
37ULL ] = ( real_T ) ( ( CMOS_AND1_J_v < 3.0 ) && ( ( size_t ) t18 -> mQ . mX
[ 1ULL ] == 1ULL ) ) ; out -> mZC . mX [ 38ULL ] = ( real_T ) ( (
CMOS_AND1_J_v > 3.0 ) && ( ( size_t ) t18 -> mQ . mX [ 1ULL ] == 1ULL ) ) ;
out -> mZC . mX [ 39ULL ] = ( real_T ) ( (
Thyristor_Piecewise_Linear_ideal_switch_v > 0.8 ) && ( CMOS_AND1_J_v >= 3.0 )
&& ( ( size_t ) t18 -> mQ . mX [ 1ULL ] == 2ULL ) ) ; out -> mZC . mX [ 40ULL
] = ( real_T ) ( ( CMOS_AND1_J_v < 3.0 ) && ( Thyristor_Piecewise_Linear_iak
<= 1.0 ) && ( ( size_t ) t18 -> mQ . mX [ 1ULL ] == 3ULL ) ) ; out -> mZC .
mX [ 41ULL ] = ( real_T ) ( ( Thyristor_Piecewise_Linear_iak > 1.0 ) && ( (
size_t ) t18 -> mQ . mX [ 1ULL ] == 3ULL ) ) ; out -> mZC . mX [ 42ULL ] = (
real_T ) ( ( Thyristor_Piecewise_Linear_iak <= 1.0 ) && ( ( size_t ) t18 ->
mQ . mX [ 1ULL ] == 4ULL ) ) ; out -> mZC . mX [ 43ULL ] = ( real_T ) ( (
Thyristor_Piecewise_Linear_iak > 1.0 ) && ( ( size_t ) t18 -> mQ . mX [ 1ULL
] == 5ULL ) ) ; out -> mZC . mX [ 44ULL ] = ( real_T ) ( ( ( size_t ) t18 ->
mQ . mX [ 1ULL ] == 5ULL ) && ( ( Thyristor_Piecewise_Linear_iak <= 0.0 ) ||
( Thyristor_Piecewise_Linear_ideal_switch_v <= 0.0 ) ) ) ; out -> mZC . mX [
47ULL ] = ( ( size_t ) t18 -> mQ . mX [ 2ULL ] != 1ULL ) && ( ( size_t ) t18
-> mQ . mX [ 2ULL ] != 2ULL ) && ( ( size_t ) t18 -> mQ . mX [ 2ULL ] != 3ULL
) && ( ( size_t ) t18 -> mQ . mX [ 2ULL ] != 4ULL ) ? - t18 -> mX . mX [
18ULL ] : 0.0 ; out -> mZC . mX [ 48ULL ] = ( real_T ) ( ( CMOS_AND_J_v < 3.0
) && ( ( size_t ) t18 -> mQ . mX [ 2ULL ] == 1ULL ) ) ; out -> mZC . mX [
49ULL ] = ( real_T ) ( ( CMOS_AND_J_v > 3.0 ) && ( ( size_t ) t18 -> mQ . mX
[ 2ULL ] == 1ULL ) ) ; out -> mZC . mX [ 50ULL ] = ( real_T ) ( ( - t18 -> mX
. mX [ 18ULL ] > 0.8 ) && ( CMOS_AND_J_v >= 3.0 ) && ( ( size_t ) t18 -> mQ .
mX [ 2ULL ] == 2ULL ) ) ; out -> mZC . mX [ 51ULL ] = ( real_T ) ( (
CMOS_AND_J_v < 3.0 ) && ( Thyristor_Piecewise_Linear1_iak <= 1.0 ) && ( (
size_t ) t18 -> mQ . mX [ 2ULL ] == 3ULL ) ) ; out -> mZC . mX [ 52ULL ] = (
real_T ) ( ( Thyristor_Piecewise_Linear1_iak > 1.0 ) && ( ( size_t ) t18 ->
mQ . mX [ 2ULL ] == 3ULL ) ) ; out -> mZC . mX [ 53ULL ] = ( real_T ) ( (
Thyristor_Piecewise_Linear1_iak <= 1.0 ) && ( ( size_t ) t18 -> mQ . mX [
2ULL ] == 4ULL ) ) ; out -> mZC . mX [ 54ULL ] = ( real_T ) ( (
Thyristor_Piecewise_Linear1_iak > 1.0 ) && ( ( size_t ) t18 -> mQ . mX [ 2ULL
] == 5ULL ) ) ; out -> mZC . mX [ 55ULL ] = ( real_T ) ( ( ( size_t ) t18 ->
mQ . mX [ 2ULL ] == 5ULL ) && ( ( Thyristor_Piecewise_Linear1_iak <= 0.0 ) ||
( - t18 -> mX . mX [ 18ULL ] <= 0.0 ) ) ) ; out -> mZC . mX [ 58ULL ] = ( (
size_t ) t18 -> mQ . mX [ 3ULL ] != 1ULL ) && ( ( size_t ) t18 -> mQ . mX [
3ULL ] != 2ULL ) && ( ( size_t ) t18 -> mQ . mX [ 3ULL ] != 3ULL ) && ( (
size_t ) t18 -> mQ . mX [ 3ULL ] != 4ULL ) ?
Thyristor_Piecewise_Linear2_ideal_switch_v : 0.0 ; out -> mZC . mX [ 59ULL ]
= ( real_T ) ( ( CMOS_AND_J_v < 3.0 ) && ( ( size_t ) t18 -> mQ . mX [ 3ULL ]
== 1ULL ) ) ; out -> mZC . mX [ 60ULL ] = ( real_T ) ( ( CMOS_AND_J_v > 3.0 )
&& ( ( size_t ) t18 -> mQ . mX [ 3ULL ] == 1ULL ) ) ; out -> mZC . mX [ 61ULL
] = ( real_T ) ( ( Thyristor_Piecewise_Linear2_ideal_switch_v > 0.8 ) && (
CMOS_AND_J_v >= 3.0 ) && ( ( size_t ) t18 -> mQ . mX [ 3ULL ] == 2ULL ) ) ;
out -> mZC . mX [ 62ULL ] = ( real_T ) ( ( CMOS_AND_J_v < 3.0 ) && ( t18 ->
mX . mX [ 19ULL ] <= 1.0 ) && ( ( size_t ) t18 -> mQ . mX [ 3ULL ] == 3ULL )
) ; out -> mZC . mX [ 63ULL ] = ( real_T ) ( ( t18 -> mX . mX [ 19ULL ] > 1.0
) && ( ( size_t ) t18 -> mQ . mX [ 3ULL ] == 3ULL ) ) ; out -> mZC . mX [
64ULL ] = ( real_T ) ( ( t18 -> mX . mX [ 19ULL ] <= 1.0 ) && ( ( size_t )
t18 -> mQ . mX [ 3ULL ] == 4ULL ) ) ; out -> mZC . mX [ 65ULL ] = ( real_T )
( ( t18 -> mX . mX [ 19ULL ] > 1.0 ) && ( ( size_t ) t18 -> mQ . mX [ 3ULL ]
== 5ULL ) ) ; out -> mZC . mX [ 66ULL ] = ( real_T ) ( ( ( size_t ) t18 -> mQ
. mX [ 3ULL ] == 5ULL ) && ( ( t18 -> mX . mX [ 19ULL ] <= 0.0 ) || (
Thyristor_Piecewise_Linear2_ideal_switch_v <= 0.0 ) ) ) ; out -> mZC . mX [
69ULL ] = ( ( size_t ) t18 -> mQ . mX [ 4ULL ] != 1ULL ) && ( ( size_t ) t18
-> mQ . mX [ 4ULL ] != 2ULL ) && ( ( size_t ) t18 -> mQ . mX [ 4ULL ] != 3ULL
) && ( ( size_t ) t18 -> mQ . mX [ 4ULL ] != 4ULL ) ? - t18 -> mX . mX [
17ULL ] : 0.0 ; out -> mZC . mX [ 70ULL ] = ( real_T ) ( ( CMOS_AND1_J_v <
3.0 ) && ( ( size_t ) t18 -> mQ . mX [ 4ULL ] == 1ULL ) ) ; out -> mZC . mX [
71ULL ] = ( real_T ) ( ( CMOS_AND1_J_v > 3.0 ) && ( ( size_t ) t18 -> mQ . mX
[ 4ULL ] == 1ULL ) ) ; out -> mZC . mX [ 72ULL ] = ( real_T ) ( ( - t18 -> mX
. mX [ 17ULL ] > 0.8 ) && ( CMOS_AND1_J_v >= 3.0 ) && ( ( size_t ) t18 -> mQ
. mX [ 4ULL ] == 2ULL ) ) ; out -> mZC . mX [ 73ULL ] = ( real_T ) ( (
CMOS_AND1_J_v < 3.0 ) && ( t18 -> mX . mX [ 20ULL ] <= 1.0 ) && ( ( size_t )
t18 -> mQ . mX [ 4ULL ] == 3ULL ) ) ; out -> mZC . mX [ 74ULL ] = ( real_T )
( ( t18 -> mX . mX [ 20ULL ] > 1.0 ) && ( ( size_t ) t18 -> mQ . mX [ 4ULL ]
== 3ULL ) ) ; out -> mZC . mX [ 75ULL ] = ( real_T ) ( ( t18 -> mX . mX [
20ULL ] <= 1.0 ) && ( ( size_t ) t18 -> mQ . mX [ 4ULL ] == 4ULL ) ) ; out ->
mZC . mX [ 76ULL ] = ( real_T ) ( ( t18 -> mX . mX [ 20ULL ] > 1.0 ) && ( (
size_t ) t18 -> mQ . mX [ 4ULL ] == 5ULL ) ) ; out -> mZC . mX [ 77ULL ] = (
real_T ) ( ( ( size_t ) t18 -> mQ . mX [ 4ULL ] == 5ULL ) && ( ( t18 -> mX .
mX [ 20ULL ] <= 0.0 ) || ( - t18 -> mX . mX [ 17ULL ] <= 0.0 ) ) ) ; ( void )
sys ; ( void ) out ; return 0 ; }
