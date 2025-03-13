#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_obs_act.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_obs_act ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t43 , NeDsMethodOutput * out ) { real_T
AC_Voltage_Source1_p_v ; real_T CMOS_AND1_A_v ; real_T CMOS_AND1_B_v ; real_T
CMOS_AND1_J_v ; real_T CMOS_AND_A_v ; real_T CMOS_AND_B_v ; real_T
CMOS_AND_J_v ; real_T CMOS_NOT_rOUT_i ; real_T Capacitor1_i ; real_T
Capacitor1_p_v ; real_T Capacitor4_p_v ; real_T Diode_n_v ; real_T
Finite_Gain_Op_Amp1_i1 ; real_T Finite_Gain_Op_Amp_i1 ; real_T
IGBT2_ideal_switch_v ; real_T IGBT_ideal_switch_v ; real_T
Ideal_Transformer1_i1 ; real_T Ideal_Transformer_p2_v ; real_T Inductor2_p_v
; real_T Op_Amp_outI ; real_T Op_Amp_out_v ; real_T Resistor10_i ; real_T
Resistor12_i ; real_T Resistor14_i ; real_T Resistor16_i ; real_T
Resistor17_i ; real_T Resistor3_n_v ; real_T Resistor5_i ; real_T Resistor7_i
; real_T Resistor8_i ; real_T Schmitt_Trigger_rOUT_i ; real_T
Thyristor_Piecewise_Linear_iak ; real_T
Thyristor_Piecewise_Linear_ideal_switch_v ; real_T t12 ; real_T t16 ; real_T
t19 ; real_T t21 ; real_T t29 ; real_T t37 ; out -> mOBS_ACT . mX [ 0ULL ] =
( ( t43 -> mX . mX [ 17ULL ] * 0.00051653551238143691 + t43 -> mX . mX [
18ULL ] * - 0.00051653551238143691 ) - t43 -> mX . mX [ 20ULL ] ) + t43 -> mX
. mX [ 19ULL ] ; AC_Voltage_Source1_p_v = - t43 -> mX . mX [ 17ULL ] + t43 ->
mX . mX [ 18ULL ] ; CMOS_AND_A_v = t43 -> mX . mX [ 21ULL ] * 0.01 + t43 ->
mX . mX [ 0ULL ] ; CMOS_AND_B_v = t43 -> mX . mX [ 22ULL ] * 0.01 + t43 -> mX
. mX [ 1ULL ] ; CMOS_AND_J_v = t43 -> mX . mX [ 23ULL ] * 1.0E-6 + t43 -> mX
. mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 7ULL ] = ( ( t43 -> mX . mX [ 0ULL ] *
- 0.040001 + t43 -> mX . mX [ 21ULL ] * - 1.00040001 ) - t43 -> mX . mX [
24ULL ] ) + t43 -> mX . mX [ 25ULL ] * 0.04 ; CMOS_AND1_A_v = t43 -> mX . mX
[ 27ULL ] * 1.0E-6 + t43 -> mX . mX [ 4ULL ] ; CMOS_AND1_B_v = t43 -> mX . mX
[ 28ULL ] * 0.01 + t43 -> mX . mX [ 5ULL ] ; CMOS_AND1_J_v = t43 -> mX . mX [
29ULL ] * 1.0E-6 + t43 -> mX . mX [ 6ULL ] ; out -> mOBS_ACT . mX [ 41ULL ] =
( t43 -> mX . mX [ 4ULL ] * - 0.04 + t43 -> mX . mX [ 27ULL ] * - 1.00000004
) + t43 -> mX . mX [ 30ULL ] * 0.04 ; CMOS_NOT_rOUT_i = ( t43 -> mX . mX [
4ULL ] * - 0.04 + t43 -> mX . mX [ 27ULL ] * - 4.0E-8 ) + t43 -> mX . mX [
30ULL ] * 0.04 ; out -> mOBS_ACT . mX [ 98ULL ] = ( t43 -> mX . mX [ 32ULL ]
* - 0.001 + t43 -> mX . mX [ 33ULL ] * 1.0E-9 ) + t43 -> mX . mX [ 8ULL ] ;
Capacitor1_i = t43 -> mX . mX [ 0ULL ] * - 1.0E-6 + t43 -> mX . mX [ 21ULL ]
* - 1.0E-8 ; Capacitor1_p_v = ( t43 -> mX . mX [ 0ULL ] * - 1.0E-12 + t43 ->
mX . mX [ 21ULL ] * - 1.0E-14 ) + t43 -> mX . mX [ 10ULL ] ; out -> mOBS_ACT
. mX [ 113ULL ] = ( t43 -> mX . mX [ 34ULL ] * - 0.001 + t43 -> mX . mX [
35ULL ] * 1.0E-9 ) + t43 -> mX . mX [ 11ULL ] ; out -> mOBS_ACT . mX [ 118ULL
] = ( ( t43 -> mX . mX [ 36ULL ] * 0.01 + t43 -> mX . mX [ 37ULL ] * - 0.01 )
+ t43 -> mX . mX [ 38ULL ] * 0.010000001 ) + t43 -> mX . mX [ 13ULL ] ;
Capacitor4_p_v = - t43 -> mX . mX [ 38ULL ] + t43 -> mX . mX [ 37ULL ] ; out
-> mOBS_ACT . mX [ 121ULL ] = ( - t43 -> mX . mX [ 36ULL ] - t43 -> mX . mX [
38ULL ] ) + t43 -> mX . mX [ 37ULL ] ; out -> mOBS_ACT . mX [ 127ULL ] = ( -
t43 -> mX . mX [ 45ULL ] + t43 -> mX . mX [ 35ULL ] * 1.0E-9 ) + t43 -> mX .
mX [ 11ULL ] ; Diode_n_v = t43 -> mX . mX [ 34ULL ] + t43 -> mX . mX [ 35ULL
] ; out -> mOBS_ACT . mX [ 130ULL ] = - t43 -> mX . mX [ 34ULL ] - t43 -> mX
. mX [ 35ULL ] ; out -> mOBS_ACT . mX [ 131ULL ] = ( ( ( - t43 -> mX . mX [
48ULL ] + t43 -> mX . mX [ 38ULL ] * 1.0E-9 ) + t43 -> mX . mX [ 46ULL ] ) +
t43 -> mX . mX [ 47ULL ] ) + t43 -> mX . mX [ 13ULL ] ; out -> mOBS_ACT . mX
[ 134ULL ] = - t43 -> mX . mX [ 37ULL ] ; out -> mOBS_ACT . mX [ 138ULL ] = -
t43 -> mX . mX [ 34ULL ] + t43 -> mX . mX [ 37ULL ] ; out -> mOBS_ACT . mX [
139ULL ] = ( ( ( - t43 -> mX . mX [ 51ULL ] + t43 -> mX . mX [ 38ULL ] *
9.9999999947364415E-10 ) + t43 -> mX . mX [ 49ULL ] ) + t43 -> mX . mX [
50ULL ] ) + t43 -> mX . mX [ 13ULL ] ; out -> mOBS_ACT . mX [ 142ULL ] = -
t43 -> mX . mX [ 34ULL ] + t43 -> mX . mX [ 36ULL ] ; out -> mOBS_ACT . mX [
146ULL ] = - t43 -> mX . mX [ 36ULL ] ; Finite_Gain_Op_Amp_i1 = t43 -> mX .
mX [ 39ULL ] * - 1.0E-6 + t43 -> mX . mX [ 40ULL ] * 1.0E-6 ; out -> mOBS_ACT
. mX [ 158ULL ] = - t43 -> mX . mX [ 22ULL ] ; Finite_Gain_Op_Amp1_i1 = t43
-> mX . mX [ 39ULL ] * - 1.0E-6 + t43 -> mX . mX [ 41ULL ] * 1.0E-6 ; out ->
mOBS_ACT . mX [ 164ULL ] = - t43 -> mX . mX [ 28ULL ] ; IGBT_ideal_switch_v =
( - t43 -> mX . mX [ 34ULL ] - t43 -> mX . mX [ 35ULL ] ) + t43 -> mX . mX [
32ULL ] ; out -> mOBS_ACT . mX [ 181ULL ] = t43 -> mU . mX [ 0ULL ] ; out ->
mOBS_ACT . mX [ 182ULL ] = t43 -> mX . mX [ 32ULL ] - Diode_n_v ; out ->
mOBS_ACT . mX [ 197ULL ] = t43 -> mX . mX [ 37ULL ] ; IGBT2_ideal_switch_v =
- t43 -> mX . mX [ 37ULL ] + t43 -> mX . mX [ 34ULL ] ; out -> mOBS_ACT . mX
[ 212ULL ] = t43 -> mX . mX [ 34ULL ] - t43 -> mX . mX [ 37ULL ] ; t12 = -
t43 -> mX . mX [ 36ULL ] + t43 -> mX . mX [ 34ULL ] ; out -> mOBS_ACT . mX [
227ULL ] = t43 -> mX . mX [ 34ULL ] - t43 -> mX . mX [ 36ULL ] ; out ->
mOBS_ACT . mX [ 242ULL ] = t43 -> mX . mX [ 36ULL ] ; t16 = t43 -> mX . mX [
17ULL ] * - 0.00051653551238143691 + t43 -> mX . mX [ 18ULL ] *
0.00051653551238143691 ; Ideal_Transformer_p2_v = t43 -> mX . mX [ 17ULL ] *
- 0.016070711128967456 + t43 -> mX . mX [ 18ULL ] * 0.016070711128967456 ;
Ideal_Transformer1_i1 = - t43 -> mX . mX [ 19ULL ] + t43 -> mX . mX [ 20ULL ]
; out -> mOBS_ACT . mX [ 260ULL ] = t43 -> mX . mX [ 35ULL ] * 1.0E-9 + t43
-> mX . mX [ 11ULL ] ; out -> mOBS_ACT . mX [ 269ULL ] = t43 -> mX . mX [
33ULL ] * 1.0E-9 + t43 -> mX . mX [ 8ULL ] ; Inductor2_p_v = t43 -> mX . mX [
32ULL ] + t43 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [ 273ULL ] = t43 ->
mX . mX [ 38ULL ] * 1.0E-9 + t43 -> mX . mX [ 13ULL ] ; Op_Amp_outI = ( t43
-> mX . mX [ 17ULL ] * - 0.016070711128967456 + t43 -> mX . mX [ 18ULL ] *
0.016070711128967456 ) - t43 -> mX . mX [ 52ULL ] ; Resistor3_n_v = t43 -> mX
. mX [ 52ULL ] * 0.01 + t43 -> mX . mX [ 15ULL ] ; Op_Amp_out_v = -
Op_Amp_outI - ( - Resistor3_n_v ) ; out -> mOBS_ACT . mX [ 287ULL ] = ( ( t43
-> mX . mX [ 0ULL ] * 1.0E-6 + t43 -> mX . mX [ 21ULL ] * 1.0E-8 ) + t43 ->
mX . mX [ 40ULL ] * 0.001 ) + t43 -> mX . mX [ 42ULL ] * - 0.001 ; out ->
mOBS_ACT . mX [ 293ULL ] = ( ( ( t43 -> mX . mX [ 39ULL ] * 1.0E-6 + t43 ->
mX . mX [ 40ULL ] * - 0.001001 ) + t43 -> mX . mX [ 41ULL ] * 0.001 ) + t43
-> mX . mX [ 42ULL ] * 0.001 ) + t43 -> mX . mX [ 43ULL ] * - 0.001 ; out ->
mOBS_ACT . mX [ 299ULL ] = ( t43 -> mX . mX [ 39ULL ] * 1.0E-6 + t43 -> mX .
mX [ 41ULL ] * - 0.001001 ) + t43 -> mX . mX [ 43ULL ] * 0.001 ; out ->
mOBS_ACT . mX [ 305ULL ] = - t43 -> mX . mX [ 45ULL ] ; out -> mOBS_ACT . mX
[ 311ULL ] = ( ( ( ( - t43 -> mX . mX [ 48ULL ] - t43 -> mX . mX [ 51ULL ] )
+ t43 -> mX . mX [ 38ULL ] * 9.9999999947364415E-10 ) + t43 -> mX . mX [
46ULL ] ) + t43 -> mX . mX [ 49ULL ] ) + t43 -> mX . mX [ 13ULL ] ; out ->
mOBS_ACT . mX [ 315ULL ] = ( ( t43 -> mX . mX [ 39ULL ] * 2.0E-6 + t43 -> mX
. mX [ 40ULL ] * - 1.0E-6 ) + t43 -> mX . mX [ 41ULL ] * - 1.0E-6 ) - t43 ->
mX . mX [ 44ULL ] ; out -> mOBS_ACT . mX [ 317ULL ] = ( t43 -> mX . mX [
39ULL ] * - 2.0E-6 + t43 -> mX . mX [ 40ULL ] * 1.0E-6 ) + t43 -> mX . mX [
41ULL ] * 1.0E-6 ; Resistor10_i = t43 -> mX . mX [ 40ULL ] * - 0.001 + t43 ->
mX . mX [ 42ULL ] * 0.001 ; Resistor12_i = t43 -> mX . mX [ 42ULL ] * - 0.001
; Resistor14_i = t43 -> mX . mX [ 41ULL ] * - 0.001 + t43 -> mX . mX [ 43ULL
] * 0.001 ; Resistor16_i = t43 -> mX . mX [ 43ULL ] * - 0.001 ; Resistor17_i
= ( t43 -> mX . mX [ 36ULL ] * 0.01 + t43 -> mX . mX [ 37ULL ] * - 0.01 ) +
t43 -> mX . mX [ 38ULL ] * 0.01 ; Resistor5_i = t43 -> mX . mX [ 0ULL ] *
1.0E-6 + t43 -> mX . mX [ 21ULL ] * 1.0E-8 ; Resistor7_i = t43 -> mX . mX [
32ULL ] * 0.001 ; Resistor8_i = t43 -> mX . mX [ 34ULL ] * 0.001 ;
Schmitt_Trigger_rOUT_i = ( t43 -> mX . mX [ 0ULL ] * - 0.04 + t43 -> mX . mX
[ 21ULL ] * - 0.0004 ) + t43 -> mX . mX [ 25ULL ] * 0.04 ;
Thyristor_Piecewise_Linear_iak = ( t43 -> mX . mX [ 33ULL ] * 1.0E-9 - t43 ->
mX . mX [ 19ULL ] ) + t43 -> mX . mX [ 8ULL ] ;
Thyristor_Piecewise_Linear_ideal_switch_v = ( - t43 -> mX . mX [ 32ULL ] -
t43 -> mX . mX [ 33ULL ] ) + t43 -> mX . mX [ 18ULL ] ; out -> mOBS_ACT . mX
[ 437ULL ] = t43 -> mX . mX [ 18ULL ] - Inductor2_p_v ; t19 = ( t43 -> mX .
mX [ 33ULL ] * 1.0E-9 - t43 -> mX . mX [ 20ULL ] ) + t43 -> mX . mX [ 8ULL ]
; out -> mOBS_ACT . mX [ 454ULL ] = - t43 -> mX . mX [ 18ULL ] ; t21 = ( -
t43 -> mX . mX [ 32ULL ] - t43 -> mX . mX [ 33ULL ] ) + t43 -> mX . mX [
17ULL ] ; out -> mOBS_ACT . mX [ 471ULL ] = t43 -> mX . mX [ 17ULL ] -
Inductor2_p_v ; out -> mOBS_ACT . mX [ 488ULL ] = - t43 -> mX . mX [ 17ULL ]
; t29 = Capacitor4_p_v - t43 -> mX . mX [ 36ULL ] ; if ( t43 -> mM . mX [
36ULL ] != 0 ) { t37 = IGBT_ideal_switch_v - 0.8 ; } else { t37 = t43 -> mU .
mX [ 0ULL ] - 6.0 ; } out -> mOBS_ACT . mX [ 176ULL ] = t37 ; if ( t43 -> mM
. mX [ 37ULL ] != 0 ) { t37 = t43 -> mX . mX [ 37ULL ] - 0.8 ; } else { t37 =
t43 -> mU . mX [ 2ULL ] - 6.0 ; } out -> mOBS_ACT . mX [ 191ULL ] = t37 ; if
( t43 -> mM . mX [ 38ULL ] != 0 ) { t37 = IGBT2_ideal_switch_v - 0.8 ; } else
{ t37 = t43 -> mU . mX [ 1ULL ] - 6.0 ; } out -> mOBS_ACT . mX [ 206ULL ] =
t37 ; if ( t43 -> mM . mX [ 39ULL ] != 0 ) { t37 = t12 - 0.8 ; } else { t37 =
t43 -> mU . mX [ 2ULL ] - 6.0 ; } out -> mOBS_ACT . mX [ 221ULL ] = t37 ; if
( t43 -> mM . mX [ 40ULL ] != 0 ) { t37 = t43 -> mX . mX [ 36ULL ] - 0.8 ; }
else { t37 = t43 -> mU . mX [ 1ULL ] - 6.0 ; } out -> mOBS_ACT . mX [ 236ULL
] = t37 ; out -> mOBS_ACT . mX [ 1ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 2ULL ]
= AC_Voltage_Source1_p_v ; out -> mOBS_ACT . mX [ 3ULL ] =
AC_Voltage_Source1_p_v ; out -> mOBS_ACT . mX [ 4ULL ] = CMOS_AND_A_v ; out
-> mOBS_ACT . mX [ 5ULL ] = CMOS_AND_B_v ; out -> mOBS_ACT . mX [ 6ULL ] =
CMOS_AND_J_v ; out -> mOBS_ACT . mX [ 8ULL ] = 0.0 ; out -> mOBS_ACT . mX [
9ULL ] = CMOS_AND_A_v ; out -> mOBS_ACT . mX [ 10ULL ] = CMOS_AND_A_v ; out
-> mOBS_ACT . mX [ 11ULL ] = t43 -> mX . mX [ 3ULL ] ; out -> mOBS_ACT . mX [
12ULL ] = t43 -> mX . mX [ 22ULL ] ; out -> mOBS_ACT . mX [ 13ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 14ULL ] = CMOS_AND_B_v ; out -> mOBS_ACT . mX [ 15ULL
] = CMOS_AND_B_v ; out -> mOBS_ACT . mX [ 16ULL ] = t43 -> mX . mX [ 1ULL ] ;
out -> mOBS_ACT . mX [ 17ULL ] = t43 -> mX . mX [ 23ULL ] ; out -> mOBS_ACT .
mX [ 18ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 19ULL ] = CMOS_AND_J_v ; out ->
mOBS_ACT . mX [ 20ULL ] = CMOS_AND_J_v ; out -> mOBS_ACT . mX [ 21ULL ] = t43
-> mX . mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 22ULL ] = CMOS_AND_A_v ; out ->
mOBS_ACT . mX [ 23ULL ] = CMOS_AND_B_v ; out -> mOBS_ACT . mX [ 24ULL ] = t43
-> mX . mX [ 26ULL ] ; out -> mOBS_ACT . mX [ 25ULL ] = t43 -> mX . mX [
26ULL ] * 0.2 ; out -> mOBS_ACT . mX [ 26ULL ] = 0.0 ; out -> mOBS_ACT . mX [
27ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 28ULL ] = 0.0 ; out -> mOBS_ACT . mX [
29ULL ] = t43 -> mX . mX [ 23ULL ] ; out -> mOBS_ACT . mX [ 30ULL ] =
CMOS_AND_J_v ; out -> mOBS_ACT . mX [ 31ULL ] = t43 -> mX . mX [ 26ULL ] ;
out -> mOBS_ACT . mX [ 32ULL ] = t43 -> mX . mX [ 23ULL ] * 25.0 ; out ->
mOBS_ACT . mX [ 33ULL ] = - t43 -> mX . mX [ 23ULL ] ; out -> mOBS_ACT . mX [
34ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 35ULL ] = t43 -> mX . mX [ 26ULL ] ;
out -> mOBS_ACT . mX [ 36ULL ] = t43 -> mX . mX [ 26ULL ] ; out -> mOBS_ACT .
mX [ 37ULL ] = t43 -> mX . mX [ 26ULL ] ; out -> mOBS_ACT . mX [ 38ULL ] =
CMOS_AND1_A_v ; out -> mOBS_ACT . mX [ 39ULL ] = CMOS_AND1_B_v ; out ->
mOBS_ACT . mX [ 40ULL ] = CMOS_AND1_J_v ; out -> mOBS_ACT . mX [ 42ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 43ULL ] = CMOS_AND1_A_v ; out -> mOBS_ACT . mX [
44ULL ] = CMOS_AND1_A_v ; out -> mOBS_ACT . mX [ 45ULL ] = t43 -> mX . mX [
7ULL ] ; out -> mOBS_ACT . mX [ 46ULL ] = t43 -> mX . mX [ 28ULL ] ; out ->
mOBS_ACT . mX [ 47ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 48ULL ] =
CMOS_AND1_B_v ; out -> mOBS_ACT . mX [ 49ULL ] = CMOS_AND1_B_v ; out ->
mOBS_ACT . mX [ 50ULL ] = t43 -> mX . mX [ 5ULL ] ; out -> mOBS_ACT . mX [
51ULL ] = t43 -> mX . mX [ 29ULL ] ; out -> mOBS_ACT . mX [ 52ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 53ULL ] = CMOS_AND1_J_v ; out -> mOBS_ACT . mX [ 54ULL
] = CMOS_AND1_J_v ; out -> mOBS_ACT . mX [ 55ULL ] = t43 -> mX . mX [ 6ULL ]
; out -> mOBS_ACT . mX [ 56ULL ] = CMOS_AND1_A_v ; out -> mOBS_ACT . mX [
57ULL ] = CMOS_AND1_B_v ; out -> mOBS_ACT . mX [ 58ULL ] = t43 -> mX . mX [
31ULL ] ; out -> mOBS_ACT . mX [ 59ULL ] = t43 -> mX . mX [ 31ULL ] * 0.2 ;
out -> mOBS_ACT . mX [ 60ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 61ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 62ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 63ULL ] = t43
-> mX . mX [ 29ULL ] ; out -> mOBS_ACT . mX [ 64ULL ] = CMOS_AND1_J_v ; out
-> mOBS_ACT . mX [ 65ULL ] = t43 -> mX . mX [ 31ULL ] ; out -> mOBS_ACT . mX
[ 66ULL ] = t43 -> mX . mX [ 29ULL ] * 25.0 ; out -> mOBS_ACT . mX [ 67ULL ]
= - t43 -> mX . mX [ 29ULL ] ; out -> mOBS_ACT . mX [ 68ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 69ULL ] = t43 -> mX . mX [ 31ULL ] ; out -> mOBS_ACT . mX [
70ULL ] = t43 -> mX . mX [ 31ULL ] ; out -> mOBS_ACT . mX [ 71ULL ] = t43 ->
mX . mX [ 31ULL ] ; out -> mOBS_ACT . mX [ 72ULL ] = CMOS_AND_A_v ; out ->
mOBS_ACT . mX [ 73ULL ] = CMOS_AND1_A_v ; out -> mOBS_ACT . mX [ 74ULL ] =
t43 -> mX . mX [ 21ULL ] ; out -> mOBS_ACT . mX [ 75ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 76ULL ] = CMOS_AND_A_v ; out -> mOBS_ACT . mX [ 77ULL ] =
CMOS_AND_A_v ; out -> mOBS_ACT . mX [ 78ULL ] = t43 -> mX . mX [ 0ULL ] ; out
-> mOBS_ACT . mX [ 79ULL ] = t43 -> mX . mX [ 27ULL ] ; out -> mOBS_ACT . mX
[ 80ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 81ULL ] = CMOS_AND1_A_v ; out ->
mOBS_ACT . mX [ 82ULL ] = CMOS_AND1_A_v ; out -> mOBS_ACT . mX [ 83ULL ] =
t43 -> mX . mX [ 4ULL ] ; out -> mOBS_ACT . mX [ 84ULL ] = CMOS_AND_A_v ; out
-> mOBS_ACT . mX [ 85ULL ] = t43 -> mX . mX [ 30ULL ] ; out -> mOBS_ACT . mX
[ 86ULL ] = t43 -> mX . mX [ 30ULL ] * 0.2 ; out -> mOBS_ACT . mX [ 87ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 88ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 89ULL ] =
CMOS_NOT_rOUT_i ; out -> mOBS_ACT . mX [ 90ULL ] = CMOS_AND1_A_v ; out ->
mOBS_ACT . mX [ 91ULL ] = t43 -> mX . mX [ 30ULL ] ; out -> mOBS_ACT . mX [
92ULL ] = CMOS_NOT_rOUT_i * 25.0 ; out -> mOBS_ACT . mX [ 93ULL ] = -
CMOS_NOT_rOUT_i ; out -> mOBS_ACT . mX [ 94ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 95ULL ] = t43 -> mX . mX [ 30ULL ] ; out -> mOBS_ACT . mX [ 96ULL ] = t43
-> mX . mX [ 30ULL ] ; out -> mOBS_ACT . mX [ 97ULL ] = t43 -> mX . mX [
30ULL ] ; out -> mOBS_ACT . mX [ 99ULL ] = 0.0 ; out -> mOBS_ACT . mX [
100ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mOBS_ACT . mX [ 101ULL ] = t43
-> mX . mX [ 32ULL ] ; out -> mOBS_ACT . mX [ 102ULL ] = t43 -> mX . mX [
9ULL ] ; out -> mOBS_ACT . mX [ 103ULL ] = 0.0 ; out -> mOBS_ACT . mX [
104ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 105ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 106ULL ] = t43 -> mD . mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 107ULL ] =
Capacitor1_i ; out -> mOBS_ACT . mX [ 108ULL ] = 0.0 ; out -> mOBS_ACT . mX [
109ULL ] = Capacitor1_p_v ; out -> mOBS_ACT . mX [ 110ULL ] = Capacitor1_p_v
; out -> mOBS_ACT . mX [ 111ULL ] = t43 -> mX . mX [ 10ULL ] ; out ->
mOBS_ACT . mX [ 112ULL ] = Capacitor1_i * Capacitor1_i * 1.0E-9 * 1000.0 ;
out -> mOBS_ACT . mX [ 114ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 115ULL ] = t43
-> mX . mX [ 34ULL ] ; out -> mOBS_ACT . mX [ 116ULL ] = t43 -> mX . mX [
34ULL ] ; out -> mOBS_ACT . mX [ 117ULL ] = t43 -> mX . mX [ 12ULL ] ; out ->
mOBS_ACT . mX [ 119ULL ] = t43 -> mX . mX [ 36ULL ] ; out -> mOBS_ACT . mX [
120ULL ] = Capacitor4_p_v ; out -> mOBS_ACT . mX [ 122ULL ] = t43 -> mX . mX
[ 14ULL ] ; out -> mOBS_ACT . mX [ 123ULL ] = - 0.01 + ( ( ( ( ( t43 -> mX .
mX [ 39ULL ] * - 2.0E-6 + t43 -> mX . mX [ 40ULL ] * 1.0E-6 ) + t43 -> mX .
mX [ 41ULL ] * 1.0E-6 ) + t43 -> mX . mX [ 42ULL ] * 0.001 ) + t43 -> mX . mX
[ 43ULL ] * 0.001 ) + t43 -> mX . mX [ 44ULL ] ) ; out -> mOBS_ACT . mX [
124ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 125ULL ] = 5.0 ; out -> mOBS_ACT . mX
[ 126ULL ] = 5.0 ; out -> mOBS_ACT . mX [ 128ULL ] = Diode_n_v ; out ->
mOBS_ACT . mX [ 129ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 132ULL ] = t43 -> mX
. mX [ 37ULL ] ; out -> mOBS_ACT . mX [ 133ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 135ULL ] = t43 -> mX . mX [ 46ULL ] ; out -> mOBS_ACT . mX [ 136ULL ] = t43
-> mX . mX [ 34ULL ] ; out -> mOBS_ACT . mX [ 137ULL ] = t43 -> mX . mX [
37ULL ] ; out -> mOBS_ACT . mX [ 140ULL ] = t43 -> mX . mX [ 34ULL ] ; out ->
mOBS_ACT . mX [ 141ULL ] = t43 -> mX . mX [ 36ULL ] ; out -> mOBS_ACT . mX [
143ULL ] = t43 -> mX . mX [ 49ULL ] ; out -> mOBS_ACT . mX [ 144ULL ] = t43
-> mX . mX [ 36ULL ] ; out -> mOBS_ACT . mX [ 145ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 147ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 148ULL ] = 0.0 ; out
-> mOBS_ACT . mX [ 149ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 150ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 151ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 152ULL ] = 0.0
; out -> mOBS_ACT . mX [ 153ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 154ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 155ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 156ULL ]
= 0.0 ; out -> mOBS_ACT . mX [ 157ULL ] = Finite_Gain_Op_Amp_i1 ; out ->
mOBS_ACT . mX [ 159ULL ] = t43 -> mX . mX [ 39ULL ] ; out -> mOBS_ACT . mX [
160ULL ] = CMOS_AND_B_v ; out -> mOBS_ACT . mX [ 161ULL ] = t43 -> mX . mX [
40ULL ] ; out -> mOBS_ACT . mX [ 162ULL ] = Finite_Gain_Op_Amp_i1 * 1.0E+6 ;
out -> mOBS_ACT . mX [ 163ULL ] = Finite_Gain_Op_Amp1_i1 ; out -> mOBS_ACT .
mX [ 165ULL ] = t43 -> mX . mX [ 39ULL ] ; out -> mOBS_ACT . mX [ 166ULL ] =
CMOS_AND1_B_v ; out -> mOBS_ACT . mX [ 167ULL ] = t43 -> mX . mX [ 41ULL ] ;
out -> mOBS_ACT . mX [ 168ULL ] = Finite_Gain_Op_Amp1_i1 * 1.0E+6 ; out ->
mOBS_ACT . mX [ 169ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mOBS_ACT . mX [
170ULL ] = Diode_n_v ; out -> mOBS_ACT . mX [ 171ULL ] = t43 -> mU . mX [
0ULL ] ; out -> mOBS_ACT . mX [ 172ULL ] = 0.0 ; out -> mOBS_ACT . mX [
173ULL ] = t43 -> mX . mX [ 45ULL ] ; out -> mOBS_ACT . mX [ 174ULL ] = t43
-> mU . mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 175ULL ] = t43 -> mX . mX [
45ULL ] ; out -> mOBS_ACT . mX [ 177ULL ] = Diode_n_v ; out -> mOBS_ACT . mX
[ 178ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mOBS_ACT . mX [ 179ULL ] = t43
-> mX . mX [ 45ULL ] * IGBT_ideal_switch_v * 0.001 * 1000.0 ; out -> mOBS_ACT
. mX [ 180ULL ] = IGBT_ideal_switch_v ; out -> mOBS_ACT . mX [ 183ULL ] = 0.0
; out -> mOBS_ACT . mX [ 184ULL ] = t43 -> mX . mX [ 37ULL ] ; out ->
mOBS_ACT . mX [ 185ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 186ULL ] = t43 -> mU
. mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 187ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 188ULL ] = t43 -> mX . mX [ 47ULL ] ; out -> mOBS_ACT . mX [ 189ULL ] = t43
-> mU . mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 190ULL ] = t43 -> mX . mX [
47ULL ] ; out -> mOBS_ACT . mX [ 192ULL ] = 0.0 ; out -> mOBS_ACT . mX [
193ULL ] = t43 -> mX . mX [ 37ULL ] ; out -> mOBS_ACT . mX [ 194ULL ] = t43
-> mX . mX [ 37ULL ] * t43 -> mX . mX [ 47ULL ] * 0.001 * 1000.0 ; out ->
mOBS_ACT . mX [ 195ULL ] = t43 -> mX . mX [ 37ULL ] ; out -> mOBS_ACT . mX [
196ULL ] = t43 -> mU . mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 198ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 199ULL ] = t43 -> mX . mX [ 34ULL ] ; out -> mOBS_ACT
. mX [ 200ULL ] = t43 -> mX . mX [ 37ULL ] ; out -> mOBS_ACT . mX [ 201ULL ]
= t43 -> mU . mX [ 1ULL ] ; out -> mOBS_ACT . mX [ 202ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 203ULL ] = t43 -> mX . mX [ 48ULL ] ; out -> mOBS_ACT . mX [
204ULL ] = t43 -> mU . mX [ 1ULL ] ; out -> mOBS_ACT . mX [ 205ULL ] = t43 ->
mX . mX [ 48ULL ] ; out -> mOBS_ACT . mX [ 207ULL ] = t43 -> mX . mX [ 37ULL
] ; out -> mOBS_ACT . mX [ 208ULL ] = t43 -> mX . mX [ 34ULL ] ; out ->
mOBS_ACT . mX [ 209ULL ] = t43 -> mX . mX [ 48ULL ] * IGBT2_ideal_switch_v *
0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 210ULL ] = IGBT2_ideal_switch_v ; out
-> mOBS_ACT . mX [ 211ULL ] = t43 -> mU . mX [ 1ULL ] ; out -> mOBS_ACT . mX
[ 213ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 214ULL ] = t43 -> mX . mX [ 34ULL ]
; out -> mOBS_ACT . mX [ 215ULL ] = t43 -> mX . mX [ 36ULL ] ; out ->
mOBS_ACT . mX [ 216ULL ] = t43 -> mU . mX [ 2ULL ] ; out -> mOBS_ACT . mX [
217ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 218ULL ] = t43 -> mX . mX [ 50ULL ] ;
out -> mOBS_ACT . mX [ 219ULL ] = t43 -> mU . mX [ 2ULL ] ; out -> mOBS_ACT .
mX [ 220ULL ] = t43 -> mX . mX [ 50ULL ] ; out -> mOBS_ACT . mX [ 222ULL ] =
t43 -> mX . mX [ 36ULL ] ; out -> mOBS_ACT . mX [ 223ULL ] = t43 -> mX . mX [
34ULL ] ; out -> mOBS_ACT . mX [ 224ULL ] = t43 -> mX . mX [ 50ULL ] * t12 *
0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 225ULL ] = t12 ; out -> mOBS_ACT . mX
[ 226ULL ] = t43 -> mU . mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 228ULL ] = 0.0
; out -> mOBS_ACT . mX [ 229ULL ] = t43 -> mX . mX [ 36ULL ] ; out ->
mOBS_ACT . mX [ 230ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 231ULL ] = t43 -> mU
. mX [ 1ULL ] ; out -> mOBS_ACT . mX [ 232ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 233ULL ] = t43 -> mX . mX [ 51ULL ] ; out -> mOBS_ACT . mX [ 234ULL ] = t43
-> mU . mX [ 1ULL ] ; out -> mOBS_ACT . mX [ 235ULL ] = t43 -> mX . mX [
51ULL ] ; out -> mOBS_ACT . mX [ 237ULL ] = 0.0 ; out -> mOBS_ACT . mX [
238ULL ] = t43 -> mX . mX [ 36ULL ] ; out -> mOBS_ACT . mX [ 239ULL ] = t43
-> mX . mX [ 36ULL ] * t43 -> mX . mX [ 51ULL ] * 0.001 * 1000.0 ; out ->
mOBS_ACT . mX [ 240ULL ] = t43 -> mX . mX [ 36ULL ] ; out -> mOBS_ACT . mX [
241ULL ] = t43 -> mU . mX [ 1ULL ] ; out -> mOBS_ACT . mX [ 243ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 244ULL ] = t16 ; out -> mOBS_ACT . mX [ 245ULL ] = t16
* - 62.225 ; out -> mOBS_ACT . mX [ 246ULL ] = 0.0 ; out -> mOBS_ACT . mX [
247ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 248ULL ] = AC_Voltage_Source1_p_v ;
out -> mOBS_ACT . mX [ 249ULL ] = Ideal_Transformer_p2_v ; out -> mOBS_ACT .
mX [ 250ULL ] = AC_Voltage_Source1_p_v ; out -> mOBS_ACT . mX [ 251ULL ] =
AC_Voltage_Source1_p_v * 0.016070711128967456 ; out -> mOBS_ACT . mX [ 252ULL
] = Ideal_Transformer1_i1 ; out -> mOBS_ACT . mX [ 253ULL ] = -
Ideal_Transformer1_i1 ; out -> mOBS_ACT . mX [ 254ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 255ULL ] = t43 -> mX . mX [ 17ULL ] ; out -> mOBS_ACT . mX [
256ULL ] = AC_Voltage_Source1_p_v ; out -> mOBS_ACT . mX [ 257ULL ] = t43 ->
mX . mX [ 18ULL ] ; out -> mOBS_ACT . mX [ 258ULL ] = AC_Voltage_Source1_p_v
; out -> mOBS_ACT . mX [ 259ULL ] = AC_Voltage_Source1_p_v ; out -> mOBS_ACT
. mX [ 261ULL ] = t43 -> mX . mX [ 34ULL ] ; out -> mOBS_ACT . mX [ 262ULL ]
= Diode_n_v ; out -> mOBS_ACT . mX [ 263ULL ] = t43 -> mX . mX [ 35ULL ] ;
out -> mOBS_ACT . mX [ 264ULL ] = t43 -> mX . mX [ 11ULL ] ; out -> mOBS_ACT
. mX [ 265ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 266ULL ] = t43 -> mD . mX [
1ULL ] ; out -> mOBS_ACT . mX [ 267ULL ] = t43 -> mX . mX [ 32ULL ] ; out ->
mOBS_ACT . mX [ 268ULL ] = Inductor2_p_v ; out -> mOBS_ACT . mX [ 270ULL ] =
t43 -> mX . mX [ 8ULL ] ; out -> mOBS_ACT . mX [ 271ULL ] = t43 -> mX . mX [
33ULL ] * t43 -> mX . mX [ 33ULL ] * 1.0000000000000002E-12 * 1000.0 ; out ->
mOBS_ACT . mX [ 272ULL ] = t43 -> mX . mX [ 33ULL ] ; out -> mOBS_ACT . mX [
274ULL ] = Capacitor4_p_v ; out -> mOBS_ACT . mX [ 275ULL ] = t43 -> mX . mX
[ 37ULL ] ; out -> mOBS_ACT . mX [ 276ULL ] = t43 -> mX . mX [ 38ULL ] ; out
-> mOBS_ACT . mX [ 277ULL ] = t43 -> mX . mX [ 13ULL ] ; out -> mOBS_ACT . mX
[ 278ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 279ULL ] = 0.0 ; out -> mOBS_ACT .
mX [ 280ULL ] = Op_Amp_out_v ; out -> mOBS_ACT . mX [ 281ULL ] = Op_Amp_outI
; out -> mOBS_ACT . mX [ 282ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 283ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 284ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 285ULL ]
= 0.0 ; out -> mOBS_ACT . mX [ 286ULL ] = Capacitor1_p_v ; out -> mOBS_ACT .
mX [ 288ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 289ULL ] = 0.0 ; out -> mOBS_ACT
. mX [ 290ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 291ULL ] = t43 -> mX . mX [
42ULL ] ; out -> mOBS_ACT . mX [ 292ULL ] = t43 -> mX . mX [ 40ULL ] ; out ->
mOBS_ACT . mX [ 294ULL ] = t43 -> mX . mX [ 42ULL ] ; out -> mOBS_ACT . mX [
295ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 296ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 297ULL ] = t43 -> mX . mX [ 43ULL ] ; out -> mOBS_ACT . mX [ 298ULL ] = t43
-> mX . mX [ 41ULL ] ; out -> mOBS_ACT . mX [ 300ULL ] = t43 -> mX . mX [
43ULL ] ; out -> mOBS_ACT . mX [ 301ULL ] = 0.0 ; out -> mOBS_ACT . mX [
302ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 303ULL ] = t43 -> mX . mX [ 32ULL ] ;
out -> mOBS_ACT . mX [ 304ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mOBS_ACT
. mX [ 306ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mOBS_ACT . mX [ 307ULL ]
= 0.0 ; out -> mOBS_ACT . mX [ 308ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 309ULL
] = t43 -> mX . mX [ 34ULL ] ; out -> mOBS_ACT . mX [ 310ULL ] = t43 -> mX .
mX [ 34ULL ] ; out -> mOBS_ACT . mX [ 312ULL ] = t43 -> mX . mX [ 34ULL ] ;
out -> mOBS_ACT . mX [ 313ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 314ULL ] = t43
-> mX . mX [ 39ULL ] ; out -> mOBS_ACT . mX [ 316ULL ] = t43 -> mX . mX [
44ULL ] ; out -> mOBS_ACT . mX [ 318ULL ] = 5.0 ; out -> mOBS_ACT . mX [
319ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 320ULL ] = t43 -> mU . mX [ 3ULL ] ;
out -> mOBS_ACT . mX [ 321ULL ] = Ideal_Transformer_p2_v ; out -> mOBS_ACT .
mX [ 322ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 323ULL ] =
Ideal_Transformer_p2_v ; out -> mOBS_ACT . mX [ 324ULL ] =
Ideal_Transformer_p2_v ; out -> mOBS_ACT . mX [ 325ULL ] =
Ideal_Transformer_p2_v ; out -> mOBS_ACT . mX [ 326ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 327ULL ] = Ideal_Transformer_p2_v ; out -> mOBS_ACT . mX [
328ULL ] = Ideal_Transformer_p2_v ; out -> mOBS_ACT . mX [ 329ULL ] =
Resistor10_i ; out -> mOBS_ACT . mX [ 330ULL ] = t43 -> mX . mX [ 42ULL ] ;
out -> mOBS_ACT . mX [ 331ULL ] = Capacitor1_p_v ; out -> mOBS_ACT . mX [
332ULL ] = Resistor10_i * 1000.0 ; out -> mOBS_ACT . mX [ 333ULL ] =
Resistor10_i ; out -> mOBS_ACT . mX [ 334ULL ] = t43 -> mX . mX [ 40ULL ] ;
out -> mOBS_ACT . mX [ 335ULL ] = t43 -> mX . mX [ 42ULL ] ; out -> mOBS_ACT
. mX [ 336ULL ] = Resistor10_i * 1000.0 ; out -> mOBS_ACT . mX [ 337ULL ] =
Resistor12_i ; out -> mOBS_ACT . mX [ 338ULL ] = t43 -> mX . mX [ 42ULL ] ;
out -> mOBS_ACT . mX [ 339ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 340ULL ] =
Resistor12_i * 1000.0 ; out -> mOBS_ACT . mX [ 341ULL ] = Resistor16_i +
0.005 ; out -> mOBS_ACT . mX [ 342ULL ] = t43 -> mX . mX [ 43ULL ] ; out ->
mOBS_ACT . mX [ 343ULL ] = 5.0 ; out -> mOBS_ACT . mX [ 344ULL ] = ( t43 ->
mX . mX [ 43ULL ] * - 0.001 + 0.005 ) * 1000.0 ; out -> mOBS_ACT . mX [
345ULL ] = Resistor14_i ; out -> mOBS_ACT . mX [ 346ULL ] = t43 -> mX . mX [
43ULL ] ; out -> mOBS_ACT . mX [ 347ULL ] = t43 -> mX . mX [ 40ULL ] ; out ->
mOBS_ACT . mX [ 348ULL ] = Resistor14_i * 1000.0 ; out -> mOBS_ACT . mX [
349ULL ] = Resistor14_i ; out -> mOBS_ACT . mX [ 350ULL ] = t43 -> mX . mX [
41ULL ] ; out -> mOBS_ACT . mX [ 351ULL ] = t43 -> mX . mX [ 43ULL ] ; out ->
mOBS_ACT . mX [ 352ULL ] = Resistor14_i * 1000.0 ; out -> mOBS_ACT . mX [
353ULL ] = Resistor16_i ; out -> mOBS_ACT . mX [ 354ULL ] = t43 -> mX . mX [
43ULL ] ; out -> mOBS_ACT . mX [ 355ULL ] = 0.0 ; out -> mOBS_ACT . mX [
356ULL ] = Resistor16_i * 1000.0 ; out -> mOBS_ACT . mX [ 357ULL ] =
Resistor17_i ; out -> mOBS_ACT . mX [ 358ULL ] = Capacitor4_p_v ; out ->
mOBS_ACT . mX [ 359ULL ] = t43 -> mX . mX [ 36ULL ] ; out -> mOBS_ACT . mX [
360ULL ] = Resistor17_i * 100.0 ; out -> mOBS_ACT . mX [ 361ULL ] = 0.0 ; out
-> mOBS_ACT . mX [ 362ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 363ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 364ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 365ULL ] =
Ideal_Transformer_p2_v ; out -> mOBS_ACT . mX [ 366ULL ] = Resistor3_n_v ;
out -> mOBS_ACT . mX [ 367ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 368ULL ] =
Ideal_Transformer_p2_v * 2.0 ; out -> mOBS_ACT . mX [ 369ULL ] = Resistor12_i
+ 0.005 ; out -> mOBS_ACT . mX [ 370ULL ] = t43 -> mX . mX [ 42ULL ] ; out ->
mOBS_ACT . mX [ 371ULL ] = 5.0 ; out -> mOBS_ACT . mX [ 372ULL ] = ( t43 ->
mX . mX [ 42ULL ] * - 0.001 + 0.005 ) * 1000.0 ; out -> mOBS_ACT . mX [
373ULL ] = Resistor5_i ; out -> mOBS_ACT . mX [ 374ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 375ULL ] = CMOS_AND_A_v ; out -> mOBS_ACT . mX [ 376ULL ] =
Resistor5_i * 1.0E+6 ; out -> mOBS_ACT . mX [ 377ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 378ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 379ULL ] = 0.0 ; out
-> mOBS_ACT . mX [ 380ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 381ULL ] =
Resistor7_i ; out -> mOBS_ACT . mX [ 382ULL ] = 0.0 ; out -> mOBS_ACT . mX [
383ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mOBS_ACT . mX [ 384ULL ] =
Resistor7_i * 1000.0 ; out -> mOBS_ACT . mX [ 385ULL ] = Resistor8_i ; out ->
mOBS_ACT . mX [ 386ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 387ULL ] = t43 -> mX
. mX [ 34ULL ] ; out -> mOBS_ACT . mX [ 388ULL ] = Resistor8_i * 1000.0 ; out
-> mOBS_ACT . mX [ 389ULL ] = - Op_Amp_outI ; out -> mOBS_ACT . mX [ 390ULL ]
= Resistor3_n_v ; out -> mOBS_ACT . mX [ 391ULL ] = Op_Amp_out_v ; out ->
mOBS_ACT . mX [ 392ULL ] = - Op_Amp_outI ; out -> mOBS_ACT . mX [ 393ULL ] =
Resistor3_n_v ; out -> mOBS_ACT . mX [ 394ULL ] = CMOS_AND_A_v ; out ->
mOBS_ACT . mX [ 395ULL ] = t43 -> mX . mX [ 52ULL ] ; out -> mOBS_ACT . mX [
396ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 397ULL ] = Resistor3_n_v ; out ->
mOBS_ACT . mX [ 398ULL ] = Resistor3_n_v ; out -> mOBS_ACT . mX [ 399ULL ] =
t43 -> mX . mX [ 15ULL ] ; out -> mOBS_ACT . mX [ 400ULL ] = t43 -> mX . mX [
24ULL ] ; out -> mOBS_ACT . mX [ 401ULL ] = 0.0 ; out -> mOBS_ACT . mX [
402ULL ] = CMOS_AND_A_v ; out -> mOBS_ACT . mX [ 403ULL ] = CMOS_AND_A_v ;
out -> mOBS_ACT . mX [ 404ULL ] = t43 -> mX . mX [ 16ULL ] ; out -> mOBS_ACT
. mX [ 405ULL ] = Resistor3_n_v ; out -> mOBS_ACT . mX [ 406ULL ] = t43 -> mX
. mX [ 25ULL ] ; out -> mOBS_ACT . mX [ 407ULL ] = ( real_T ) ( size_t ) t43
-> mQ . mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 408ULL ] = 0.0 ; out -> mOBS_ACT
. mX [ 409ULL ] = Schmitt_Trigger_rOUT_i ; out -> mOBS_ACT . mX [ 410ULL ] =
CMOS_AND_A_v ; out -> mOBS_ACT . mX [ 411ULL ] = t43 -> mX . mX [ 25ULL ] ;
out -> mOBS_ACT . mX [ 412ULL ] = Schmitt_Trigger_rOUT_i * 25.0 ; out ->
mOBS_ACT . mX [ 413ULL ] = - Schmitt_Trigger_rOUT_i ; out -> mOBS_ACT . mX [
414ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 415ULL ] = t43 -> mX . mX [ 25ULL ] ;
out -> mOBS_ACT . mX [ 416ULL ] = t43 -> mX . mX [ 25ULL ] ; out -> mOBS_ACT
. mX [ 417ULL ] = t43 -> mX . mX [ 25ULL ] ; out -> mOBS_ACT . mX [ 418ULL ]
= t43 -> mU . mX [ 0ULL ] ; out -> mOBS_ACT . mX [ 419ULL ] = t43 -> mU . mX
[ 1ULL ] ; out -> mOBS_ACT . mX [ 420ULL ] = t43 -> mU . mX [ 2ULL ] ; out ->
mOBS_ACT . mX [ 421ULL ] = t43 -> mU . mX [ 3ULL ] ; out -> mOBS_ACT . mX [
422ULL ] = t43 -> mX . mX [ 18ULL ] ; out -> mOBS_ACT . mX [ 423ULL ] =
CMOS_AND1_J_v ; out -> mOBS_ACT . mX [ 424ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 425ULL ] = Inductor2_p_v ; out -> mOBS_ACT . mX [ 426ULL ] =
Thyristor_Piecewise_Linear_iak ; out -> mOBS_ACT . mX [ 427ULL ] =
CMOS_AND1_J_v ; out -> mOBS_ACT . mX [ 428ULL ] =
Thyristor_Piecewise_Linear_iak ; out -> mOBS_ACT . mX [ 429ULL ] =
Inductor2_p_v ; out -> mOBS_ACT . mX [ 430ULL ] = t43 -> mX . mX [ 18ULL ] ;
out -> mOBS_ACT . mX [ 431ULL ] = Thyristor_Piecewise_Linear_iak *
Thyristor_Piecewise_Linear_ideal_switch_v * 0.001 * 1000.0 ; out -> mOBS_ACT
. mX [ 432ULL ] = t43 -> mD . mX [ 2ULL ] ; out -> mOBS_ACT . mX [ 433ULL ] =
Thyristor_Piecewise_Linear_ideal_switch_v ; out -> mOBS_ACT . mX [ 434ULL ] =
t43 -> mD . mX [ 3ULL ] ; out -> mOBS_ACT . mX [ 435ULL ] = ( real_T ) (
size_t ) t43 -> mQ . mX [ 1ULL ] ; out -> mOBS_ACT . mX [ 436ULL ] =
CMOS_AND1_J_v ; out -> mOBS_ACT . mX [ 438ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 439ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 440ULL ] = CMOS_AND_J_v ; out ->
mOBS_ACT . mX [ 441ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 442ULL ] = t43 -> mX
. mX [ 18ULL ] ; out -> mOBS_ACT . mX [ 443ULL ] = t19 ; out -> mOBS_ACT . mX
[ 444ULL ] = CMOS_AND_J_v ; out -> mOBS_ACT . mX [ 445ULL ] = t19 ; out ->
mOBS_ACT . mX [ 446ULL ] = t43 -> mX . mX [ 18ULL ] ; out -> mOBS_ACT . mX [
447ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 448ULL ] = t19 * - t43 -> mX . mX [
18ULL ] * 0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 449ULL ] = t43 -> mD . mX [
4ULL ] ; out -> mOBS_ACT . mX [ 450ULL ] = - t43 -> mX . mX [ 18ULL ] ; out
-> mOBS_ACT . mX [ 451ULL ] = t43 -> mD . mX [ 5ULL ] ; out -> mOBS_ACT . mX
[ 452ULL ] = ( real_T ) ( size_t ) t43 -> mQ . mX [ 2ULL ] ; out -> mOBS_ACT
. mX [ 453ULL ] = CMOS_AND_J_v ; out -> mOBS_ACT . mX [ 455ULL ] = 0.0 ; out
-> mOBS_ACT . mX [ 456ULL ] = t43 -> mX . mX [ 17ULL ] ; out -> mOBS_ACT . mX
[ 457ULL ] = CMOS_AND_J_v ; out -> mOBS_ACT . mX [ 458ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 459ULL ] = Inductor2_p_v ; out -> mOBS_ACT . mX [ 460ULL ] =
t43 -> mX . mX [ 19ULL ] ; out -> mOBS_ACT . mX [ 461ULL ] = CMOS_AND_J_v ;
out -> mOBS_ACT . mX [ 462ULL ] = t43 -> mX . mX [ 19ULL ] ; out -> mOBS_ACT
. mX [ 463ULL ] = Inductor2_p_v ; out -> mOBS_ACT . mX [ 464ULL ] = t43 -> mX
. mX [ 17ULL ] ; out -> mOBS_ACT . mX [ 465ULL ] = t43 -> mX . mX [ 19ULL ] *
t21 * 0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 466ULL ] = t43 -> mD . mX [
6ULL ] ; out -> mOBS_ACT . mX [ 467ULL ] = t21 ; out -> mOBS_ACT . mX [
468ULL ] = t43 -> mD . mX [ 7ULL ] ; out -> mOBS_ACT . mX [ 469ULL ] = (
real_T ) ( size_t ) t43 -> mQ . mX [ 3ULL ] ; out -> mOBS_ACT . mX [ 470ULL ]
= CMOS_AND_J_v ; out -> mOBS_ACT . mX [ 472ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 473ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 474ULL ] = CMOS_AND1_J_v ; out ->
mOBS_ACT . mX [ 475ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 476ULL ] = t43 -> mX
. mX [ 17ULL ] ; out -> mOBS_ACT . mX [ 477ULL ] = t43 -> mX . mX [ 20ULL ] ;
out -> mOBS_ACT . mX [ 478ULL ] = CMOS_AND1_J_v ; out -> mOBS_ACT . mX [
479ULL ] = t43 -> mX . mX [ 20ULL ] ; out -> mOBS_ACT . mX [ 480ULL ] = t43
-> mX . mX [ 17ULL ] ; out -> mOBS_ACT . mX [ 481ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 482ULL ] = t43 -> mX . mX [ 20ULL ] * - t43 -> mX . mX [
17ULL ] * 0.001 * 1000.0 ; out -> mOBS_ACT . mX [ 483ULL ] = t43 -> mD . mX [
8ULL ] ; out -> mOBS_ACT . mX [ 484ULL ] = - t43 -> mX . mX [ 17ULL ] ; out
-> mOBS_ACT . mX [ 485ULL ] = t43 -> mD . mX [ 9ULL ] ; out -> mOBS_ACT . mX
[ 486ULL ] = ( real_T ) ( size_t ) t43 -> mQ . mX [ 4ULL ] ; out -> mOBS_ACT
. mX [ 487ULL ] = CMOS_AND1_J_v ; out -> mOBS_ACT . mX [ 489ULL ] = 0.0 ; out
-> mOBS_ACT . mX [ 490ULL ] = CMOS_AND_J_v ; out -> mOBS_ACT . mX [ 491ULL ]
= 0.0 ; out -> mOBS_ACT . mX [ 492ULL ] = CMOS_AND_J_v ; out -> mOBS_ACT . mX
[ 493ULL ] = CMOS_AND1_J_v ; out -> mOBS_ACT . mX [ 494ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 495ULL ] = CMOS_AND1_J_v ; out -> mOBS_ACT . mX [ 496ULL ] =
CMOS_AND_J_v ; out -> mOBS_ACT . mX [ 497ULL ] = 0.0 ; out -> mOBS_ACT . mX [
498ULL ] = CMOS_AND_J_v ; out -> mOBS_ACT . mX [ 499ULL ] = CMOS_AND_J_v ;
out -> mOBS_ACT . mX [ 500ULL ] = CMOS_AND1_J_v ; out -> mOBS_ACT . mX [
501ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 502ULL ] = CMOS_AND1_J_v ; out ->
mOBS_ACT . mX [ 503ULL ] = CMOS_AND1_J_v ; out -> mOBS_ACT . mX [ 504ULL ] =
CMOS_AND_A_v ; out -> mOBS_ACT . mX [ 505ULL ] = 0.0 ; out -> mOBS_ACT . mX [
506ULL ] = CMOS_AND_A_v ; out -> mOBS_ACT . mX [ 507ULL ] = CMOS_AND_A_v ;
out -> mOBS_ACT . mX [ 508ULL ] = CMOS_AND_B_v ; out -> mOBS_ACT . mX [
509ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 510ULL ] = CMOS_AND_B_v ; out ->
mOBS_ACT . mX [ 511ULL ] = CMOS_AND_B_v ; out -> mOBS_ACT . mX [ 512ULL ] =
t29 ; out -> mOBS_ACT . mX [ 513ULL ] = t43 -> mX . mX [ 36ULL ] ; out ->
mOBS_ACT . mX [ 514ULL ] = Capacitor4_p_v ; out -> mOBS_ACT . mX [ 515ULL ] =
t29 ; out -> mOBS_ACT . mX [ 516ULL ] = t43 -> mX . mX [ 34ULL ] ; out ->
mOBS_ACT . mX [ 517ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 518ULL ] = t43 -> mX
. mX [ 34ULL ] ; out -> mOBS_ACT . mX [ 519ULL ] = t43 -> mX . mX [ 34ULL ] ;
out -> mOBS_ACT . mX [ 520ULL ] = t43 -> mX . mX [ 41ULL ] ; out -> mOBS_ACT
. mX [ 521ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 522ULL ] = t43 -> mX . mX [
41ULL ] ; out -> mOBS_ACT . mX [ 523ULL ] = t43 -> mX . mX [ 41ULL ] ; out ->
mOBS_ACT . mX [ 524ULL ] = t43 -> mX . mX [ 40ULL ] ; out -> mOBS_ACT . mX [
525ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 526ULL ] = t43 -> mX . mX [ 40ULL ] ;
out -> mOBS_ACT . mX [ 527ULL ] = t43 -> mX . mX [ 40ULL ] ; out -> mOBS_ACT
. mX [ 528ULL ] = AC_Voltage_Source1_p_v ; out -> mOBS_ACT . mX [ 529ULL ] =
0.0 ; out -> mOBS_ACT . mX [ 530ULL ] = AC_Voltage_Source1_p_v ; out ->
mOBS_ACT . mX [ 531ULL ] = AC_Voltage_Source1_p_v ; out -> mOBS_ACT . mX [
532ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mOBS_ACT . mX [ 533ULL ] = 0.0 ;
out -> mOBS_ACT . mX [ 534ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mOBS_ACT
. mX [ 535ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mOBS_ACT . mX [ 536ULL ]
= CMOS_AND_A_v ; out -> mOBS_ACT . mX [ 537ULL ] = 0.0 ; out -> mOBS_ACT . mX
[ 538ULL ] = CMOS_AND_A_v ; out -> mOBS_ACT . mX [ 539ULL ] = CMOS_AND_A_v ;
out -> mOBS_ACT . mX [ 540ULL ] = Capacitor1_p_v ; out -> mOBS_ACT . mX [
541ULL ] = 0.0 ; out -> mOBS_ACT . mX [ 542ULL ] = Capacitor1_p_v ; out ->
mOBS_ACT . mX [ 543ULL ] = Capacitor1_p_v ; out -> mOBS_ACT . mX [ 544ULL ] =
t43 -> mX . mX [ 40ULL ] ; out -> mOBS_ACT . mX [ 545ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 546ULL ] = t43 -> mX . mX [ 40ULL ] ; out -> mOBS_ACT . mX [
547ULL ] = t43 -> mX . mX [ 40ULL ] ; out -> mOBS_ACT . mX [ 548ULL ] = t43
-> mX . mX [ 39ULL ] ; out -> mOBS_ACT . mX [ 549ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 550ULL ] = t43 -> mX . mX [ 39ULL ] ; out -> mOBS_ACT . mX [
551ULL ] = t43 -> mX . mX [ 39ULL ] ; out -> mOBS_ACT . mX [ 552ULL ] = t43
-> mX . mX [ 41ULL ] ; out -> mOBS_ACT . mX [ 553ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 554ULL ] = t43 -> mX . mX [ 41ULL ] ; out -> mOBS_ACT . mX [
555ULL ] = t43 -> mX . mX [ 41ULL ] ; out -> mOBS_ACT . mX [ 556ULL ] = t43
-> mX . mX [ 39ULL ] ; out -> mOBS_ACT . mX [ 557ULL ] = 0.0 ; out ->
mOBS_ACT . mX [ 558ULL ] = t43 -> mX . mX [ 39ULL ] ; out -> mOBS_ACT . mX [
559ULL ] = t43 -> mX . mX [ 39ULL ] ; ( void ) sys ; ( void ) out ; return 0
; }
