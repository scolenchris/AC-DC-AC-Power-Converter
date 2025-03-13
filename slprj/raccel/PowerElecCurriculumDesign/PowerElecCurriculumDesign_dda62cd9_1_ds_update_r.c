#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_update_r.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_update_r ( const
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
1.0000000000000011 ; if ( ( ( t9 -> mCI . mX [ 61ULL ] == 0 ) && ( t9 -> mX .
mX [ 57ULL ] < 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 1ULL ) ) || (
( t9 -> mX . mX [ 57ULL ] < 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] ==
1ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 6ULL
] = 0.0 ; } else if ( ( ( t9 -> mCI . mX [ 56ULL ] == 0 ) && ( t9 -> mX . mX
[ 57ULL ] > 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 1ULL ) ) || ( (
t9 -> mX . mX [ 57ULL ] > 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] ==
1ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 6ULL
] = t3 > 0.8 ? 1.0 : 2.0 ; } else if ( ( ( t9 -> mCI . mX [ 45ULL ] == 0 ) &&
( t3 > 0.8 ) && ( t9 -> mX . mX [ 57ULL ] >= 6.0 ) && ( ( size_t ) t9 -> mQ .
mX [ 0ULL ] == 2ULL ) ) || ( ( t3 > 0.8 ) && ( t9 -> mX . mX [ 57ULL ] >= 6.0
) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 2ULL ) && ( t9 -> mQ . mX [ 4ULL
] != 0 ) ) ) { out -> mUPDATE_R . mX [ 6ULL ] = t3 > 0.8 ? 1.0 : 2.0 ; } else
if ( ( ( t9 -> mCI . mX [ 34ULL ] == 0 ) && ( t9 -> mX . mX [ 57ULL ] < 6.0 )
&& ( t2 <= 1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 3ULL ) ) || ( ( t9
-> mX . mX [ 57ULL ] < 6.0 ) && ( t2 <= 1.0 ) && ( ( size_t ) t9 -> mQ . mX [
0ULL ] == 3ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R .
mX [ 6ULL ] = 0.0 ; } else if ( ( ( t9 -> mCI . mX [ 23ULL ] == 0 ) && ( t2 >
1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 3ULL ) ) || ( ( t2 > 1.0 ) &&
( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 3ULL ) && ( t9 -> mQ . mX [ 4ULL ] !=
0 ) ) ) { out -> mUPDATE_R . mX [ 6ULL ] = t3 > 0.8 ? 3.0 : 4.0 ; } else if (
( ( t9 -> mCI . mX [ 12ULL ] == 0 ) && ( t2 <= 1.0 ) && ( ( size_t ) t9 -> mQ
. mX [ 0ULL ] == 4ULL ) ) || ( ( t2 <= 1.0 ) && ( ( size_t ) t9 -> mQ . mX [
0ULL ] == 4ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R .
mX [ 6ULL ] = t3 > 0.0 ? 5.0 : 6.0 ; } else if ( ( ( t9 -> mCI . mX [ 1ULL ]
== 0 ) && ( t2 > 1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 5ULL ) ) ||
( ( t2 > 1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 5ULL ) && ( t9 -> mQ
. mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 6ULL ] = t3 > 0.8 ? 3.0 :
4.0 ; } else { out -> mUPDATE_R . mX [ 6ULL ] = ( ( t9 -> mCI . mX [ 0ULL ]
== 0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 5ULL ) && ( ( t2 <= 0.0 ) ||
( t3 <= 0.0 ) ) ) || ( ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 5ULL ) && ( (
t2 <= 0.0 ) || ( t3 <= 0.0 ) ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ? 0.0 :
t9 -> mD . mX [ 6ULL ] ; } if ( ( ( t9 -> mCI . mX [ 61ULL ] == 0 ) && ( t9
-> mX . mX [ 57ULL ] < 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 1ULL )
) || ( ( t9 -> mX . mX [ 57ULL ] < 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL
] == 1ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [
7ULL ] = t9 -> mD . mX [ 7ULL ] ; } else if ( ( ( t9 -> mCI . mX [ 56ULL ] ==
0 ) && ( t9 -> mX . mX [ 57ULL ] > 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL
] == 1ULL ) ) || ( ( t9 -> mX . mX [ 57ULL ] > 6.0 ) && ( ( size_t ) t9 -> mQ
. mX [ 0ULL ] == 1ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out ->
mUPDATE_R . mX [ 7ULL ] = t9 -> mD . mX [ 7ULL ] ; } else if ( ( ( t9 -> mCI
. mX [ 45ULL ] == 0 ) && ( t3 > 0.8 ) && ( t9 -> mX . mX [ 57ULL ] >= 6.0 )
&& ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 2ULL ) ) || ( ( t3 > 0.8 ) && ( t9
-> mX . mX [ 57ULL ] >= 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 2ULL
) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 7ULL ] =
t9 -> mD . mX [ 7ULL ] ; } else if ( ( ( t9 -> mCI . mX [ 34ULL ] == 0 ) && (
t9 -> mX . mX [ 57ULL ] < 6.0 ) && ( t2 <= 1.0 ) && ( ( size_t ) t9 -> mQ .
mX [ 0ULL ] == 3ULL ) ) || ( ( t9 -> mX . mX [ 57ULL ] < 6.0 ) && ( t2 <= 1.0
) && ( ( size_t ) t9 -> mQ . mX [ 0ULL ] == 3ULL ) && ( t9 -> mQ . mX [ 4ULL
] != 0 ) ) ) { out -> mUPDATE_R . mX [ 7ULL ] = t9 -> mD . mX [ 7ULL ] ; }
else if ( ( ( t9 -> mCI . mX [ 23ULL ] == 0 ) && ( t2 > 1.0 ) && ( ( size_t )
t9 -> mQ . mX [ 0ULL ] == 3ULL ) ) || ( ( t2 > 1.0 ) && ( ( size_t ) t9 -> mQ
. mX [ 0ULL ] == 3ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out ->
mUPDATE_R . mX [ 7ULL ] = t9 -> mD . mX [ 7ULL ] ; } else { out -> mUPDATE_R
. mX [ 7ULL ] = ( ( t9 -> mCI . mX [ 12ULL ] == 0 ) && ( t2 <= 1.0 ) && ( (
size_t ) t9 -> mQ . mX [ 0ULL ] == 4ULL ) ) || ( ( t2 <= 1.0 ) && ( ( size_t
) t9 -> mQ . mX [ 0ULL ] == 4ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ? t2
: t9 -> mD . mX [ 7ULL ] ; } if ( ( ( t9 -> mCI . mX [ 7ULL ] == 0 ) && ( t9
-> mX . mX [ 56ULL ] < 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 1ULL )
) || ( ( t9 -> mX . mX [ 56ULL ] < 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL
] == 1ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [
8ULL ] = 0.0 ; } else if ( ( ( t9 -> mCI . mX [ 6ULL ] == 0 ) && ( t9 -> mX .
mX [ 56ULL ] > 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 1ULL ) ) || (
( t9 -> mX . mX [ 56ULL ] > 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] ==
1ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 8ULL
] = t5 > 0.8 ? 1.0 : 2.0 ; } else if ( ( ( t9 -> mCI . mX [ 5ULL ] == 0 ) &&
( t5 > 0.8 ) && ( t9 -> mX . mX [ 56ULL ] >= 6.0 ) && ( ( size_t ) t9 -> mQ .
mX [ 1ULL ] == 2ULL ) ) || ( ( t5 > 0.8 ) && ( t9 -> mX . mX [ 56ULL ] >= 6.0
) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 2ULL ) && ( t9 -> mQ . mX [ 4ULL
] != 0 ) ) ) { out -> mUPDATE_R . mX [ 8ULL ] = t5 > 0.8 ? 1.0 : 2.0 ; } else
if ( ( ( t9 -> mCI . mX [ 4ULL ] == 0 ) && ( t9 -> mX . mX [ 56ULL ] < 6.0 )
&& ( t4 <= 1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 3ULL ) ) || ( ( t9
-> mX . mX [ 56ULL ] < 6.0 ) && ( t4 <= 1.0 ) && ( ( size_t ) t9 -> mQ . mX [
1ULL ] == 3ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R .
mX [ 8ULL ] = 0.0 ; } else if ( ( ( t9 -> mCI . mX [ 3ULL ] == 0 ) && ( t4 >
1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 3ULL ) ) || ( ( t4 > 1.0 ) &&
( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 3ULL ) && ( t9 -> mQ . mX [ 4ULL ] !=
0 ) ) ) { out -> mUPDATE_R . mX [ 8ULL ] = t5 > 0.8 ? 3.0 : 4.0 ; } else if (
( ( t9 -> mCI . mX [ 2ULL ] == 0 ) && ( t4 <= 1.0 ) && ( ( size_t ) t9 -> mQ
. mX [ 1ULL ] == 4ULL ) ) || ( ( t4 <= 1.0 ) && ( ( size_t ) t9 -> mQ . mX [
1ULL ] == 4ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R .
mX [ 8ULL ] = t5 > 0.0 ? 5.0 : 6.0 ; } else if ( ( ( t9 -> mCI . mX [ 63ULL ]
== 0 ) && ( t4 > 1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 5ULL ) ) ||
( ( t4 > 1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 5ULL ) && ( t9 -> mQ
. mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 8ULL ] = t5 > 0.8 ? 3.0 :
4.0 ; } else { out -> mUPDATE_R . mX [ 8ULL ] = ( ( t9 -> mCI . mX [ 62ULL ]
== 0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 5ULL ) && ( ( t4 <= 0.0 ) ||
( t5 <= 0.0 ) ) ) || ( ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 5ULL ) && ( (
t4 <= 0.0 ) || ( t5 <= 0.0 ) ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ? 0.0 :
t9 -> mD . mX [ 8ULL ] ; } if ( ( ( t9 -> mCI . mX [ 7ULL ] == 0 ) && ( t9 ->
mX . mX [ 56ULL ] < 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 1ULL ) )
|| ( ( t9 -> mX . mX [ 56ULL ] < 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ]
== 1ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [
9ULL ] = t9 -> mD . mX [ 9ULL ] ; } else if ( ( ( t9 -> mCI . mX [ 6ULL ] ==
0 ) && ( t9 -> mX . mX [ 56ULL ] > 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL
] == 1ULL ) ) || ( ( t9 -> mX . mX [ 56ULL ] > 6.0 ) && ( ( size_t ) t9 -> mQ
. mX [ 1ULL ] == 1ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out ->
mUPDATE_R . mX [ 9ULL ] = t9 -> mD . mX [ 9ULL ] ; } else if ( ( ( t9 -> mCI
. mX [ 5ULL ] == 0 ) && ( t5 > 0.8 ) && ( t9 -> mX . mX [ 56ULL ] >= 6.0 ) &&
( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 2ULL ) ) || ( ( t5 > 0.8 ) && ( t9 ->
mX . mX [ 56ULL ] >= 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 2ULL )
&& ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 9ULL ] = t9
-> mD . mX [ 9ULL ] ; } else if ( ( ( t9 -> mCI . mX [ 4ULL ] == 0 ) && ( t9
-> mX . mX [ 56ULL ] < 6.0 ) && ( t4 <= 1.0 ) && ( ( size_t ) t9 -> mQ . mX [
1ULL ] == 3ULL ) ) || ( ( t9 -> mX . mX [ 56ULL ] < 6.0 ) && ( t4 <= 1.0 ) &&
( ( size_t ) t9 -> mQ . mX [ 1ULL ] == 3ULL ) && ( t9 -> mQ . mX [ 4ULL ] !=
0 ) ) ) { out -> mUPDATE_R . mX [ 9ULL ] = t9 -> mD . mX [ 9ULL ] ; } else if
( ( ( t9 -> mCI . mX [ 3ULL ] == 0 ) && ( t4 > 1.0 ) && ( ( size_t ) t9 -> mQ
. mX [ 1ULL ] == 3ULL ) ) || ( ( t4 > 1.0 ) && ( ( size_t ) t9 -> mQ . mX [
1ULL ] == 3ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R .
mX [ 9ULL ] = t9 -> mD . mX [ 9ULL ] ; } else { out -> mUPDATE_R . mX [ 9ULL
] = ( ( t9 -> mCI . mX [ 2ULL ] == 0 ) && ( t4 <= 1.0 ) && ( ( size_t ) t9 ->
mQ . mX [ 1ULL ] == 4ULL ) ) || ( ( t4 <= 1.0 ) && ( ( size_t ) t9 -> mQ . mX
[ 1ULL ] == 4ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ? t4 : t9 -> mD . mX
[ 9ULL ] ; } if ( ( ( t9 -> mCI . mX [ 16ULL ] == 0 ) && ( t9 -> mX . mX [
56ULL ] < 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 1ULL ) ) || ( ( t9
-> mX . mX [ 56ULL ] < 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 1ULL )
&& ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 10ULL ] =
0.0 ; } else if ( ( ( t9 -> mCI . mX [ 15ULL ] == 0 ) && ( t9 -> mX . mX [
56ULL ] > 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 1ULL ) ) || ( ( t9
-> mX . mX [ 56ULL ] > 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 1ULL )
&& ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 10ULL ] = t7
> 0.8 ? 1.0 : 2.0 ; } else if ( ( ( t9 -> mCI . mX [ 14ULL ] == 0 ) && ( t7 >
0.8 ) && ( t9 -> mX . mX [ 56ULL ] >= 6.0 ) && ( ( size_t ) t9 -> mQ . mX [
2ULL ] == 2ULL ) ) || ( ( t7 > 0.8 ) && ( t9 -> mX . mX [ 56ULL ] >= 6.0 ) &&
( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 2ULL ) && ( t9 -> mQ . mX [ 4ULL ] !=
0 ) ) ) { out -> mUPDATE_R . mX [ 10ULL ] = t7 > 0.8 ? 1.0 : 2.0 ; } else if
( ( ( t9 -> mCI . mX [ 13ULL ] == 0 ) && ( t9 -> mX . mX [ 56ULL ] < 6.0 ) &&
( t9 -> mX . mX [ 15ULL ] <= 0.001 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ]
== 3ULL ) ) || ( ( t9 -> mX . mX [ 56ULL ] < 6.0 ) && ( t9 -> mX . mX [ 15ULL
] <= 0.001 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 3ULL ) && ( t9 -> mQ .
mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 10ULL ] = 0.0 ; } else if (
( ( t9 -> mCI . mX [ 11ULL ] == 0 ) && ( t9 -> mX . mX [ 15ULL ] > 0.001 ) &&
( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 3ULL ) ) || ( ( t9 -> mX . mX [ 15ULL
] > 0.001 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 3ULL ) && ( t9 -> mQ .
mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 10ULL ] = t7 > 0.8 ? 3.0 :
4.0 ; } else if ( ( ( t9 -> mCI . mX [ 10ULL ] == 0 ) && ( t9 -> mX . mX [
15ULL ] <= 0.001 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 4ULL ) ) || ( (
t9 -> mX . mX [ 15ULL ] <= 0.001 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] ==
4ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 10ULL
] = t7 > 0.0 ? 5.0 : 6.0 ; } else if ( ( ( t9 -> mCI . mX [ 9ULL ] == 0 ) &&
( t9 -> mX . mX [ 15ULL ] > 0.001 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] ==
5ULL ) ) || ( ( t9 -> mX . mX [ 15ULL ] > 0.001 ) && ( ( size_t ) t9 -> mQ .
mX [ 2ULL ] == 5ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out ->
mUPDATE_R . mX [ 10ULL ] = t7 > 0.8 ? 3.0 : 4.0 ; } else { out -> mUPDATE_R .
mX [ 10ULL ] = ( ( t9 -> mCI . mX [ 8ULL ] == 0 ) && ( ( size_t ) t9 -> mQ .
mX [ 2ULL ] == 5ULL ) && ( ( t9 -> mX . mX [ 15ULL ] <= 0.0 ) || ( t7 <= 0.0
) ) ) || ( ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 5ULL ) && ( ( t9 -> mX . mX
[ 15ULL ] <= 0.0 ) || ( t7 <= 0.0 ) ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ?
0.0 : t9 -> mD . mX [ 10ULL ] ; } if ( ( ( t9 -> mCI . mX [ 16ULL ] == 0 ) &&
( t9 -> mX . mX [ 56ULL ] < 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] ==
1ULL ) ) || ( ( t9 -> mX . mX [ 56ULL ] < 6.0 ) && ( ( size_t ) t9 -> mQ . mX
[ 2ULL ] == 1ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R
. mX [ 11ULL ] = t9 -> mD . mX [ 11ULL ] ; } else if ( ( ( t9 -> mCI . mX [
15ULL ] == 0 ) && ( t9 -> mX . mX [ 56ULL ] > 6.0 ) && ( ( size_t ) t9 -> mQ
. mX [ 2ULL ] == 1ULL ) ) || ( ( t9 -> mX . mX [ 56ULL ] > 6.0 ) && ( (
size_t ) t9 -> mQ . mX [ 2ULL ] == 1ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 )
) ) { out -> mUPDATE_R . mX [ 11ULL ] = t9 -> mD . mX [ 11ULL ] ; } else if (
( ( t9 -> mCI . mX [ 14ULL ] == 0 ) && ( t7 > 0.8 ) && ( t9 -> mX . mX [
56ULL ] >= 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 2ULL ) ) || ( ( t7
> 0.8 ) && ( t9 -> mX . mX [ 56ULL ] >= 6.0 ) && ( ( size_t ) t9 -> mQ . mX [
2ULL ] == 2ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R .
mX [ 11ULL ] = t9 -> mD . mX [ 11ULL ] ; } else if ( ( ( t9 -> mCI . mX [
13ULL ] == 0 ) && ( t9 -> mX . mX [ 56ULL ] < 6.0 ) && ( t9 -> mX . mX [
15ULL ] <= 0.001 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 3ULL ) ) || ( (
t9 -> mX . mX [ 56ULL ] < 6.0 ) && ( t9 -> mX . mX [ 15ULL ] <= 0.001 ) && (
( size_t ) t9 -> mQ . mX [ 2ULL ] == 3ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0
) ) ) { out -> mUPDATE_R . mX [ 11ULL ] = t9 -> mD . mX [ 11ULL ] ; } else if
( ( ( t9 -> mCI . mX [ 11ULL ] == 0 ) && ( t9 -> mX . mX [ 15ULL ] > 0.001 )
&& ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 3ULL ) ) || ( ( t9 -> mX . mX [
15ULL ] > 0.001 ) && ( ( size_t ) t9 -> mQ . mX [ 2ULL ] == 3ULL ) && ( t9 ->
mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 11ULL ] = t9 -> mD . mX
[ 11ULL ] ; } else { out -> mUPDATE_R . mX [ 11ULL ] = ( ( t9 -> mCI . mX [
10ULL ] == 0 ) && ( t9 -> mX . mX [ 15ULL ] <= 0.001 ) && ( ( size_t ) t9 ->
mQ . mX [ 2ULL ] == 4ULL ) ) || ( ( t9 -> mX . mX [ 15ULL ] <= 0.001 ) && ( (
size_t ) t9 -> mQ . mX [ 2ULL ] == 4ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 )
) ? t9 -> mX . mX [ 15ULL ] : t9 -> mD . mX [ 11ULL ] ; } if ( ( ( t9 -> mCI
. mX [ 25ULL ] == 0 ) && ( t9 -> mX . mX [ 57ULL ] < 6.0 ) && ( ( size_t ) t9
-> mQ . mX [ 3ULL ] == 1ULL ) ) || ( ( t9 -> mX . mX [ 57ULL ] < 6.0 ) && ( (
size_t ) t9 -> mQ . mX [ 3ULL ] == 1ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 )
) ) { out -> mUPDATE_R . mX [ 12ULL ] = 0.0 ; } else if ( ( ( t9 -> mCI . mX
[ 24ULL ] == 0 ) && ( t9 -> mX . mX [ 57ULL ] > 6.0 ) && ( ( size_t ) t9 ->
mQ . mX [ 3ULL ] == 1ULL ) ) || ( ( t9 -> mX . mX [ 57ULL ] > 6.0 ) && ( (
size_t ) t9 -> mQ . mX [ 3ULL ] == 1ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 )
) ) { out -> mUPDATE_R . mX [ 12ULL ] = t9 -> mX . mX [ 20ULL ] > 0.8 ? 1.0 :
2.0 ; } else if ( ( ( t9 -> mCI . mX [ 22ULL ] == 0 ) && ( t9 -> mX . mX [
20ULL ] > 0.8 ) && ( t9 -> mX . mX [ 57ULL ] >= 6.0 ) && ( ( size_t ) t9 ->
mQ . mX [ 3ULL ] == 2ULL ) ) || ( ( t9 -> mX . mX [ 20ULL ] > 0.8 ) && ( t9
-> mX . mX [ 57ULL ] >= 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 2ULL
) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 12ULL ] =
t9 -> mX . mX [ 20ULL ] > 0.8 ? 1.0 : 2.0 ; } else if ( ( ( t9 -> mCI . mX [
21ULL ] == 0 ) && ( t9 -> mX . mX [ 57ULL ] < 6.0 ) && ( t9 -> mX . mX [
16ULL ] <= 1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 3ULL ) ) || ( ( t9
-> mX . mX [ 57ULL ] < 6.0 ) && ( t9 -> mX . mX [ 16ULL ] <= 1.0 ) && ( (
size_t ) t9 -> mQ . mX [ 3ULL ] == 3ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 )
) ) { out -> mUPDATE_R . mX [ 12ULL ] = 0.0 ; } else if ( ( ( t9 -> mCI . mX
[ 20ULL ] == 0 ) && ( t9 -> mX . mX [ 16ULL ] > 1.0 ) && ( ( size_t ) t9 ->
mQ . mX [ 3ULL ] == 3ULL ) ) || ( ( t9 -> mX . mX [ 16ULL ] > 1.0 ) && ( (
size_t ) t9 -> mQ . mX [ 3ULL ] == 3ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 )
) ) { out -> mUPDATE_R . mX [ 12ULL ] = t9 -> mX . mX [ 20ULL ] > 0.8 ? 3.0 :
4.0 ; } else if ( ( ( t9 -> mCI . mX [ 19ULL ] == 0 ) && ( t9 -> mX . mX [
16ULL ] <= 1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 4ULL ) ) || ( ( t9
-> mX . mX [ 16ULL ] <= 1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 4ULL
) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 12ULL ] =
t9 -> mX . mX [ 20ULL ] > 0.0 ? 5.0 : 6.0 ; } else if ( ( ( t9 -> mCI . mX [
18ULL ] == 0 ) && ( t9 -> mX . mX [ 16ULL ] > 1.0 ) && ( ( size_t ) t9 -> mQ
. mX [ 3ULL ] == 5ULL ) ) || ( ( t9 -> mX . mX [ 16ULL ] > 1.0 ) && ( (
size_t ) t9 -> mQ . mX [ 3ULL ] == 5ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 )
) ) { out -> mUPDATE_R . mX [ 12ULL ] = t9 -> mX . mX [ 20ULL ] > 0.8 ? 3.0 :
4.0 ; } else { out -> mUPDATE_R . mX [ 12ULL ] = ( ( t9 -> mCI . mX [ 17ULL ]
== 0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 5ULL ) && ( ( t9 -> mX . mX
[ 16ULL ] <= 0.0 ) || ( t9 -> mX . mX [ 20ULL ] <= 0.0 ) ) ) || ( ( ( size_t
) t9 -> mQ . mX [ 3ULL ] == 5ULL ) && ( ( t9 -> mX . mX [ 16ULL ] <= 0.0 ) ||
( t9 -> mX . mX [ 20ULL ] <= 0.0 ) ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ?
0.0 : t9 -> mD . mX [ 12ULL ] ; } if ( ( ( t9 -> mCI . mX [ 25ULL ] == 0 ) &&
( t9 -> mX . mX [ 57ULL ] < 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] ==
1ULL ) ) || ( ( t9 -> mX . mX [ 57ULL ] < 6.0 ) && ( ( size_t ) t9 -> mQ . mX
[ 3ULL ] == 1ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R
. mX [ 13ULL ] = t9 -> mD . mX [ 13ULL ] ; } else if ( ( ( t9 -> mCI . mX [
24ULL ] == 0 ) && ( t9 -> mX . mX [ 57ULL ] > 6.0 ) && ( ( size_t ) t9 -> mQ
. mX [ 3ULL ] == 1ULL ) ) || ( ( t9 -> mX . mX [ 57ULL ] > 6.0 ) && ( (
size_t ) t9 -> mQ . mX [ 3ULL ] == 1ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 )
) ) { out -> mUPDATE_R . mX [ 13ULL ] = t9 -> mD . mX [ 13ULL ] ; } else if (
( ( t9 -> mCI . mX [ 22ULL ] == 0 ) && ( t9 -> mX . mX [ 20ULL ] > 0.8 ) && (
t9 -> mX . mX [ 57ULL ] >= 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] ==
2ULL ) ) || ( ( t9 -> mX . mX [ 20ULL ] > 0.8 ) && ( t9 -> mX . mX [ 57ULL ]
>= 6.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 2ULL ) && ( t9 -> mQ . mX
[ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 13ULL ] = t9 -> mD . mX [ 13ULL
] ; } else if ( ( ( t9 -> mCI . mX [ 21ULL ] == 0 ) && ( t9 -> mX . mX [
57ULL ] < 6.0 ) && ( t9 -> mX . mX [ 16ULL ] <= 1.0 ) && ( ( size_t ) t9 ->
mQ . mX [ 3ULL ] == 3ULL ) ) || ( ( t9 -> mX . mX [ 57ULL ] < 6.0 ) && ( t9
-> mX . mX [ 16ULL ] <= 1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 3ULL
) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R . mX [ 13ULL ] =
t9 -> mD . mX [ 13ULL ] ; } else if ( ( ( t9 -> mCI . mX [ 20ULL ] == 0 ) &&
( t9 -> mX . mX [ 16ULL ] > 1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] ==
3ULL ) ) || ( ( t9 -> mX . mX [ 16ULL ] > 1.0 ) && ( ( size_t ) t9 -> mQ . mX
[ 3ULL ] == 3ULL ) && ( t9 -> mQ . mX [ 4ULL ] != 0 ) ) ) { out -> mUPDATE_R
. mX [ 13ULL ] = t9 -> mD . mX [ 13ULL ] ; } else { out -> mUPDATE_R . mX [
13ULL ] = ( ( t9 -> mCI . mX [ 19ULL ] == 0 ) && ( t9 -> mX . mX [ 16ULL ] <=
1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 4ULL ) ) || ( ( t9 -> mX . mX
[ 16ULL ] <= 1.0 ) && ( ( size_t ) t9 -> mQ . mX [ 3ULL ] == 4ULL ) && ( t9
-> mQ . mX [ 4ULL ] != 0 ) ) ? t9 -> mX . mX [ 16ULL ] : t9 -> mD . mX [
13ULL ] ; } out -> mUPDATE_R . mX [ 0ULL ] = t9 -> mD . mX [ 0ULL ] ; out ->
mUPDATE_R . mX [ 1ULL ] = t9 -> mD . mX [ 1ULL ] ; out -> mUPDATE_R . mX [
2ULL ] = t9 -> mD . mX [ 2ULL ] ; out -> mUPDATE_R . mX [ 3ULL ] = t9 -> mD .
mX [ 3ULL ] ; out -> mUPDATE_R . mX [ 4ULL ] = t9 -> mD . mX [ 4ULL ] ; out
-> mUPDATE_R . mX [ 5ULL ] = t9 -> mD . mX [ 5ULL ] ; ( void ) sys ; ( void )
out ; return 0 ; }
