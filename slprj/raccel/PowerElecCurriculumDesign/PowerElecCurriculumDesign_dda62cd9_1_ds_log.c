#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_log.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_log ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t74 , NeDsMethodOutput * out ) { real_T
Capacitor1_p_v ; real_T Capacitor2_i ; real_T Capacitor2_p_v ; real_T
Capacitor3_i ; real_T Capacitor4_i ; real_T Capacitor_i ; real_T
Capacitor_p_v ; real_T Comparator1_J_v ; real_T Comparator1_comparator1_iJ ;
real_T Comparator_J_v ; real_T Comparator_comparator1_A_v ; real_T
Comparator_comparator1_iJ ; real_T Current_Sensor_I ; real_T Diode1_i_diode ;
real_T Diode1_private_Diode_v_diode ; real_T Diode2_i_diode ; real_T
Diode2_private_Diode_v_diode ; real_T Diode4_i ; real_T Diode5_i ; real_T
Diode5_v_diode ; real_T Diode6_v_diode ; real_T Diode7_i ; real_T
Diode7_v_diode ; real_T Diode8_i ; real_T Diode8_v_diode ; real_T Diode9_n_v
; real_T Diode9_v_diode ; real_T Diode_i ; real_T Diode_i_diode ; real_T
Diode_n_v ; real_T Diode_v_diode ; real_T Finite_Gain_Op_Amp1_i1 ; real_T
Finite_Gain_Op_Amp2_i1 ; real_T IGBT1_ideal_switch_G ; real_T
IGBT1_ideal_switch_v ; real_T IGBT2_ideal_switch_G ; real_T
IGBT2_ideal_switch_v ; real_T IGBT_ideal_switch_v ; real_T Inductor1_v ;
real_T PNP_Bipolar_Transistor1_base_resistor_i ; real_T
PNP_Bipolar_Transistor1_base_resistor_n_v ; real_T
PNP_Bipolar_Transistor1_capacitor_bc_i ; real_T
PNP_Bipolar_Transistor1_capacitor_bc_n_v ; real_T
PNP_Bipolar_Transistor1_capacitor_be_n_v ; real_T
PNP_Bipolar_Transistor1_emitter_resistor_i ; real_T
PNP_Bipolar_Transistor1_emitter_resistor_p_v ; real_T
PNP_Bipolar_Transistor_base_resistor_i ; real_T
PNP_Bipolar_Transistor_base_resistor_n_v ; real_T
PNP_Bipolar_Transistor_capacitor_bc_i ; real_T
PNP_Bipolar_Transistor_capacitor_bc_n_v ; real_T
PNP_Bipolar_Transistor_capacitor_be_n_v ; real_T
PNP_Bipolar_Transistor_emitter_resistor_i ; real_T
PNP_Bipolar_Transistor_emitter_resistor_p_v ; real_T PS_Gain1_O ; real_T
PS_Gain_O ; real_T Resistor2_Resistor_i ; real_T Resistor4_Resistor_i ;
real_T Resistor_Resistor_i ; real_T Thyristor1_iak ; real_T
Thyristor1_ideal_switch_v ; real_T Thyristor2_iak ; real_T
Thyristor2_ideal_switch_v ; real_T t0 ; real_T t11 ; real_T t12 ; real_T t32
; real_T t34 ; real_T t38 ; real_T t43 ; real_T t50 ; real_T t55 ; real_T t56
; real_T t60 ; real_T t61 ; real_T t62 ; real_T t63 ; real_T t64 ; real_T t65
; real_T t8 ; real_T t9 ; real_T zc_int10 ; real_T zc_int12 ; real_T zc_int6
; out -> mLOG . mX [ 0ULL ] = - t74 -> mX . mX [ 16ULL ] + t74 -> mX . mX [
15ULL ] ; Capacitor_i = ( - t74 -> mX . mX [ 18ULL ] + t74 -> mX . mX [ 19ULL
] * 1.0E-9 ) + t74 -> mX . mX [ 0ULL ] ; Capacitor_p_v = ( ( ( t74 -> mX . mX
[ 0ULL ] * 1.0E-6 + t74 -> mX . mX [ 18ULL ] * - 1.0E-6 ) + t74 -> mX . mX [
19ULL ] * 1.1102230246251565E-15 ) + t74 -> mX . mX [ 20ULL ] ) + t74 -> mX .
mX [ 1ULL ] ; out -> mLOG . mX [ 8ULL ] = Capacitor_i * Capacitor_i * 1.0E-9
; out -> mLOG . mX [ 6ULL ] = ( ( t74 -> mX . mX [ 0ULL ] * 1.0E-6 + t74 ->
mX . mX [ 18ULL ] * - 1.0E-6 ) + t74 -> mX . mX [ 19ULL ] *
1.1102230246251565E-15 ) + t74 -> mX . mX [ 1ULL ] ; Capacitor1_p_v = ( t74
-> mX . mX [ 21ULL ] * 1.0E-6 + t74 -> mX . mX [ 20ULL ] ) + t74 -> mX . mX [
2ULL ] ; out -> mLOG . mX [ 14ULL ] = t74 -> mX . mX [ 21ULL ] * t74 -> mX .
mX [ 21ULL ] * 1.0E-9 ; out -> mLOG . mX [ 12ULL ] = t74 -> mX . mX [ 21ULL ]
* 1.0E-6 + t74 -> mX . mX [ 2ULL ] ; Capacitor2_i = ( ( t74 -> mX . mX [
22ULL ] * 0.01 + t74 -> mX . mX [ 23ULL ] * - 0.01 ) + t74 -> mX . mX [ 24ULL
] * 0.010000001 ) + t74 -> mX . mX [ 3ULL ] ; Capacitor2_p_v = - t74 -> mX .
mX [ 24ULL ] + t74 -> mX . mX [ 23ULL ] ; out -> mLOG . mX [ 19ULL ] = ( -
t74 -> mX . mX [ 22ULL ] - t74 -> mX . mX [ 24ULL ] ) + t74 -> mX . mX [
23ULL ] ; Capacitor3_i = ( ( t74 -> mX . mX [ 25ULL ] * - 1.0E-6 - t74 -> mX
. mX [ 26ULL ] ) + t74 -> mX . mX [ 27ULL ] * 1.0E-6 ) - t74 -> mX . mX [
28ULL ] ; out -> mLOG . mX [ 26ULL ] = Capacitor3_i * Capacitor3_i * 1.0E-9 ;
out -> mLOG . mX [ 24ULL ] = t74 -> mX . mX [ 25ULL ] ; Capacitor4_i = ( (
t74 -> mX . mX [ 29ULL ] * - 1.0E-6 - t74 -> mX . mX [ 30ULL ] ) + t74 -> mX
. mX [ 27ULL ] * 1.0E-6 ) - t74 -> mX . mX [ 31ULL ] ; out -> mLOG . mX [
31ULL ] = Capacitor4_i * Capacitor4_i * 1.0E-9 ; out -> mLOG . mX [ 29ULL ] =
t74 -> mX . mX [ 29ULL ] ; Comparator_J_v = ( ( - t74 -> mX . mX [ 7ULL ] +
t74 -> mX . mX [ 32ULL ] * - 1.0E-6 ) + t74 -> mX . mX [ 26ULL ] * - 0.01 ) +
t74 -> mX . mX [ 25ULL ] ; Comparator_comparator1_A_v = t74 -> mX . mX [
17ULL ] * 0.01 ; Comparator_comparator1_iJ = ( ( ( t74 -> mX . mX [ 7ULL ] *
- 0.02 + t74 -> mX . mX [ 25ULL ] * 0.02 ) + t74 -> mX . mX [ 33ULL ] * -
0.02 ) + t74 -> mX . mX [ 32ULL ] * - 2.0E-8 ) + t74 -> mX . mX [ 26ULL ] * -
0.0002 ; out -> mLOG . mX [ 41ULL ] = Comparator_comparator1_iJ *
Comparator_comparator1_iJ * 50.0 ; Comparator1_J_v = ( ( - t74 -> mX . mX [
8ULL ] + t74 -> mX . mX [ 34ULL ] * - 1.0E-6 ) + t74 -> mX . mX [ 30ULL ] * -
0.01 ) + t74 -> mX . mX [ 29ULL ] ; Comparator1_comparator1_iJ = ( ( ( t74 ->
mX . mX [ 8ULL ] * - 0.02 + t74 -> mX . mX [ 29ULL ] * 0.02 ) + t74 -> mX .
mX [ 35ULL ] * - 0.02 ) + t74 -> mX . mX [ 34ULL ] * - 2.0E-8 ) + t74 -> mX .
mX [ 30ULL ] * - 0.0002 ; out -> mLOG . mX [ 51ULL ] =
Comparator1_comparator1_iJ * Comparator1_comparator1_iJ * 50.0 ;
Current_Sensor_I = t74 -> mX . mX [ 24ULL ] * 1.0E-9 + t74 -> mX . mX [ 3ULL
] ; Diode_i = ( ( ( ( t74 -> mX . mX [ 2ULL ] * - 1.0E-9 + t74 -> mX . mX [
9ULL ] * - 1.0E-9 ) + t74 -> mX . mX [ 21ULL ] * - 1.0E-15 ) + t74 -> mX . mX
[ 39ULL ] * - 1.0E-15 ) - t74 -> mX . mX [ 18ULL ] ) + t74 -> mX . mX [ 10ULL
] ; Diode_i_diode = ( ( ( ( t74 -> mX . mX [ 2ULL ] * - 1.0E-9 + t74 -> mX .
mX [ 9ULL ] * - 1.0E-9 ) + t74 -> mX . mX [ 21ULL ] * - 1.0E-15 ) + t74 -> mX
. mX [ 39ULL ] * - 1.0000000000000011 ) - t74 -> mX . mX [ 18ULL ] ) + t74 ->
mX . mX [ 10ULL ] ; Diode_n_v = ( - t74 -> mX . mX [ 9ULL ] + t74 -> mX . mX
[ 39ULL ] * - 1.0E-6 ) + t74 -> mX . mX [ 20ULL ] ; Diode_v_diode = t74 -> mX
. mX [ 20ULL ] - Diode_n_v ; t8 = t74 -> mX . mX [ 39ULL ] * 1.0E-6 + t74 ->
mX . mX [ 9ULL ] ; out -> mLOG . mX [ 79ULL ] = Diode_i_diode * 0.3 +
0.59999999819999994 ; Diode1_i_diode = - t74 -> mX . mX [ 32ULL ] + t74 -> mX
. mX [ 26ULL ] ; Diode1_private_Diode_v_diode = t74 -> mX . mX [ 32ULL ] *
1.0E-6 + t74 -> mX . mX [ 7ULL ] ; t9 = t74 -> mX . mX [ 26ULL ] * - 0.01 +
t74 -> mX . mX [ 25ULL ] ; out -> mLOG . mX [ 103ULL ] = t74 -> mX . mX [
25ULL ] - Comparator_J_v ; Diode2_i_diode = - t74 -> mX . mX [ 34ULL ] + t74
-> mX . mX [ 30ULL ] ; Diode2_private_Diode_v_diode = t74 -> mX . mX [ 34ULL
] * 1.0E-6 + t74 -> mX . mX [ 8ULL ] ; t11 = t74 -> mX . mX [ 30ULL ] * -
0.01 + t74 -> mX . mX [ 29ULL ] ; out -> mLOG . mX [ 129ULL ] = t74 -> mX .
mX [ 29ULL ] - Comparator1_J_v ; t12 = ( ( ( t74 -> mX . mX [ 36ULL ] * -
1.00005 + t74 -> mX . mX [ 31ULL ] * - 0.01 ) + t74 -> mX . mX [ 29ULL ] ) +
t74 -> mX . mX [ 11ULL ] ) - 10.0005 ; out -> mLOG . mX [ 144ULL ] = t12 *
0.3 + 0.5999999999999982 ; Diode4_i = ( ( ( t74 -> mX . mX [ 37ULL ] * -
1.00005 + t74 -> mX . mX [ 28ULL ] * - 0.01 ) + t74 -> mX . mX [ 25ULL ] ) +
t74 -> mX . mX [ 12ULL ] ) - 10.0005 ; out -> mLOG . mX [ 157ULL ] = Diode4_i
* 0.3 + 0.5999999999999982 ; Diode5_i = ( ( ( ( ( ( t74 -> mX . mX [ 2ULL ] *
1.0E-9 + t74 -> mX . mX [ 9ULL ] * 1.0E-9 ) - t74 -> mX . mX [ 10ULL ] ) +
t74 -> mX . mX [ 21ULL ] * 1.0000000000000011 ) + t74 -> mX . mX [ 39ULL ] *
1.0E-15 ) - t74 -> mX . mX [ 45ULL ] ) + t74 -> mX . mX [ 46ULL ] ) + t74 ->
mX . mX [ 47ULL ] ; Diode5_v_diode = t74 -> mX . mX [ 23ULL ] -
Capacitor1_p_v ; out -> mLOG . mX [ 162ULL ] = ( ( - t74 -> mX . mX [ 2ULL ]
- t74 -> mX . mX [ 20ULL ] ) + t74 -> mX . mX [ 21ULL ] * - 1.0E-6 ) + t74 ->
mX . mX [ 23ULL ] ; out -> mLOG . mX [ 172ULL ] = Diode5_i * 0.3 +
0.59999999819999994 ; Diode6_v_diode = t74 -> mX . mX [ 22ULL ] -
Capacitor1_p_v ; out -> mLOG . mX [ 177ULL ] = ( ( - t74 -> mX . mX [ 2ULL ]
- t74 -> mX . mX [ 20ULL ] ) + t74 -> mX . mX [ 21ULL ] * - 1.0E-6 ) + t74 ->
mX . mX [ 22ULL ] ; out -> mLOG . mX [ 187ULL ] = t74 -> mX . mX [ 45ULL ] *
0.3 + 0.59999999819999994 ; Diode7_i = ( ( ( ( ( ( ( ( t74 -> mX . mX [ 2ULL
] * 1.0E-9 + t74 -> mX . mX [ 9ULL ] * 1.0E-9 ) - t74 -> mX . mX [ 10ULL ] )
+ t74 -> mX . mX [ 21ULL ] * 1.0000000000000011 ) + t74 -> mX . mX [ 39ULL ]
* 1.0E-15 ) - t74 -> mX . mX [ 45ULL ] ) + t74 -> mX . mX [ 24ULL ] * 1.0E-9
) + t74 -> mX . mX [ 50ULL ] ) + t74 -> mX . mX [ 47ULL ] ) + t74 -> mX . mX
[ 3ULL ] ; Diode7_v_diode = t74 -> mX . mX [ 20ULL ] - t74 -> mX . mX [ 23ULL
] ; out -> mLOG . mX [ 192ULL ] = - t74 -> mX . mX [ 23ULL ] + t74 -> mX . mX
[ 20ULL ] ; out -> mLOG . mX [ 202ULL ] = Diode7_i * 0.3 +
0.59999999819999994 ; Diode8_i = ( ( ( - t74 -> mX . mX [ 3ULL ] - t74 -> mX
. mX [ 47ULL ] ) + t74 -> mX . mX [ 24ULL ] * - 9.9999999947364415E-10 ) +
t74 -> mX . mX [ 45ULL ] ) + t74 -> mX . mX [ 52ULL ] ; Diode8_v_diode = t74
-> mX . mX [ 20ULL ] - t74 -> mX . mX [ 22ULL ] ; out -> mLOG . mX [ 207ULL ]
= - t74 -> mX . mX [ 22ULL ] + t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [
217ULL ] = Diode8_i * 0.3 + 0.59999999819999994 ; Diode9_n_v = ( ( ( t74 ->
mX . mX [ 0ULL ] * 1.0E-6 + t74 -> mX . mX [ 18ULL ] * - 1.0E-6 ) + t74 -> mX
. mX [ 19ULL ] * 1.0000000000000011 ) + t74 -> mX . mX [ 20ULL ] ) + t74 ->
mX . mX [ 1ULL ] ; Diode9_v_diode = t74 -> mX . mX [ 20ULL ] - Diode9_n_v ;
out -> mLOG . mX [ 222ULL ] = ( ( - t74 -> mX . mX [ 1ULL ] + t74 -> mX . mX
[ 0ULL ] * - 1.0E-6 ) + t74 -> mX . mX [ 18ULL ] * 1.0E-6 ) + t74 -> mX . mX
[ 19ULL ] * - 1.0000000000000011 ; out -> mLOG . mX [ 232ULL ] = t74 -> mX .
mX [ 54ULL ] * 0.3 + 0.59999999819999994 ; Finite_Gain_Op_Amp1_i1 = t74 -> mX
. mX [ 29ULL ] * 1.0E-6 + t74 -> mX . mX [ 27ULL ] * - 1.0E-6 ;
Finite_Gain_Op_Amp2_i1 = t74 -> mX . mX [ 25ULL ] * 1.0E-6 + t74 -> mX . mX [
27ULL ] * - 1.0E-6 ; IGBT_ideal_switch_v = ( ( ( ( t74 -> mX . mX [ 0ULL ] *
1.0E-6 + t74 -> mX . mX [ 39ULL ] * 1.0E-6 ) + t74 -> mX . mX [ 18ULL ] * -
1.0E-6 ) + t74 -> mX . mX [ 19ULL ] * 1.1102230246251565E-15 ) + t74 -> mX .
mX [ 1ULL ] ) + t74 -> mX . mX [ 9ULL ] ; out -> mLOG . mX [ 254ULL ] = t74
-> mU . mX [ 0ULL ] ; out -> mLOG . mX [ 255ULL ] = Capacitor_p_v - Diode_n_v
; PS_Gain_O = t74 -> mU . mX [ 1ULL ] * 10.0 ; IGBT1_ideal_switch_G = t74 ->
mU . mX [ 1ULL ] * 10.0 ; IGBT1_ideal_switch_v = ( ( t74 -> mX . mX [ 21ULL ]
* 1.0E-6 - t74 -> mX . mX [ 23ULL ] ) + t74 -> mX . mX [ 20ULL ] ) + t74 ->
mX . mX [ 2ULL ] ; out -> mLOG . mX [ 268ULL ] = Capacitor1_p_v - t74 -> mX .
mX [ 23ULL ] ; PS_Gain1_O = t74 -> mU . mX [ 2ULL ] * 10.0 ;
IGBT2_ideal_switch_G = t74 -> mU . mX [ 2ULL ] * 10.0 ; IGBT2_ideal_switch_v
= - t74 -> mX . mX [ 20ULL ] + t74 -> mX . mX [ 23ULL ] ; out -> mLOG . mX [
281ULL ] = t74 -> mX . mX [ 23ULL ] - t74 -> mX . mX [ 20ULL ] ; t32 = ( (
t74 -> mX . mX [ 21ULL ] * 1.0E-6 - t74 -> mX . mX [ 22ULL ] ) + t74 -> mX .
mX [ 20ULL ] ) + t74 -> mX . mX [ 2ULL ] ; out -> mLOG . mX [ 294ULL ] =
Capacitor1_p_v - t74 -> mX . mX [ 22ULL ] ; t34 = - t74 -> mX . mX [ 20ULL ]
+ t74 -> mX . mX [ 22ULL ] ; out -> mLOG . mX [ 307ULL ] = t74 -> mX . mX [
22ULL ] - t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 312ULL ] = t74 -> mX
. mX [ 19ULL ] * 1.0E-9 + t74 -> mX . mX [ 0ULL ] ; out -> mLOG . mX [ 317ULL
] = t74 -> mX . mX [ 19ULL ] * t74 -> mX . mX [ 19ULL ] *
1.0000000000000002E-12 ; out -> mLOG . mX [ 318ULL ] = ( ( ( t74 -> mX . mX [
2ULL ] * - 1.0E-9 + t74 -> mX . mX [ 9ULL ] * - 1.0E-9 ) + t74 -> mX . mX [
21ULL ] * - 1.0E-15 ) + t74 -> mX . mX [ 39ULL ] * - 1.0E-15 ) + t74 -> mX .
mX [ 10ULL ] ; Inductor1_v = ( ( - t74 -> mX . mX [ 2ULL ] - t74 -> mX . mX [
9ULL ] ) + t74 -> mX . mX [ 21ULL ] * - 1.0E-6 ) + t74 -> mX . mX [ 39ULL ] *
- 1.0E-6 ; out -> mLOG . mX [ 323ULL ] = Inductor1_v * Inductor1_v *
1.0000000000000002E-12 ; out -> mLOG . mX [ 329ULL ] = t74 -> mX . mX [ 24ULL
] * t74 -> mX . mX [ 24ULL ] * 1.0000000000000002E-12 ;
PNP_Bipolar_Transistor_base_resistor_i = ( ( ( - t74 -> mX . mX [ 12ULL ] -
t74 -> mX . mX [ 25ULL ] ) + t74 -> mX . mX [ 28ULL ] * 0.01 ) + t74 -> mX .
mX [ 37ULL ] ) + 10.0 ; PNP_Bipolar_Transistor_base_resistor_n_v = ( t74 ->
mX . mX [ 28ULL ] * - 0.01 + t74 -> mX . mX [ 25ULL ] ) + t74 -> mX . mX [
12ULL ] ; out -> mLOG . mX [ 339ULL ] =
PNP_Bipolar_Transistor_base_resistor_i *
PNP_Bipolar_Transistor_base_resistor_i ;
PNP_Bipolar_Transistor_capacitor_bc_i = - t74 -> mX . mX [ 28ULL ] + t74 ->
mX . mX [ 58ULL ] ; PNP_Bipolar_Transistor_capacitor_bc_n_v = t74 -> mX . mX
[ 28ULL ] * - 0.01 + t74 -> mX . mX [ 25ULL ] ;
PNP_Bipolar_Transistor_capacitor_be_n_v = ( ( - t74 -> mX . mX [ 13ULL ] +
t74 -> mX . mX [ 28ULL ] * - 0.01 ) + t74 -> mX . mX [ 25ULL ] ) + t74 -> mX
. mX [ 12ULL ] ; out -> mLOG . mX [ 356ULL ] = t74 -> mX . mX [ 28ULL ] * t74
-> mX . mX [ 28ULL ] * 0.01 ; PNP_Bipolar_Transistor_emitter_resistor_i = ( (
( - t74 -> mX . mX [ 37ULL ] + t74 -> mX . mX [ 28ULL ] * - 1.01 ) + t74 ->
mX . mX [ 25ULL ] ) + t74 -> mX . mX [ 12ULL ] ) - 10.0 ;
PNP_Bipolar_Transistor_emitter_resistor_p_v = ( ( ( ( t74 -> mX . mX [ 12ULL
] * 1.0001 - t74 -> mX . mX [ 13ULL ] ) + t74 -> mX . mX [ 25ULL ] * 1.0001 )
+ t74 -> mX . mX [ 37ULL ] * - 0.0001 ) + t74 -> mX . mX [ 28ULL ] * -
0.010100999999999999 ) - 0.001 ; out -> mLOG . mX [ 361ULL ] =
PNP_Bipolar_Transistor_emitter_resistor_i *
PNP_Bipolar_Transistor_emitter_resistor_i * 0.0001 ; out -> mLOG . mX [
362ULL ] = ( PNP_Bipolar_Transistor_capacitor_bc_i + ( ( ( ( ( ( - t74 -> mX
. mX [ 12ULL ] - t74 -> mX . mX [ 25ULL ] ) + t74 -> mX . mX [ 28ULL ] * 1.01
) - t74 -> mX . mX [ 59ULL ] ) - t74 -> mX . mX [ 58ULL ] ) + t74 -> mX . mX
[ 37ULL ] ) + 10.0 ) ) + t74 -> mX . mX [ 59ULL ] ; out -> mLOG . mX [ 363ULL
] = t74 -> mX . mX [ 58ULL ] - PNP_Bipolar_Transistor_capacitor_bc_i ; t38 =
- t74 -> mX . mX [ 59ULL ] - t74 -> mX . mX [ 58ULL ] ; out -> mLOG . mX [
375ULL ] = ( t74 -> mX . mX [ 37ULL ] + 10.0 ) -
PNP_Bipolar_Transistor_emitter_resistor_p_v ; out -> mLOG . mX [ 376ULL ] =
t74 -> mX . mX [ 25ULL ] - PNP_Bipolar_Transistor_emitter_resistor_p_v ;
PNP_Bipolar_Transistor1_base_resistor_i = ( ( ( - t74 -> mX . mX [ 11ULL ] -
t74 -> mX . mX [ 29ULL ] ) + t74 -> mX . mX [ 31ULL ] * 0.01 ) + t74 -> mX .
mX [ 36ULL ] ) + 10.0 ; PNP_Bipolar_Transistor1_base_resistor_n_v = ( t74 ->
mX . mX [ 31ULL ] * - 0.01 + t74 -> mX . mX [ 29ULL ] ) + t74 -> mX . mX [
11ULL ] ; out -> mLOG . mX [ 386ULL ] =
PNP_Bipolar_Transistor1_base_resistor_i *
PNP_Bipolar_Transistor1_base_resistor_i ;
PNP_Bipolar_Transistor1_capacitor_bc_i = - t74 -> mX . mX [ 31ULL ] + t74 ->
mX . mX [ 60ULL ] ; PNP_Bipolar_Transistor1_capacitor_bc_n_v = t74 -> mX . mX
[ 31ULL ] * - 0.01 + t74 -> mX . mX [ 29ULL ] ;
PNP_Bipolar_Transistor1_capacitor_be_n_v = ( ( - t74 -> mX . mX [ 14ULL ] +
t74 -> mX . mX [ 31ULL ] * - 0.01 ) + t74 -> mX . mX [ 29ULL ] ) + t74 -> mX
. mX [ 11ULL ] ; out -> mLOG . mX [ 403ULL ] = t74 -> mX . mX [ 31ULL ] * t74
-> mX . mX [ 31ULL ] * 0.01 ; PNP_Bipolar_Transistor1_emitter_resistor_i = (
( ( - t74 -> mX . mX [ 36ULL ] + t74 -> mX . mX [ 31ULL ] * - 1.01 ) + t74 ->
mX . mX [ 29ULL ] ) + t74 -> mX . mX [ 11ULL ] ) - 10.0 ;
PNP_Bipolar_Transistor1_emitter_resistor_p_v = ( ( ( ( t74 -> mX . mX [ 11ULL
] * 1.0001 - t74 -> mX . mX [ 14ULL ] ) + t74 -> mX . mX [ 29ULL ] * 1.0001 )
+ t74 -> mX . mX [ 36ULL ] * - 0.0001 ) + t74 -> mX . mX [ 31ULL ] * -
0.010100999999999999 ) - 0.001 ; out -> mLOG . mX [ 408ULL ] =
PNP_Bipolar_Transistor1_emitter_resistor_i *
PNP_Bipolar_Transistor1_emitter_resistor_i * 0.0001 ; out -> mLOG . mX [
409ULL ] = ( PNP_Bipolar_Transistor1_capacitor_bc_i + ( ( ( ( ( ( - t74 -> mX
. mX [ 11ULL ] - t74 -> mX . mX [ 29ULL ] ) + t74 -> mX . mX [ 31ULL ] * 1.01
) - t74 -> mX . mX [ 61ULL ] ) - t74 -> mX . mX [ 60ULL ] ) + t74 -> mX . mX
[ 36ULL ] ) + 10.0 ) ) + t74 -> mX . mX [ 61ULL ] ; out -> mLOG . mX [ 410ULL
] = t74 -> mX . mX [ 60ULL ] - PNP_Bipolar_Transistor1_capacitor_bc_i ; t43 =
- t74 -> mX . mX [ 61ULL ] - t74 -> mX . mX [ 60ULL ] ; out -> mLOG . mX [
422ULL ] = ( t74 -> mX . mX [ 36ULL ] + 10.0 ) -
PNP_Bipolar_Transistor1_emitter_resistor_p_v ; out -> mLOG . mX [ 423ULL ] =
t74 -> mX . mX [ 29ULL ] - PNP_Bipolar_Transistor1_emitter_resistor_p_v ; out
-> mLOG . mX [ 431ULL ] = ( ( t74 -> mX . mX [ 25ULL ] * - 1.0E-6 + t74 -> mX
. mX [ 29ULL ] * - 1.0E-6 ) + t74 -> mX . mX [ 27ULL ] * 2.0E-6 ) - t74 -> mX
. mX [ 38ULL ] ; out -> mLOG . mX [ 433ULL ] = ( t74 -> mX . mX [ 25ULL ] *
1.0E-6 + t74 -> mX . mX [ 29ULL ] * 1.0E-6 ) + t74 -> mX . mX [ 27ULL ] * -
2.0E-6 ; Resistor_Resistor_i = ( t74 -> mX . mX [ 22ULL ] * - 0.01 + t74 ->
mX . mX [ 23ULL ] * 0.01 ) + t74 -> mX . mX [ 24ULL ] * - 0.01 ; out -> mLOG
. mX [ 442ULL ] = Resistor_Resistor_i * Resistor_Resistor_i * 100.0 ; out ->
mLOG . mX [ 448ULL ] = PNP_Bipolar_Transistor_emitter_resistor_i *
PNP_Bipolar_Transistor_emitter_resistor_i * 10000.0 ; Resistor2_Resistor_i =
t74 -> mX . mX [ 37ULL ] * 5.0E-5 + 0.0005 ; out -> mLOG . mX [ 454ULL ] =
Resistor2_Resistor_i * Resistor2_Resistor_i * 20000.0 ; out -> mLOG . mX [
460ULL ] = PNP_Bipolar_Transistor1_emitter_resistor_i *
PNP_Bipolar_Transistor1_emitter_resistor_i * 10000.0 ; Resistor4_Resistor_i =
t74 -> mX . mX [ 36ULL ] * 5.0E-5 + 0.0005 ; out -> mLOG . mX [ 466ULL ] =
Resistor4_Resistor_i * Resistor4_Resistor_i * 20000.0 ; Thyristor1_iak = ( (
- t74 -> mX . mX [ 54ULL ] + t74 -> mX . mX [ 19ULL ] * 1.0E-9 ) - t74 -> mX
. mX [ 15ULL ] ) + t74 -> mX . mX [ 0ULL ] ; Thyristor1_ideal_switch_v = ( (
( ( - t74 -> mX . mX [ 1ULL ] + t74 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t74 ->
mX . mX [ 20ULL ] ) + t74 -> mX . mX [ 18ULL ] * 1.0E-6 ) + t74 -> mX . mX [
19ULL ] * - 1.0000000000000011 ) + t74 -> mX . mX [ 17ULL ] ; out -> mLOG .
mX [ 485ULL ] = t74 -> mX . mX [ 17ULL ] - Diode9_n_v ; Thyristor2_iak = ( (
- t74 -> mX . mX [ 54ULL ] + t74 -> mX . mX [ 19ULL ] * 1.0E-9 ) - t74 -> mX
. mX [ 16ULL ] ) + t74 -> mX . mX [ 0ULL ] ; Thyristor2_ideal_switch_v = -
t74 -> mX . mX [ 17ULL ] + t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [
500ULL ] = t74 -> mX . mX [ 20ULL ] - t74 -> mX . mX [ 17ULL ] ; t50 = ( ( (
- t74 -> mX . mX [ 1ULL ] + t74 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t74 -> mX
. mX [ 20ULL ] ) + t74 -> mX . mX [ 18ULL ] * 1.0E-6 ) + t74 -> mX . mX [
19ULL ] * - 1.0000000000000011 ; out -> mLOG . mX [ 513ULL ] = - Diode9_n_v ;
out -> mLOG . mX [ 526ULL ] = t74 -> mX . mX [ 20ULL ] ; t55 = Capacitor_p_v
- t74 -> mX . mX [ 20ULL ] ; t56 = Diode_n_v - t74 -> mX . mX [ 20ULL ] ; t60
= Capacitor1_p_v - t74 -> mX . mX [ 20ULL ] ; t61 = Capacitor2_p_v - t74 ->
mX . mX [ 22ULL ] ; t62 = t74 -> mX . mX [ 23ULL ] - t74 -> mX . mX [ 22ULL ]
; t63 = Diode9_n_v - t74 -> mX . mX [ 20ULL ] ; zc_int6 = - t74 -> mX . mX [
13ULL ] * 38.921701457926758 ; t64 = - t74 -> mX . mX [ 12ULL ] *
38.921701457926758 ; zc_int10 = - t74 -> mX . mX [ 14ULL ] *
38.921701457926758 ; zc_int12 = - t74 -> mX . mX [ 11ULL ] *
38.921701457926758 ; if ( t74 -> mM . mX [ 32ULL ] != 0 ) { t0 =
IGBT_ideal_switch_v - 0.8 ; } else { t0 = t74 -> mU . mX [ 0ULL ] - 6.0 ; }
out -> mLOG . mX [ 249ULL ] = t0 ; if ( t74 -> mM . mX [ 33ULL ] != 0 ) { t65
= IGBT1_ideal_switch_v - 0.8 ; } else { t65 = IGBT1_ideal_switch_G - 6.0 ; }
out -> mLOG . mX [ 262ULL ] = t65 ; if ( t74 -> mM . mX [ 41ULL ] != 0 ) {
t65 = ( zc_int10 - 39.0 ) * 2.3538526683701997E+17 ; } else if ( t74 -> mM .
mX [ 42ULL ] != 0 ) { t65 = ( zc_int10 + 40.0 ) * 1.1548224173015786E-17 ; }
else { t65 = pmf_exp ( zc_int10 ) ; } out -> mLOG . mX [ 412ULL ] = - ( - (
t65 * - 1.9907674850572683E-11 ) - 1.9907674850572683E-11 ) ; if ( t74 -> mM
. mX [ 43ULL ] != 0 ) { t65 = ( zc_int12 - 39.0 ) * 2.3538526683701997E+17 ;
} else if ( t74 -> mM . mX [ 44ULL ] != 0 ) { t65 = ( zc_int12 + 40.0 ) *
1.1548224173015786E-17 ; } else { t65 = pmf_exp ( zc_int12 ) ; } out -> mLOG
. mX [ 413ULL ] = - ( - ( t65 * - 1.9907674850572683E-11 ) -
1.9907674850572683E-11 ) ; if ( t74 -> mM . mX [ 34ULL ] != 0 ) { t0 =
IGBT2_ideal_switch_v - 0.8 ; } else { t0 = IGBT2_ideal_switch_G - 6.0 ; } out
-> mLOG . mX [ 275ULL ] = t0 ; if ( t74 -> mM . mX [ 35ULL ] != 0 ) { t0 =
t32 - 0.8 ; } else { t0 = IGBT2_ideal_switch_G - 6.0 ; } out -> mLOG . mX [
288ULL ] = t0 ; if ( t74 -> mM . mX [ 36ULL ] != 0 ) { t0 = t34 - 0.8 ; }
else { t0 = IGBT1_ideal_switch_G - 6.0 ; } out -> mLOG . mX [ 301ULL ] = t0 ;
if ( t74 -> mM . mX [ 37ULL ] != 0 ) { t0 = ( zc_int6 - 39.0 ) *
2.3538526683701997E+17 ; } else if ( t74 -> mM . mX [ 38ULL ] != 0 ) { t0 = (
zc_int6 + 40.0 ) * 1.1548224173015786E-17 ; } else { t0 = pmf_exp ( zc_int6 )
; } out -> mLOG . mX [ 365ULL ] = - ( - ( t0 * - 1.9907674850572683E-11 ) -
1.9907674850572683E-11 ) ; if ( t74 -> mM . mX [ 39ULL ] != 0 ) { t0 = ( t64
- 39.0 ) * 2.3538526683701997E+17 ; } else if ( t74 -> mM . mX [ 40ULL ] != 0
) { t0 = ( t64 + 40.0 ) * 1.1548224173015786E-17 ; } else { t0 = pmf_exp (
t64 ) ; } out -> mLOG . mX [ 366ULL ] = - ( - ( t0 * - 1.9907674850572683E-11
) - 1.9907674850572683E-11 ) ; t0 = ( ( - t74 -> mX . mX [ 37ULL ] + t74 ->
mX . mX [ 28ULL ] * - 1.01 ) + t74 -> mX . mX [ 25ULL ] ) + t74 -> mX . mX [
12ULL ] ; t65 = ( ( - t74 -> mX . mX [ 36ULL ] + t74 -> mX . mX [ 31ULL ] * -
1.01 ) + t74 -> mX . mX [ 29ULL ] ) + t74 -> mX . mX [ 11ULL ] ; zc_int10 = (
( t74 -> mX . mX [ 36ULL ] * - 1.00005 + t74 -> mX . mX [ 31ULL ] * - 0.01 )
+ t74 -> mX . mX [ 29ULL ] ) + t74 -> mX . mX [ 11ULL ] ; zc_int12 = ( ( t74
-> mX . mX [ 37ULL ] * - 1.00005 + t74 -> mX . mX [ 28ULL ] * - 0.01 ) + t74
-> mX . mX [ 25ULL ] ) + t74 -> mX . mX [ 12ULL ] ; out -> mLOG . mX [ 1ULL ]
= t74 -> mX . mX [ 17ULL ] ; out -> mLOG . mX [ 2ULL ] = t74 -> mX . mX [
17ULL ] ; out -> mLOG . mX [ 3ULL ] = Capacitor_i ; out -> mLOG . mX [ 4ULL ]
= t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 5ULL ] = Capacitor_p_v ; out
-> mLOG . mX [ 7ULL ] = t74 -> mX . mX [ 1ULL ] ; out -> mLOG . mX [ 9ULL ] =
t74 -> mX . mX [ 21ULL ] ; out -> mLOG . mX [ 10ULL ] = t74 -> mX . mX [
20ULL ] ; out -> mLOG . mX [ 11ULL ] = Capacitor1_p_v ; out -> mLOG . mX [
13ULL ] = t74 -> mX . mX [ 2ULL ] ; out -> mLOG . mX [ 15ULL ] = t74 -> mD .
mX [ 0ULL ] ; out -> mLOG . mX [ 16ULL ] = Capacitor2_i ; out -> mLOG . mX [
17ULL ] = t74 -> mX . mX [ 22ULL ] ; out -> mLOG . mX [ 18ULL ] =
Capacitor2_p_v ; out -> mLOG . mX [ 20ULL ] = t74 -> mX . mX [ 4ULL ] ; out
-> mLOG . mX [ 21ULL ] = Capacitor2_i * Capacitor2_i * 1.0E-9 * 1000.0 ; out
-> mLOG . mX [ 22ULL ] = Capacitor3_i ; out -> mLOG . mX [ 23ULL ] = t74 ->
mX . mX [ 25ULL ] ; out -> mLOG . mX [ 25ULL ] = t74 -> mX . mX [ 5ULL ] ;
out -> mLOG . mX [ 27ULL ] = Capacitor4_i ; out -> mLOG . mX [ 28ULL ] = t74
-> mX . mX [ 29ULL ] ; out -> mLOG . mX [ 30ULL ] = t74 -> mX . mX [ 6ULL ] ;
out -> mLOG . mX [ 32ULL ] = Comparator_J_v ; out -> mLOG . mX [ 33ULL ] =
Comparator_comparator1_A_v ; out -> mLOG . mX [ 34ULL ] = t74 -> mX . mX [
33ULL ] ; out -> mLOG . mX [ 35ULL ] = Comparator_comparator1_iJ ; out ->
mLOG . mX [ 36ULL ] = Comparator_comparator1_A_v ; out -> mLOG . mX [ 37ULL ]
= - Comparator_comparator1_iJ ; out -> mLOG . mX [ 38ULL ] = Comparator_J_v ;
out -> mLOG . mX [ 39ULL ] = t74 -> mX . mX [ 33ULL ] ; out -> mLOG . mX [
40ULL ] = Comparator_comparator1_iJ * - 50.0 ; out -> mLOG . mX [ 42ULL ] =
Comparator1_J_v ; out -> mLOG . mX [ 43ULL ] = Comparator_comparator1_A_v ;
out -> mLOG . mX [ 44ULL ] = t74 -> mX . mX [ 35ULL ] ; out -> mLOG . mX [
45ULL ] = Comparator1_comparator1_iJ ; out -> mLOG . mX [ 46ULL ] =
Comparator_comparator1_A_v ; out -> mLOG . mX [ 47ULL ] = -
Comparator1_comparator1_iJ ; out -> mLOG . mX [ 48ULL ] = Comparator1_J_v ;
out -> mLOG . mX [ 49ULL ] = t74 -> mX . mX [ 35ULL ] ; out -> mLOG . mX [
50ULL ] = Comparator1_comparator1_iJ * - 50.0 ; out -> mLOG . mX [ 52ULL ] =
Current_Sensor_I ; out -> mLOG . mX [ 53ULL ] = Current_Sensor_I ; out ->
mLOG . mX [ 54ULL ] = t74 -> mX . mX [ 23ULL ] ; out -> mLOG . mX [ 55ULL ] =
t74 -> mX . mX [ 23ULL ] ; out -> mLOG . mX [ 56ULL ] = Current_Sensor_I ;
out -> mLOG . mX [ 57ULL ] = - 0.00099999999999766942 + ( ( ( ( t74 -> mX .
mX [ 36ULL ] * - 5.0000000000105516E-5 + t74 -> mX . mX [ 37ULL ] * -
5.0000000000105516E-5 ) - t74 -> mX . mX [ 38ULL ] ) + t74 -> mX . mX [ 28ULL
] ) + t74 -> mX . mX [ 31ULL ] ) ; out -> mLOG . mX [ 58ULL ] = t74 -> mX .
mX [ 39ULL ] ; out -> mLOG . mX [ 59ULL ] = Diode_n_v ; out -> mLOG . mX [
60ULL ] = t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 61ULL ] = t8 ; out ->
mLOG . mX [ 62ULL ] = t74 -> mX . mX [ 9ULL ] ; out -> mLOG . mX [ 63ULL ] =
Diode_i_diode ; out -> mLOG . mX [ 64ULL ] = Diode_n_v ; out -> mLOG . mX [
65ULL ] = t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 66ULL ] = t74 -> mX .
mX [ 40ULL ] ; out -> mLOG . mX [ 67ULL ] = t8 ; out -> mLOG . mX [ 68ULL ] =
Diode_n_v ; out -> mLOG . mX [ 69ULL ] = Diode_i ; out -> mLOG . mX [ 70ULL ]
= t74 -> mX . mX [ 39ULL ] ; out -> mLOG . mX [ 71ULL ] = Diode_i_diode ; out
-> mLOG . mX [ 72ULL ] = Diode_i ; out -> mLOG . mX [ 73ULL ] = Diode_n_v ;
out -> mLOG . mX [ 74ULL ] = t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [
75ULL ] = Diode_i_diode * Diode_v_diode * 0.001 * 1000.0 ; out -> mLOG . mX [
76ULL ] = Diode_v_diode ; out -> mLOG . mX [ 77ULL ] = t74 -> mX . mX [ 9ULL
] ; out -> mLOG . mX [ 78ULL ] = Diode_v_diode ; out -> mLOG . mX [ 80ULL ] =
t74 -> mX . mX [ 32ULL ] ; out -> mLOG . mX [ 81ULL ] = Comparator_J_v ; out
-> mLOG . mX [ 82ULL ] = t9 ; out -> mLOG . mX [ 83ULL ] =
Diode1_private_Diode_v_diode ; out -> mLOG . mX [ 84ULL ] = t74 -> mX . mX [
7ULL ] ; out -> mLOG . mX [ 85ULL ] = Diode1_i_diode ; out -> mLOG . mX [
86ULL ] = Comparator_J_v ; out -> mLOG . mX [ 87ULL ] = t9 ; out -> mLOG . mX
[ 88ULL ] = Diode1_private_Diode_v_diode ; out -> mLOG . mX [ 89ULL ] =
Comparator_J_v ; out -> mLOG . mX [ 90ULL ] = t74 -> mX . mX [ 26ULL ] ; out
-> mLOG . mX [ 91ULL ] = t74 -> mX . mX [ 32ULL ] ; out -> mLOG . mX [ 92ULL
] = Diode1_i_diode ; out -> mLOG . mX [ 93ULL ] = t74 -> mX . mX [ 26ULL ] ;
out -> mLOG . mX [ 94ULL ] = t74 -> mX . mX [ 26ULL ] ; out -> mLOG . mX [
95ULL ] = Comparator_J_v ; out -> mLOG . mX [ 96ULL ] = t74 -> mX . mX [
26ULL ] ; out -> mLOG . mX [ 97ULL ] = t9 ; out -> mLOG . mX [ 98ULL ] = t74
-> mX . mX [ 25ULL ] ; out -> mLOG . mX [ 99ULL ] = t74 -> mX . mX [ 26ULL ]
* 0.01 ; out -> mLOG . mX [ 100ULL ] = t74 -> mX . mX [ 25ULL ] ; out -> mLOG
. mX [ 101ULL ] = t9 ; out -> mLOG . mX [ 102ULL ] = ( Diode1_i_diode *
Diode1_private_Diode_v_diode * 0.001 + t74 -> mX . mX [ 26ULL ] * t74 -> mX .
mX [ 26ULL ] * 0.01 * 0.001 ) * 1000.0 ; out -> mLOG . mX [ 104ULL ] = t74 ->
mX . mX [ 7ULL ] ; out -> mLOG . mX [ 105ULL ] = Diode1_private_Diode_v_diode
; out -> mLOG . mX [ 106ULL ] = t74 -> mX . mX [ 34ULL ] ; out -> mLOG . mX [
107ULL ] = Comparator1_J_v ; out -> mLOG . mX [ 108ULL ] = t11 ; out -> mLOG
. mX [ 109ULL ] = Diode2_private_Diode_v_diode ; out -> mLOG . mX [ 110ULL ]
= t74 -> mX . mX [ 8ULL ] ; out -> mLOG . mX [ 111ULL ] = Diode2_i_diode ;
out -> mLOG . mX [ 112ULL ] = Comparator1_J_v ; out -> mLOG . mX [ 113ULL ] =
t11 ; out -> mLOG . mX [ 114ULL ] = Diode2_private_Diode_v_diode ; out ->
mLOG . mX [ 115ULL ] = Comparator1_J_v ; out -> mLOG . mX [ 116ULL ] = t74 ->
mX . mX [ 30ULL ] ; out -> mLOG . mX [ 117ULL ] = t74 -> mX . mX [ 34ULL ] ;
out -> mLOG . mX [ 118ULL ] = Diode2_i_diode ; out -> mLOG . mX [ 119ULL ] =
t74 -> mX . mX [ 30ULL ] ; out -> mLOG . mX [ 120ULL ] = t74 -> mX . mX [
30ULL ] ; out -> mLOG . mX [ 121ULL ] = Comparator1_J_v ; out -> mLOG . mX [
122ULL ] = t74 -> mX . mX [ 30ULL ] ; out -> mLOG . mX [ 123ULL ] = t11 ; out
-> mLOG . mX [ 124ULL ] = t74 -> mX . mX [ 29ULL ] ; out -> mLOG . mX [
125ULL ] = t74 -> mX . mX [ 30ULL ] * 0.01 ; out -> mLOG . mX [ 126ULL ] =
t74 -> mX . mX [ 29ULL ] ; out -> mLOG . mX [ 127ULL ] = t11 ; out -> mLOG .
mX [ 128ULL ] = ( Diode2_i_diode * Diode2_private_Diode_v_diode * 0.001 + t74
-> mX . mX [ 30ULL ] * t74 -> mX . mX [ 30ULL ] * 0.01 * 0.001 ) * 1000.0 ;
out -> mLOG . mX [ 130ULL ] = t74 -> mX . mX [ 8ULL ] ; out -> mLOG . mX [
131ULL ] = Diode2_private_Diode_v_diode ; out -> mLOG . mX [ 132ULL ] = t74
-> mX . mX [ 41ULL ] ; out -> mLOG . mX [ 133ULL ] = - 10.0005 + zc_int10 ;
out -> mLOG . mX [ 134ULL ] = t74 -> mX . mX [ 36ULL ] + 10.0 ; out -> mLOG .
mX [ 135ULL ] = t74 -> mX . mX [ 42ULL ] ; out -> mLOG . mX [ 136ULL ] = t74
-> mX . mX [ 36ULL ] ; out -> mLOG . mX [ 137ULL ] = - 10.0005 + zc_int10 ;
out -> mLOG . mX [ 138ULL ] = - 10.0005 + zc_int10 ; out -> mLOG . mX [
139ULL ] = t12 ; out -> mLOG . mX [ 140ULL ] = t74 -> mX . mX [ 36ULL ] +
10.0 ; out -> mLOG . mX [ 141ULL ] = t12 * ( ( t74 -> mX . mX [ 36ULL ] +
10.0 ) - 10.0 ) * 0.001 * 1000.0 ; out -> mLOG . mX [ 142ULL ] = ( t74 -> mX
. mX [ 36ULL ] + 10.0 ) - 10.0 ; out -> mLOG . mX [ 143ULL ] = ( t74 -> mX .
mX [ 36ULL ] + 10.0 ) - 10.0 ; out -> mLOG . mX [ 145ULL ] = t74 -> mX . mX [
43ULL ] ; out -> mLOG . mX [ 146ULL ] = - 10.0005 + zc_int12 ; out -> mLOG .
mX [ 147ULL ] = t74 -> mX . mX [ 37ULL ] + 10.0 ; out -> mLOG . mX [ 148ULL ]
= t74 -> mX . mX [ 44ULL ] ; out -> mLOG . mX [ 149ULL ] = t74 -> mX . mX [
37ULL ] ; out -> mLOG . mX [ 150ULL ] = - 10.0005 + zc_int12 ; out -> mLOG .
mX [ 151ULL ] = - 10.0005 + zc_int12 ; out -> mLOG . mX [ 152ULL ] = Diode4_i
; out -> mLOG . mX [ 153ULL ] = t74 -> mX . mX [ 37ULL ] + 10.0 ; out -> mLOG
. mX [ 154ULL ] = Diode4_i * ( ( t74 -> mX . mX [ 37ULL ] + 10.0 ) - 10.0 ) *
0.001 * 1000.0 ; out -> mLOG . mX [ 155ULL ] = ( t74 -> mX . mX [ 37ULL ] +
10.0 ) - 10.0 ; out -> mLOG . mX [ 156ULL ] = ( t74 -> mX . mX [ 37ULL ] +
10.0 ) - 10.0 ; out -> mLOG . mX [ 158ULL ] = Diode5_i ; out -> mLOG . mX [
159ULL ] = Capacitor1_p_v ; out -> mLOG . mX [ 160ULL ] = t74 -> mX . mX [
23ULL ] ; out -> mLOG . mX [ 161ULL ] = t74 -> mX . mX [ 48ULL ] ; out ->
mLOG . mX [ 163ULL ] = Capacitor1_p_v ; out -> mLOG . mX [ 164ULL ] =
Diode5_i ; out -> mLOG . mX [ 165ULL ] = Diode5_i ; out -> mLOG . mX [ 166ULL
] = Diode5_i ; out -> mLOG . mX [ 167ULL ] = Capacitor1_p_v ; out -> mLOG .
mX [ 168ULL ] = t74 -> mX . mX [ 23ULL ] ; out -> mLOG . mX [ 169ULL ] =
Diode5_i * Diode5_v_diode * 0.001 * 1000.0 ; out -> mLOG . mX [ 170ULL ] =
Diode5_v_diode ; out -> mLOG . mX [ 171ULL ] = Diode5_v_diode ; out -> mLOG .
mX [ 173ULL ] = t74 -> mX . mX [ 45ULL ] ; out -> mLOG . mX [ 174ULL ] =
Capacitor1_p_v ; out -> mLOG . mX [ 175ULL ] = t74 -> mX . mX [ 22ULL ] ; out
-> mLOG . mX [ 176ULL ] = t74 -> mX . mX [ 49ULL ] ; out -> mLOG . mX [
178ULL ] = Capacitor1_p_v ; out -> mLOG . mX [ 179ULL ] = t74 -> mX . mX [
45ULL ] ; out -> mLOG . mX [ 180ULL ] = t74 -> mX . mX [ 45ULL ] ; out ->
mLOG . mX [ 181ULL ] = t74 -> mX . mX [ 45ULL ] ; out -> mLOG . mX [ 182ULL ]
= Capacitor1_p_v ; out -> mLOG . mX [ 183ULL ] = t74 -> mX . mX [ 22ULL ] ;
out -> mLOG . mX [ 184ULL ] = t74 -> mX . mX [ 45ULL ] * Diode6_v_diode *
0.001 * 1000.0 ; out -> mLOG . mX [ 185ULL ] = Diode6_v_diode ; out -> mLOG .
mX [ 186ULL ] = Diode6_v_diode ; out -> mLOG . mX [ 188ULL ] = Diode7_i ; out
-> mLOG . mX [ 189ULL ] = t74 -> mX . mX [ 23ULL ] ; out -> mLOG . mX [
190ULL ] = t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 191ULL ] = t74 -> mX
. mX [ 51ULL ] ; out -> mLOG . mX [ 193ULL ] = t74 -> mX . mX [ 23ULL ] ; out
-> mLOG . mX [ 194ULL ] = Diode7_i ; out -> mLOG . mX [ 195ULL ] = Diode7_i ;
out -> mLOG . mX [ 196ULL ] = Diode7_i ; out -> mLOG . mX [ 197ULL ] = t74 ->
mX . mX [ 23ULL ] ; out -> mLOG . mX [ 198ULL ] = t74 -> mX . mX [ 20ULL ] ;
out -> mLOG . mX [ 199ULL ] = Diode7_i * Diode7_v_diode * 0.001 * 1000.0 ;
out -> mLOG . mX [ 200ULL ] = Diode7_v_diode ; out -> mLOG . mX [ 201ULL ] =
Diode7_v_diode ; out -> mLOG . mX [ 203ULL ] = Diode8_i ; out -> mLOG . mX [
204ULL ] = t74 -> mX . mX [ 22ULL ] ; out -> mLOG . mX [ 205ULL ] = t74 -> mX
. mX [ 20ULL ] ; out -> mLOG . mX [ 206ULL ] = t74 -> mX . mX [ 53ULL ] ; out
-> mLOG . mX [ 208ULL ] = t74 -> mX . mX [ 22ULL ] ; out -> mLOG . mX [
209ULL ] = Diode8_i ; out -> mLOG . mX [ 210ULL ] = Diode8_i ; out -> mLOG .
mX [ 211ULL ] = Diode8_i ; out -> mLOG . mX [ 212ULL ] = t74 -> mX . mX [
22ULL ] ; out -> mLOG . mX [ 213ULL ] = t74 -> mX . mX [ 20ULL ] ; out ->
mLOG . mX [ 214ULL ] = Diode8_i * Diode8_v_diode * 0.001 * 1000.0 ; out ->
mLOG . mX [ 215ULL ] = Diode8_v_diode ; out -> mLOG . mX [ 216ULL ] =
Diode8_v_diode ; out -> mLOG . mX [ 218ULL ] = t74 -> mX . mX [ 54ULL ] ; out
-> mLOG . mX [ 219ULL ] = Diode9_n_v ; out -> mLOG . mX [ 220ULL ] = t74 ->
mX . mX [ 20ULL ] ; out -> mLOG . mX [ 221ULL ] = t74 -> mX . mX [ 55ULL ] ;
out -> mLOG . mX [ 223ULL ] = Diode9_n_v ; out -> mLOG . mX [ 224ULL ] = t74
-> mX . mX [ 54ULL ] ; out -> mLOG . mX [ 225ULL ] = t74 -> mX . mX [ 54ULL ]
; out -> mLOG . mX [ 226ULL ] = t74 -> mX . mX [ 54ULL ] ; out -> mLOG . mX [
227ULL ] = Diode9_n_v ; out -> mLOG . mX [ 228ULL ] = t74 -> mX . mX [ 20ULL
] ; out -> mLOG . mX [ 229ULL ] = t74 -> mX . mX [ 54ULL ] * Diode9_v_diode *
0.001 * 1000.0 ; out -> mLOG . mX [ 230ULL ] = Diode9_v_diode ; out -> mLOG .
mX [ 231ULL ] = Diode9_v_diode ; out -> mLOG . mX [ 233ULL ] =
Finite_Gain_Op_Amp1_i1 ; out -> mLOG . mX [ 234ULL ] = t74 -> mX . mX [ 27ULL
] ; out -> mLOG . mX [ 235ULL ] = t74 -> mX . mX [ 56ULL ] ; out -> mLOG . mX
[ 236ULL ] = t74 -> mX . mX [ 29ULL ] ; out -> mLOG . mX [ 237ULL ] =
Finite_Gain_Op_Amp1_i1 * 1.0E+6 ; out -> mLOG . mX [ 238ULL ] =
Finite_Gain_Op_Amp2_i1 ; out -> mLOG . mX [ 239ULL ] = t74 -> mX . mX [ 27ULL
] ; out -> mLOG . mX [ 240ULL ] = t74 -> mX . mX [ 57ULL ] ; out -> mLOG . mX
[ 241ULL ] = t74 -> mX . mX [ 25ULL ] ; out -> mLOG . mX [ 242ULL ] =
Finite_Gain_Op_Amp2_i1 * 1.0E+6 ; out -> mLOG . mX [ 243ULL ] = Capacitor_p_v
; out -> mLOG . mX [ 244ULL ] = Diode_n_v ; out -> mLOG . mX [ 245ULL ] = t74
-> mU . mX [ 0ULL ] ; out -> mLOG . mX [ 246ULL ] = t74 -> mX . mX [ 18ULL ]
; out -> mLOG . mX [ 247ULL ] = t74 -> mU . mX [ 0ULL ] ; out -> mLOG . mX [
248ULL ] = t74 -> mX . mX [ 18ULL ] ; out -> mLOG . mX [ 250ULL ] = Diode_n_v
; out -> mLOG . mX [ 251ULL ] = Capacitor_p_v ; out -> mLOG . mX [ 252ULL ] =
t74 -> mX . mX [ 18ULL ] * IGBT_ideal_switch_v * 0.001 * 1000.0 ; out -> mLOG
. mX [ 253ULL ] = IGBT_ideal_switch_v ; out -> mLOG . mX [ 256ULL ] =
Capacitor1_p_v ; out -> mLOG . mX [ 257ULL ] = t74 -> mX . mX [ 23ULL ] ; out
-> mLOG . mX [ 258ULL ] = PS_Gain_O ; out -> mLOG . mX [ 259ULL ] = t74 -> mX
. mX [ 46ULL ] ; out -> mLOG . mX [ 260ULL ] = IGBT1_ideal_switch_G ; out ->
mLOG . mX [ 261ULL ] = t74 -> mX . mX [ 46ULL ] ; out -> mLOG . mX [ 263ULL ]
= t74 -> mX . mX [ 23ULL ] ; out -> mLOG . mX [ 264ULL ] = Capacitor1_p_v ;
out -> mLOG . mX [ 265ULL ] = t74 -> mX . mX [ 46ULL ] * IGBT1_ideal_switch_v
* 0.001 * 1000.0 ; out -> mLOG . mX [ 266ULL ] = IGBT1_ideal_switch_v ; out
-> mLOG . mX [ 267ULL ] = PS_Gain_O ; out -> mLOG . mX [ 269ULL ] = t74 -> mX
. mX [ 23ULL ] ; out -> mLOG . mX [ 270ULL ] = t74 -> mX . mX [ 20ULL ] ; out
-> mLOG . mX [ 271ULL ] = PS_Gain1_O ; out -> mLOG . mX [ 272ULL ] = t74 ->
mX . mX [ 50ULL ] ; out -> mLOG . mX [ 273ULL ] = IGBT2_ideal_switch_G ; out
-> mLOG . mX [ 274ULL ] = t74 -> mX . mX [ 50ULL ] ; out -> mLOG . mX [
276ULL ] = t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 277ULL ] = t74 -> mX
. mX [ 23ULL ] ; out -> mLOG . mX [ 278ULL ] = t74 -> mX . mX [ 50ULL ] *
IGBT2_ideal_switch_v * 0.001 * 1000.0 ; out -> mLOG . mX [ 279ULL ] =
IGBT2_ideal_switch_v ; out -> mLOG . mX [ 280ULL ] = PS_Gain1_O ; out -> mLOG
. mX [ 282ULL ] = Capacitor1_p_v ; out -> mLOG . mX [ 283ULL ] = t74 -> mX .
mX [ 22ULL ] ; out -> mLOG . mX [ 284ULL ] = PS_Gain1_O ; out -> mLOG . mX [
285ULL ] = t74 -> mX . mX [ 47ULL ] ; out -> mLOG . mX [ 286ULL ] =
IGBT2_ideal_switch_G ; out -> mLOG . mX [ 287ULL ] = t74 -> mX . mX [ 47ULL ]
; out -> mLOG . mX [ 289ULL ] = t74 -> mX . mX [ 22ULL ] ; out -> mLOG . mX [
290ULL ] = Capacitor1_p_v ; out -> mLOG . mX [ 291ULL ] = t74 -> mX . mX [
47ULL ] * t32 * 0.001 * 1000.0 ; out -> mLOG . mX [ 292ULL ] = t32 ; out ->
mLOG . mX [ 293ULL ] = PS_Gain1_O ; out -> mLOG . mX [ 295ULL ] = t74 -> mX .
mX [ 22ULL ] ; out -> mLOG . mX [ 296ULL ] = t74 -> mX . mX [ 20ULL ] ; out
-> mLOG . mX [ 297ULL ] = PS_Gain_O ; out -> mLOG . mX [ 298ULL ] = t74 -> mX
. mX [ 52ULL ] ; out -> mLOG . mX [ 299ULL ] = IGBT1_ideal_switch_G ; out ->
mLOG . mX [ 300ULL ] = t74 -> mX . mX [ 52ULL ] ; out -> mLOG . mX [ 302ULL ]
= t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 303ULL ] = t74 -> mX . mX [
22ULL ] ; out -> mLOG . mX [ 304ULL ] = t74 -> mX . mX [ 52ULL ] * t34 *
0.001 * 1000.0 ; out -> mLOG . mX [ 305ULL ] = t34 ; out -> mLOG . mX [
306ULL ] = PS_Gain_O ; out -> mLOG . mX [ 308ULL ] = t74 -> mX . mX [ 17ULL ]
; out -> mLOG . mX [ 309ULL ] = Comparator_comparator1_A_v ; out -> mLOG . mX
[ 310ULL ] = t74 -> mX . mX [ 17ULL ] ; out -> mLOG . mX [ 311ULL ] = t74 ->
mX . mX [ 17ULL ] * 0.01 ; out -> mLOG . mX [ 313ULL ] = Capacitor_p_v ; out
-> mLOG . mX [ 314ULL ] = Diode9_n_v ; out -> mLOG . mX [ 315ULL ] = t74 ->
mX . mX [ 19ULL ] ; out -> mLOG . mX [ 316ULL ] = t74 -> mX . mX [ 0ULL ] ;
out -> mLOG . mX [ 319ULL ] = Capacitor1_p_v ; out -> mLOG . mX [ 320ULL ] =
Diode_n_v ; out -> mLOG . mX [ 321ULL ] = Inductor1_v ; out -> mLOG . mX [
322ULL ] = t74 -> mX . mX [ 10ULL ] ; out -> mLOG . mX [ 324ULL ] =
Current_Sensor_I ; out -> mLOG . mX [ 325ULL ] = Capacitor2_p_v ; out -> mLOG
. mX [ 326ULL ] = t74 -> mX . mX [ 23ULL ] ; out -> mLOG . mX [ 327ULL ] =
t74 -> mX . mX [ 24ULL ] ; out -> mLOG . mX [ 328ULL ] = t74 -> mX . mX [
3ULL ] ; out -> mLOG . mX [ 330ULL ] = t74 -> mX . mX [ 37ULL ] + 10.0 ; out
-> mLOG . mX [ 331ULL ] = PNP_Bipolar_Transistor_emitter_resistor_p_v ; out
-> mLOG . mX [ 332ULL ] = t74 -> mX . mX [ 25ULL ] ; out -> mLOG . mX [
333ULL ] = t74 -> mX . mX [ 12ULL ] * 4.9999999999999996E-6 * 1.0E-6 ; out ->
mLOG . mX [ 334ULL ] = t74 -> mX . mX [ 13ULL ] * 4.9999999999999996E-6 *
1.0E-6 ; out -> mLOG . mX [ 335ULL ] = 10.0 + ( ( ( - t74 -> mX . mX [ 12ULL
] - t74 -> mX . mX [ 25ULL ] ) + t74 -> mX . mX [ 28ULL ] * 0.01 ) + t74 ->
mX . mX [ 37ULL ] ) ; out -> mLOG . mX [ 336ULL ] =
PNP_Bipolar_Transistor_base_resistor_n_v ; out -> mLOG . mX [ 337ULL ] = t74
-> mX . mX [ 37ULL ] + 10.0 ; out -> mLOG . mX [ 338ULL ] =
PNP_Bipolar_Transistor_base_resistor_i ; out -> mLOG . mX [ 340ULL ] =
PNP_Bipolar_Transistor_capacitor_bc_i ; out -> mLOG . mX [ 341ULL ] =
PNP_Bipolar_Transistor_capacitor_bc_n_v ; out -> mLOG . mX [ 342ULL ] =
PNP_Bipolar_Transistor_base_resistor_n_v ; out -> mLOG . mX [ 343ULL ] = t74
-> mX . mX [ 12ULL ] ; out -> mLOG . mX [ 344ULL ] = t74 -> mX . mX [ 12ULL ]
; out -> mLOG . mX [ 345ULL ] = 0.0 ; out -> mLOG . mX [ 346ULL ] = 10.0 + (
( ( ( ( - t74 -> mX . mX [ 12ULL ] - t74 -> mX . mX [ 25ULL ] ) + t74 -> mX .
mX [ 28ULL ] * 1.01 ) - t74 -> mX . mX [ 59ULL ] ) - t74 -> mX . mX [ 58ULL ]
) + t74 -> mX . mX [ 37ULL ] ) ; out -> mLOG . mX [ 347ULL ] =
PNP_Bipolar_Transistor_capacitor_be_n_v ; out -> mLOG . mX [ 348ULL ] =
PNP_Bipolar_Transistor_base_resistor_n_v ; out -> mLOG . mX [ 349ULL ] = t74
-> mX . mX [ 13ULL ] ; out -> mLOG . mX [ 350ULL ] = t74 -> mX . mX [ 13ULL ]
; out -> mLOG . mX [ 351ULL ] = 0.0 ; out -> mLOG . mX [ 352ULL ] = t74 -> mX
. mX [ 28ULL ] ; out -> mLOG . mX [ 353ULL ] =
PNP_Bipolar_Transistor_capacitor_bc_n_v ; out -> mLOG . mX [ 354ULL ] = t74
-> mX . mX [ 25ULL ] ; out -> mLOG . mX [ 355ULL ] = t74 -> mX . mX [ 28ULL ]
* 0.01 ; out -> mLOG . mX [ 357ULL ] = - 10.0 + t0 ; out -> mLOG . mX [
358ULL ] = PNP_Bipolar_Transistor_capacitor_be_n_v ; out -> mLOG . mX [
359ULL ] = PNP_Bipolar_Transistor_emitter_resistor_p_v ; out -> mLOG . mX [
360ULL ] = PNP_Bipolar_Transistor_emitter_resistor_i * 0.0001 ; out -> mLOG .
mX [ 364ULL ] = PNP_Bipolar_Transistor_base_resistor_n_v ; out -> mLOG . mX [
367ULL ] = t74 -> mX . mX [ 59ULL ] ; out -> mLOG . mX [ 368ULL ] = t74 -> mX
. mX [ 58ULL ] ; out -> mLOG . mX [ 369ULL ] = t38 ; out -> mLOG . mX [
370ULL ] = PNP_Bipolar_Transistor_capacitor_be_n_v ; out -> mLOG . mX [
371ULL ] = PNP_Bipolar_Transistor_capacitor_bc_n_v ; out -> mLOG . mX [
372ULL ] = ( - t74 -> mX . mX [ 13ULL ] * t38 - t74 -> mX . mX [ 12ULL ] *
t74 -> mX . mX [ 58ULL ] ) * 0.001 * 1000.0 ; out -> mLOG . mX [ 373ULL ] =
t74 -> mX . mX [ 12ULL ] ; out -> mLOG . mX [ 374ULL ] = t74 -> mX . mX [
13ULL ] ; out -> mLOG . mX [ 377ULL ] = t74 -> mX . mX [ 36ULL ] + 10.0 ; out
-> mLOG . mX [ 378ULL ] = PNP_Bipolar_Transistor1_emitter_resistor_p_v ; out
-> mLOG . mX [ 379ULL ] = t74 -> mX . mX [ 29ULL ] ; out -> mLOG . mX [
380ULL ] = t74 -> mX . mX [ 11ULL ] * 4.9999999999999996E-6 * 1.0E-6 ; out ->
mLOG . mX [ 381ULL ] = t74 -> mX . mX [ 14ULL ] * 4.9999999999999996E-6 *
1.0E-6 ; out -> mLOG . mX [ 382ULL ] = 10.0 + ( ( ( - t74 -> mX . mX [ 11ULL
] - t74 -> mX . mX [ 29ULL ] ) + t74 -> mX . mX [ 31ULL ] * 0.01 ) + t74 ->
mX . mX [ 36ULL ] ) ; out -> mLOG . mX [ 383ULL ] =
PNP_Bipolar_Transistor1_base_resistor_n_v ; out -> mLOG . mX [ 384ULL ] = t74
-> mX . mX [ 36ULL ] + 10.0 ; out -> mLOG . mX [ 385ULL ] =
PNP_Bipolar_Transistor1_base_resistor_i ; out -> mLOG . mX [ 387ULL ] =
PNP_Bipolar_Transistor1_capacitor_bc_i ; out -> mLOG . mX [ 388ULL ] =
PNP_Bipolar_Transistor1_capacitor_bc_n_v ; out -> mLOG . mX [ 389ULL ] =
PNP_Bipolar_Transistor1_base_resistor_n_v ; out -> mLOG . mX [ 390ULL ] = t74
-> mX . mX [ 11ULL ] ; out -> mLOG . mX [ 391ULL ] = t74 -> mX . mX [ 11ULL ]
; out -> mLOG . mX [ 392ULL ] = 0.0 ; out -> mLOG . mX [ 393ULL ] = 10.0 + (
( ( ( ( - t74 -> mX . mX [ 11ULL ] - t74 -> mX . mX [ 29ULL ] ) + t74 -> mX .
mX [ 31ULL ] * 1.01 ) - t74 -> mX . mX [ 61ULL ] ) - t74 -> mX . mX [ 60ULL ]
) + t74 -> mX . mX [ 36ULL ] ) ; out -> mLOG . mX [ 394ULL ] =
PNP_Bipolar_Transistor1_capacitor_be_n_v ; out -> mLOG . mX [ 395ULL ] =
PNP_Bipolar_Transistor1_base_resistor_n_v ; out -> mLOG . mX [ 396ULL ] = t74
-> mX . mX [ 14ULL ] ; out -> mLOG . mX [ 397ULL ] = t74 -> mX . mX [ 14ULL ]
; out -> mLOG . mX [ 398ULL ] = 0.0 ; out -> mLOG . mX [ 399ULL ] = t74 -> mX
. mX [ 31ULL ] ; out -> mLOG . mX [ 400ULL ] =
PNP_Bipolar_Transistor1_capacitor_bc_n_v ; out -> mLOG . mX [ 401ULL ] = t74
-> mX . mX [ 29ULL ] ; out -> mLOG . mX [ 402ULL ] = t74 -> mX . mX [ 31ULL ]
* 0.01 ; out -> mLOG . mX [ 404ULL ] = t65 - 10.0 ; out -> mLOG . mX [ 405ULL
] = PNP_Bipolar_Transistor1_capacitor_be_n_v ; out -> mLOG . mX [ 406ULL ] =
PNP_Bipolar_Transistor1_emitter_resistor_p_v ; out -> mLOG . mX [ 407ULL ] =
PNP_Bipolar_Transistor1_emitter_resistor_i * 0.0001 ; out -> mLOG . mX [
411ULL ] = PNP_Bipolar_Transistor1_base_resistor_n_v ; out -> mLOG . mX [
414ULL ] = t74 -> mX . mX [ 61ULL ] ; out -> mLOG . mX [ 415ULL ] = t74 -> mX
. mX [ 60ULL ] ; out -> mLOG . mX [ 416ULL ] = t43 ; out -> mLOG . mX [
417ULL ] = PNP_Bipolar_Transistor1_capacitor_be_n_v ; out -> mLOG . mX [
418ULL ] = PNP_Bipolar_Transistor1_capacitor_bc_n_v ; out -> mLOG . mX [
419ULL ] = ( - t74 -> mX . mX [ 14ULL ] * t43 - t74 -> mX . mX [ 11ULL ] *
t74 -> mX . mX [ 60ULL ] ) * 0.001 * 1000.0 ; out -> mLOG . mX [ 420ULL ] =
t74 -> mX . mX [ 11ULL ] ; out -> mLOG . mX [ 421ULL ] = t74 -> mX . mX [
14ULL ] ; out -> mLOG . mX [ 424ULL ] = t74 -> mU . mX [ 1ULL ] ; out -> mLOG
. mX [ 425ULL ] = PS_Gain_O ; out -> mLOG . mX [ 426ULL ] = t74 -> mU . mX [
2ULL ] ; out -> mLOG . mX [ 427ULL ] = PS_Gain1_O ; out -> mLOG . mX [ 428ULL
] = PS_Gain1_O ; out -> mLOG . mX [ 429ULL ] = PS_Gain_O ; out -> mLOG . mX [
430ULL ] = t74 -> mX . mX [ 27ULL ] ; out -> mLOG . mX [ 432ULL ] = t74 -> mX
. mX [ 38ULL ] ; out -> mLOG . mX [ 434ULL ] = t74 -> mU . mX [ 3ULL ] ; out
-> mLOG . mX [ 435ULL ] = t74 -> mD . mX [ 1ULL ] ; out -> mLOG . mX [ 436ULL
] = t74 -> mX . mX [ 22ULL ] ; out -> mLOG . mX [ 437ULL ] = Capacitor2_p_v ;
out -> mLOG . mX [ 438ULL ] = Resistor_Resistor_i ; out -> mLOG . mX [ 439ULL
] = t74 -> mX . mX [ 22ULL ] ; out -> mLOG . mX [ 440ULL ] = Capacitor2_p_v ;
out -> mLOG . mX [ 441ULL ] = Resistor_Resistor_i * 100.0 ; out -> mLOG . mX
[ 443ULL ] = t74 -> mD . mX [ 2ULL ] ; out -> mLOG . mX [ 444ULL ] =
PNP_Bipolar_Transistor_emitter_resistor_p_v ; out -> mLOG . mX [ 445ULL ] = -
10.0 + t0 ; out -> mLOG . mX [ 446ULL ] =
PNP_Bipolar_Transistor_emitter_resistor_p_v ; out -> mLOG . mX [ 447ULL ] =
PNP_Bipolar_Transistor_emitter_resistor_i * 10000.0 ; out -> mLOG . mX [
449ULL ] = t74 -> mD . mX [ 3ULL ] ; out -> mLOG . mX [ 450ULL ] = t74 -> mX
. mX [ 37ULL ] + 10.0 ; out -> mLOG . mX [ 451ULL ] = 0.0005 + t74 -> mX . mX
[ 37ULL ] * 5.0E-5 ; out -> mLOG . mX [ 452ULL ] = t74 -> mX . mX [ 37ULL ] +
10.0 ; out -> mLOG . mX [ 453ULL ] = Resistor2_Resistor_i * 20000.0 ; out ->
mLOG . mX [ 455ULL ] = t74 -> mD . mX [ 4ULL ] ; out -> mLOG . mX [ 456ULL ]
= PNP_Bipolar_Transistor1_emitter_resistor_p_v ; out -> mLOG . mX [ 457ULL ]
= t65 - 10.0 ; out -> mLOG . mX [ 458ULL ] =
PNP_Bipolar_Transistor1_emitter_resistor_p_v ; out -> mLOG . mX [ 459ULL ] =
PNP_Bipolar_Transistor1_emitter_resistor_i * 10000.0 ; out -> mLOG . mX [
461ULL ] = t74 -> mD . mX [ 5ULL ] ; out -> mLOG . mX [ 462ULL ] = t74 -> mX
. mX [ 36ULL ] + 10.0 ; out -> mLOG . mX [ 463ULL ] = 0.0005 + t74 -> mX . mX
[ 36ULL ] * 5.0E-5 ; out -> mLOG . mX [ 464ULL ] = t74 -> mX . mX [ 36ULL ] +
10.0 ; out -> mLOG . mX [ 465ULL ] = Resistor4_Resistor_i * 20000.0 ; out ->
mLOG . mX [ 467ULL ] = t74 -> mU . mX [ 0ULL ] ; out -> mLOG . mX [ 468ULL ]
= t74 -> mU . mX [ 1ULL ] ; out -> mLOG . mX [ 469ULL ] = t74 -> mU . mX [
2ULL ] ; out -> mLOG . mX [ 470ULL ] = t74 -> mU . mX [ 3ULL ] ; out -> mLOG
. mX [ 471ULL ] = t74 -> mX . mX [ 17ULL ] ; out -> mLOG . mX [ 472ULL ] =
t74 -> mX . mX [ 57ULL ] ; out -> mLOG . mX [ 473ULL ] = Diode9_n_v ; out ->
mLOG . mX [ 474ULL ] = Thyristor1_iak ; out -> mLOG . mX [ 475ULL ] = t74 ->
mX . mX [ 57ULL ] ; out -> mLOG . mX [ 476ULL ] = Thyristor1_iak ; out ->
mLOG . mX [ 477ULL ] = Diode9_n_v ; out -> mLOG . mX [ 478ULL ] = t74 -> mX .
mX [ 17ULL ] ; out -> mLOG . mX [ 479ULL ] = Thyristor1_iak *
Thyristor1_ideal_switch_v * 0.001 * 1000.0 ; out -> mLOG . mX [ 480ULL ] =
t74 -> mD . mX [ 6ULL ] ; out -> mLOG . mX [ 481ULL ] =
Thyristor1_ideal_switch_v ; out -> mLOG . mX [ 482ULL ] = t74 -> mD . mX [
7ULL ] ; out -> mLOG . mX [ 483ULL ] = ( real_T ) ( size_t ) t74 -> mQ . mX [
0ULL ] ; out -> mLOG . mX [ 484ULL ] = t74 -> mX . mX [ 57ULL ] ; out -> mLOG
. mX [ 486ULL ] = t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 487ULL ] =
t74 -> mX . mX [ 56ULL ] ; out -> mLOG . mX [ 488ULL ] = t74 -> mX . mX [
17ULL ] ; out -> mLOG . mX [ 489ULL ] = Thyristor2_iak ; out -> mLOG . mX [
490ULL ] = t74 -> mX . mX [ 56ULL ] ; out -> mLOG . mX [ 491ULL ] =
Thyristor2_iak ; out -> mLOG . mX [ 492ULL ] = t74 -> mX . mX [ 17ULL ] ; out
-> mLOG . mX [ 493ULL ] = t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [
494ULL ] = Thyristor2_iak * Thyristor2_ideal_switch_v * 0.001 * 1000.0 ; out
-> mLOG . mX [ 495ULL ] = t74 -> mD . mX [ 8ULL ] ; out -> mLOG . mX [ 496ULL
] = Thyristor2_ideal_switch_v ; out -> mLOG . mX [ 497ULL ] = t74 -> mD . mX
[ 9ULL ] ; out -> mLOG . mX [ 498ULL ] = ( real_T ) ( size_t ) t74 -> mQ . mX
[ 1ULL ] ; out -> mLOG . mX [ 499ULL ] = t74 -> mX . mX [ 56ULL ] ; out ->
mLOG . mX [ 501ULL ] = t74 -> mX . mX [ 56ULL ] ; out -> mLOG . mX [ 502ULL ]
= Diode9_n_v ; out -> mLOG . mX [ 503ULL ] = t74 -> mX . mX [ 15ULL ] ; out
-> mLOG . mX [ 504ULL ] = t74 -> mX . mX [ 56ULL ] ; out -> mLOG . mX [
505ULL ] = t74 -> mX . mX [ 15ULL ] ; out -> mLOG . mX [ 506ULL ] =
Diode9_n_v ; out -> mLOG . mX [ 507ULL ] = t74 -> mX . mX [ 15ULL ] * t50 *
0.001 * 1000.0 ; out -> mLOG . mX [ 508ULL ] = t74 -> mD . mX [ 10ULL ] ; out
-> mLOG . mX [ 509ULL ] = t50 ; out -> mLOG . mX [ 510ULL ] = t74 -> mD . mX
[ 11ULL ] ; out -> mLOG . mX [ 511ULL ] = ( real_T ) ( size_t ) t74 -> mQ .
mX [ 2ULL ] ; out -> mLOG . mX [ 512ULL ] = t74 -> mX . mX [ 56ULL ] ; out ->
mLOG . mX [ 514ULL ] = t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 515ULL ]
= t74 -> mX . mX [ 57ULL ] ; out -> mLOG . mX [ 516ULL ] = t74 -> mX . mX [
16ULL ] ; out -> mLOG . mX [ 517ULL ] = t74 -> mX . mX [ 57ULL ] ; out ->
mLOG . mX [ 518ULL ] = t74 -> mX . mX [ 16ULL ] ; out -> mLOG . mX [ 519ULL ]
= t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 520ULL ] = t74 -> mX . mX [
16ULL ] * t74 -> mX . mX [ 20ULL ] * 0.001 * 1000.0 ; out -> mLOG . mX [
521ULL ] = t74 -> mD . mX [ 12ULL ] ; out -> mLOG . mX [ 522ULL ] = t74 -> mX
. mX [ 20ULL ] ; out -> mLOG . mX [ 523ULL ] = t74 -> mD . mX [ 13ULL ] ; out
-> mLOG . mX [ 524ULL ] = ( real_T ) ( size_t ) t74 -> mQ . mX [ 3ULL ] ; out
-> mLOG . mX [ 525ULL ] = t74 -> mX . mX [ 57ULL ] ; out -> mLOG . mX [
527ULL ] = t74 -> mX . mX [ 25ULL ] ; out -> mLOG . mX [ 528ULL ] = t74 -> mX
. mX [ 25ULL ] ; out -> mLOG . mX [ 529ULL ] = t55 ; out -> mLOG . mX [
530ULL ] = t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 531ULL ] =
Capacitor_p_v ; out -> mLOG . mX [ 532ULL ] = t56 ; out -> mLOG . mX [ 533ULL
] = t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 534ULL ] = Diode_n_v ; out
-> mLOG . mX [ 535ULL ] = t56 ; out -> mLOG . mX [ 536ULL ] = t74 -> mX . mX
[ 27ULL ] ; out -> mLOG . mX [ 537ULL ] = t74 -> mX . mX [ 27ULL ] ; out ->
mLOG . mX [ 538ULL ] = t74 -> mX . mX [ 27ULL ] ; out -> mLOG . mX [ 539ULL ]
= t55 ; out -> mLOG . mX [ 540ULL ] = t74 -> mX . mX [ 56ULL ] ; out -> mLOG
. mX [ 541ULL ] = t74 -> mX . mX [ 56ULL ] ; out -> mLOG . mX [ 542ULL ] =
t74 -> mX . mX [ 56ULL ] ; out -> mLOG . mX [ 543ULL ] = t74 -> mX . mX [
29ULL ] ; out -> mLOG . mX [ 544ULL ] = t74 -> mX . mX [ 29ULL ] ; out ->
mLOG . mX [ 545ULL ] = t74 -> mX . mX [ 29ULL ] ; out -> mLOG . mX [ 546ULL ]
= t74 -> mX . mX [ 57ULL ] ; out -> mLOG . mX [ 547ULL ] = t74 -> mX . mX [
57ULL ] ; out -> mLOG . mX [ 548ULL ] = t74 -> mX . mX [ 57ULL ] ; out ->
mLOG . mX [ 549ULL ] = Comparator_comparator1_A_v ; out -> mLOG . mX [ 550ULL
] = Comparator_comparator1_A_v ; out -> mLOG . mX [ 551ULL ] =
Comparator_comparator1_A_v ; out -> mLOG . mX [ 552ULL ] = t60 ; out -> mLOG
. mX [ 553ULL ] = t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 554ULL ] =
Capacitor1_p_v ; out -> mLOG . mX [ 555ULL ] = t60 ; out -> mLOG . mX [
556ULL ] = t61 ; out -> mLOG . mX [ 557ULL ] = t74 -> mX . mX [ 22ULL ] ; out
-> mLOG . mX [ 558ULL ] = Capacitor2_p_v ; out -> mLOG . mX [ 559ULL ] = t61
; out -> mLOG . mX [ 560ULL ] = t62 ; out -> mLOG . mX [ 561ULL ] = t74 -> mX
. mX [ 22ULL ] ; out -> mLOG . mX [ 562ULL ] = t74 -> mX . mX [ 23ULL ] ; out
-> mLOG . mX [ 563ULL ] = t62 ; out -> mLOG . mX [ 564ULL ] = t63 ; out ->
mLOG . mX [ 565ULL ] = t74 -> mX . mX [ 20ULL ] ; out -> mLOG . mX [ 566ULL ]
= Diode9_n_v ; out -> mLOG . mX [ 567ULL ] = t63 ; out -> mLOG . mX [ 568ULL
] = t74 -> mX . mX [ 25ULL ] ; ( void ) sys ; ( void ) out ; return 0 ; }
