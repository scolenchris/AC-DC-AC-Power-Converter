#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_a.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_a ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t154 , NeDsMethodOutput * out ) { real_T
t19 [ 6 ] ; real_T t23 [ 6 ] ; real_T t21 [ 5 ] ; real_T t22 [ 5 ] ; real_T
t25 [ 5 ] ; size_t t62 ; ( void ) t154 ; t21 [ 4ULL ] = 2.0E-6 ; out -> mA .
mX [ 7ULL ] = - 1.0E-6 ; out -> mA . mX [ 23ULL ] = 1.00010001 ; out -> mA .
mX [ 26ULL ] = 1.00010001 ; out -> mA . mX [ 33ULL ] = - 1.0E-9 ; out -> mA .
mX [ 37ULL ] = - 0.01 ; out -> mA . mX [ 38ULL ] = - 1.00000001 ; out -> mA .
mX [ 39ULL ] = 0.01 ; out -> mA . mX [ 40ULL ] = 1.00000001 ; out -> mA . mX
[ 41ULL ] = - 0.010000001 ; out -> mA . mX [ 43ULL ] = - 1.000000010000001 ;
t19 [ 0ULL ] = 1.0E-6 ; t19 [ 1ULL ] = 1.0 ; t19 [ 2ULL ] = 1.000000000001 ;
t19 [ 3ULL ] = - 1.0E-6 ; t19 [ 4ULL ] = 1.00010001 ; t19 [ 5ULL ] = 0.02 ;
t21 [ 0ULL ] = - 1.0E-6 ; t21 [ 1ULL ] = - 1.0E-6 ; t21 [ 2ULL ] = - 1.0E-12
; t21 [ 3ULL ] = - 1.0E-12 ; t22 [ 0ULL ] = 1.0 ; t22 [ 1ULL ] = 1.0 ; t22 [
2ULL ] = - 1.01 ; t22 [ 3ULL ] = 1.0E-6 ; t22 [ 4ULL ] = - 1.0100010100999999
; t23 [ 0ULL ] = 1.0E-6 ; t23 [ 1ULL ] = 1.0 ; t23 [ 2ULL ] = 1.000000000001
; t23 [ 3ULL ] = - 1.0E-6 ; t23 [ 4ULL ] = 1.00010001 ; t23 [ 5ULL ] = 0.02 ;
t25 [ 0ULL ] = 1.0 ; t25 [ 1ULL ] = 1.0 ; t25 [ 2ULL ] = - 1.01 ; t25 [ 3ULL
] = 1.0E-6 ; t25 [ 4ULL ] = - 1.0100010100999999 ; out -> mA . mX [ 0ULL ] =
- 1.0 ; out -> mA . mX [ 1ULL ] = - 0.0 ; out -> mA . mX [ 2ULL ] = - 0.0 ;
out -> mA . mX [ 3ULL ] = - 0.0 ; out -> mA . mX [ 4ULL ] = 1.0 ; out -> mA .
mX [ 5ULL ] = - 1.0 ; out -> mA . mX [ 6ULL ] = - 0.0 ; out -> mA . mX [ 8ULL
] = - 0.0 ; out -> mA . mX [ 9ULL ] = - 1.0 ; out -> mA . mX [ 10ULL ] = -
0.0 ; out -> mA . mX [ 11ULL ] = - 1.0 ; out -> mA . mX [ 12ULL ] = - 0.0 ;
out -> mA . mX [ 13ULL ] = - 1.0 ; out -> mA . mX [ 14ULL ] = - 0.0 ; out ->
mA . mX [ 15ULL ] = - 0.02 ; out -> mA . mX [ 16ULL ] = - 0.0 ; out -> mA .
mX [ 17ULL ] = - 0.02 ; out -> mA . mX [ 18ULL ] = - 0.0 ; out -> mA . mX [
19ULL ] = 1.0 ; out -> mA . mX [ 20ULL ] = - 0.0 ; out -> mA . mX [ 21ULL ] =
- 0.0 ; out -> mA . mX [ 22ULL ] = 1.0 ; out -> mA . mX [ 24ULL ] = - 0.0 ;
out -> mA . mX [ 25ULL ] = 1.0 ; out -> mA . mX [ 27ULL ] = - 0.0 ; out -> mA
. mX [ 28ULL ] = - 0.0001 ; out -> mA . mX [ 29ULL ] = - 0.0 ; out -> mA . mX
[ 30ULL ] = - 0.0001 ; out -> mA . mX [ 31ULL ] = 1.0 ; out -> mA . mX [
32ULL ] = 1.0 ; out -> mA . mX [ 34ULL ] = - 1.0 ; out -> mA . mX [ 35ULL ] =
- 1.0 ; out -> mA . mX [ 36ULL ] = 1.0E-6 ; out -> mA . mX [ 42ULL ] = - 1.0
; for ( t62 = 0ULL ; t62 < 6ULL ; t62 ++ ) { out -> mA . mX [ t62 + 44ULL ] =
t19 [ t62 ] ; } out -> mA . mX [ 50ULL ] = 1.0 ; out -> mA . mX [ 51ULL ] =
1.0E-6 ; out -> mA . mX [ 52ULL ] = - 1.0002 ; for ( t62 = 0ULL ; t62 < 5ULL
; t62 ++ ) { out -> mA . mX [ t62 + 53ULL ] = t21 [ t62 ] ; } for ( t62 =
0ULL ; t62 < 5ULL ; t62 ++ ) { out -> mA . mX [ t62 + 58ULL ] = t22 [ t62 ] ;
} for ( t62 = 0ULL ; t62 < 6ULL ; t62 ++ ) { out -> mA . mX [ t62 + 63ULL ] =
t23 [ t62 ] ; } out -> mA . mX [ 69ULL ] = 1.0 ; out -> mA . mX [ 70ULL ] =
1.0E-6 ; out -> mA . mX [ 71ULL ] = - 1.0002 ; for ( t62 = 0ULL ; t62 < 5ULL
; t62 ++ ) { out -> mA . mX [ t62 + 72ULL ] = t25 [ t62 ] ; } out -> mA . mX
[ 77ULL ] = - 1.0 ; out -> mA . mX [ 78ULL ] = - 1.9999999989472883E-8 ; out
-> mA . mX [ 79ULL ] = 1.0 ; out -> mA . mX [ 80ULL ] = - 0.02 ; out -> mA .
mX [ 81ULL ] = - 1.0 ; out -> mA . mX [ 82ULL ] = - 1.9999999989472883E-8 ;
out -> mA . mX [ 83ULL ] = 1.0 ; out -> mA . mX [ 84ULL ] = - 0.02 ; out ->
mA . mX [ 85ULL ] = - 1.0 ; out -> mA . mX [ 86ULL ] = - 1.00000001 ; out ->
mA . mX [ 87ULL ] = - 1.0 ; out -> mA . mX [ 88ULL ] = - 1.00000001 ; out ->
mA . mX [ 89ULL ] = - 1.0 ; out -> mA . mX [ 90ULL ] = 1.0 ; out -> mA . mX [
91ULL ] = - 1.0 ; out -> mA . mX [ 92ULL ] = 1.0E-6 ; out -> mA . mX [ 93ULL
] = - 1.0 ; out -> mA . mX [ 94ULL ] = 1.0 ; out -> mA . mX [ 95ULL ] = - 1.0
; out -> mA . mX [ 96ULL ] = 1.0 ; out -> mA . mX [ 97ULL ] = - 1.0 ; out ->
mA . mX [ 98ULL ] = - 1.0 ; out -> mA . mX [ 99ULL ] = 1.0 ; out -> mA . mX [
100ULL ] = - 1.0 ; out -> mA . mX [ 101ULL ] = 1.0 ; out -> mA . mX [ 102ULL
] = - 1.0 ; ( void ) sys ; ( void ) out ; return 0 ; }
