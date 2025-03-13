#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_f.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_f ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t62 , NeDsMethodOutput * out ) { real_T
intrm_sf_mf_12 ; real_T t1 ; real_T t11 ; real_T t12 ; real_T t13 ; real_T
t15 ; real_T t16 ; real_T t17 ; real_T t18 ; real_T t19 ; real_T t2 ; real_T
t23 ; real_T t24 ; real_T t25 ; real_T t26 ; real_T t27 ; real_T t28 ; real_T
t29 ; real_T t3 ; real_T t30 ; real_T t32 ; real_T t33 ; real_T t5 ; real_T
t51 ; real_T t56 ; real_T t6 ; real_T t8 ; real_T t9 ; real_T zc_int11 ;
real_T zc_int13 ; real_T zc_int5 ; real_T zc_int7 ; t2 = ( ( ( ( t62 -> mX .
mX [ 2ULL ] * - 1.0E-9 + t62 -> mX . mX [ 9ULL ] * - 1.0E-9 ) + t62 -> mX .
mX [ 21ULL ] * - 1.0E-15 ) + t62 -> mX . mX [ 39ULL ] * - 1.0000000000000011
) - t62 -> mX . mX [ 18ULL ] ) + t62 -> mX . mX [ 10ULL ] ; t1 = t62 -> mX .
mX [ 39ULL ] * 1.0E-6 + t62 -> mX . mX [ 9ULL ] ; t3 = - t62 -> mX . mX [
32ULL ] + t62 -> mX . mX [ 26ULL ] ; t6 = - t62 -> mX . mX [ 34ULL ] + t62 ->
mX . mX [ 30ULL ] ; t8 = ( ( ( t62 -> mX . mX [ 36ULL ] * - 1.00005 + t62 ->
mX . mX [ 31ULL ] * - 0.01 ) + t62 -> mX . mX [ 29ULL ] ) + t62 -> mX . mX [
11ULL ] ) - 10.0005 ; t9 = ( ( ( t62 -> mX . mX [ 37ULL ] * - 1.00005 + t62
-> mX . mX [ 28ULL ] * - 0.01 ) + t62 -> mX . mX [ 25ULL ] ) + t62 -> mX . mX
[ 12ULL ] ) - 10.0005 ; t12 = ( ( ( ( ( ( t62 -> mX . mX [ 2ULL ] * 1.0E-9 +
t62 -> mX . mX [ 9ULL ] * 1.0E-9 ) - t62 -> mX . mX [ 10ULL ] ) + t62 -> mX .
mX [ 21ULL ] * 1.0000000000000011 ) + t62 -> mX . mX [ 39ULL ] * 1.0E-15 ) -
t62 -> mX . mX [ 45ULL ] ) + t62 -> mX . mX [ 46ULL ] ) + t62 -> mX . mX [
47ULL ] ; t11 = ( ( - t62 -> mX . mX [ 2ULL ] - t62 -> mX . mX [ 20ULL ] ) +
t62 -> mX . mX [ 21ULL ] * - 1.0E-6 ) + t62 -> mX . mX [ 23ULL ] ; t13 = ( (
- t62 -> mX . mX [ 2ULL ] - t62 -> mX . mX [ 20ULL ] ) + t62 -> mX . mX [
21ULL ] * - 1.0E-6 ) + t62 -> mX . mX [ 22ULL ] ; t16 = ( ( ( ( ( ( ( ( t62
-> mX . mX [ 2ULL ] * 1.0E-9 + t62 -> mX . mX [ 9ULL ] * 1.0E-9 ) - t62 -> mX
. mX [ 10ULL ] ) + t62 -> mX . mX [ 21ULL ] * 1.0000000000000011 ) + t62 ->
mX . mX [ 39ULL ] * 1.0E-15 ) - t62 -> mX . mX [ 45ULL ] ) + t62 -> mX . mX [
24ULL ] * 1.0E-9 ) + t62 -> mX . mX [ 50ULL ] ) + t62 -> mX . mX [ 47ULL ] )
+ t62 -> mX . mX [ 3ULL ] ; t15 = - t62 -> mX . mX [ 23ULL ] + t62 -> mX . mX
[ 20ULL ] ; t18 = ( ( ( - t62 -> mX . mX [ 3ULL ] - t62 -> mX . mX [ 47ULL ]
) + t62 -> mX . mX [ 24ULL ] * - 9.9999999947364415E-10 ) + t62 -> mX . mX [
45ULL ] ) + t62 -> mX . mX [ 52ULL ] ; t17 = - t62 -> mX . mX [ 22ULL ] + t62
-> mX . mX [ 20ULL ] ; t19 = ( ( - t62 -> mX . mX [ 1ULL ] + t62 -> mX . mX [
0ULL ] * - 1.0E-6 ) + t62 -> mX . mX [ 18ULL ] * 1.0E-6 ) + t62 -> mX . mX [
19ULL ] * - 1.0000000000000011 ; t23 = ( ( ( ( t62 -> mX . mX [ 0ULL ] *
1.0E-6 + t62 -> mX . mX [ 39ULL ] * 1.0E-6 ) + t62 -> mX . mX [ 18ULL ] * -
1.0E-6 ) + t62 -> mX . mX [ 19ULL ] * 1.1102230246251565E-15 ) + t62 -> mX .
mX [ 1ULL ] ) + t62 -> mX . mX [ 9ULL ] ; t24 = ( ( t62 -> mX . mX [ 21ULL ]
* 1.0E-6 - t62 -> mX . mX [ 23ULL ] ) + t62 -> mX . mX [ 20ULL ] ) + t62 ->
mX . mX [ 2ULL ] ; t25 = - t62 -> mX . mX [ 20ULL ] + t62 -> mX . mX [ 23ULL
] ; t26 = ( ( t62 -> mX . mX [ 21ULL ] * 1.0E-6 - t62 -> mX . mX [ 22ULL ] )
+ t62 -> mX . mX [ 20ULL ] ) + t62 -> mX . mX [ 2ULL ] ; t27 = - t62 -> mX .
mX [ 20ULL ] + t62 -> mX . mX [ 22ULL ] ; t28 = ( ( - t62 -> mX . mX [ 54ULL
] + t62 -> mX . mX [ 19ULL ] * 1.0E-9 ) - t62 -> mX . mX [ 15ULL ] ) + t62 ->
mX . mX [ 0ULL ] ; t29 = ( ( ( ( - t62 -> mX . mX [ 1ULL ] + t62 -> mX . mX [
0ULL ] * - 1.0E-6 ) - t62 -> mX . mX [ 20ULL ] ) + t62 -> mX . mX [ 18ULL ] *
1.0E-6 ) + t62 -> mX . mX [ 19ULL ] * - 1.0000000000000011 ) + t62 -> mX . mX
[ 17ULL ] ; t30 = ( ( - t62 -> mX . mX [ 54ULL ] + t62 -> mX . mX [ 19ULL ] *
1.0E-9 ) - t62 -> mX . mX [ 16ULL ] ) + t62 -> mX . mX [ 0ULL ] ; t51 = - t62
-> mX . mX [ 17ULL ] + t62 -> mX . mX [ 20ULL ] ; t56 = ( ( ( - t62 -> mX .
mX [ 1ULL ] + t62 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t62 -> mX . mX [ 20ULL ]
) + t62 -> mX . mX [ 18ULL ] * 1.0E-6 ) + t62 -> mX . mX [ 19ULL ] * -
1.0000000000000011 ; intrm_sf_mf_12 = ( t62 -> mX . mX [ 34ULL ] * 1.0E-6 +
t62 -> mX . mX [ 8ULL ] ) * 1.602176487E-19 / 4.1186322001386077E-21 ;
zc_int7 = - t62 -> mX . mX [ 13ULL ] * 38.921701457926758 ; t32 = - t62 -> mX
. mX [ 12ULL ] * 38.921701457926758 ; zc_int11 = - t62 -> mX . mX [ 14ULL ] *
38.921701457926758 ; zc_int13 = - t62 -> mX . mX [ 11ULL ] *
38.921701457926758 ; t5 = ( t62 -> mX . mX [ 32ULL ] * 1.0E-6 + t62 -> mX .
mX [ 7ULL ] ) * 1.602176487E-19 / 4.1186322001386077E-21 ; if ( t62 -> mM .
mX [ 41ULL ] != 0 ) { t33 = ( zc_int11 - 39.0 ) * 2.3538526683701997E+17 ; }
else if ( t62 -> mM . mX [ 42ULL ] != 0 ) { t33 = ( zc_int11 + 40.0 ) *
1.1548224173015786E-17 ; } else { t33 = pmf_exp ( zc_int11 ) ; } if ( t62 ->
mM . mX [ 43ULL ] != 0 ) { zc_int11 = ( zc_int13 - 39.0 ) *
2.3538526683701997E+17 ; } else if ( t62 -> mM . mX [ 44ULL ] != 0 ) {
zc_int11 = ( zc_int13 + 40.0 ) * 1.1548224173015786E-17 ; } else { zc_int11 =
pmf_exp ( zc_int13 ) ; } if ( t62 -> mM . mX [ 70ULL ] != 0 ) { zc_int13 =
1.0 ; } else { zc_int13 = t62 -> mM . mX [ 71ULL ] != 0 ? 999.0 : t62 -> mU .
mX [ 3ULL ] * 998.0 + 1.0 ; } if ( t62 -> mM . mX [ 37ULL ] != 0 ) { zc_int5
= ( zc_int7 - 39.0 ) * 2.3538526683701997E+17 ; } else if ( t62 -> mM . mX [
38ULL ] != 0 ) { zc_int5 = ( zc_int7 + 40.0 ) * 1.1548224173015786E-17 ; }
else { zc_int5 = pmf_exp ( zc_int7 ) ; } if ( t62 -> mM . mX [ 39ULL ] != 0 )
{ zc_int7 = ( t32 - 39.0 ) * 2.3538526683701997E+17 ; } else if ( t62 -> mM .
mX [ 40ULL ] != 0 ) { zc_int7 = ( t32 + 40.0 ) * 1.1548224173015786E-17 ; }
else { zc_int7 = pmf_exp ( t32 ) ; } if ( t62 -> mM . mX [ 49ULL ] != 0 ) {
out -> mF . mX [ 21ULL ] = t1 - ( t62 -> mX . mX [ 40ULL ] + 0.6 ) ; } else {
out -> mF . mX [ 21ULL ] = t1 - ( t62 -> mX . mX [ 40ULL ] * 0.3 + 0.6 ) ; }
if ( t62 -> mM . mX [ 49ULL ] != 0 ) { out -> mF . mX [ 22ULL ] = t2 - ( t62
-> mX . mX [ 40ULL ] * 1.0E-8 + 6.0E-9 ) ; } else { out -> mF . mX [ 22ULL ]
= t2 - ( t62 -> mX . mX [ 40ULL ] + 6.0E-9 ) ; } if ( t5 > 80.0 ) { out -> mF
. mX [ 23ULL ] = t3 - ( ( t5 - 79.0 ) * 5.54062238439351E+34 - 1.0 ) *
1.0055905568311664E-12 ; } else if ( t62 -> mM . mX [ 50ULL ] != 0 ) { out ->
mF . mX [ 23ULL ] = t3 - ( ( t5 + 80.0 ) * 4.9060947306492808E-35 - 1.0 ) *
1.0055905568311664E-12 ; } else { out -> mF . mX [ 23ULL ] = t3 - ( pmf_exp (
t5 ) - 1.0 ) * 1.0055905568311664E-12 ; } if ( intrm_sf_mf_12 > 80.0 ) { out
-> mF . mX [ 24ULL ] = t6 - ( ( intrm_sf_mf_12 - 79.0 ) *
5.54062238439351E+34 - 1.0 ) * 1.0055905568311664E-12 ; } else if ( t62 -> mM
. mX [ 51ULL ] != 0 ) { out -> mF . mX [ 24ULL ] = t6 - ( ( intrm_sf_mf_12 +
80.0 ) * 4.9060947306492808E-35 - 1.0 ) * 1.0055905568311664E-12 ; } else {
out -> mF . mX [ 24ULL ] = t6 - ( pmf_exp ( intrm_sf_mf_12 ) - 1.0 ) *
1.0055905568311664E-12 ; } if ( t62 -> mM . mX [ 52ULL ] != 0 ) { out -> mF .
mX [ 25ULL ] = t62 -> mX . mX [ 36ULL ] - ( t62 -> mX . mX [ 41ULL ] * 0.3 -
5.0 ) ; } else if ( t62 -> mM . mX [ 53ULL ] != 0 ) { out -> mF . mX [ 25ULL
] = t62 -> mX . mX [ 36ULL ] - ( t62 -> mX . mX [ 41ULL ] - 5.0 ) ; } else {
out -> mF . mX [ 25ULL ] = t62 -> mX . mX [ 41ULL ] - 1.0 ; } if ( t62 -> mM
. mX [ 52ULL ] != 0 ) { out -> mF . mX [ 26ULL ] = t8 - ( t62 -> mX . mX [
41ULL ] - 4.9999999999999995E-14 ) ; } else if ( t62 -> mM . mX [ 53ULL ] !=
0 ) { out -> mF . mX [ 26ULL ] = t8 - ( ( ( t62 -> mX . mX [ 42ULL ] *
1.0E-14 / 2.0 + t62 -> mX . mX [ 41ULL ] * 1.0E-14 / 2.0 ) + 3.0E-15 ) -
2.4999999999999998E-14 ) ; } else { out -> mF . mX [ 26ULL ] = t8 - ( t62 ->
mX . mX [ 42ULL ] + 6.0E-15 ) ; } if ( t62 -> mM . mX [ 52ULL ] != 0 ) { out
-> mF . mX [ 27ULL ] = t62 -> mX . mX [ 42ULL ] - - 1.0 ; } else if ( t62 ->
mM . mX [ 53ULL ] != 0 ) { out -> mF . mX [ 27ULL ] = t62 -> mX . mX [ 36ULL
] - ( t62 -> mX . mX [ 42ULL ] + 0.6 ) ; } else { out -> mF . mX [ 27ULL ] =
t62 -> mX . mX [ 36ULL ] - ( t62 -> mX . mX [ 42ULL ] * 0.3 + 0.6 ) ; } if (
t62 -> mM . mX [ 54ULL ] != 0 ) { out -> mF . mX [ 28ULL ] = t62 -> mX . mX [
37ULL ] - ( t62 -> mX . mX [ 43ULL ] * 0.3 - 5.0 ) ; } else if ( t62 -> mM .
mX [ 55ULL ] != 0 ) { out -> mF . mX [ 28ULL ] = t62 -> mX . mX [ 37ULL ] - (
t62 -> mX . mX [ 43ULL ] - 5.0 ) ; } else { out -> mF . mX [ 28ULL ] = t62 ->
mX . mX [ 43ULL ] - 1.0 ; } if ( t62 -> mM . mX [ 54ULL ] != 0 ) { out -> mF
. mX [ 29ULL ] = t9 - ( t62 -> mX . mX [ 43ULL ] - 4.9999999999999995E-14 ) ;
} else if ( t62 -> mM . mX [ 55ULL ] != 0 ) { out -> mF . mX [ 29ULL ] = t9 -
( ( ( t62 -> mX . mX [ 44ULL ] * 1.0E-14 / 2.0 + t62 -> mX . mX [ 43ULL ] *
1.0E-14 / 2.0 ) + 3.0E-15 ) - 2.4999999999999998E-14 ) ; } else { out -> mF .
mX [ 29ULL ] = t9 - ( t62 -> mX . mX [ 44ULL ] + 6.0E-15 ) ; } if ( t62 -> mM
. mX [ 54ULL ] != 0 ) { out -> mF . mX [ 30ULL ] = t62 -> mX . mX [ 44ULL ] -
- 1.0 ; } else if ( t62 -> mM . mX [ 55ULL ] != 0 ) { out -> mF . mX [ 30ULL
] = t62 -> mX . mX [ 37ULL ] - ( t62 -> mX . mX [ 44ULL ] + 0.6 ) ; } else {
out -> mF . mX [ 30ULL ] = t62 -> mX . mX [ 37ULL ] - ( t62 -> mX . mX [
44ULL ] * 0.3 + 0.6 ) ; } if ( t62 -> mM . mX [ 56ULL ] != 0 ) { out -> mF .
mX [ 31ULL ] = t11 - ( t62 -> mX . mX [ 48ULL ] + 0.6 ) ; } else { out -> mF
. mX [ 31ULL ] = t11 - ( t62 -> mX . mX [ 48ULL ] * 0.3 + 0.6 ) ; } if ( t62
-> mM . mX [ 56ULL ] != 0 ) { out -> mF . mX [ 32ULL ] = t12 - ( t62 -> mX .
mX [ 48ULL ] * 1.0E-8 + 6.0E-9 ) ; } else { out -> mF . mX [ 32ULL ] = t12 -
( t62 -> mX . mX [ 48ULL ] + 6.0E-9 ) ; } if ( t62 -> mM . mX [ 57ULL ] != 0
) { out -> mF . mX [ 33ULL ] = t13 - ( t62 -> mX . mX [ 49ULL ] + 0.6 ) ; }
else { out -> mF . mX [ 33ULL ] = t13 - ( t62 -> mX . mX [ 49ULL ] * 0.3 +
0.6 ) ; } if ( t62 -> mM . mX [ 57ULL ] != 0 ) { out -> mF . mX [ 34ULL ] =
t62 -> mX . mX [ 45ULL ] - ( t62 -> mX . mX [ 49ULL ] * 1.0E-8 + 6.0E-9 ) ; }
else { out -> mF . mX [ 34ULL ] = t62 -> mX . mX [ 45ULL ] - ( t62 -> mX . mX
[ 49ULL ] + 6.0E-9 ) ; } if ( t62 -> mM . mX [ 58ULL ] != 0 ) { out -> mF .
mX [ 35ULL ] = t15 - ( t62 -> mX . mX [ 51ULL ] + 0.6 ) ; } else { out -> mF
. mX [ 35ULL ] = t15 - ( t62 -> mX . mX [ 51ULL ] * 0.3 + 0.6 ) ; } if ( t62
-> mM . mX [ 58ULL ] != 0 ) { out -> mF . mX [ 36ULL ] = t16 - ( t62 -> mX .
mX [ 51ULL ] * 1.0E-8 + 6.0E-9 ) ; } else { out -> mF . mX [ 36ULL ] = t16 -
( t62 -> mX . mX [ 51ULL ] + 6.0E-9 ) ; } if ( t62 -> mM . mX [ 59ULL ] != 0
) { out -> mF . mX [ 37ULL ] = t17 - ( t62 -> mX . mX [ 53ULL ] + 0.6 ) ; }
else { out -> mF . mX [ 37ULL ] = t17 - ( t62 -> mX . mX [ 53ULL ] * 0.3 +
0.6 ) ; } if ( t62 -> mM . mX [ 59ULL ] != 0 ) { out -> mF . mX [ 38ULL ] =
t18 - ( t62 -> mX . mX [ 53ULL ] * 1.0E-8 + 6.0E-9 ) ; } else { out -> mF .
mX [ 38ULL ] = t18 - ( t62 -> mX . mX [ 53ULL ] + 6.0E-9 ) ; } if ( t62 -> mM
. mX [ 60ULL ] != 0 ) { out -> mF . mX [ 39ULL ] = t19 - ( t62 -> mX . mX [
55ULL ] + 0.6 ) ; } else { out -> mF . mX [ 39ULL ] = t19 - ( t62 -> mX . mX
[ 55ULL ] * 0.3 + 0.6 ) ; } if ( t62 -> mM . mX [ 60ULL ] != 0 ) { out -> mF
. mX [ 40ULL ] = t62 -> mX . mX [ 54ULL ] - ( t62 -> mX . mX [ 55ULL ] *
1.0E-8 + 6.0E-9 ) ; } else { out -> mF . mX [ 40ULL ] = t62 -> mX . mX [
54ULL ] - ( t62 -> mX . mX [ 55ULL ] + 6.0E-9 ) ; } if ( t62 -> mM . mX [
61ULL ] != 0 ) { out -> mF . mX [ 41ULL ] = t62 -> mX . mX [ 56ULL ] - 15.0 ;
} else if ( t62 -> mM . mX [ 62ULL ] != 0 ) { out -> mF . mX [ 41ULL ] = t62
-> mX . mX [ 56ULL ] ; } else { out -> mF . mX [ 41ULL ] = t62 -> mX . mX [
56ULL ] - ( t62 -> mX . mX [ 29ULL ] * 1.0E-6 + t62 -> mX . mX [ 27ULL ] * -
1.0E-6 ) * 1.0E+12 ; } if ( t62 -> mM . mX [ 63ULL ] != 0 ) { out -> mF . mX
[ 42ULL ] = t62 -> mX . mX [ 57ULL ] - 15.0 ; } else if ( t62 -> mM . mX [
64ULL ] != 0 ) { out -> mF . mX [ 42ULL ] = t62 -> mX . mX [ 57ULL ] ; } else
{ out -> mF . mX [ 42ULL ] = t62 -> mX . mX [ 57ULL ] - ( t62 -> mX . mX [
25ULL ] * 1.0E-6 + t62 -> mX . mX [ 27ULL ] * - 1.0E-6 ) * 1.0E+12 ; } if (
t62 -> mM . mX [ 65ULL ] != 0 ) { out -> mF . mX [ 43ULL ] = t62 -> mX . mX [
18ULL ] - ( t23 - 0.799999992 ) / 0.001 ; } else { out -> mF . mX [ 43ULL ] =
t62 -> mX . mX [ 18ULL ] - t23 * 1.0E-5 ; } if ( t62 -> mM . mX [ 66ULL ] !=
0 ) { out -> mF . mX [ 44ULL ] = t62 -> mX . mX [ 46ULL ] - ( t24 -
0.799999992 ) / 0.001 ; } else { out -> mF . mX [ 44ULL ] = t62 -> mX . mX [
46ULL ] - t24 * 1.0E-5 ; } if ( t62 -> mM . mX [ 67ULL ] != 0 ) { out -> mF .
mX [ 45ULL ] = t62 -> mX . mX [ 50ULL ] - ( t25 - 0.799999992 ) / 0.001 ; }
else { out -> mF . mX [ 45ULL ] = t62 -> mX . mX [ 50ULL ] - t25 * 1.0E-5 ; }
if ( t62 -> mM . mX [ 68ULL ] != 0 ) { out -> mF . mX [ 46ULL ] = t62 -> mX .
mX [ 47ULL ] - ( t26 - 0.799999992 ) / 0.001 ; } else { out -> mF . mX [
46ULL ] = t62 -> mX . mX [ 47ULL ] - t26 * 1.0E-5 ; } if ( t62 -> mM . mX [
69ULL ] != 0 ) { out -> mF . mX [ 47ULL ] = t62 -> mX . mX [ 52ULL ] - ( t27
- 0.799999992 ) / 0.001 ; } else { out -> mF . mX [ 47ULL ] = t62 -> mX . mX
[ 52ULL ] - t27 * 1.0E-5 ; } if ( ( size_t ) t62 -> mQ . mX [ 0ULL ] == 1ULL
) { out -> mF . mX [ 56ULL ] = t28 - t29 * 1.0E-5 ; } else if ( ( size_t )
t62 -> mQ . mX [ 0ULL ] == 2ULL ) { out -> mF . mX [ 56ULL ] = t28 - t29 *
1.0E-5 ; } else if ( ( size_t ) t62 -> mQ . mX [ 0ULL ] == 3ULL ) { if ( t62
-> mM . mX [ 72ULL ] != 0 ) { out -> mF . mX [ 56ULL ] = t28 - ( t29 * 1.0E-5
+ ( t29 - 0.8 ) * 0.99999999 / 0.001 ) ; } else { out -> mF . mX [ 56ULL ] =
t28 - t29 * 1.0E-5 ; } } else if ( ( size_t ) t62 -> mQ . mX [ 0ULL ] == 4ULL
) { if ( t62 -> mM . mX [ 72ULL ] != 0 ) { out -> mF . mX [ 56ULL ] = t28 - (
t29 * 1.0E-5 + ( t29 - 0.8 ) * 0.99999999 / 0.001 ) ; } else { out -> mF . mX
[ 56ULL ] = t28 - t29 * 1.0E-5 ; } } else if ( t62 -> mM . mX [ 73ULL ] != 0
) { t2 = t62 -> mD . mX [ 7ULL ] * 0.001 + 0.799999992 ; out -> mF . mX [
56ULL ] = t28 - t29 * t62 -> mD . mX [ 7ULL ] / ( t2 == 0.0 ? 1.0E-16 : t2 )
; } else { out -> mF . mX [ 56ULL ] = t28 - t29 * 1.0E-5 ; } if ( ( size_t )
t62 -> mQ . mX [ 1ULL ] == 1ULL ) { out -> mF . mX [ 57ULL ] = t30 - t51 *
1.0E-5 ; } else if ( ( size_t ) t62 -> mQ . mX [ 1ULL ] == 2ULL ) { out -> mF
. mX [ 57ULL ] = t30 - t51 * 1.0E-5 ; } else if ( ( size_t ) t62 -> mQ . mX [
1ULL ] == 3ULL ) { if ( t62 -> mM . mX [ 74ULL ] != 0 ) { out -> mF . mX [
57ULL ] = t30 - ( t51 * 1.0E-5 + ( t51 - 0.8 ) * 0.99999999 / 0.001 ) ; }
else { out -> mF . mX [ 57ULL ] = t30 - t51 * 1.0E-5 ; } } else if ( ( size_t
) t62 -> mQ . mX [ 1ULL ] == 4ULL ) { if ( t62 -> mM . mX [ 74ULL ] != 0 ) {
out -> mF . mX [ 57ULL ] = t30 - ( t51 * 1.0E-5 + ( t51 - 0.8 ) * 0.99999999
/ 0.001 ) ; } else { out -> mF . mX [ 57ULL ] = t30 - t51 * 1.0E-5 ; } } else
if ( t62 -> mM . mX [ 75ULL ] != 0 ) { t2 = t62 -> mD . mX [ 9ULL ] * 0.001 +
0.799999992 ; out -> mF . mX [ 57ULL ] = t30 - t51 * t62 -> mD . mX [ 9ULL ]
/ ( t2 == 0.0 ? 1.0E-16 : t2 ) ; } else { out -> mF . mX [ 57ULL ] = t30 -
t51 * 1.0E-5 ; } if ( ( size_t ) t62 -> mQ . mX [ 2ULL ] == 1ULL ) { out ->
mF . mX [ 58ULL ] = t62 -> mX . mX [ 15ULL ] - t56 * 1.0E-5 ; } else if ( (
size_t ) t62 -> mQ . mX [ 2ULL ] == 2ULL ) { out -> mF . mX [ 58ULL ] = t62
-> mX . mX [ 15ULL ] - t56 * 1.0E-5 ; } else if ( ( size_t ) t62 -> mQ . mX [
2ULL ] == 3ULL ) { if ( t62 -> mM . mX [ 76ULL ] != 0 ) { out -> mF . mX [
58ULL ] = t62 -> mX . mX [ 15ULL ] - ( t56 * 1.0E-5 + ( t56 - 0.8 ) *
0.99999999 / 0.001 ) ; } else { out -> mF . mX [ 58ULL ] = t62 -> mX . mX [
15ULL ] - t56 * 1.0E-5 ; } } else if ( ( size_t ) t62 -> mQ . mX [ 2ULL ] ==
4ULL ) { if ( t62 -> mM . mX [ 76ULL ] != 0 ) { out -> mF . mX [ 58ULL ] =
t62 -> mX . mX [ 15ULL ] - ( t56 * 1.0E-5 + ( t56 - 0.8 ) * 0.99999999 /
0.001 ) ; } else { out -> mF . mX [ 58ULL ] = t62 -> mX . mX [ 15ULL ] - t56
* 1.0E-5 ; } } else if ( t62 -> mM . mX [ 77ULL ] != 0 ) { t2 = t62 -> mD .
mX [ 11ULL ] * 0.001 + 0.799999992 ; out -> mF . mX [ 58ULL ] = t62 -> mX .
mX [ 15ULL ] - t56 * t62 -> mD . mX [ 11ULL ] / ( t2 == 0.0 ? 1.0E-16 : t2 )
; } else { out -> mF . mX [ 58ULL ] = t62 -> mX . mX [ 15ULL ] - t56 * 1.0E-5
; } if ( ( size_t ) t62 -> mQ . mX [ 3ULL ] == 1ULL ) { out -> mF . mX [
59ULL ] = t62 -> mX . mX [ 16ULL ] - t62 -> mX . mX [ 20ULL ] * 1.0E-5 ; }
else if ( ( size_t ) t62 -> mQ . mX [ 3ULL ] == 2ULL ) { out -> mF . mX [
59ULL ] = t62 -> mX . mX [ 16ULL ] - t62 -> mX . mX [ 20ULL ] * 1.0E-5 ; }
else if ( ( size_t ) t62 -> mQ . mX [ 3ULL ] == 3ULL ) { if ( t62 -> mM . mX
[ 78ULL ] != 0 ) { out -> mF . mX [ 59ULL ] = t62 -> mX . mX [ 16ULL ] - (
t62 -> mX . mX [ 20ULL ] * 1.0E-5 + ( t62 -> mX . mX [ 20ULL ] - 0.8 ) *
0.99999999 / 0.001 ) ; } else { out -> mF . mX [ 59ULL ] = t62 -> mX . mX [
16ULL ] - t62 -> mX . mX [ 20ULL ] * 1.0E-5 ; } } else if ( ( size_t ) t62 ->
mQ . mX [ 3ULL ] == 4ULL ) { if ( t62 -> mM . mX [ 78ULL ] != 0 ) { out -> mF
. mX [ 59ULL ] = t62 -> mX . mX [ 16ULL ] - ( t62 -> mX . mX [ 20ULL ] *
1.0E-5 + ( t62 -> mX . mX [ 20ULL ] - 0.8 ) * 0.99999999 / 0.001 ) ; } else {
out -> mF . mX [ 59ULL ] = t62 -> mX . mX [ 16ULL ] - t62 -> mX . mX [ 20ULL
] * 1.0E-5 ; } } else if ( t62 -> mM . mX [ 79ULL ] != 0 ) { t2 = t62 -> mD .
mX [ 13ULL ] * 0.001 + 0.799999992 ; out -> mF . mX [ 59ULL ] = t62 -> mX .
mX [ 16ULL ] - t62 -> mD . mX [ 13ULL ] * t62 -> mX . mX [ 20ULL ] / ( t2 ==
0.0 ? 1.0E-16 : t2 ) ; } else { out -> mF . mX [ 59ULL ] = t62 -> mX . mX [
16ULL ] - t62 -> mX . mX [ 20ULL ] * 1.0E-5 ; } out -> mF . mX [ 0ULL ] = -
0.0 ; out -> mF . mX [ 1ULL ] = - 0.0 ; out -> mF . mX [ 2ULL ] = - 0.0 ; out
-> mF . mX [ 3ULL ] = - 0.0 ; out -> mF . mX [ 4ULL ] = - 0.0 ; out -> mF .
mX [ 5ULL ] = - 0.0 ; out -> mF . mX [ 6ULL ] = - 0.0 ; out -> mF . mX [ 7ULL
] = - 0.0 ; out -> mF . mX [ 8ULL ] = - 0.0 ; out -> mF . mX [ 9ULL ] = - 0.0
; out -> mF . mX [ 10ULL ] = - 0.0 ; out -> mF . mX [ 11ULL ] = - 0.0 ; out
-> mF . mX [ 12ULL ] = - 10.0 ; out -> mF . mX [ 13ULL ] = - 0.0 ; out -> mF
. mX [ 14ULL ] = - 10.0 ; out -> mF . mX [ 15ULL ] = - ( sin ( t62 -> mT . mX
[ 0ULL ] * 314.15926535897933 ) * 311.0 ) ; out -> mF . mX [ 16ULL ] = 0.0 ;
out -> mF . mX [ 17ULL ] = 0.0 ; out -> mF . mX [ 18ULL ] = 0.0 ; out -> mF .
mX [ 19ULL ] = - ( ( real_T ) ( t62 -> mM . mX [ 46ULL ] != 0 ) * 10.0 ) ;
out -> mF . mX [ 20ULL ] = - ( ( real_T ) ( t62 -> mM . mX [ 48ULL ] != 0 ) *
10.0 ) ; out -> mF . mX [ 48ULL ] = - ( ( ( zc_int5 - zc_int7 ) * ( 1.0 - -
t62 -> mX . mX [ 12ULL ] / 15.448951451824009 ) - zc_int7 ) *
1.9907674850572683E-11 ) - 1.9907674850572683E-11 ; out -> mF . mX [ 49ULL ]
= - ( ( zc_int5 * 0.012929224974655049 + zc_int7 ) * 1.9907674850572683E-11 )
+ 2.0165065657438021E-11 ; out -> mF . mX [ 50ULL ] = - ( ( ( t33 - zc_int11
) * ( 1.0 - - t62 -> mX . mX [ 11ULL ] / 15.448951451824009 ) - zc_int11 ) *
1.9907674850572683E-11 ) - 1.9907674850572683E-11 ; out -> mF . mX [ 51ULL ]
= - ( ( t33 * 0.012929224974655049 + zc_int11 ) * 1.9907674850572683E-11 ) +
2.0165065657438021E-11 ; out -> mF . mX [ 52ULL ] = - ( - t62 -> mX . mX [
27ULL ] / ( zc_int13 == 0.0 ? 1.0E-16 : zc_int13 ) ) ; out -> mF . mX [ 53ULL
] = - ( ( 10.0 - t62 -> mX . mX [ 27ULL ] ) / ( 1000.0 - zc_int13 == 0.0 ?
1.0E-16 : 1000.0 - zc_int13 ) ) ; out -> mF . mX [ 54ULL ] = - 10.0010001 ;
out -> mF . mX [ 55ULL ] = - 10.0010001 ; out -> mF . mX [ 60ULL ] = - 0.0 ;
out -> mF . mX [ 61ULL ] = - 0.0 ; ( void ) sys ; ( void ) out ; return 0 ; }
