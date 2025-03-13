#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_lock_i.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_lock_i ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { real_T Thyristor1_iak ; real_T Thyristor1_ideal_switch_v ; real_T
Thyristor2_iak ; real_T Thyristor2_ideal_switch_v ; real_T
Thyristor3_ideal_switch_v ; Thyristor1_iak = ( ( - t1 -> mX . mX [ 54ULL ] +
t1 -> mX . mX [ 19ULL ] * 1.0E-9 ) - t1 -> mX . mX [ 15ULL ] ) + t1 -> mX .
mX [ 0ULL ] ; Thyristor1_ideal_switch_v = ( ( ( ( - t1 -> mX . mX [ 1ULL ] +
t1 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t1 -> mX . mX [ 20ULL ] ) + t1 -> mX .
mX [ 18ULL ] * 1.0E-6 ) + t1 -> mX . mX [ 19ULL ] * - 1.0000000000000011 ) +
t1 -> mX . mX [ 17ULL ] ; Thyristor2_iak = ( ( - t1 -> mX . mX [ 54ULL ] + t1
-> mX . mX [ 19ULL ] * 1.0E-9 ) - t1 -> mX . mX [ 16ULL ] ) + t1 -> mX . mX [
0ULL ] ; Thyristor2_ideal_switch_v = - t1 -> mX . mX [ 17ULL ] + t1 -> mX .
mX [ 20ULL ] ; Thyristor3_ideal_switch_v = ( ( ( - t1 -> mX . mX [ 1ULL ] +
t1 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t1 -> mX . mX [ 20ULL ] ) + t1 -> mX .
mX [ 18ULL ] * 1.0E-6 ) + t1 -> mX . mX [ 19ULL ] * - 1.0000000000000011 ; if
( ( ( t1 -> mCI . mX [ 61ULL ] == 0 ) && ( t1 -> mX . mX [ 57ULL ] < 6.0 ) &&
( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 1ULL ) ) || ( ( t1 -> mX . mX [ 57ULL
] < 6.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 1ULL ) && ( t1 -> mQ . mX
[ 4ULL ] != 0 ) ) ) { out -> mLOCK_I . mX [ 0ULL ] = true ; } else if ( ( (
t1 -> mCI . mX [ 56ULL ] == 0 ) && ( t1 -> mX . mX [ 57ULL ] > 6.0 ) && ( (
size_t ) t1 -> mQ . mX [ 0ULL ] == 1ULL ) ) || ( ( t1 -> mX . mX [ 57ULL ] >
6.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 1ULL ) && ( t1 -> mQ . mX [
4ULL ] != 0 ) ) ) { out -> mLOCK_I . mX [ 0ULL ] = true ; } else if ( ( ( t1
-> mCI . mX [ 45ULL ] == 0 ) && ( Thyristor1_ideal_switch_v > 0.8 ) && ( t1
-> mX . mX [ 57ULL ] >= 6.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 2ULL
) ) || ( ( Thyristor1_ideal_switch_v > 0.8 ) && ( t1 -> mX . mX [ 57ULL ] >=
6.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 2ULL ) && ( t1 -> mQ . mX [
4ULL ] != 0 ) ) ) { out -> mLOCK_I . mX [ 0ULL ] = true ; } else if ( ( ( t1
-> mCI . mX [ 34ULL ] == 0 ) && ( t1 -> mX . mX [ 57ULL ] < 6.0 ) && (
Thyristor1_iak <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 3ULL ) ) ||
( ( t1 -> mX . mX [ 57ULL ] < 6.0 ) && ( Thyristor1_iak <= 1.0 ) && ( (
size_t ) t1 -> mQ . mX [ 0ULL ] == 3ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0 )
) ) { out -> mLOCK_I . mX [ 0ULL ] = true ; } else if ( ( ( t1 -> mCI . mX [
23ULL ] == 0 ) && ( Thyristor1_iak > 1.0 ) && ( ( size_t ) t1 -> mQ . mX [
0ULL ] == 3ULL ) ) || ( ( Thyristor1_iak > 1.0 ) && ( ( size_t ) t1 -> mQ .
mX [ 0ULL ] == 3ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mLOCK_I
. mX [ 0ULL ] = true ; } else if ( ( ( t1 -> mCI . mX [ 12ULL ] == 0 ) && (
Thyristor1_iak <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 4ULL ) ) ||
( ( Thyristor1_iak <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 4ULL )
&& ( t1 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mLOCK_I . mX [ 0ULL ] = true
; } else if ( ( ( t1 -> mCI . mX [ 1ULL ] == 0 ) && ( Thyristor1_iak > 1.0 )
&& ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 5ULL ) ) || ( ( Thyristor1_iak >
1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 0ULL ] == 5ULL ) && ( t1 -> mQ . mX [
4ULL ] != 0 ) ) ) { out -> mLOCK_I . mX [ 0ULL ] = true ; } else { out ->
mLOCK_I . mX [ 0ULL ] = ( ( ( t1 -> mCI . mX [ 0ULL ] == 0 ) && ( ( size_t )
t1 -> mQ . mX [ 0ULL ] == 5ULL ) && ( ( Thyristor1_iak <= 0.0 ) || (
Thyristor1_ideal_switch_v <= 0.0 ) ) ) || ( ( ( size_t ) t1 -> mQ . mX [ 0ULL
] == 5ULL ) && ( ( Thyristor1_iak <= 0.0 ) || ( Thyristor1_ideal_switch_v <=
0.0 ) ) && ( t1 -> mQ . mX [ 4ULL ] != 0 ) ) ) ; } if ( ( ( t1 -> mCI . mX [
7ULL ] == 0 ) && ( t1 -> mX . mX [ 56ULL ] < 6.0 ) && ( ( size_t ) t1 -> mQ .
mX [ 1ULL ] == 1ULL ) ) || ( ( t1 -> mX . mX [ 56ULL ] < 6.0 ) && ( ( size_t
) t1 -> mQ . mX [ 1ULL ] == 1ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0 ) ) ) {
out -> mLOCK_I . mX [ 1ULL ] = true ; } else if ( ( ( t1 -> mCI . mX [ 6ULL ]
== 0 ) && ( t1 -> mX . mX [ 56ULL ] > 6.0 ) && ( ( size_t ) t1 -> mQ . mX [
1ULL ] == 1ULL ) ) || ( ( t1 -> mX . mX [ 56ULL ] > 6.0 ) && ( ( size_t ) t1
-> mQ . mX [ 1ULL ] == 1ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out ->
mLOCK_I . mX [ 1ULL ] = true ; } else if ( ( ( t1 -> mCI . mX [ 5ULL ] == 0 )
&& ( Thyristor2_ideal_switch_v > 0.8 ) && ( t1 -> mX . mX [ 56ULL ] >= 6.0 )
&& ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 2ULL ) ) || ( (
Thyristor2_ideal_switch_v > 0.8 ) && ( t1 -> mX . mX [ 56ULL ] >= 6.0 ) && (
( size_t ) t1 -> mQ . mX [ 1ULL ] == 2ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0
) ) ) { out -> mLOCK_I . mX [ 1ULL ] = true ; } else if ( ( ( t1 -> mCI . mX
[ 4ULL ] == 0 ) && ( t1 -> mX . mX [ 56ULL ] < 6.0 ) && ( Thyristor2_iak <=
1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 3ULL ) ) || ( ( t1 -> mX . mX
[ 56ULL ] < 6.0 ) && ( Thyristor2_iak <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX
[ 1ULL ] == 3ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mLOCK_I .
mX [ 1ULL ] = true ; } else if ( ( ( t1 -> mCI . mX [ 3ULL ] == 0 ) && (
Thyristor2_iak > 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 3ULL ) ) ||
( ( Thyristor2_iak > 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 3ULL )
&& ( t1 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mLOCK_I . mX [ 1ULL ] = true
; } else if ( ( ( t1 -> mCI . mX [ 2ULL ] == 0 ) && ( Thyristor2_iak <= 1.0 )
&& ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 4ULL ) ) || ( ( Thyristor2_iak <=
1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 4ULL ) && ( t1 -> mQ . mX [
4ULL ] != 0 ) ) ) { out -> mLOCK_I . mX [ 1ULL ] = true ; } else if ( ( ( t1
-> mCI . mX [ 63ULL ] == 0 ) && ( Thyristor2_iak > 1.0 ) && ( ( size_t ) t1
-> mQ . mX [ 1ULL ] == 5ULL ) ) || ( ( Thyristor2_iak > 1.0 ) && ( ( size_t )
t1 -> mQ . mX [ 1ULL ] == 5ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out
-> mLOCK_I . mX [ 1ULL ] = true ; } else { out -> mLOCK_I . mX [ 1ULL ] = ( (
( t1 -> mCI . mX [ 62ULL ] == 0 ) && ( ( size_t ) t1 -> mQ . mX [ 1ULL ] ==
5ULL ) && ( ( Thyristor2_iak <= 0.0 ) || ( Thyristor2_ideal_switch_v <= 0.0 )
) ) || ( ( ( size_t ) t1 -> mQ . mX [ 1ULL ] == 5ULL ) && ( ( Thyristor2_iak
<= 0.0 ) || ( Thyristor2_ideal_switch_v <= 0.0 ) ) && ( t1 -> mQ . mX [ 4ULL
] != 0 ) ) ) ; } if ( ( ( t1 -> mCI . mX [ 16ULL ] == 0 ) && ( t1 -> mX . mX
[ 56ULL ] < 6.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 1ULL ) ) || ( (
t1 -> mX . mX [ 56ULL ] < 6.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] ==
1ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mLOCK_I . mX [ 2ULL ]
= true ; } else if ( ( ( t1 -> mCI . mX [ 15ULL ] == 0 ) && ( t1 -> mX . mX [
56ULL ] > 6.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 1ULL ) ) || ( ( t1
-> mX . mX [ 56ULL ] > 6.0 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 1ULL )
&& ( t1 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mLOCK_I . mX [ 2ULL ] = true
; } else if ( ( ( t1 -> mCI . mX [ 14ULL ] == 0 ) && (
Thyristor3_ideal_switch_v > 0.8 ) && ( t1 -> mX . mX [ 56ULL ] >= 6.0 ) && (
( size_t ) t1 -> mQ . mX [ 2ULL ] == 2ULL ) ) || ( (
Thyristor3_ideal_switch_v > 0.8 ) && ( t1 -> mX . mX [ 56ULL ] >= 6.0 ) && (
( size_t ) t1 -> mQ . mX [ 2ULL ] == 2ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0
) ) ) { out -> mLOCK_I . mX [ 2ULL ] = true ; } else if ( ( ( t1 -> mCI . mX
[ 13ULL ] == 0 ) && ( t1 -> mX . mX [ 56ULL ] < 6.0 ) && ( t1 -> mX . mX [
15ULL ] <= 0.001 ) && ( ( size_t ) t1 -> mQ . mX [ 2ULL ] == 3ULL ) ) || ( (
t1 -> mX . mX [ 56ULL ] < 6.0 ) && ( t1 -> mX . mX [ 15ULL ] <= 0.001 ) && (
( size_t ) t1 -> mQ . mX [ 2ULL ] == 3ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0
) ) ) { out -> mLOCK_I . mX [ 2ULL ] = true ; } else if ( ( ( t1 -> mCI . mX
[ 11ULL ] == 0 ) && ( t1 -> mX . mX [ 15ULL ] > 0.001 ) && ( ( size_t ) t1 ->
mQ . mX [ 2ULL ] == 3ULL ) ) || ( ( t1 -> mX . mX [ 15ULL ] > 0.001 ) && ( (
size_t ) t1 -> mQ . mX [ 2ULL ] == 3ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0 )
) ) { out -> mLOCK_I . mX [ 2ULL ] = true ; } else if ( ( ( t1 -> mCI . mX [
10ULL ] == 0 ) && ( t1 -> mX . mX [ 15ULL ] <= 0.001 ) && ( ( size_t ) t1 ->
mQ . mX [ 2ULL ] == 4ULL ) ) || ( ( t1 -> mX . mX [ 15ULL ] <= 0.001 ) && ( (
size_t ) t1 -> mQ . mX [ 2ULL ] == 4ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0 )
) ) { out -> mLOCK_I . mX [ 2ULL ] = true ; } else if ( ( ( t1 -> mCI . mX [
9ULL ] == 0 ) && ( t1 -> mX . mX [ 15ULL ] > 0.001 ) && ( ( size_t ) t1 -> mQ
. mX [ 2ULL ] == 5ULL ) ) || ( ( t1 -> mX . mX [ 15ULL ] > 0.001 ) && ( (
size_t ) t1 -> mQ . mX [ 2ULL ] == 5ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0 )
) ) { out -> mLOCK_I . mX [ 2ULL ] = true ; } else { out -> mLOCK_I . mX [
2ULL ] = ( ( ( t1 -> mCI . mX [ 8ULL ] == 0 ) && ( ( size_t ) t1 -> mQ . mX [
2ULL ] == 5ULL ) && ( ( t1 -> mX . mX [ 15ULL ] <= 0.0 ) || (
Thyristor3_ideal_switch_v <= 0.0 ) ) ) || ( ( ( size_t ) t1 -> mQ . mX [ 2ULL
] == 5ULL ) && ( ( t1 -> mX . mX [ 15ULL ] <= 0.0 ) || (
Thyristor3_ideal_switch_v <= 0.0 ) ) && ( t1 -> mQ . mX [ 4ULL ] != 0 ) ) ) ;
} if ( ( ( t1 -> mCI . mX [ 25ULL ] == 0 ) && ( t1 -> mX . mX [ 57ULL ] < 6.0
) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 1ULL ) ) || ( ( t1 -> mX . mX [
57ULL ] < 6.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 1ULL ) && ( t1 ->
mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mLOCK_I . mX [ 3ULL ] = true ; } else if
( ( ( t1 -> mCI . mX [ 24ULL ] == 0 ) && ( t1 -> mX . mX [ 57ULL ] > 6.0 ) &&
( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 1ULL ) ) || ( ( t1 -> mX . mX [ 57ULL
] > 6.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 1ULL ) && ( t1 -> mQ . mX
[ 4ULL ] != 0 ) ) ) { out -> mLOCK_I . mX [ 3ULL ] = true ; } else if ( ( (
t1 -> mCI . mX [ 22ULL ] == 0 ) && ( t1 -> mX . mX [ 20ULL ] > 0.8 ) && ( t1
-> mX . mX [ 57ULL ] >= 6.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 2ULL
) ) || ( ( t1 -> mX . mX [ 20ULL ] > 0.8 ) && ( t1 -> mX . mX [ 57ULL ] >=
6.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 2ULL ) && ( t1 -> mQ . mX [
4ULL ] != 0 ) ) ) { out -> mLOCK_I . mX [ 3ULL ] = true ; } else if ( ( ( t1
-> mCI . mX [ 21ULL ] == 0 ) && ( t1 -> mX . mX [ 57ULL ] < 6.0 ) && ( t1 ->
mX . mX [ 16ULL ] <= 1.0 ) && ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 3ULL ) )
|| ( ( t1 -> mX . mX [ 57ULL ] < 6.0 ) && ( t1 -> mX . mX [ 16ULL ] <= 1.0 )
&& ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 3ULL ) && ( t1 -> mQ . mX [ 4ULL ]
!= 0 ) ) ) { out -> mLOCK_I . mX [ 3ULL ] = true ; } else if ( ( ( t1 -> mCI
. mX [ 20ULL ] == 0 ) && ( t1 -> mX . mX [ 16ULL ] > 1.0 ) && ( ( size_t ) t1
-> mQ . mX [ 3ULL ] == 3ULL ) ) || ( ( t1 -> mX . mX [ 16ULL ] > 1.0 ) && ( (
size_t ) t1 -> mQ . mX [ 3ULL ] == 3ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0 )
) ) { out -> mLOCK_I . mX [ 3ULL ] = true ; } else if ( ( ( t1 -> mCI . mX [
19ULL ] == 0 ) && ( t1 -> mX . mX [ 16ULL ] <= 1.0 ) && ( ( size_t ) t1 -> mQ
. mX [ 3ULL ] == 4ULL ) ) || ( ( t1 -> mX . mX [ 16ULL ] <= 1.0 ) && ( (
size_t ) t1 -> mQ . mX [ 3ULL ] == 4ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0 )
) ) { out -> mLOCK_I . mX [ 3ULL ] = true ; } else if ( ( ( t1 -> mCI . mX [
18ULL ] == 0 ) && ( t1 -> mX . mX [ 16ULL ] > 1.0 ) && ( ( size_t ) t1 -> mQ
. mX [ 3ULL ] == 5ULL ) ) || ( ( t1 -> mX . mX [ 16ULL ] > 1.0 ) && ( (
size_t ) t1 -> mQ . mX [ 3ULL ] == 5ULL ) && ( t1 -> mQ . mX [ 4ULL ] != 0 )
) ) { out -> mLOCK_I . mX [ 3ULL ] = true ; } else { out -> mLOCK_I . mX [
3ULL ] = ( ( ( t1 -> mCI . mX [ 17ULL ] == 0 ) && ( ( size_t ) t1 -> mQ . mX
[ 3ULL ] == 5ULL ) && ( ( t1 -> mX . mX [ 16ULL ] <= 0.0 ) || ( t1 -> mX . mX
[ 20ULL ] <= 0.0 ) ) ) || ( ( ( size_t ) t1 -> mQ . mX [ 3ULL ] == 5ULL ) &&
( ( t1 -> mX . mX [ 16ULL ] <= 0.0 ) || ( t1 -> mX . mX [ 20ULL ] <= 0.0 ) )
&& ( t1 -> mQ . mX [ 4ULL ] != 0 ) ) ) ; } out -> mLOCK_I . mX [ 4ULL ] = (
t1 -> mQ . mX [ 4ULL ] != 0 ) ; ( void ) sys ; ( void ) out ; return 0 ; }
