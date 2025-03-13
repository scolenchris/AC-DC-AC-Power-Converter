#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_lock2_i.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_lock2_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { real_T CMOS_AND1_J_v ;
real_T CMOS_AND_J_v ; real_T Resistor3_n_v ; real_T
Thyristor_Piecewise_Linear1_iak ; real_T
Thyristor_Piecewise_Linear2_ideal_switch_v ; real_T
Thyristor_Piecewise_Linear_iak ; real_T
Thyristor_Piecewise_Linear_ideal_switch_v ; CMOS_AND_J_v = t1 -> mX . mX [
23ULL ] * 1.0E-6 + t1 -> mX . mX [ 2ULL ] ; CMOS_AND1_J_v = t1 -> mX . mX [
29ULL ] * 1.0E-6 + t1 -> mX . mX [ 6ULL ] ; Resistor3_n_v = t1 -> mX . mX [
52ULL ] * 0.01 + t1 -> mX . mX [ 15ULL ] ; Thyristor_Piecewise_Linear_iak = (
t1 -> mX . mX [ 33ULL ] * 1.0E-9 - t1 -> mX . mX [ 19ULL ] ) + t1 -> mX . mX
[ 8ULL ] ; Thyristor_Piecewise_Linear_ideal_switch_v = ( - t1 -> mX . mX [
32ULL ] - t1 -> mX . mX [ 33ULL ] ) + t1 -> mX . mX [ 18ULL ] ;
Thyristor_Piecewise_Linear1_iak = ( t1 -> mX . mX [ 33ULL ] * 1.0E-9 - t1 ->
mX . mX [ 20ULL ] ) + t1 -> mX . mX [ 8ULL ] ;
Thyristor_Piecewise_Linear2_ideal_switch_v = ( - t1 -> mX . mX [ 32ULL ] - t1
-> mX . mX [ 33ULL ] ) + t1 -> mX . mX [ 17ULL ] ; if ( ( t1 -> mCI . mX [
33ULL ] == 0 ) && ( Resistor3_n_v < 0.0 ) && ( ( size_t ) t1 -> mQ . mX [
0ULL ] == 1ULL ) ) { out -> mLOCK2_I . mX [ 0ULL ] = true ; } else if ( ( t1
-> mCI . mX [ 32ULL ] == 0 ) && ( Resistor3_n_v > 0.0 ) && ( ( size_t ) t1 ->
mQ . mX [ 0ULL ] == 2ULL ) ) { out -> mLOCK2_I . mX [ 0ULL ] = true ; } else
if ( ( t1 -> mCI . mX [ 31ULL ] == 0 ) && ( Resistor3_n_v < 0.0 ) && ( (
size_t ) t1 -> mQ . mX [ 0ULL ] == 3ULL ) ) { out -> mLOCK2_I . mX [ 0ULL ] =
true ; } else { out -> mLOCK2_I . mX [ 0ULL ] = ( ( t1 -> mCI . mX [ 30ULL ]
== 0 ) && ( Resistor3_n_v > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] ==
4ULL ) ) ; } if ( ( t1 -> mCI . mX [ 42ULL ] == 0 ) && ( CMOS_AND1_J_v < 0.0
) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 1ULL ) ) { out -> mLOCK2_I . mX [
1ULL ] = true ; } else if ( ( t1 -> mCI . mX [ 41ULL ] == 0 ) && (
CMOS_AND1_J_v > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 1ULL ) ) {
out -> mLOCK2_I . mX [ 1ULL ] = true ; } else if ( ( t1 -> mCI . mX [ 40ULL ]
== 0 ) && ( CMOS_AND1_J_v > 0.0 ) && (
Thyristor_Piecewise_Linear_ideal_switch_v > 0.0 ) && ( ( size_t ) t1 -> mQ .
mX [ 1ULL ] == 2ULL ) ) { out -> mLOCK2_I . mX [ 1ULL ] = true ; } else if (
( t1 -> mCI . mX [ 39ULL ] == 0 ) && ( Thyristor_Piecewise_Linear_iak < 0.0 )
&& ( CMOS_AND1_J_v < 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 3ULL ) )
{ out -> mLOCK2_I . mX [ 1ULL ] = true ; } else if ( ( t1 -> mCI . mX [ 38ULL
] == 0 ) && ( Thyristor_Piecewise_Linear_iak > 0.0 ) && ( ( size_t ) t1 -> mQ
. mX [ 1ULL ] == 3ULL ) ) { out -> mLOCK2_I . mX [ 1ULL ] = true ; } else if
( ( t1 -> mCI . mX [ 37ULL ] == 0 ) && ( Thyristor_Piecewise_Linear_iak < 0.0
) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 4ULL ) ) { out -> mLOCK2_I . mX [
1ULL ] = true ; } else if ( ( t1 -> mCI . mX [ 36ULL ] == 0 ) && (
Thyristor_Piecewise_Linear_iak > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ]
== 5ULL ) ) { out -> mLOCK2_I . mX [ 1ULL ] = true ; } else { out -> mLOCK2_I
. mX [ 1ULL ] = ( ( t1 -> mCI . mX [ 35ULL ] == 0 ) && ( ( size_t ) t1 -> mQ
. mX [ 1ULL ] == 5ULL ) && ( ( Thyristor_Piecewise_Linear_iak < 0.0 ) || (
Thyristor_Piecewise_Linear_ideal_switch_v < 0.0 ) ) ) ; } if ( ( t1 -> mCI .
mX [ 51ULL ] == 0 ) && ( CMOS_AND_J_v < 0.0 ) && ( ( size_t ) t1 -> mQ . mX [
2ULL ] == 1ULL ) ) { out -> mLOCK2_I . mX [ 2ULL ] = true ; } else if ( ( t1
-> mCI . mX [ 50ULL ] == 0 ) && ( CMOS_AND_J_v > 0.0 ) && ( ( size_t ) t1 ->
mQ . mX [ 2ULL ] == 1ULL ) ) { out -> mLOCK2_I . mX [ 2ULL ] = true ; } else
if ( ( t1 -> mCI . mX [ 49ULL ] == 0 ) && ( CMOS_AND_J_v > 0.0 ) && ( - t1 ->
mX . mX [ 18ULL ] > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 2ULL ) )
{ out -> mLOCK2_I . mX [ 2ULL ] = true ; } else if ( ( t1 -> mCI . mX [ 48ULL
] == 0 ) && ( Thyristor_Piecewise_Linear1_iak < 0.0 ) && ( CMOS_AND_J_v < 0.0
) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 3ULL ) ) { out -> mLOCK2_I . mX [
2ULL ] = true ; } else if ( ( t1 -> mCI . mX [ 47ULL ] == 0 ) && (
Thyristor_Piecewise_Linear1_iak > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL
] == 3ULL ) ) { out -> mLOCK2_I . mX [ 2ULL ] = true ; } else if ( ( t1 ->
mCI . mX [ 46ULL ] == 0 ) && ( Thyristor_Piecewise_Linear1_iak < 0.0 ) && ( (
size_t ) t1 -> mQ . mX [ 2ULL ] == 4ULL ) ) { out -> mLOCK2_I . mX [ 2ULL ] =
true ; } else if ( ( t1 -> mCI . mX [ 44ULL ] == 0 ) && (
Thyristor_Piecewise_Linear1_iak > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL
] == 5ULL ) ) { out -> mLOCK2_I . mX [ 2ULL ] = true ; } else { out ->
mLOCK2_I . mX [ 2ULL ] = ( ( t1 -> mCI . mX [ 43ULL ] == 0 ) && ( ( size_t )
t1 -> mQ . mX [ 2ULL ] == 5ULL ) && ( ( Thyristor_Piecewise_Linear1_iak < 0.0
) || ( - t1 -> mX . mX [ 18ULL ] < 0.0 ) ) ) ; } if ( ( t1 -> mCI . mX [
60ULL ] == 0 ) && ( CMOS_AND_J_v < 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL
] == 1ULL ) ) { out -> mLOCK2_I . mX [ 3ULL ] = true ; } else if ( ( t1 ->
mCI . mX [ 59ULL ] == 0 ) && ( CMOS_AND_J_v > 0.0 ) && ( ( size_t ) t1 -> mQ
. mX [ 3ULL ] == 1ULL ) ) { out -> mLOCK2_I . mX [ 3ULL ] = true ; } else if
( ( t1 -> mCI . mX [ 58ULL ] == 0 ) && ( CMOS_AND_J_v > 0.0 ) && (
Thyristor_Piecewise_Linear2_ideal_switch_v > 0.0 ) && ( ( size_t ) t1 -> mQ .
mX [ 3ULL ] == 2ULL ) ) { out -> mLOCK2_I . mX [ 3ULL ] = true ; } else if (
( t1 -> mCI . mX [ 57ULL ] == 0 ) && ( t1 -> mX . mX [ 19ULL ] < 0.0 ) && (
CMOS_AND_J_v < 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 3ULL ) ) { out
-> mLOCK2_I . mX [ 3ULL ] = true ; } else if ( ( t1 -> mCI . mX [ 55ULL ] ==
0 ) && ( t1 -> mX . mX [ 19ULL ] > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL
] == 3ULL ) ) { out -> mLOCK2_I . mX [ 3ULL ] = true ; } else if ( ( t1 ->
mCI . mX [ 54ULL ] == 0 ) && ( t1 -> mX . mX [ 19ULL ] < 0.0 ) && ( ( size_t
) t1 -> mQ . mX [ 3ULL ] == 4ULL ) ) { out -> mLOCK2_I . mX [ 3ULL ] = true ;
} else if ( ( t1 -> mCI . mX [ 53ULL ] == 0 ) && ( t1 -> mX . mX [ 19ULL ] >
0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 5ULL ) ) { out -> mLOCK2_I .
mX [ 3ULL ] = true ; } else { out -> mLOCK2_I . mX [ 3ULL ] = ( ( t1 -> mCI .
mX [ 52ULL ] == 0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 5ULL ) && ( (
t1 -> mX . mX [ 19ULL ] < 0.0 ) || (
Thyristor_Piecewise_Linear2_ideal_switch_v < 0.0 ) ) ) ; } if ( ( t1 -> mCI .
mX [ 69ULL ] == 0 ) && ( CMOS_AND1_J_v < 0.0 ) && ( ( size_t ) t1 -> mQ . mX
[ 4ULL ] == 1ULL ) ) { out -> mLOCK2_I . mX [ 4ULL ] = true ; } else if ( (
t1 -> mCI . mX [ 68ULL ] == 0 ) && ( CMOS_AND1_J_v > 0.0 ) && ( ( size_t ) t1
-> mQ . mX [ 4ULL ] == 1ULL ) ) { out -> mLOCK2_I . mX [ 4ULL ] = true ; }
else if ( ( t1 -> mCI . mX [ 66ULL ] == 0 ) && ( CMOS_AND1_J_v > 0.0 ) && ( -
t1 -> mX . mX [ 17ULL ] > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] ==
2ULL ) ) { out -> mLOCK2_I . mX [ 4ULL ] = true ; } else if ( ( t1 -> mCI .
mX [ 65ULL ] == 0 ) && ( t1 -> mX . mX [ 20ULL ] < 0.0 ) && ( CMOS_AND1_J_v <
0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 3ULL ) ) { out -> mLOCK2_I .
mX [ 4ULL ] = true ; } else if ( ( t1 -> mCI . mX [ 64ULL ] == 0 ) && ( t1 ->
mX . mX [ 20ULL ] > 0.0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 3ULL ) )
{ out -> mLOCK2_I . mX [ 4ULL ] = true ; } else if ( ( t1 -> mCI . mX [ 63ULL
] == 0 ) && ( t1 -> mX . mX [ 20ULL ] < 0.0 ) && ( ( size_t ) t1 -> mQ . mX [
4ULL ] == 4ULL ) ) { out -> mLOCK2_I . mX [ 4ULL ] = true ; } else if ( ( t1
-> mCI . mX [ 62ULL ] == 0 ) && ( t1 -> mX . mX [ 20ULL ] > 0.0 ) && ( (
size_t ) t1 -> mQ . mX [ 4ULL ] == 5ULL ) ) { out -> mLOCK2_I . mX [ 4ULL ] =
true ; } else { out -> mLOCK2_I . mX [ 4ULL ] = ( ( t1 -> mCI . mX [ 61ULL ]
== 0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 5ULL ) && ( ( t1 -> mX . mX
[ 20ULL ] < 0.0 ) || ( - t1 -> mX . mX [ 17ULL ] < 0.0 ) ) ) ; } out ->
mLOCK2_I . mX [ 5ULL ] = false ; ( void ) sys ; ( void ) out ; return 0 ; }
