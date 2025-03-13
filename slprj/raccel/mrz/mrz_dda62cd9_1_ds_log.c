#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_log.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_log ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t43 , NeDsMethodOutput * out ) { real_T
AC_Voltage_Source1_p_v ; real_T CMOS_AND1_A_v ; real_T CMOS_AND1_B_v ; real_T
CMOS_AND1_J_v ; real_T CMOS_AND1_cA_i ; real_T CMOS_AND_A_v ; real_T
CMOS_AND_B_v ; real_T CMOS_AND_J_v ; real_T CMOS_AND_cA_i ; real_T
CMOS_NOT_rOUT_i ; real_T Capacitor1_i ; real_T Capacitor1_p_v ; real_T
Capacitor4_i ; real_T Capacitor4_p_v ; real_T Capacitor_i ; real_T Diode1_i ;
real_T Diode2_v ; real_T Diode3_i ; real_T Diode3_v ; real_T Diode_i ; real_T
Diode_n_v ; real_T Diode_v ; real_T Finite_Gain_Op_Amp1_i1 ; real_T
Finite_Gain_Op_Amp_i1 ; real_T IGBT2_ideal_switch_v ; real_T
IGBT_ideal_switch_v ; real_T Ideal_Transformer1_i1 ; real_T
Ideal_Transformer_p2_v ; real_T Inductor2_p_v ; real_T Op_Amp_outI ; real_T
Op_Amp_out_v ; real_T Resistor10_i ; real_T Resistor10_power_dissipated ;
real_T Resistor12_i ; real_T Resistor13_i ; real_T Resistor14_i ; real_T
Resistor14_power_dissipated ; real_T Resistor16_i ; real_T Resistor17_i ;
real_T Resistor3_n_v ; real_T Resistor4_i ; real_T Resistor5_i ; real_T
Resistor7_i ; real_T Resistor8_i ; real_T Resistor_power_dissipated ; real_T
Schmitt_Trigger_rOUT_i ; real_T Thyristor_Piecewise_Linear_iak ; real_T
Thyristor_Piecewise_Linear_ideal_switch_v ; real_T t12 ; real_T t16 ; real_T
t19 ; real_T t21 ; real_T t29 ; real_T t37 ; real_T t6 ; out -> mLOG . mX [
0ULL ] = ( ( t43 -> mX . mX [ 17ULL ] * 0.00051653551238143691 + t43 -> mX .
mX [ 18ULL ] * - 0.00051653551238143691 ) - t43 -> mX . mX [ 20ULL ] ) + t43
-> mX . mX [ 19ULL ] ; AC_Voltage_Source1_p_v = - t43 -> mX . mX [ 17ULL ] +
t43 -> mX . mX [ 18ULL ] ; CMOS_AND_A_v = t43 -> mX . mX [ 21ULL ] * 0.01 +
t43 -> mX . mX [ 0ULL ] ; CMOS_AND_B_v = t43 -> mX . mX [ 22ULL ] * 0.01 +
t43 -> mX . mX [ 1ULL ] ; CMOS_AND_J_v = t43 -> mX . mX [ 23ULL ] * 1.0E-6 +
t43 -> mX . mX [ 2ULL ] ; CMOS_AND_cA_i = ( ( t43 -> mX . mX [ 0ULL ] * -
0.040001 + t43 -> mX . mX [ 21ULL ] * - 1.00040001 ) - t43 -> mX . mX [ 24ULL
] ) + t43 -> mX . mX [ 25ULL ] * 0.04 ; out -> mLOG . mX [ 10ULL ] =
CMOS_AND_cA_i * CMOS_AND_cA_i * 1.0E-5 ; out -> mLOG . mX [ 15ULL ] = t43 ->
mX . mX [ 22ULL ] * t43 -> mX . mX [ 22ULL ] * 1.0E-5 ; out -> mLOG . mX [
20ULL ] = t43 -> mX . mX [ 23ULL ] * t43 -> mX . mX [ 23ULL ] * 1.0E-9 ; out
-> mLOG . mX [ 29ULL ] = t43 -> mX . mX [ 23ULL ] * t43 -> mX . mX [ 23ULL ]
* 25.0 ; CMOS_AND1_A_v = t43 -> mX . mX [ 27ULL ] * 1.0E-6 + t43 -> mX . mX [
4ULL ] ; CMOS_AND1_B_v = t43 -> mX . mX [ 28ULL ] * 0.01 + t43 -> mX . mX [
5ULL ] ; CMOS_AND1_J_v = t43 -> mX . mX [ 29ULL ] * 1.0E-6 + t43 -> mX . mX [
6ULL ] ; CMOS_AND1_cA_i = ( t43 -> mX . mX [ 4ULL ] * - 0.04 + t43 -> mX . mX
[ 27ULL ] * - 1.00000004 ) + t43 -> mX . mX [ 30ULL ] * 0.04 ; out -> mLOG .
mX [ 41ULL ] = CMOS_AND1_cA_i * CMOS_AND1_cA_i * 1.0E-5 ; out -> mLOG . mX [
46ULL ] = t43 -> mX . mX [ 28ULL ] * t43 -> mX . mX [ 28ULL ] * 1.0E-5 ; out
-> mLOG . mX [ 51ULL ] = t43 -> mX . mX [ 29ULL ] * t43 -> mX . mX [ 29ULL ]
* 1.0E-9 ; out -> mLOG . mX [ 60ULL ] = t43 -> mX . mX [ 29ULL ] * t43 -> mX
. mX [ 29ULL ] * 25.0 ; out -> mLOG . mX [ 71ULL ] = t43 -> mX . mX [ 21ULL ]
* t43 -> mX . mX [ 21ULL ] * 1.0E-5 ; out -> mLOG . mX [ 76ULL ] = t43 -> mX
. mX [ 27ULL ] * t43 -> mX . mX [ 27ULL ] * 1.0E-9 ; CMOS_NOT_rOUT_i = ( t43
-> mX . mX [ 4ULL ] * - 0.04 + t43 -> mX . mX [ 27ULL ] * - 4.0E-8 ) + t43 ->
mX . mX [ 30ULL ] * 0.04 ; out -> mLOG . mX [ 84ULL ] = CMOS_NOT_rOUT_i *
CMOS_NOT_rOUT_i * 25.0 ; Capacitor_i = ( t43 -> mX . mX [ 32ULL ] * - 0.001 +
t43 -> mX . mX [ 33ULL ] * 1.0E-9 ) + t43 -> mX . mX [ 8ULL ] ; out -> mLOG .
mX [ 93ULL ] = Capacitor_i * Capacitor_i * 1.0E-9 ; Capacitor1_i = t43 -> mX
. mX [ 0ULL ] * - 1.0E-6 + t43 -> mX . mX [ 21ULL ] * - 1.0E-8 ;
Capacitor1_p_v = ( t43 -> mX . mX [ 0ULL ] * - 1.0E-12 + t43 -> mX . mX [
21ULL ] * - 1.0E-14 ) + t43 -> mX . mX [ 10ULL ] ; t6 = ( t43 -> mX . mX [
34ULL ] * - 0.001 + t43 -> mX . mX [ 35ULL ] * 1.0E-9 ) + t43 -> mX . mX [
11ULL ] ; out -> mLOG . mX [ 104ULL ] = t6 * t6 * 1.0E-9 ; Capacitor4_i = ( (
t43 -> mX . mX [ 36ULL ] * 0.01 + t43 -> mX . mX [ 37ULL ] * - 0.01 ) + t43
-> mX . mX [ 38ULL ] * 0.010000001 ) + t43 -> mX . mX [ 13ULL ] ;
Capacitor4_p_v = - t43 -> mX . mX [ 38ULL ] + t43 -> mX . mX [ 37ULL ] ; out
-> mLOG . mX [ 110ULL ] = Capacitor4_i * Capacitor4_i * 1.0E-9 ; out -> mLOG
. mX [ 108ULL ] = ( - t43 -> mX . mX [ 36ULL ] - t43 -> mX . mX [ 38ULL ] ) +
t43 -> mX . mX [ 37ULL ] ; Diode_i = ( - t43 -> mX . mX [ 45ULL ] + t43 -> mX
. mX [ 35ULL ] * 1.0E-9 ) + t43 -> mX . mX [ 11ULL ] ; Diode_n_v = t43 -> mX
. mX [ 34ULL ] + t43 -> mX . mX [ 35ULL ] ; Diode_v = - t43 -> mX . mX [
34ULL ] - t43 -> mX . mX [ 35ULL ] ; out -> mLOG . mX [ 115ULL ] = Diode_i *
Diode_v ; Diode1_i = ( ( ( - t43 -> mX . mX [ 48ULL ] + t43 -> mX . mX [
38ULL ] * 1.0E-9 ) + t43 -> mX . mX [ 46ULL ] ) + t43 -> mX . mX [ 47ULL ] )
+ t43 -> mX . mX [ 13ULL ] ; out -> mLOG . mX [ 119ULL ] = Diode1_i * - t43
-> mX . mX [ 37ULL ] ; Diode2_v = - t43 -> mX . mX [ 34ULL ] + t43 -> mX . mX
[ 37ULL ] ; out -> mLOG . mX [ 124ULL ] = t43 -> mX . mX [ 46ULL ] * Diode2_v
; Diode3_i = ( ( ( - t43 -> mX . mX [ 51ULL ] + t43 -> mX . mX [ 38ULL ] *
9.9999999947364415E-10 ) + t43 -> mX . mX [ 49ULL ] ) + t43 -> mX . mX [
50ULL ] ) + t43 -> mX . mX [ 13ULL ] ; Diode3_v = - t43 -> mX . mX [ 34ULL ]
+ t43 -> mX . mX [ 36ULL ] ; out -> mLOG . mX [ 129ULL ] = Diode3_i *
Diode3_v ; out -> mLOG . mX [ 133ULL ] = t43 -> mX . mX [ 49ULL ] * - t43 ->
mX . mX [ 36ULL ] ; Finite_Gain_Op_Amp_i1 = t43 -> mX . mX [ 39ULL ] * -
1.0E-6 + t43 -> mX . mX [ 40ULL ] * 1.0E-6 ; out -> mLOG . mX [ 135ULL ] = -
t43 -> mX . mX [ 22ULL ] ; Finite_Gain_Op_Amp1_i1 = t43 -> mX . mX [ 39ULL ]
* - 1.0E-6 + t43 -> mX . mX [ 41ULL ] * 1.0E-6 ; out -> mLOG . mX [ 141ULL ]
= - t43 -> mX . mX [ 28ULL ] ; IGBT_ideal_switch_v = ( - t43 -> mX . mX [
34ULL ] - t43 -> mX . mX [ 35ULL ] ) + t43 -> mX . mX [ 32ULL ] ; out -> mLOG
. mX [ 157ULL ] = t43 -> mU . mX [ 0ULL ] ; out -> mLOG . mX [ 158ULL ] = t43
-> mX . mX [ 32ULL ] - Diode_n_v ; out -> mLOG . mX [ 169ULL ] = t43 -> mX .
mX [ 37ULL ] ; IGBT2_ideal_switch_v = - t43 -> mX . mX [ 37ULL ] + t43 -> mX
. mX [ 34ULL ] ; out -> mLOG . mX [ 182ULL ] = t43 -> mX . mX [ 34ULL ] - t43
-> mX . mX [ 37ULL ] ; t12 = - t43 -> mX . mX [ 36ULL ] + t43 -> mX . mX [
34ULL ] ; out -> mLOG . mX [ 195ULL ] = t43 -> mX . mX [ 34ULL ] - t43 -> mX
. mX [ 36ULL ] ; out -> mLOG . mX [ 206ULL ] = t43 -> mX . mX [ 36ULL ] ; t16
= t43 -> mX . mX [ 17ULL ] * - 0.00051653551238143691 + t43 -> mX . mX [
18ULL ] * 0.00051653551238143691 ; Ideal_Transformer_p2_v = t43 -> mX . mX [
17ULL ] * - 0.016070711128967456 + t43 -> mX . mX [ 18ULL ] *
0.016070711128967456 ; Ideal_Transformer1_i1 = - t43 -> mX . mX [ 19ULL ] +
t43 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 220ULL ] = t43 -> mX . mX [
35ULL ] * 1.0E-9 + t43 -> mX . mX [ 11ULL ] ; out -> mLOG . mX [ 225ULL ] =
t43 -> mX . mX [ 35ULL ] * t43 -> mX . mX [ 35ULL ] * 1.0000000000000002E-12
; out -> mLOG . mX [ 229ULL ] = t43 -> mX . mX [ 33ULL ] * 1.0E-9 + t43 -> mX
. mX [ 8ULL ] ; Inductor2_p_v = t43 -> mX . mX [ 32ULL ] + t43 -> mX . mX [
33ULL ] ; out -> mLOG . mX [ 233ULL ] = t43 -> mX . mX [ 38ULL ] * 1.0E-9 +
t43 -> mX . mX [ 13ULL ] ; out -> mLOG . mX [ 238ULL ] = t43 -> mX . mX [
38ULL ] * t43 -> mX . mX [ 38ULL ] * 1.0000000000000002E-12 ; Op_Amp_outI = (
t43 -> mX . mX [ 17ULL ] * - 0.016070711128967456 + t43 -> mX . mX [ 18ULL ]
* 0.016070711128967456 ) - t43 -> mX . mX [ 52ULL ] ; Resistor3_n_v = t43 ->
mX . mX [ 52ULL ] * 0.01 + t43 -> mX . mX [ 15ULL ] ; Op_Amp_out_v = -
Op_Amp_outI - ( - Resistor3_n_v ) ; out -> mLOG . mX [ 242ULL ] = ( ( t43 ->
mX . mX [ 0ULL ] * 1.0E-6 + t43 -> mX . mX [ 21ULL ] * 1.0E-8 ) + t43 -> mX .
mX [ 40ULL ] * 0.001 ) + t43 -> mX . mX [ 42ULL ] * - 0.001 ; out -> mLOG .
mX [ 245ULL ] = ( ( ( t43 -> mX . mX [ 39ULL ] * 1.0E-6 + t43 -> mX . mX [
40ULL ] * - 0.001001 ) + t43 -> mX . mX [ 41ULL ] * 0.001 ) + t43 -> mX . mX
[ 42ULL ] * 0.001 ) + t43 -> mX . mX [ 43ULL ] * - 0.001 ; out -> mLOG . mX [
249ULL ] = ( t43 -> mX . mX [ 39ULL ] * 1.0E-6 + t43 -> mX . mX [ 41ULL ] * -
0.001001 ) + t43 -> mX . mX [ 43ULL ] * 0.001 ; out -> mLOG . mX [ 253ULL ] =
- t43 -> mX . mX [ 45ULL ] ; out -> mLOG . mX [ 257ULL ] = ( ( ( ( - t43 ->
mX . mX [ 48ULL ] - t43 -> mX . mX [ 51ULL ] ) + t43 -> mX . mX [ 38ULL ] *
9.9999999947364415E-10 ) + t43 -> mX . mX [ 46ULL ] ) + t43 -> mX . mX [
49ULL ] ) + t43 -> mX . mX [ 13ULL ] ; out -> mLOG . mX [ 260ULL ] = ( ( t43
-> mX . mX [ 39ULL ] * 2.0E-6 + t43 -> mX . mX [ 40ULL ] * - 1.0E-6 ) + t43
-> mX . mX [ 41ULL ] * - 1.0E-6 ) - t43 -> mX . mX [ 44ULL ] ; out -> mLOG .
mX [ 262ULL ] = ( t43 -> mX . mX [ 39ULL ] * - 2.0E-6 + t43 -> mX . mX [
40ULL ] * 1.0E-6 ) + t43 -> mX . mX [ 41ULL ] * 1.0E-6 ;
Resistor_power_dissipated = Ideal_Transformer_p2_v * Ideal_Transformer_p2_v ;
Resistor10_i = t43 -> mX . mX [ 40ULL ] * - 0.001 + t43 -> mX . mX [ 42ULL ]
* 0.001 ; Resistor10_power_dissipated = Resistor10_i * Resistor10_i * 1000.0
; Resistor12_i = t43 -> mX . mX [ 42ULL ] * - 0.001 ; out -> mLOG . mX [
285ULL ] = Resistor12_i * Resistor12_i * 1000.0 ; Resistor13_i = t43 -> mX .
mX [ 43ULL ] * - 0.001 + 0.005 ; out -> mLOG . mX [ 289ULL ] = Resistor13_i *
Resistor13_i * 1000.0 ; Resistor14_i = t43 -> mX . mX [ 41ULL ] * - 0.001 +
t43 -> mX . mX [ 43ULL ] * 0.001 ; Resistor14_power_dissipated = Resistor14_i
* Resistor14_i * 1000.0 ; Resistor16_i = t43 -> mX . mX [ 43ULL ] * - 0.001 ;
out -> mLOG . mX [ 303ULL ] = Resistor16_i * Resistor16_i * 1000.0 ;
Resistor17_i = ( t43 -> mX . mX [ 36ULL ] * 0.01 + t43 -> mX . mX [ 37ULL ] *
- 0.01 ) + t43 -> mX . mX [ 38ULL ] * 0.01 ; out -> mLOG . mX [ 308ULL ] =
Resistor17_i * Resistor17_i * 100.0 ; out -> mLOG . mX [ 312ULL ] =
Ideal_Transformer_p2_v * Ideal_Transformer_p2_v * 2.0 ; Resistor4_i = t43 ->
mX . mX [ 42ULL ] * - 0.001 + 0.005 ; out -> mLOG . mX [ 316ULL ] =
Resistor4_i * Resistor4_i * 1000.0 ; Resistor5_i = t43 -> mX . mX [ 0ULL ] *
1.0E-6 + t43 -> mX . mX [ 21ULL ] * 1.0E-8 ; out -> mLOG . mX [ 320ULL ] =
Resistor5_i * Resistor5_i * 1.0E+6 ; Resistor7_i = t43 -> mX . mX [ 32ULL ] *
0.001 ; out -> mLOG . mX [ 324ULL ] = Resistor7_i * Resistor7_i * 1000.0 ;
Resistor8_i = t43 -> mX . mX [ 34ULL ] * 0.001 ; out -> mLOG . mX [ 328ULL ]
= Resistor8_i * Resistor8_i * 1000.0 ; out -> mLOG . mX [ 333ULL ] =
Op_Amp_outI * Op_Amp_outI ; out -> mLOG . mX [ 340ULL ] = t43 -> mX . mX [
52ULL ] * t43 -> mX . mX [ 52ULL ] * 1.0E-5 ; out -> mLOG . mX [ 345ULL ] =
t43 -> mX . mX [ 24ULL ] * t43 -> mX . mX [ 24ULL ] * 1.0E-9 ;
Schmitt_Trigger_rOUT_i = ( t43 -> mX . mX [ 0ULL ] * - 0.04 + t43 -> mX . mX
[ 21ULL ] * - 0.0004 ) + t43 -> mX . mX [ 25ULL ] * 0.04 ; out -> mLOG . mX [
353ULL ] = Schmitt_Trigger_rOUT_i * Schmitt_Trigger_rOUT_i * 25.0 ;
Thyristor_Piecewise_Linear_iak = ( t43 -> mX . mX [ 33ULL ] * 1.0E-9 - t43 ->
mX . mX [ 19ULL ] ) + t43 -> mX . mX [ 8ULL ] ;
Thyristor_Piecewise_Linear_ideal_switch_v = ( - t43 -> mX . mX [ 32ULL ] -
t43 -> mX . mX [ 33ULL ] ) + t43 -> mX . mX [ 18ULL ] ; out -> mLOG . mX [
376ULL ] = t43 -> mX . mX [ 18ULL ] - Inductor2_p_v ; t19 = ( t43 -> mX . mX
[ 33ULL ] * 1.0E-9 - t43 -> mX . mX [ 20ULL ] ) + t43 -> mX . mX [ 8ULL ] ;
out -> mLOG . mX [ 389ULL ] = - t43 -> mX . mX [ 18ULL ] ; t21 = ( - t43 ->
mX . mX [ 32ULL ] - t43 -> mX . mX [ 33ULL ] ) + t43 -> mX . mX [ 17ULL ] ;
out -> mLOG . mX [ 404ULL ] = t43 -> mX . mX [ 17ULL ] - Inductor2_p_v ; out
-> mLOG . mX [ 417ULL ] = - t43 -> mX . mX [ 17ULL ] ; t29 = Capacitor4_p_v -
t43 -> mX . mX [ 36ULL ] ; if ( t43 -> mM . mX [ 36ULL ] != 0 ) { t37 =
IGBT_ideal_switch_v - 0.8 ; } else { t37 = t43 -> mU . mX [ 0ULL ] - 6.0 ; }
out -> mLOG . mX [ 152ULL ] = t37 ; if ( t43 -> mM . mX [ 37ULL ] != 0 ) {
t37 = t43 -> mX . mX [ 37ULL ] - 0.8 ; } else { t37 = t43 -> mU . mX [ 2ULL ]
- 6.0 ; } out -> mLOG . mX [ 164ULL ] = t37 ; if ( t43 -> mM . mX [ 38ULL ]
!= 0 ) { t37 = IGBT2_ideal_switch_v - 0.8 ; } else { t37 = t43 -> mU . mX [
1ULL ] - 6.0 ; } out -> mLOG . mX [ 176ULL ] = t37 ; if ( t43 -> mM . mX [
39ULL ] != 0 ) { t37 = t12 - 0.8 ; } else { t37 = t43 -> mU . mX [ 2ULL ] -
6.0 ; } out -> mLOG . mX [ 189ULL ] = t37 ; if ( t43 -> mM . mX [ 40ULL ] !=
0 ) { t37 = t43 -> mX . mX [ 36ULL ] - 0.8 ; } else { t37 = t43 -> mU . mX [
1ULL ] - 6.0 ; } out -> mLOG . mX [ 201ULL ] = t37 ; out -> mLOG . mX [ 1ULL
] = AC_Voltage_Source1_p_v ; out -> mLOG . mX [ 2ULL ] =
AC_Voltage_Source1_p_v ; out -> mLOG . mX [ 3ULL ] = CMOS_AND_A_v ; out ->
mLOG . mX [ 4ULL ] = CMOS_AND_B_v ; out -> mLOG . mX [ 5ULL ] = CMOS_AND_J_v
; out -> mLOG . mX [ 6ULL ] = CMOS_AND_cA_i ; out -> mLOG . mX [ 7ULL ] =
CMOS_AND_A_v ; out -> mLOG . mX [ 8ULL ] = CMOS_AND_A_v ; out -> mLOG . mX [
9ULL ] = t43 -> mX . mX [ 3ULL ] ; out -> mLOG . mX [ 11ULL ] = t43 -> mX .
mX [ 22ULL ] ; out -> mLOG . mX [ 12ULL ] = CMOS_AND_B_v ; out -> mLOG . mX [
13ULL ] = CMOS_AND_B_v ; out -> mLOG . mX [ 14ULL ] = t43 -> mX . mX [ 1ULL ]
; out -> mLOG . mX [ 16ULL ] = t43 -> mX . mX [ 23ULL ] ; out -> mLOG . mX [
17ULL ] = CMOS_AND_J_v ; out -> mLOG . mX [ 18ULL ] = CMOS_AND_J_v ; out ->
mLOG . mX [ 19ULL ] = t43 -> mX . mX [ 2ULL ] ; out -> mLOG . mX [ 21ULL ] =
CMOS_AND_A_v ; out -> mLOG . mX [ 22ULL ] = CMOS_AND_B_v ; out -> mLOG . mX [
23ULL ] = t43 -> mX . mX [ 26ULL ] ; out -> mLOG . mX [ 24ULL ] = t43 -> mX .
mX [ 26ULL ] * 0.2 ; out -> mLOG . mX [ 25ULL ] = t43 -> mX . mX [ 23ULL ] ;
out -> mLOG . mX [ 26ULL ] = CMOS_AND_J_v ; out -> mLOG . mX [ 27ULL ] = t43
-> mX . mX [ 26ULL ] ; out -> mLOG . mX [ 28ULL ] = t43 -> mX . mX [ 23ULL ]
* 25.0 ; out -> mLOG . mX [ 30ULL ] = - t43 -> mX . mX [ 23ULL ] ; out ->
mLOG . mX [ 31ULL ] = t43 -> mX . mX [ 26ULL ] ; out -> mLOG . mX [ 32ULL ] =
t43 -> mX . mX [ 26ULL ] ; out -> mLOG . mX [ 33ULL ] = t43 -> mX . mX [
26ULL ] ; out -> mLOG . mX [ 34ULL ] = CMOS_AND1_A_v ; out -> mLOG . mX [
35ULL ] = CMOS_AND1_B_v ; out -> mLOG . mX [ 36ULL ] = CMOS_AND1_J_v ; out ->
mLOG . mX [ 37ULL ] = CMOS_AND1_cA_i ; out -> mLOG . mX [ 38ULL ] =
CMOS_AND1_A_v ; out -> mLOG . mX [ 39ULL ] = CMOS_AND1_A_v ; out -> mLOG . mX
[ 40ULL ] = t43 -> mX . mX [ 7ULL ] ; out -> mLOG . mX [ 42ULL ] = t43 -> mX
. mX [ 28ULL ] ; out -> mLOG . mX [ 43ULL ] = CMOS_AND1_B_v ; out -> mLOG .
mX [ 44ULL ] = CMOS_AND1_B_v ; out -> mLOG . mX [ 45ULL ] = t43 -> mX . mX [
5ULL ] ; out -> mLOG . mX [ 47ULL ] = t43 -> mX . mX [ 29ULL ] ; out -> mLOG
. mX [ 48ULL ] = CMOS_AND1_J_v ; out -> mLOG . mX [ 49ULL ] = CMOS_AND1_J_v ;
out -> mLOG . mX [ 50ULL ] = t43 -> mX . mX [ 6ULL ] ; out -> mLOG . mX [
52ULL ] = CMOS_AND1_A_v ; out -> mLOG . mX [ 53ULL ] = CMOS_AND1_B_v ; out ->
mLOG . mX [ 54ULL ] = t43 -> mX . mX [ 31ULL ] ; out -> mLOG . mX [ 55ULL ] =
t43 -> mX . mX [ 31ULL ] * 0.2 ; out -> mLOG . mX [ 56ULL ] = t43 -> mX . mX
[ 29ULL ] ; out -> mLOG . mX [ 57ULL ] = CMOS_AND1_J_v ; out -> mLOG . mX [
58ULL ] = t43 -> mX . mX [ 31ULL ] ; out -> mLOG . mX [ 59ULL ] = t43 -> mX .
mX [ 29ULL ] * 25.0 ; out -> mLOG . mX [ 61ULL ] = - t43 -> mX . mX [ 29ULL ]
; out -> mLOG . mX [ 62ULL ] = t43 -> mX . mX [ 31ULL ] ; out -> mLOG . mX [
63ULL ] = t43 -> mX . mX [ 31ULL ] ; out -> mLOG . mX [ 64ULL ] = t43 -> mX .
mX [ 31ULL ] ; out -> mLOG . mX [ 65ULL ] = CMOS_AND_A_v ; out -> mLOG . mX [
66ULL ] = CMOS_AND1_A_v ; out -> mLOG . mX [ 67ULL ] = t43 -> mX . mX [ 21ULL
] ; out -> mLOG . mX [ 68ULL ] = CMOS_AND_A_v ; out -> mLOG . mX [ 69ULL ] =
CMOS_AND_A_v ; out -> mLOG . mX [ 70ULL ] = t43 -> mX . mX [ 0ULL ] ; out ->
mLOG . mX [ 72ULL ] = t43 -> mX . mX [ 27ULL ] ; out -> mLOG . mX [ 73ULL ] =
CMOS_AND1_A_v ; out -> mLOG . mX [ 74ULL ] = CMOS_AND1_A_v ; out -> mLOG . mX
[ 75ULL ] = t43 -> mX . mX [ 4ULL ] ; out -> mLOG . mX [ 77ULL ] =
CMOS_AND_A_v ; out -> mLOG . mX [ 78ULL ] = t43 -> mX . mX [ 30ULL ] ; out ->
mLOG . mX [ 79ULL ] = t43 -> mX . mX [ 30ULL ] * 0.2 ; out -> mLOG . mX [
80ULL ] = CMOS_NOT_rOUT_i ; out -> mLOG . mX [ 81ULL ] = CMOS_AND1_A_v ; out
-> mLOG . mX [ 82ULL ] = t43 -> mX . mX [ 30ULL ] ; out -> mLOG . mX [ 83ULL
] = CMOS_NOT_rOUT_i * 25.0 ; out -> mLOG . mX [ 85ULL ] = - CMOS_NOT_rOUT_i ;
out -> mLOG . mX [ 86ULL ] = t43 -> mX . mX [ 30ULL ] ; out -> mLOG . mX [
87ULL ] = t43 -> mX . mX [ 30ULL ] ; out -> mLOG . mX [ 88ULL ] = t43 -> mX .
mX [ 30ULL ] ; out -> mLOG . mX [ 89ULL ] = Capacitor_i ; out -> mLOG . mX [
90ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mLOG . mX [ 91ULL ] = t43 -> mX .
mX [ 32ULL ] ; out -> mLOG . mX [ 92ULL ] = t43 -> mX . mX [ 9ULL ] ; out ->
mLOG . mX [ 94ULL ] = t43 -> mD . mX [ 0ULL ] ; out -> mLOG . mX [ 95ULL ] =
Capacitor1_i ; out -> mLOG . mX [ 96ULL ] = Capacitor1_p_v ; out -> mLOG . mX
[ 97ULL ] = Capacitor1_p_v ; out -> mLOG . mX [ 98ULL ] = t43 -> mX . mX [
10ULL ] ; out -> mLOG . mX [ 99ULL ] = Capacitor1_i * Capacitor1_i * 1.0E-9 *
1000.0 ; out -> mLOG . mX [ 100ULL ] = t6 ; out -> mLOG . mX [ 101ULL ] = t43
-> mX . mX [ 34ULL ] ; out -> mLOG . mX [ 102ULL ] = t43 -> mX . mX [ 34ULL ]
; out -> mLOG . mX [ 103ULL ] = t43 -> mX . mX [ 12ULL ] ; out -> mLOG . mX [
105ULL ] = Capacitor4_i ; out -> mLOG . mX [ 106ULL ] = t43 -> mX . mX [
36ULL ] ; out -> mLOG . mX [ 107ULL ] = Capacitor4_p_v ; out -> mLOG . mX [
109ULL ] = t43 -> mX . mX [ 14ULL ] ; out -> mLOG . mX [ 111ULL ] = - 0.01 +
( ( ( ( ( t43 -> mX . mX [ 39ULL ] * - 2.0E-6 + t43 -> mX . mX [ 40ULL ] *
1.0E-6 ) + t43 -> mX . mX [ 41ULL ] * 1.0E-6 ) + t43 -> mX . mX [ 42ULL ] *
0.001 ) + t43 -> mX . mX [ 43ULL ] * 0.001 ) + t43 -> mX . mX [ 44ULL ] ) ;
out -> mLOG . mX [ 112ULL ] = Diode_i ; out -> mLOG . mX [ 113ULL ] =
Diode_n_v ; out -> mLOG . mX [ 114ULL ] = Diode_v ; out -> mLOG . mX [ 116ULL
] = Diode1_i ; out -> mLOG . mX [ 117ULL ] = t43 -> mX . mX [ 37ULL ] ; out
-> mLOG . mX [ 118ULL ] = - t43 -> mX . mX [ 37ULL ] ; out -> mLOG . mX [
120ULL ] = t43 -> mX . mX [ 46ULL ] ; out -> mLOG . mX [ 121ULL ] = t43 -> mX
. mX [ 34ULL ] ; out -> mLOG . mX [ 122ULL ] = t43 -> mX . mX [ 37ULL ] ; out
-> mLOG . mX [ 123ULL ] = Diode2_v ; out -> mLOG . mX [ 125ULL ] = Diode3_i ;
out -> mLOG . mX [ 126ULL ] = t43 -> mX . mX [ 34ULL ] ; out -> mLOG . mX [
127ULL ] = t43 -> mX . mX [ 36ULL ] ; out -> mLOG . mX [ 128ULL ] = Diode3_v
; out -> mLOG . mX [ 130ULL ] = t43 -> mX . mX [ 49ULL ] ; out -> mLOG . mX [
131ULL ] = t43 -> mX . mX [ 36ULL ] ; out -> mLOG . mX [ 132ULL ] = - t43 ->
mX . mX [ 36ULL ] ; out -> mLOG . mX [ 134ULL ] = Finite_Gain_Op_Amp_i1 ; out
-> mLOG . mX [ 136ULL ] = t43 -> mX . mX [ 39ULL ] ; out -> mLOG . mX [
137ULL ] = CMOS_AND_B_v ; out -> mLOG . mX [ 138ULL ] = t43 -> mX . mX [
40ULL ] ; out -> mLOG . mX [ 139ULL ] = Finite_Gain_Op_Amp_i1 * 1.0E+6 ; out
-> mLOG . mX [ 140ULL ] = Finite_Gain_Op_Amp1_i1 ; out -> mLOG . mX [ 142ULL
] = t43 -> mX . mX [ 39ULL ] ; out -> mLOG . mX [ 143ULL ] = CMOS_AND1_B_v ;
out -> mLOG . mX [ 144ULL ] = t43 -> mX . mX [ 41ULL ] ; out -> mLOG . mX [
145ULL ] = Finite_Gain_Op_Amp1_i1 * 1.0E+6 ; out -> mLOG . mX [ 146ULL ] =
t43 -> mX . mX [ 32ULL ] ; out -> mLOG . mX [ 147ULL ] = Diode_n_v ; out ->
mLOG . mX [ 148ULL ] = t43 -> mU . mX [ 0ULL ] ; out -> mLOG . mX [ 149ULL ]
= t43 -> mX . mX [ 45ULL ] ; out -> mLOG . mX [ 150ULL ] = t43 -> mU . mX [
0ULL ] ; out -> mLOG . mX [ 151ULL ] = t43 -> mX . mX [ 45ULL ] ; out -> mLOG
. mX [ 153ULL ] = Diode_n_v ; out -> mLOG . mX [ 154ULL ] = t43 -> mX . mX [
32ULL ] ; out -> mLOG . mX [ 155ULL ] = t43 -> mX . mX [ 45ULL ] *
IGBT_ideal_switch_v * 0.001 * 1000.0 ; out -> mLOG . mX [ 156ULL ] =
IGBT_ideal_switch_v ; out -> mLOG . mX [ 159ULL ] = t43 -> mX . mX [ 37ULL ]
; out -> mLOG . mX [ 160ULL ] = t43 -> mU . mX [ 2ULL ] ; out -> mLOG . mX [
161ULL ] = t43 -> mX . mX [ 47ULL ] ; out -> mLOG . mX [ 162ULL ] = t43 -> mU
. mX [ 2ULL ] ; out -> mLOG . mX [ 163ULL ] = t43 -> mX . mX [ 47ULL ] ; out
-> mLOG . mX [ 165ULL ] = t43 -> mX . mX [ 37ULL ] ; out -> mLOG . mX [
166ULL ] = t43 -> mX . mX [ 37ULL ] * t43 -> mX . mX [ 47ULL ] * 0.001 *
1000.0 ; out -> mLOG . mX [ 167ULL ] = t43 -> mX . mX [ 37ULL ] ; out -> mLOG
. mX [ 168ULL ] = t43 -> mU . mX [ 2ULL ] ; out -> mLOG . mX [ 170ULL ] = t43
-> mX . mX [ 34ULL ] ; out -> mLOG . mX [ 171ULL ] = t43 -> mX . mX [ 37ULL ]
; out -> mLOG . mX [ 172ULL ] = t43 -> mU . mX [ 1ULL ] ; out -> mLOG . mX [
173ULL ] = t43 -> mX . mX [ 48ULL ] ; out -> mLOG . mX [ 174ULL ] = t43 -> mU
. mX [ 1ULL ] ; out -> mLOG . mX [ 175ULL ] = t43 -> mX . mX [ 48ULL ] ; out
-> mLOG . mX [ 177ULL ] = t43 -> mX . mX [ 37ULL ] ; out -> mLOG . mX [
178ULL ] = t43 -> mX . mX [ 34ULL ] ; out -> mLOG . mX [ 179ULL ] = t43 -> mX
. mX [ 48ULL ] * IGBT2_ideal_switch_v * 0.001 * 1000.0 ; out -> mLOG . mX [
180ULL ] = IGBT2_ideal_switch_v ; out -> mLOG . mX [ 181ULL ] = t43 -> mU .
mX [ 1ULL ] ; out -> mLOG . mX [ 183ULL ] = t43 -> mX . mX [ 34ULL ] ; out ->
mLOG . mX [ 184ULL ] = t43 -> mX . mX [ 36ULL ] ; out -> mLOG . mX [ 185ULL ]
= t43 -> mU . mX [ 2ULL ] ; out -> mLOG . mX [ 186ULL ] = t43 -> mX . mX [
50ULL ] ; out -> mLOG . mX [ 187ULL ] = t43 -> mU . mX [ 2ULL ] ; out -> mLOG
. mX [ 188ULL ] = t43 -> mX . mX [ 50ULL ] ; out -> mLOG . mX [ 190ULL ] =
t43 -> mX . mX [ 36ULL ] ; out -> mLOG . mX [ 191ULL ] = t43 -> mX . mX [
34ULL ] ; out -> mLOG . mX [ 192ULL ] = t43 -> mX . mX [ 50ULL ] * t12 *
0.001 * 1000.0 ; out -> mLOG . mX [ 193ULL ] = t12 ; out -> mLOG . mX [
194ULL ] = t43 -> mU . mX [ 2ULL ] ; out -> mLOG . mX [ 196ULL ] = t43 -> mX
. mX [ 36ULL ] ; out -> mLOG . mX [ 197ULL ] = t43 -> mU . mX [ 1ULL ] ; out
-> mLOG . mX [ 198ULL ] = t43 -> mX . mX [ 51ULL ] ; out -> mLOG . mX [
199ULL ] = t43 -> mU . mX [ 1ULL ] ; out -> mLOG . mX [ 200ULL ] = t43 -> mX
. mX [ 51ULL ] ; out -> mLOG . mX [ 202ULL ] = t43 -> mX . mX [ 36ULL ] ; out
-> mLOG . mX [ 203ULL ] = t43 -> mX . mX [ 36ULL ] * t43 -> mX . mX [ 51ULL ]
* 0.001 * 1000.0 ; out -> mLOG . mX [ 204ULL ] = t43 -> mX . mX [ 36ULL ] ;
out -> mLOG . mX [ 205ULL ] = t43 -> mU . mX [ 1ULL ] ; out -> mLOG . mX [
207ULL ] = t16 ; out -> mLOG . mX [ 208ULL ] = t16 * - 62.225 ; out -> mLOG .
mX [ 209ULL ] = AC_Voltage_Source1_p_v ; out -> mLOG . mX [ 210ULL ] =
Ideal_Transformer_p2_v ; out -> mLOG . mX [ 211ULL ] = AC_Voltage_Source1_p_v
; out -> mLOG . mX [ 212ULL ] = AC_Voltage_Source1_p_v * 0.016070711128967456
; out -> mLOG . mX [ 213ULL ] = Ideal_Transformer1_i1 ; out -> mLOG . mX [
214ULL ] = - Ideal_Transformer1_i1 ; out -> mLOG . mX [ 215ULL ] = t43 -> mX
. mX [ 17ULL ] ; out -> mLOG . mX [ 216ULL ] = AC_Voltage_Source1_p_v ; out
-> mLOG . mX [ 217ULL ] = t43 -> mX . mX [ 18ULL ] ; out -> mLOG . mX [
218ULL ] = AC_Voltage_Source1_p_v ; out -> mLOG . mX [ 219ULL ] =
AC_Voltage_Source1_p_v ; out -> mLOG . mX [ 221ULL ] = t43 -> mX . mX [ 34ULL
] ; out -> mLOG . mX [ 222ULL ] = Diode_n_v ; out -> mLOG . mX [ 223ULL ] =
t43 -> mX . mX [ 35ULL ] ; out -> mLOG . mX [ 224ULL ] = t43 -> mX . mX [
11ULL ] ; out -> mLOG . mX [ 226ULL ] = t43 -> mD . mX [ 1ULL ] ; out -> mLOG
. mX [ 227ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mLOG . mX [ 228ULL ] =
Inductor2_p_v ; out -> mLOG . mX [ 230ULL ] = t43 -> mX . mX [ 8ULL ] ; out
-> mLOG . mX [ 231ULL ] = t43 -> mX . mX [ 33ULL ] * t43 -> mX . mX [ 33ULL ]
* 1.0000000000000002E-12 * 1000.0 ; out -> mLOG . mX [ 232ULL ] = t43 -> mX .
mX [ 33ULL ] ; out -> mLOG . mX [ 234ULL ] = Capacitor4_p_v ; out -> mLOG .
mX [ 235ULL ] = t43 -> mX . mX [ 37ULL ] ; out -> mLOG . mX [ 236ULL ] = t43
-> mX . mX [ 38ULL ] ; out -> mLOG . mX [ 237ULL ] = t43 -> mX . mX [ 13ULL ]
; out -> mLOG . mX [ 239ULL ] = Op_Amp_out_v ; out -> mLOG . mX [ 240ULL ] =
Op_Amp_outI ; out -> mLOG . mX [ 241ULL ] = Capacitor1_p_v ; out -> mLOG . mX
[ 243ULL ] = t43 -> mX . mX [ 42ULL ] ; out -> mLOG . mX [ 244ULL ] = t43 ->
mX . mX [ 40ULL ] ; out -> mLOG . mX [ 246ULL ] = t43 -> mX . mX [ 42ULL ] ;
out -> mLOG . mX [ 247ULL ] = t43 -> mX . mX [ 43ULL ] ; out -> mLOG . mX [
248ULL ] = t43 -> mX . mX [ 41ULL ] ; out -> mLOG . mX [ 250ULL ] = t43 -> mX
. mX [ 43ULL ] ; out -> mLOG . mX [ 251ULL ] = t43 -> mX . mX [ 32ULL ] ; out
-> mLOG . mX [ 252ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mLOG . mX [
254ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mLOG . mX [ 255ULL ] = t43 -> mX
. mX [ 34ULL ] ; out -> mLOG . mX [ 256ULL ] = t43 -> mX . mX [ 34ULL ] ; out
-> mLOG . mX [ 258ULL ] = t43 -> mX . mX [ 34ULL ] ; out -> mLOG . mX [
259ULL ] = t43 -> mX . mX [ 39ULL ] ; out -> mLOG . mX [ 261ULL ] = t43 -> mX
. mX [ 44ULL ] ; out -> mLOG . mX [ 263ULL ] = t43 -> mU . mX [ 3ULL ] ; out
-> mLOG . mX [ 264ULL ] = Ideal_Transformer_p2_v ; out -> mLOG . mX [ 265ULL
] = Ideal_Transformer_p2_v ; out -> mLOG . mX [ 266ULL ] =
Ideal_Transformer_p2_v ; out -> mLOG . mX [ 267ULL ] =
Resistor_power_dissipated ; out -> mLOG . mX [ 268ULL ] =
Ideal_Transformer_p2_v ; out -> mLOG . mX [ 269ULL ] = Ideal_Transformer_p2_v
; out -> mLOG . mX [ 270ULL ] = Ideal_Transformer_p2_v ; out -> mLOG . mX [
271ULL ] = Resistor_power_dissipated ; out -> mLOG . mX [ 272ULL ] =
Resistor10_i ; out -> mLOG . mX [ 273ULL ] = t43 -> mX . mX [ 42ULL ] ; out
-> mLOG . mX [ 274ULL ] = Capacitor1_p_v ; out -> mLOG . mX [ 275ULL ] =
Resistor10_i * 1000.0 ; out -> mLOG . mX [ 276ULL ] =
Resistor10_power_dissipated ; out -> mLOG . mX [ 277ULL ] = Resistor10_i ;
out -> mLOG . mX [ 278ULL ] = t43 -> mX . mX [ 40ULL ] ; out -> mLOG . mX [
279ULL ] = t43 -> mX . mX [ 42ULL ] ; out -> mLOG . mX [ 280ULL ] =
Resistor10_i * 1000.0 ; out -> mLOG . mX [ 281ULL ] =
Resistor10_power_dissipated ; out -> mLOG . mX [ 282ULL ] = Resistor12_i ;
out -> mLOG . mX [ 283ULL ] = t43 -> mX . mX [ 42ULL ] ; out -> mLOG . mX [
284ULL ] = Resistor12_i * 1000.0 ; out -> mLOG . mX [ 286ULL ] = Resistor16_i
+ 0.005 ; out -> mLOG . mX [ 287ULL ] = t43 -> mX . mX [ 43ULL ] ; out ->
mLOG . mX [ 288ULL ] = Resistor13_i * 1000.0 ; out -> mLOG . mX [ 290ULL ] =
Resistor14_i ; out -> mLOG . mX [ 291ULL ] = t43 -> mX . mX [ 43ULL ] ; out
-> mLOG . mX [ 292ULL ] = t43 -> mX . mX [ 40ULL ] ; out -> mLOG . mX [
293ULL ] = Resistor14_i * 1000.0 ; out -> mLOG . mX [ 294ULL ] =
Resistor14_power_dissipated ; out -> mLOG . mX [ 295ULL ] = Resistor14_i ;
out -> mLOG . mX [ 296ULL ] = t43 -> mX . mX [ 41ULL ] ; out -> mLOG . mX [
297ULL ] = t43 -> mX . mX [ 43ULL ] ; out -> mLOG . mX [ 298ULL ] =
Resistor14_i * 1000.0 ; out -> mLOG . mX [ 299ULL ] =
Resistor14_power_dissipated ; out -> mLOG . mX [ 300ULL ] = Resistor16_i ;
out -> mLOG . mX [ 301ULL ] = t43 -> mX . mX [ 43ULL ] ; out -> mLOG . mX [
302ULL ] = Resistor16_i * 1000.0 ; out -> mLOG . mX [ 304ULL ] = Resistor17_i
; out -> mLOG . mX [ 305ULL ] = Capacitor4_p_v ; out -> mLOG . mX [ 306ULL ]
= t43 -> mX . mX [ 36ULL ] ; out -> mLOG . mX [ 307ULL ] = Resistor17_i *
100.0 ; out -> mLOG . mX [ 309ULL ] = Ideal_Transformer_p2_v ; out -> mLOG .
mX [ 310ULL ] = Resistor3_n_v ; out -> mLOG . mX [ 311ULL ] =
Ideal_Transformer_p2_v * 2.0 ; out -> mLOG . mX [ 313ULL ] = Resistor12_i +
0.005 ; out -> mLOG . mX [ 314ULL ] = t43 -> mX . mX [ 42ULL ] ; out -> mLOG
. mX [ 315ULL ] = Resistor4_i * 1000.0 ; out -> mLOG . mX [ 317ULL ] =
Resistor5_i ; out -> mLOG . mX [ 318ULL ] = CMOS_AND_A_v ; out -> mLOG . mX [
319ULL ] = Resistor5_i * 1.0E+6 ; out -> mLOG . mX [ 321ULL ] = Resistor7_i ;
out -> mLOG . mX [ 322ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mLOG . mX [
323ULL ] = Resistor7_i * 1000.0 ; out -> mLOG . mX [ 325ULL ] = Resistor8_i ;
out -> mLOG . mX [ 326ULL ] = t43 -> mX . mX [ 34ULL ] ; out -> mLOG . mX [
327ULL ] = Resistor8_i * 1000.0 ; out -> mLOG . mX [ 329ULL ] = - Op_Amp_outI
; out -> mLOG . mX [ 330ULL ] = Resistor3_n_v ; out -> mLOG . mX [ 331ULL ] =
Op_Amp_out_v ; out -> mLOG . mX [ 332ULL ] = - Op_Amp_outI ; out -> mLOG . mX
[ 334ULL ] = Resistor3_n_v ; out -> mLOG . mX [ 335ULL ] = CMOS_AND_A_v ; out
-> mLOG . mX [ 336ULL ] = t43 -> mX . mX [ 52ULL ] ; out -> mLOG . mX [
337ULL ] = Resistor3_n_v ; out -> mLOG . mX [ 338ULL ] = Resistor3_n_v ; out
-> mLOG . mX [ 339ULL ] = t43 -> mX . mX [ 15ULL ] ; out -> mLOG . mX [
341ULL ] = t43 -> mX . mX [ 24ULL ] ; out -> mLOG . mX [ 342ULL ] =
CMOS_AND_A_v ; out -> mLOG . mX [ 343ULL ] = CMOS_AND_A_v ; out -> mLOG . mX
[ 344ULL ] = t43 -> mX . mX [ 16ULL ] ; out -> mLOG . mX [ 346ULL ] =
Resistor3_n_v ; out -> mLOG . mX [ 347ULL ] = t43 -> mX . mX [ 25ULL ] ; out
-> mLOG . mX [ 348ULL ] = ( real_T ) ( size_t ) t43 -> mQ . mX [ 0ULL ] ; out
-> mLOG . mX [ 349ULL ] = Schmitt_Trigger_rOUT_i ; out -> mLOG . mX [ 350ULL
] = CMOS_AND_A_v ; out -> mLOG . mX [ 351ULL ] = t43 -> mX . mX [ 25ULL ] ;
out -> mLOG . mX [ 352ULL ] = Schmitt_Trigger_rOUT_i * 25.0 ; out -> mLOG .
mX [ 354ULL ] = - Schmitt_Trigger_rOUT_i ; out -> mLOG . mX [ 355ULL ] = t43
-> mX . mX [ 25ULL ] ; out -> mLOG . mX [ 356ULL ] = t43 -> mX . mX [ 25ULL ]
; out -> mLOG . mX [ 357ULL ] = t43 -> mX . mX [ 25ULL ] ; out -> mLOG . mX [
358ULL ] = t43 -> mU . mX [ 0ULL ] ; out -> mLOG . mX [ 359ULL ] = t43 -> mU
. mX [ 1ULL ] ; out -> mLOG . mX [ 360ULL ] = t43 -> mU . mX [ 2ULL ] ; out
-> mLOG . mX [ 361ULL ] = t43 -> mU . mX [ 3ULL ] ; out -> mLOG . mX [ 362ULL
] = t43 -> mX . mX [ 18ULL ] ; out -> mLOG . mX [ 363ULL ] = CMOS_AND1_J_v ;
out -> mLOG . mX [ 364ULL ] = Inductor2_p_v ; out -> mLOG . mX [ 365ULL ] =
Thyristor_Piecewise_Linear_iak ; out -> mLOG . mX [ 366ULL ] = CMOS_AND1_J_v
; out -> mLOG . mX [ 367ULL ] = Thyristor_Piecewise_Linear_iak ; out -> mLOG
. mX [ 368ULL ] = Inductor2_p_v ; out -> mLOG . mX [ 369ULL ] = t43 -> mX .
mX [ 18ULL ] ; out -> mLOG . mX [ 370ULL ] = Thyristor_Piecewise_Linear_iak *
Thyristor_Piecewise_Linear_ideal_switch_v * 0.001 * 1000.0 ; out -> mLOG . mX
[ 371ULL ] = t43 -> mD . mX [ 2ULL ] ; out -> mLOG . mX [ 372ULL ] =
Thyristor_Piecewise_Linear_ideal_switch_v ; out -> mLOG . mX [ 373ULL ] = t43
-> mD . mX [ 3ULL ] ; out -> mLOG . mX [ 374ULL ] = ( real_T ) ( size_t ) t43
-> mQ . mX [ 1ULL ] ; out -> mLOG . mX [ 375ULL ] = CMOS_AND1_J_v ; out ->
mLOG . mX [ 377ULL ] = CMOS_AND_J_v ; out -> mLOG . mX [ 378ULL ] = t43 -> mX
. mX [ 18ULL ] ; out -> mLOG . mX [ 379ULL ] = t19 ; out -> mLOG . mX [
380ULL ] = CMOS_AND_J_v ; out -> mLOG . mX [ 381ULL ] = t19 ; out -> mLOG .
mX [ 382ULL ] = t43 -> mX . mX [ 18ULL ] ; out -> mLOG . mX [ 383ULL ] = t19
* - t43 -> mX . mX [ 18ULL ] * 0.001 * 1000.0 ; out -> mLOG . mX [ 384ULL ] =
t43 -> mD . mX [ 4ULL ] ; out -> mLOG . mX [ 385ULL ] = - t43 -> mX . mX [
18ULL ] ; out -> mLOG . mX [ 386ULL ] = t43 -> mD . mX [ 5ULL ] ; out -> mLOG
. mX [ 387ULL ] = ( real_T ) ( size_t ) t43 -> mQ . mX [ 2ULL ] ; out -> mLOG
. mX [ 388ULL ] = CMOS_AND_J_v ; out -> mLOG . mX [ 390ULL ] = t43 -> mX . mX
[ 17ULL ] ; out -> mLOG . mX [ 391ULL ] = CMOS_AND_J_v ; out -> mLOG . mX [
392ULL ] = Inductor2_p_v ; out -> mLOG . mX [ 393ULL ] = t43 -> mX . mX [
19ULL ] ; out -> mLOG . mX [ 394ULL ] = CMOS_AND_J_v ; out -> mLOG . mX [
395ULL ] = t43 -> mX . mX [ 19ULL ] ; out -> mLOG . mX [ 396ULL ] =
Inductor2_p_v ; out -> mLOG . mX [ 397ULL ] = t43 -> mX . mX [ 17ULL ] ; out
-> mLOG . mX [ 398ULL ] = t43 -> mX . mX [ 19ULL ] * t21 * 0.001 * 1000.0 ;
out -> mLOG . mX [ 399ULL ] = t43 -> mD . mX [ 6ULL ] ; out -> mLOG . mX [
400ULL ] = t21 ; out -> mLOG . mX [ 401ULL ] = t43 -> mD . mX [ 7ULL ] ; out
-> mLOG . mX [ 402ULL ] = ( real_T ) ( size_t ) t43 -> mQ . mX [ 3ULL ] ; out
-> mLOG . mX [ 403ULL ] = CMOS_AND_J_v ; out -> mLOG . mX [ 405ULL ] =
CMOS_AND1_J_v ; out -> mLOG . mX [ 406ULL ] = t43 -> mX . mX [ 17ULL ] ; out
-> mLOG . mX [ 407ULL ] = t43 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [
408ULL ] = CMOS_AND1_J_v ; out -> mLOG . mX [ 409ULL ] = t43 -> mX . mX [
20ULL ] ; out -> mLOG . mX [ 410ULL ] = t43 -> mX . mX [ 17ULL ] ; out ->
mLOG . mX [ 411ULL ] = t43 -> mX . mX [ 20ULL ] * - t43 -> mX . mX [ 17ULL ]
* 0.001 * 1000.0 ; out -> mLOG . mX [ 412ULL ] = t43 -> mD . mX [ 8ULL ] ;
out -> mLOG . mX [ 413ULL ] = - t43 -> mX . mX [ 17ULL ] ; out -> mLOG . mX [
414ULL ] = t43 -> mD . mX [ 9ULL ] ; out -> mLOG . mX [ 415ULL ] = ( real_T )
( size_t ) t43 -> mQ . mX [ 4ULL ] ; out -> mLOG . mX [ 416ULL ] =
CMOS_AND1_J_v ; out -> mLOG . mX [ 418ULL ] = CMOS_AND_J_v ; out -> mLOG . mX
[ 419ULL ] = CMOS_AND_J_v ; out -> mLOG . mX [ 420ULL ] = CMOS_AND1_J_v ; out
-> mLOG . mX [ 421ULL ] = CMOS_AND1_J_v ; out -> mLOG . mX [ 422ULL ] =
CMOS_AND_J_v ; out -> mLOG . mX [ 423ULL ] = CMOS_AND_J_v ; out -> mLOG . mX
[ 424ULL ] = CMOS_AND_J_v ; out -> mLOG . mX [ 425ULL ] = CMOS_AND1_J_v ; out
-> mLOG . mX [ 426ULL ] = CMOS_AND1_J_v ; out -> mLOG . mX [ 427ULL ] =
CMOS_AND1_J_v ; out -> mLOG . mX [ 428ULL ] = CMOS_AND_A_v ; out -> mLOG . mX
[ 429ULL ] = CMOS_AND_A_v ; out -> mLOG . mX [ 430ULL ] = CMOS_AND_A_v ; out
-> mLOG . mX [ 431ULL ] = CMOS_AND_B_v ; out -> mLOG . mX [ 432ULL ] =
CMOS_AND_B_v ; out -> mLOG . mX [ 433ULL ] = CMOS_AND_B_v ; out -> mLOG . mX
[ 434ULL ] = t29 ; out -> mLOG . mX [ 435ULL ] = t43 -> mX . mX [ 36ULL ] ;
out -> mLOG . mX [ 436ULL ] = Capacitor4_p_v ; out -> mLOG . mX [ 437ULL ] =
t29 ; out -> mLOG . mX [ 438ULL ] = t43 -> mX . mX [ 34ULL ] ; out -> mLOG .
mX [ 439ULL ] = t43 -> mX . mX [ 34ULL ] ; out -> mLOG . mX [ 440ULL ] = t43
-> mX . mX [ 34ULL ] ; out -> mLOG . mX [ 441ULL ] = t43 -> mX . mX [ 41ULL ]
; out -> mLOG . mX [ 442ULL ] = t43 -> mX . mX [ 41ULL ] ; out -> mLOG . mX [
443ULL ] = t43 -> mX . mX [ 41ULL ] ; out -> mLOG . mX [ 444ULL ] = t43 -> mX
. mX [ 40ULL ] ; out -> mLOG . mX [ 445ULL ] = t43 -> mX . mX [ 40ULL ] ; out
-> mLOG . mX [ 446ULL ] = t43 -> mX . mX [ 40ULL ] ; out -> mLOG . mX [
447ULL ] = AC_Voltage_Source1_p_v ; out -> mLOG . mX [ 448ULL ] =
AC_Voltage_Source1_p_v ; out -> mLOG . mX [ 449ULL ] = AC_Voltage_Source1_p_v
; out -> mLOG . mX [ 450ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mLOG . mX [
451ULL ] = t43 -> mX . mX [ 32ULL ] ; out -> mLOG . mX [ 452ULL ] = t43 -> mX
. mX [ 32ULL ] ; out -> mLOG . mX [ 453ULL ] = CMOS_AND_A_v ; out -> mLOG .
mX [ 454ULL ] = CMOS_AND_A_v ; out -> mLOG . mX [ 455ULL ] = CMOS_AND_A_v ;
out -> mLOG . mX [ 456ULL ] = Capacitor1_p_v ; out -> mLOG . mX [ 457ULL ] =
Capacitor1_p_v ; out -> mLOG . mX [ 458ULL ] = Capacitor1_p_v ; out -> mLOG .
mX [ 459ULL ] = t43 -> mX . mX [ 40ULL ] ; out -> mLOG . mX [ 460ULL ] = t43
-> mX . mX [ 40ULL ] ; out -> mLOG . mX [ 461ULL ] = t43 -> mX . mX [ 40ULL ]
; out -> mLOG . mX [ 462ULL ] = t43 -> mX . mX [ 39ULL ] ; out -> mLOG . mX [
463ULL ] = t43 -> mX . mX [ 39ULL ] ; out -> mLOG . mX [ 464ULL ] = t43 -> mX
. mX [ 39ULL ] ; out -> mLOG . mX [ 465ULL ] = t43 -> mX . mX [ 41ULL ] ; out
-> mLOG . mX [ 466ULL ] = t43 -> mX . mX [ 41ULL ] ; out -> mLOG . mX [
467ULL ] = t43 -> mX . mX [ 41ULL ] ; out -> mLOG . mX [ 468ULL ] = t43 -> mX
. mX [ 39ULL ] ; out -> mLOG . mX [ 469ULL ] = t43 -> mX . mX [ 39ULL ] ; out
-> mLOG . mX [ 470ULL ] = t43 -> mX . mX [ 39ULL ] ; ( void ) sys ; ( void )
out ; return 0 ; }
