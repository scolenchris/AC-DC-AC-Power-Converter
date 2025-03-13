#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_update2_r.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_update2_r ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t9 , NeDsMethodOutput *
out ) { real_T t2 ; real_T t3 ; real_T t4 ; real_T t5 ; real_T t7 ; t2 = ( (
- t9 -> mX . mX [ 54ULL ] + t9 -> mX . mX [ 19ULL ] * 1.0E-9 ) - t9 -> mX .
mX [ 15ULL ] ) + t9 -> mX . mX [ 0ULL ] ; t3 = ( ( ( ( - t9 -> mX . mX [ 1ULL
] + t9 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t9 -> mX . mX [ 20ULL ] ) + t9 ->
mX . mX [ 18ULL ] * 1.0E-6 ) + t9 -> mX . mX [ 19ULL ] * - 1.0000000000000011
) + t9 -> mX . mX [ 17ULL ] ; t4 = ( ( - t9 -> mX . mX [ 54ULL ] + t9 -> mX .
mX [ 19ULL ] * 1.0E-9 ) - t9 -> mX . mX [ 16ULL ] ) + t9 -> mX . mX [ 0ULL ]
; t5 = - t9 -> mX . mX [ 17ULL ] + t9 -> mX . mX [ 20ULL ] ; t7 = ( ( ( - t9
-> mX . mX [ 1ULL ] + t9 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t9 -> mX . mX [
20ULL ] ) + t9 -> mX . mX [ 18ULL ] * 1.0E-6 ) + t9 -> mX . mX [ 19ULL ] * -
1.0000000000000011 ; if ( ( t9 -> mCI . mX [ 33ULL ] == 0 ) && ( t9 -> mX .
mX [ 57ULL ] < 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 1ULL ) ) { out
-> mUPDATE2_R . mX [ 6ULL ] = 0.0 ; } else if ( ( t9 -> mCI . mX [ 32ULL ] ==
0 ) && ( t9 -> mX . mX [ 57ULL ] > 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL
] == 1ULL ) ) { out -> mUPDATE2_R . mX [ 6ULL ] = t3 > 0.8 ? 1.0 : 2.0 ; }
else if ( ( t9 -> mCI . mX [ 31ULL ] == 0 ) && ( t9 -> mX . mX [ 57ULL ] >
0.0 ) && ( t3 > 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 2ULL ) ) {
out -> mUPDATE2_R . mX [ 6ULL ] = t3 > 0.8 ? 1.0 : 2.0 ; } else if ( ( t9 ->
mCI . mX [ 30ULL ] == 0 ) && ( t2 < 0.0 ) && ( t9 -> mX . mX [ 57ULL ] < 0.0
) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 3ULL ) ) { out -> mUPDATE2_R . mX
[ 6ULL ] = 0.0 ; } else if ( ( t9 -> mCI . mX [ 29ULL ] == 0 ) && ( t2 > 0.0
) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 3ULL ) ) { out -> mUPDATE2_R . mX
[ 6ULL ] = t3 > 0.8 ? 3.0 : 4.0 ; } else if ( ( t9 -> mCI . mX [ 28ULL ] == 0
) && ( t2 < 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 4ULL ) ) { out ->
mUPDATE2_R . mX [ 6ULL ] = t3 > 0.0 ? 5.0 : 6.0 ; } else if ( ( t9 -> mCI .
mX [ 27ULL ] == 0 ) && ( t2 > 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] ==
5ULL ) ) { out -> mUPDATE2_R . mX [ 6ULL ] = t3 > 0.8 ? 3.0 : 4.0 ; } else {
out -> mUPDATE2_R . mX [ 6ULL ] = ( t9 -> mCI . mX [ 26ULL ] == 0 ) && ( (
size_t ) t9 -> mQ . mX [ 0ULL ] == 5ULL ) && ( ( t2 < 0.0 ) || ( t3 < 0.0 ) )
? 0.0 : t9 -> mD . mX [ 6ULL ] ; } if ( ( t9 -> mCI . mX [ 33ULL ] == 0 ) &&
( t9 -> mX . mX [ 57ULL ] < 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] ==
1ULL ) ) { out -> mUPDATE2_R . mX [ 7ULL ] = t9 -> mD . mX [ 7ULL ] ; } else
if ( ( t9 -> mCI . mX [ 32ULL ] == 0 ) && ( t9 -> mX . mX [ 57ULL ] > 0.0 )
&& ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 1ULL ) ) { out -> mUPDATE2_R . mX [
7ULL ] = t9 -> mD . mX [ 7ULL ] ; } else if ( ( t9 -> mCI . mX [ 31ULL ] == 0
) && ( t9 -> mX . mX [ 57ULL ] > 0.0 ) && ( t3 > 0.0 ) && ( ( size_t ) t9 ->
mQ . mX [ 0ULL ] == 2ULL ) ) { out -> mUPDATE2_R . mX [ 7ULL ] = t9 -> mD .
mX [ 7ULL ] ; } else if ( ( t9 -> mCI . mX [ 30ULL ] == 0 ) && ( t2 < 0.0 )
&& ( t9 -> mX . mX [ 57ULL ] < 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ]
== 3ULL ) ) { out -> mUPDATE2_R . mX [ 7ULL ] = t9 -> mD . mX [ 7ULL ] ; }
else if ( ( t9 -> mCI . mX [ 29ULL ] == 0 ) && ( t2 > 0.0 ) && ( ( size_t )
t9 -> mQ . mX [ 0ULL ] == 3ULL ) ) { out -> mUPDATE2_R . mX [ 7ULL ] = t9 ->
mD . mX [ 7ULL ] ; } else { out -> mUPDATE2_R . mX [ 7ULL ] = ( t9 -> mCI .
mX [ 28ULL ] == 0 ) && ( t2 < 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] ==
4ULL ) ? t2 : t9 -> mD . mX [ 7ULL ] ; } if ( ( t9 -> mCI . mX [ 42ULL ] == 0
) && ( t9 -> mX . mX [ 56ULL ] < 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ]
== 1ULL ) ) { out -> mUPDATE2_R . mX [ 8ULL ] = 0.0 ; } else if ( ( t9 -> mCI
. mX [ 41ULL ] == 0 ) && ( t9 -> mX . mX [ 56ULL ] > 0.0 ) && ( ( size_t ) t9
-> mQ . mX [ 1ULL ] == 1ULL ) ) { out -> mUPDATE2_R . mX [ 8ULL ] = t5 > 0.8
? 1.0 : 2.0 ; } else if ( ( t9 -> mCI . mX [ 40ULL ] == 0 ) && ( t9 -> mX .
mX [ 56ULL ] > 0.0 ) && ( t5 > 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ]
== 2ULL ) ) { out -> mUPDATE2_R . mX [ 8ULL ] = t5 > 0.8 ? 1.0 : 2.0 ; } else
if ( ( t9 -> mCI . mX [ 39ULL ] == 0 ) && ( t4 < 0.0 ) && ( t9 -> mX . mX [
56ULL ] < 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 3ULL ) ) { out ->
mUPDATE2_R . mX [ 8ULL ] = 0.0 ; } else if ( ( t9 -> mCI . mX [ 38ULL ] == 0
) && ( t4 > 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 3ULL ) ) { out ->
mUPDATE2_R . mX [ 8ULL ] = t5 > 0.8 ? 3.0 : 4.0 ; } else if ( ( t9 -> mCI .
mX [ 37ULL ] == 0 ) && ( t4 < 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] ==
4ULL ) ) { out -> mUPDATE2_R . mX [ 8ULL ] = t5 > 0.0 ? 5.0 : 6.0 ; } else if
( ( t9 -> mCI . mX [ 36ULL ] == 0 ) && ( t4 > 0.0 ) && ( ( size_t ) t9 -> mQ
. mX [ 1ULL ] == 5ULL ) ) { out -> mUPDATE2_R . mX [ 8ULL ] = t5 > 0.8 ? 3.0
: 4.0 ; } else { out -> mUPDATE2_R . mX [ 8ULL ] = ( t9 -> mCI . mX [ 35ULL ]
== 0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 5ULL ) && ( ( t4 < 0.0 ) ||
( t5 < 0.0 ) ) ? 0.0 : t9 -> mD . mX [ 8ULL ] ; } if ( ( t9 -> mCI . mX [
42ULL ] == 0 ) && ( t9 -> mX . mX [ 56ULL ] < 0.0 ) && ( ( size_t ) t9 -> mQ
. mX [ 1ULL ] == 1ULL ) ) { out -> mUPDATE2_R . mX [ 9ULL ] = t9 -> mD . mX [
9ULL ] ; } else if ( ( t9 -> mCI . mX [ 41ULL ] == 0 ) && ( t9 -> mX . mX [
56ULL ] > 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 1ULL ) ) { out ->
mUPDATE2_R . mX [ 9ULL ] = t9 -> mD . mX [ 9ULL ] ; } else if ( ( t9 -> mCI .
mX [ 40ULL ] == 0 ) && ( t9 -> mX . mX [ 56ULL ] > 0.0 ) && ( t5 > 0.0 ) && (
( size_t ) t9 -> mQ . mX [ 1ULL ] == 2ULL ) ) { out -> mUPDATE2_R . mX [ 9ULL
] = t9 -> mD . mX [ 9ULL ] ; } else if ( ( t9 -> mCI . mX [ 39ULL ] == 0 ) &&
( t4 < 0.0 ) && ( t9 -> mX . mX [ 56ULL ] < 0.0 ) && ( ( size_t ) t9 -> mQ .
mX [ 1ULL ] == 3ULL ) ) { out -> mUPDATE2_R . mX [ 9ULL ] = t9 -> mD . mX [
9ULL ] ; } else if ( ( t9 -> mCI . mX [ 38ULL ] == 0 ) && ( t4 > 0.0 ) && ( (
size_t ) t9 -> mQ . mX [ 1ULL ] == 3ULL ) ) { out -> mUPDATE2_R . mX [ 9ULL ]
= t9 -> mD . mX [ 9ULL ] ; } else { out -> mUPDATE2_R . mX [ 9ULL ] = ( t9 ->
mCI . mX [ 37ULL ] == 0 ) && ( t4 < 0.0 ) && ( ( size_t ) t9 -> mQ . mX [
1ULL ] == 4ULL ) ? t4 : t9 -> mD . mX [ 9ULL ] ; } if ( ( t9 -> mCI . mX [
51ULL ] == 0 ) && ( t9 -> mX . mX [ 56ULL ] < 0.0 ) && ( ( size_t ) t9 -> mQ
. mX [ 2ULL ] == 1ULL ) ) { out -> mUPDATE2_R . mX [ 10ULL ] = 0.0 ; } else
if ( ( t9 -> mCI . mX [ 50ULL ] == 0 ) && ( t9 -> mX . mX [ 56ULL ] > 0.0 )
&& ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 1ULL ) ) { out -> mUPDATE2_R . mX [
10ULL ] = t7 > 0.8 ? 1.0 : 2.0 ; } else if ( ( t9 -> mCI . mX [ 49ULL ] == 0
) && ( t9 -> mX . mX [ 56ULL ] > 0.0 ) && ( t7 > 0.0 ) && ( ( size_t ) t9 ->
mQ . mX [ 2ULL ] == 2ULL ) ) { out -> mUPDATE2_R . mX [ 10ULL ] = t7 > 0.8 ?
1.0 : 2.0 ; } else if ( ( t9 -> mCI . mX [ 48ULL ] == 0 ) && ( t9 -> mX . mX
[ 15ULL ] < 0.0 ) && ( t9 -> mX . mX [ 56ULL ] < 0.0 ) && ( ( size_t ) t9 ->
mQ . mX [ 2ULL ] == 3ULL ) ) { out -> mUPDATE2_R . mX [ 10ULL ] = 0.0 ; }
else if ( ( t9 -> mCI . mX [ 47ULL ] == 0 ) && ( t9 -> mX . mX [ 15ULL ] >
0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 3ULL ) ) { out -> mUPDATE2_R
. mX [ 10ULL ] = t7 > 0.8 ? 3.0 : 4.0 ; } else if ( ( t9 -> mCI . mX [ 46ULL
] == 0 ) && ( t9 -> mX . mX [ 15ULL ] < 0.0 ) && ( ( size_t ) t9 -> mQ . mX [
2ULL ] == 4ULL ) ) { out -> mUPDATE2_R . mX [ 10ULL ] = t7 > 0.0 ? 5.0 : 6.0
; } else if ( ( t9 -> mCI . mX [ 44ULL ] == 0 ) && ( t9 -> mX . mX [ 15ULL ]
> 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 5ULL ) ) { out ->
mUPDATE2_R . mX [ 10ULL ] = t7 > 0.8 ? 3.0 : 4.0 ; } else { out -> mUPDATE2_R
. mX [ 10ULL ] = ( t9 -> mCI . mX [ 43ULL ] == 0 ) && ( ( size_t ) t9 -> mQ .
mX [ 2ULL ] == 5ULL ) && ( ( t9 -> mX . mX [ 15ULL ] < 0.0 ) || ( t7 < 0.0 )
) ? 0.0 : t9 -> mD . mX [ 10ULL ] ; } if ( ( t9 -> mCI . mX [ 51ULL ] == 0 )
&& ( t9 -> mX . mX [ 56ULL ] < 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ]
== 1ULL ) ) { out -> mUPDATE2_R . mX [ 11ULL ] = t9 -> mD . mX [ 11ULL ] ; }
else if ( ( t9 -> mCI . mX [ 50ULL ] == 0 ) && ( t9 -> mX . mX [ 56ULL ] >
0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 1ULL ) ) { out -> mUPDATE2_R
. mX [ 11ULL ] = t9 -> mD . mX [ 11ULL ] ; } else if ( ( t9 -> mCI . mX [
49ULL ] == 0 ) && ( t9 -> mX . mX [ 56ULL ] > 0.0 ) && ( t7 > 0.0 ) && ( (
size_t ) t9 -> mQ . mX [ 2ULL ] == 2ULL ) ) { out -> mUPDATE2_R . mX [ 11ULL
] = t9 -> mD . mX [ 11ULL ] ; } else if ( ( t9 -> mCI . mX [ 48ULL ] == 0 )
&& ( t9 -> mX . mX [ 15ULL ] < 0.0 ) && ( t9 -> mX . mX [ 56ULL ] < 0.0 ) &&
( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 3ULL ) ) { out -> mUPDATE2_R . mX [
11ULL ] = t9 -> mD . mX [ 11ULL ] ; } else if ( ( t9 -> mCI . mX [ 47ULL ] ==
0 ) && ( t9 -> mX . mX [ 15ULL ] > 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL
] == 3ULL ) ) { out -> mUPDATE2_R . mX [ 11ULL ] = t9 -> mD . mX [ 11ULL ] ;
} else { out -> mUPDATE2_R . mX [ 11ULL ] = ( t9 -> mCI . mX [ 46ULL ] == 0 )
&& ( t9 -> mX . mX [ 15ULL ] < 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ]
== 4ULL ) ? t9 -> mX . mX [ 15ULL ] : t9 -> mD . mX [ 11ULL ] ; } if ( ( t9
-> mCI . mX [ 60ULL ] == 0 ) && ( t9 -> mX . mX [ 57ULL ] < 0.0 ) && ( (
size_t ) t9 -> mQ . mX [ 3ULL ] == 1ULL ) ) { out -> mUPDATE2_R . mX [ 12ULL
] = 0.0 ; } else if ( ( t9 -> mCI . mX [ 59ULL ] == 0 ) && ( t9 -> mX . mX [
57ULL ] > 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 1ULL ) ) { out ->
mUPDATE2_R . mX [ 12ULL ] = t9 -> mX . mX [ 20ULL ] > 0.8 ? 1.0 : 2.0 ; }
else if ( ( t9 -> mCI . mX [ 58ULL ] == 0 ) && ( t9 -> mX . mX [ 57ULL ] >
0.0 ) && ( t9 -> mX . mX [ 20ULL ] > 0.0 ) && ( ( size_t ) t9 -> mQ . mX [
3ULL ] == 2ULL ) ) { out -> mUPDATE2_R . mX [ 12ULL ] = t9 -> mX . mX [ 20ULL
] > 0.8 ? 1.0 : 2.0 ; } else if ( ( t9 -> mCI . mX [ 57ULL ] == 0 ) && ( t9
-> mX . mX [ 16ULL ] < 0.0 ) && ( t9 -> mX . mX [ 57ULL ] < 0.0 ) && ( (
size_t ) t9 -> mQ . mX [ 3ULL ] == 3ULL ) ) { out -> mUPDATE2_R . mX [ 12ULL
] = 0.0 ; } else if ( ( t9 -> mCI . mX [ 55ULL ] == 0 ) && ( t9 -> mX . mX [
16ULL ] > 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 3ULL ) ) { out ->
mUPDATE2_R . mX [ 12ULL ] = t9 -> mX . mX [ 20ULL ] > 0.8 ? 3.0 : 4.0 ; }
else if ( ( t9 -> mCI . mX [ 54ULL ] == 0 ) && ( t9 -> mX . mX [ 16ULL ] <
0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 4ULL ) ) { out -> mUPDATE2_R
. mX [ 12ULL ] = t9 -> mX . mX [ 20ULL ] > 0.0 ? 5.0 : 6.0 ; } else if ( ( t9
-> mCI . mX [ 53ULL ] == 0 ) && ( t9 -> mX . mX [ 16ULL ] > 0.0 ) && ( (
size_t ) t9 -> mQ . mX [ 3ULL ] == 5ULL ) ) { out -> mUPDATE2_R . mX [ 12ULL
] = t9 -> mX . mX [ 20ULL ] > 0.8 ? 3.0 : 4.0 ; } else { out -> mUPDATE2_R .
mX [ 12ULL ] = ( t9 -> mCI . mX [ 52ULL ] == 0 ) && ( ( size_t ) t9 -> mQ .
mX [ 3ULL ] == 5ULL ) && ( ( t9 -> mX . mX [ 16ULL ] < 0.0 ) || ( t9 -> mX .
mX [ 20ULL ] < 0.0 ) ) ? 0.0 : t9 -> mD . mX [ 12ULL ] ; } if ( ( t9 -> mCI .
mX [ 60ULL ] == 0 ) && ( t9 -> mX . mX [ 57ULL ] < 0.0 ) && ( ( size_t ) t9
-> mQ . mX [ 3ULL ] == 1ULL ) ) { out -> mUPDATE2_R . mX [ 13ULL ] = t9 -> mD
. mX [ 13ULL ] ; } else if ( ( t9 -> mCI . mX [ 59ULL ] == 0 ) && ( t9 -> mX
. mX [ 57ULL ] > 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 1ULL ) ) {
out -> mUPDATE2_R . mX [ 13ULL ] = t9 -> mD . mX [ 13ULL ] ; } else if ( ( t9
-> mCI . mX [ 58ULL ] == 0 ) && ( t9 -> mX . mX [ 57ULL ] > 0.0 ) && ( t9 ->
mX . mX [ 20ULL ] > 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 2ULL ) )
{ out -> mUPDATE2_R . mX [ 13ULL ] = t9 -> mD . mX [ 13ULL ] ; } else if ( (
t9 -> mCI . mX [ 57ULL ] == 0 ) && ( t9 -> mX . mX [ 16ULL ] < 0.0 ) && ( t9
-> mX . mX [ 57ULL ] < 0.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 3ULL )
) { out -> mUPDATE2_R . mX [ 13ULL ] = t9 -> mD . mX [ 13ULL ] ; } else if (
( t9 -> mCI . mX [ 55ULL ] == 0 ) && ( t9 -> mX . mX [ 16ULL ] > 0.0 ) && ( (
size_t ) t9 -> mQ . mX [ 3ULL ] == 3ULL ) ) { out -> mUPDATE2_R . mX [ 13ULL
] = t9 -> mD . mX [ 13ULL ] ; } else { out -> mUPDATE2_R . mX [ 13ULL ] = (
t9 -> mCI . mX [ 54ULL ] == 0 ) && ( t9 -> mX . mX [ 16ULL ] < 0.0 ) && ( (
size_t ) t9 -> mQ . mX [ 3ULL ] == 4ULL ) ? t9 -> mX . mX [ 16ULL ] : t9 ->
mD . mX [ 13ULL ] ; } out -> mUPDATE2_R . mX [ 0ULL ] = t9 -> mD . mX [ 0ULL
] ; out -> mUPDATE2_R . mX [ 1ULL ] = t9 -> mD . mX [ 1ULL ] ; out ->
mUPDATE2_R . mX [ 2ULL ] = t9 -> mD . mX [ 2ULL ] ; out -> mUPDATE2_R . mX [
3ULL ] = t9 -> mD . mX [ 3ULL ] ; out -> mUPDATE2_R . mX [ 4ULL ] = t9 -> mD
. mX [ 4ULL ] ; out -> mUPDATE2_R . mX [ 5ULL ] = t9 -> mD . mX [ 5ULL ] ; (
void ) sys ; ( void ) out ; return 0 ; }
