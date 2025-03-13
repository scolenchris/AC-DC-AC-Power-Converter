#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_a.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_a ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t175 , NeDsMethodOutput * out ) { real_T t1 [ 6 ] ;
real_T t18 [ 6 ] ; real_T t20 [ 4 ] ; size_t t59 ; ( void ) t175 ; t1 [ 0ULL
] = 0.040001 ; t1 [ 1ULL ] = - 0.0 ; t1 [ 2ULL ] = 1.0E-6 ; t1 [ 3ULL ] =
1.00040001 ; t1 [ 4ULL ] = 1.0E-15 ; t1 [ 5ULL ] = 1.0 ; t18 [ 0ULL ] =
1.00040001 ; t18 [ 1ULL ] = - 1.0 ; t18 [ 2ULL ] = 1.0E-8 ; t18 [ 3ULL ] =
0.0200040001 ; t18 [ 4ULL ] = 1.0E-17 ; t18 [ 5ULL ] = 0.01 ; t20 [ 0ULL ] =
1.0 ; t20 [ 1ULL ] = - 1.0 ; t20 [ 2ULL ] = 0.01 ; t20 [ 3ULL ] = - 1.0E-6 ;
for ( t59 = 0ULL ; t59 < 6ULL ; t59 ++ ) { out -> mA . mX [ t59 ] = t1 [ t59
] ; } out -> mA . mX [ 6ULL ] = - 0.0 ; out -> mA . mX [ 7ULL ] = - 0.0 ; out
-> mA . mX [ 8ULL ] = 0.04 ; out -> mA . mX [ 9ULL ] = - 0.0 ; out -> mA . mX
[ 10ULL ] = - 1.0 ; out -> mA . mX [ 11ULL ] = 0.04 ; out -> mA . mX [ 12ULL
] = - 0.0 ; out -> mA . mX [ 13ULL ] = 1.0004 ; out -> mA . mX [ 14ULL ] = -
0.0 ; out -> mA . mX [ 15ULL ] = - 0.0 ; out -> mA . mX [ 16ULL ] = 0.04 ;
out -> mA . mX [ 17ULL ] = - 0.0 ; out -> mA . mX [ 18ULL ] = - 1.0 ; out ->
mA . mX [ 19ULL ] = - 1.0 ; out -> mA . mX [ 20ULL ] = - 0.0 ; out -> mA . mX
[ 21ULL ] = - 1.0E-6 ; out -> mA . mX [ 22ULL ] = - 0.0 ; out -> mA . mX [
23ULL ] = - 1.0 ; out -> mA . mX [ 24ULL ] = - 0.0 ; out -> mA . mX [ 25ULL ]
= - 0.001 ; out -> mA . mX [ 26ULL ] = - 1.0 ; out -> mA . mX [ 27ULL ] = -
0.0 ; out -> mA . mX [ 28ULL ] = - 1.0E-6 ; out -> mA . mX [ 29ULL ] = - 0.0
; out -> mA . mX [ 30ULL ] = - 1.0 ; out -> mA . mX [ 31ULL ] = - 1.0 ; out
-> mA . mX [ 32ULL ] = - 0.0 ; out -> mA . mX [ 33ULL ] = - 1.0E-6 ; out ->
mA . mX [ 34ULL ] = - 0.0 ; out -> mA . mX [ 35ULL ] = - 1.0 ; out -> mA . mX
[ 36ULL ] = - 0.0 ; out -> mA . mX [ 37ULL ] = 0.5 ; out -> mA . mX [ 38ULL ]
= - 0.0 ; out -> mA . mX [ 39ULL ] = - 1.0 ; out -> mA . mX [ 40ULL ] = - 1.0
; out -> mA . mX [ 41ULL ] = - 0.016070711128967456 ; out -> mA . mX [ 42ULL
] = 1.0 ; out -> mA . mX [ 43ULL ] = 0.016070711128967456 ; for ( t59 = 0ULL
; t59 < 6ULL ; t59 ++ ) { out -> mA . mX [ t59 + 44ULL ] = t18 [ t59 ] ; }
out -> mA . mX [ 50ULL ] = - 1.0 ; out -> mA . mX [ 51ULL ] = - 1.0 ; out ->
mA . mX [ 52ULL ] = 1.00000004 ; for ( t59 = 0ULL ; t59 < 4ULL ; t59 ++ ) {
out -> mA . mX [ t59 + 53ULL ] = t20 [ t59 ] ; } out -> mA . mX [ 57ULL ] = -
0.04 ; out -> mA . mX [ 58ULL ] = - 0.0004 ; out -> mA . mX [ 59ULL ] = 1.0 ;
out -> mA . mX [ 60ULL ] = - 0.04 ; out -> mA . mX [ 61ULL ] = 1.00000004 ;
out -> mA . mX [ 62ULL ] = - 1.0 ; out -> mA . mX [ 63ULL ] = 0.0100010004 ;
out -> mA . mX [ 64ULL ] = - 1.0 ; out -> mA . mX [ 65ULL ] = - 1.0 ; out ->
mA . mX [ 66ULL ] = 1.00000004 ; out -> mA . mX [ 67ULL ] = - 0.04 ; out ->
mA . mX [ 68ULL ] = - 0.0004 ; out -> mA . mX [ 69ULL ] = 1.0 ; out -> mA .
mX [ 70ULL ] = 1.0 ; out -> mA . mX [ 71ULL ] = - 0.04 ; out -> mA . mX [
72ULL ] = 0.001 ; out -> mA . mX [ 73ULL ] = 1.000000001 ; out -> mA . mX [
74ULL ] = - 1.0E-9 ; out -> mA . mX [ 75ULL ] = - 1.0 ; out -> mA . mX [
76ULL ] = - 1.0E-15 ; out -> mA . mX [ 77ULL ] = 0.001 ; out -> mA . mX [
78ULL ] = 1.000000001 ; out -> mA . mX [ 79ULL ] = - 1.0E-9 ; out -> mA . mX
[ 80ULL ] = - 1.0 ; out -> mA . mX [ 81ULL ] = - 1.0E-15 ; out -> mA . mX [
82ULL ] = - 0.01 ; out -> mA . mX [ 83ULL ] = - 1.00000001 ; out -> mA . mX [
84ULL ] = 0.01 ; out -> mA . mX [ 85ULL ] = 1.00000001 ; out -> mA . mX [
86ULL ] = - 0.010000001 ; out -> mA . mX [ 87ULL ] = - 1.0 ; out -> mA . mX [
88ULL ] = - 1.000000010000001 ; out -> mA . mX [ 89ULL ] = 2.0E-6 ; out -> mA
. mX [ 90ULL ] = - 1.0E-6 ; out -> mA . mX [ 91ULL ] = - 0.001 ; out -> mA .
mX [ 92ULL ] = - 0.001 ; out -> mA . mX [ 93ULL ] = - 1.0E-6 ; out -> mA . mX
[ 94ULL ] = - 0.001 ; out -> mA . mX [ 95ULL ] = 0.002 ; out -> mA . mX [
96ULL ] = 0.002 ; out -> mA . mX [ 97ULL ] = 0.002 ; out -> mA . mX [ 98ULL ]
= 0.002 ; out -> mA . mX [ 99ULL ] = - 1.0 ; out -> mA . mX [ 100ULL ] = 1.0
; out -> mA . mX [ 101ULL ] = - 1.0 ; out -> mA . mX [ 102ULL ] = 0.005 ; (
void ) sys ; ( void ) out ; return 0 ; }
