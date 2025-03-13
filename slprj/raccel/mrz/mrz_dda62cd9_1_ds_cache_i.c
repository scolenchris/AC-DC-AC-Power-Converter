#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_cache_i.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_cache_i ( const NeDynamicSystem * sys , const
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
-> mX . mX [ 33ULL ] ) + t1 -> mX . mX [ 17ULL ] ; out -> mCACHE_I . mX [
0ULL ] = ( int32_T ) ( t1 -> mM . mX [ 0ULL ] != 0 ) ; out -> mCACHE_I . mX [
1ULL ] = ( int32_T ) ( t1 -> mM . mX [ 1ULL ] != 0 ) ; out -> mCACHE_I . mX [
2ULL ] = ( int32_T ) ( t1 -> mM . mX [ 2ULL ] != 0 ) ; out -> mCACHE_I . mX [
3ULL ] = ( int32_T ) ( t1 -> mM . mX [ 3ULL ] != 0 ) ; out -> mCACHE_I . mX [
4ULL ] = ( int32_T ) ( t1 -> mM . mX [ 4ULL ] != 0 ) ; out -> mCACHE_I . mX [
5ULL ] = ( int32_T ) ( t1 -> mM . mX [ 5ULL ] != 0 ) ; out -> mCACHE_I . mX [
6ULL ] = ( int32_T ) ( t1 -> mM . mX [ 6ULL ] != 0 ) ; out -> mCACHE_I . mX [
7ULL ] = ( int32_T ) ( t1 -> mM . mX [ 7ULL ] != 0 ) ; out -> mCACHE_I . mX [
8ULL ] = ( int32_T ) ( t1 -> mM . mX [ 8ULL ] != 0 ) ; out -> mCACHE_I . mX [
9ULL ] = ( int32_T ) ( t1 -> mM . mX [ 9ULL ] != 0 ) ; out -> mCACHE_I . mX [
10ULL ] = ( int32_T ) ( t1 -> mM . mX [ 10ULL ] != 0 ) ; out -> mCACHE_I . mX
[ 11ULL ] = ( int32_T ) ( t1 -> mM . mX [ 11ULL ] != 0 ) ; out -> mCACHE_I .
mX [ 12ULL ] = ( int32_T ) ( t1 -> mM . mX [ 12ULL ] != 0 ) ; out -> mCACHE_I
. mX [ 13ULL ] = ( int32_T ) ( t1 -> mM . mX [ 13ULL ] != 0 ) ; out ->
mCACHE_I . mX [ 14ULL ] = ( int32_T ) ( t1 -> mM . mX [ 14ULL ] != 0 ) ; out
-> mCACHE_I . mX [ 15ULL ] = ( int32_T ) ( t1 -> mM . mX [ 15ULL ] != 0 ) ;
out -> mCACHE_I . mX [ 16ULL ] = ( int32_T ) ( t1 -> mM . mX [ 16ULL ] != 0 )
; out -> mCACHE_I . mX [ 17ULL ] = ( int32_T ) ( t1 -> mM . mX [ 17ULL ] != 0
) ; out -> mCACHE_I . mX [ 18ULL ] = ( int32_T ) ( t1 -> mM . mX [ 18ULL ] !=
0 ) ; out -> mCACHE_I . mX [ 19ULL ] = ( int32_T ) ( t1 -> mM . mX [ 19ULL ]
!= 0 ) ; out -> mCACHE_I . mX [ 20ULL ] = ( int32_T ) ( t1 -> mM . mX [ 20ULL
] != 0 ) ; out -> mCACHE_I . mX [ 21ULL ] = ( int32_T ) ( t1 -> mM . mX [
21ULL ] != 0 ) ; out -> mCACHE_I . mX [ 22ULL ] = ( int32_T ) ( t1 -> mM . mX
[ 22ULL ] != 0 ) ; out -> mCACHE_I . mX [ 23ULL ] = ( int32_T ) ( t1 -> mM .
mX [ 23ULL ] != 0 ) ; out -> mCACHE_I . mX [ 24ULL ] = ( int32_T ) ( t1 -> mM
. mX [ 24ULL ] != 0 ) ; out -> mCACHE_I . mX [ 25ULL ] = ( int32_T ) ( t1 ->
mM . mX [ 25ULL ] != 0 ) ; out -> mCACHE_I . mX [ 26ULL ] = ( int32_T ) ( t1
-> mM . mX [ 26ULL ] != 0 ) ; out -> mCACHE_I . mX [ 27ULL ] = ( int32_T ) (
t1 -> mM . mX [ 27ULL ] != 0 ) ; out -> mCACHE_I . mX [ 28ULL ] = ( int32_T )
( t1 -> mM . mX [ 28ULL ] != 0 ) ; out -> mCACHE_I . mX [ 29ULL ] = ( int32_T
) ( t1 -> mM . mX [ 29ULL ] != 0 ) ; out -> mCACHE_I . mX [ 30ULL ] = (
int32_T ) ( ( Resistor3_n_v >= 0.1 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ]
== 4ULL ) ) ; out -> mCACHE_I . mX [ 31ULL ] = ( int32_T ) ( ( Resistor3_n_v
<= - 0.1 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 3ULL ) ) ; out ->
mCACHE_I . mX [ 32ULL ] = ( int32_T ) ( ( Resistor3_n_v >= 0.1 ) && ( (
size_t ) t1 -> mQ . mX [ 0ULL ] == 2ULL ) ) ; out -> mCACHE_I . mX [ 33ULL ]
= ( int32_T ) ( ( Resistor3_n_v < 0.1 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL
] == 1ULL ) ) ; out -> mCACHE_I . mX [ 34ULL ] = ( int32_T ) ( t1 -> mM . mX
[ 30ULL ] != 0 ) ; out -> mCACHE_I . mX [ 35ULL ] = ( int32_T ) ( ( ( size_t
) t1 -> mQ . mX [ 1ULL ] == 5ULL ) && ( ( Thyristor_Piecewise_Linear_iak <=
0.0 ) || ( Thyristor_Piecewise_Linear_ideal_switch_v <= 0.0 ) ) ) ; out ->
mCACHE_I . mX [ 36ULL ] = ( int32_T ) ( ( Thyristor_Piecewise_Linear_iak >
1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 5ULL ) ) ; out -> mCACHE_I .
mX [ 37ULL ] = ( int32_T ) ( ( Thyristor_Piecewise_Linear_iak <= 1.0 ) && ( (
size_t ) t1 -> mQ . mX [ 1ULL ] == 4ULL ) ) ; out -> mCACHE_I . mX [ 38ULL ]
= ( int32_T ) ( ( Thyristor_Piecewise_Linear_iak > 1.0 ) && ( ( size_t ) t1
-> mQ . mX [ 1ULL ] == 3ULL ) ) ; out -> mCACHE_I . mX [ 39ULL ] = ( int32_T
) ( ( CMOS_AND1_J_v < 3.0 ) && ( Thyristor_Piecewise_Linear_iak <= 1.0 ) && (
( size_t ) t1 -> mQ . mX [ 1ULL ] == 3ULL ) ) ; out -> mCACHE_I . mX [ 40ULL
] = ( int32_T ) ( ( Thyristor_Piecewise_Linear_ideal_switch_v > 0.8 ) && (
CMOS_AND1_J_v >= 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 2ULL ) ) ;
out -> mCACHE_I . mX [ 41ULL ] = ( int32_T ) ( ( CMOS_AND1_J_v > 3.0 ) && ( (
size_t ) t1 -> mQ . mX [ 1ULL ] == 1ULL ) ) ; out -> mCACHE_I . mX [ 42ULL ]
= ( int32_T ) ( ( CMOS_AND1_J_v < 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL
] == 1ULL ) ) ; out -> mCACHE_I . mX [ 43ULL ] = ( int32_T ) ( ( ( size_t )
t1 -> mQ . mX [ 2ULL ] == 5ULL ) && ( ( Thyristor_Piecewise_Linear1_iak <=
0.0 ) || ( - t1 -> mX . mX [ 18ULL ] <= 0.0 ) ) ) ; out -> mCACHE_I . mX [
44ULL ] = ( int32_T ) ( ( Thyristor_Piecewise_Linear1_iak > 1.0 ) && ( (
size_t ) t1 -> mQ . mX [ 2ULL ] == 5ULL ) ) ; out -> mCACHE_I . mX [ 45ULL ]
= ( int32_T ) ( t1 -> mM . mX [ 31ULL ] != 0 ) ; out -> mCACHE_I . mX [ 46ULL
] = ( int32_T ) ( ( Thyristor_Piecewise_Linear1_iak <= 1.0 ) && ( ( size_t )
t1 -> mQ . mX [ 2ULL ] == 4ULL ) ) ; out -> mCACHE_I . mX [ 47ULL ] = (
int32_T ) ( ( Thyristor_Piecewise_Linear1_iak > 1.0 ) && ( ( size_t ) t1 ->
mQ . mX [ 2ULL ] == 3ULL ) ) ; out -> mCACHE_I . mX [ 48ULL ] = ( int32_T ) (
( CMOS_AND_J_v < 3.0 ) && ( Thyristor_Piecewise_Linear1_iak <= 1.0 ) && ( (
size_t ) t1 -> mQ . mX [ 2ULL ] == 3ULL ) ) ; out -> mCACHE_I . mX [ 49ULL ]
= ( int32_T ) ( ( - t1 -> mX . mX [ 18ULL ] > 0.8 ) && ( CMOS_AND_J_v >= 3.0
) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 2ULL ) ) ; out -> mCACHE_I . mX [
50ULL ] = ( int32_T ) ( ( CMOS_AND_J_v > 3.0 ) && ( ( size_t ) t1 -> mQ . mX
[ 2ULL ] == 1ULL ) ) ; out -> mCACHE_I . mX [ 51ULL ] = ( int32_T ) ( (
CMOS_AND_J_v < 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 1ULL ) ) ; out
-> mCACHE_I . mX [ 52ULL ] = ( int32_T ) ( ( ( size_t ) t1 -> mQ . mX [ 3ULL
] == 5ULL ) && ( ( t1 -> mX . mX [ 19ULL ] <= 0.0 ) || (
Thyristor_Piecewise_Linear2_ideal_switch_v <= 0.0 ) ) ) ; out -> mCACHE_I .
mX [ 53ULL ] = ( int32_T ) ( ( t1 -> mX . mX [ 19ULL ] > 1.0 ) && ( ( size_t
) t1 -> mQ . mX [ 3ULL ] == 5ULL ) ) ; out -> mCACHE_I . mX [ 54ULL ] = (
int32_T ) ( ( t1 -> mX . mX [ 19ULL ] <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX
[ 3ULL ] == 4ULL ) ) ; out -> mCACHE_I . mX [ 55ULL ] = ( int32_T ) ( ( t1 ->
mX . mX [ 19ULL ] > 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 3ULL ) )
; out -> mCACHE_I . mX [ 56ULL ] = ( int32_T ) ( t1 -> mM . mX [ 32ULL ] != 0
) ; out -> mCACHE_I . mX [ 57ULL ] = ( int32_T ) ( ( CMOS_AND_J_v < 3.0 ) &&
( t1 -> mX . mX [ 19ULL ] <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] ==
3ULL ) ) ; out -> mCACHE_I . mX [ 58ULL ] = ( int32_T ) ( (
Thyristor_Piecewise_Linear2_ideal_switch_v > 0.8 ) && ( CMOS_AND_J_v >= 3.0 )
&& ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 2ULL ) ) ; out -> mCACHE_I . mX [
59ULL ] = ( int32_T ) ( ( CMOS_AND_J_v > 3.0 ) && ( ( size_t ) t1 -> mQ . mX
[ 3ULL ] == 1ULL ) ) ; out -> mCACHE_I . mX [ 60ULL ] = ( int32_T ) ( (
CMOS_AND_J_v < 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 1ULL ) ) ; out
-> mCACHE_I . mX [ 61ULL ] = ( int32_T ) ( ( ( size_t ) t1 -> mQ . mX [ 4ULL
] == 5ULL ) && ( ( t1 -> mX . mX [ 20ULL ] <= 0.0 ) || ( - t1 -> mX . mX [
17ULL ] <= 0.0 ) ) ) ; out -> mCACHE_I . mX [ 62ULL ] = ( int32_T ) ( ( t1 ->
mX . mX [ 20ULL ] > 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 5ULL ) )
; out -> mCACHE_I . mX [ 63ULL ] = ( int32_T ) ( ( t1 -> mX . mX [ 20ULL ] <=
1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 4ULL ) ) ; out -> mCACHE_I .
mX [ 64ULL ] = ( int32_T ) ( ( t1 -> mX . mX [ 20ULL ] > 1.0 ) && ( ( size_t
) t1 -> mQ . mX [ 4ULL ] == 3ULL ) ) ; out -> mCACHE_I . mX [ 65ULL ] = (
int32_T ) ( ( CMOS_AND1_J_v < 3.0 ) && ( t1 -> mX . mX [ 20ULL ] <= 1.0 ) &&
( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 3ULL ) ) ; out -> mCACHE_I . mX [
66ULL ] = ( int32_T ) ( ( - t1 -> mX . mX [ 17ULL ] > 0.8 ) && (
CMOS_AND1_J_v >= 3.0 ) && ( ( size_t ) t1 -> mQ . mX [ 4ULL ] == 2ULL ) ) ;
out -> mCACHE_I . mX [ 67ULL ] = ( int32_T ) ( t1 -> mM . mX [ 33ULL ] != 0 )
; out -> mCACHE_I . mX [ 68ULL ] = ( int32_T ) ( ( CMOS_AND1_J_v > 3.0 ) && (
( size_t ) t1 -> mQ . mX [ 4ULL ] == 1ULL ) ) ; out -> mCACHE_I . mX [ 69ULL
] = ( int32_T ) ( ( CMOS_AND1_J_v < 3.0 ) && ( ( size_t ) t1 -> mQ . mX [
4ULL ] == 1ULL ) ) ; out -> mCACHE_I . mX [ 70ULL ] = ( int32_T ) ( t1 -> mM
. mX [ 34ULL ] != 0 ) ; out -> mCACHE_I . mX [ 71ULL ] = ( int32_T ) ( t1 ->
mM . mX [ 35ULL ] != 0 ) ; ( void ) sys ; ( void ) out ; return 0 ; }
