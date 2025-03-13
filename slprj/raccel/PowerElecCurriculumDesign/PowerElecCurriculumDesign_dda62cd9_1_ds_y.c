#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_y.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_y ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t11 , NeDsMethodOutput * out ) { out -> mY
. mX [ 0ULL ] = t11 -> mX . mX [ 24ULL ] * 1.0E-9 + t11 -> mX . mX [ 3ULL ] ;
out -> mY . mX [ 2ULL ] = t11 -> mU . mX [ 1ULL ] * 10.0 ; out -> mY . mX [
1ULL ] = t11 -> mU . mX [ 2ULL ] * 10.0 ; out -> mY . mX [ 8ULL ] = t11 -> mX
. mX [ 57ULL ] ; out -> mY . mX [ 6ULL ] = t11 -> mX . mX [ 56ULL ] ; out ->
mY . mX [ 14ULL ] = t11 -> mX . mX [ 25ULL ] ; out -> mY . mX [ 5ULL ] = ( (
( ( t11 -> mX . mX [ 0ULL ] * 1.0E-6 + t11 -> mX . mX [ 18ULL ] * - 1.0E-6 )
+ t11 -> mX . mX [ 19ULL ] * 1.1102230246251565E-15 ) + t11 -> mX . mX [
20ULL ] ) + t11 -> mX . mX [ 1ULL ] ) - t11 -> mX . mX [ 20ULL ] ; out -> mY
. mX [ 3ULL ] = ( ( - t11 -> mX . mX [ 9ULL ] + t11 -> mX . mX [ 39ULL ] * -
1.0E-6 ) + t11 -> mX . mX [ 20ULL ] ) - t11 -> mX . mX [ 20ULL ] ; out -> mY
. mX [ 4ULL ] = t11 -> mX . mX [ 27ULL ] ; out -> mY . mX [ 7ULL ] = t11 ->
mX . mX [ 29ULL ] ; out -> mY . mX [ 9ULL ] = t11 -> mX . mX [ 17ULL ] * 0.01
; out -> mY . mX [ 10ULL ] = ( ( t11 -> mX . mX [ 21ULL ] * 1.0E-6 + t11 ->
mX . mX [ 20ULL ] ) + t11 -> mX . mX [ 2ULL ] ) - t11 -> mX . mX [ 20ULL ] ;
out -> mY . mX [ 11ULL ] = ( - t11 -> mX . mX [ 24ULL ] + t11 -> mX . mX [
23ULL ] ) - t11 -> mX . mX [ 22ULL ] ; out -> mY . mX [ 12ULL ] = t11 -> mX .
mX [ 23ULL ] - t11 -> mX . mX [ 22ULL ] ; out -> mY . mX [ 13ULL ] = ( ( ( (
t11 -> mX . mX [ 0ULL ] * 1.0E-6 + t11 -> mX . mX [ 18ULL ] * - 1.0E-6 ) +
t11 -> mX . mX [ 19ULL ] * 1.0000000000000011 ) + t11 -> mX . mX [ 20ULL ] )
+ t11 -> mX . mX [ 1ULL ] ) - t11 -> mX . mX [ 20ULL ] ; ( void ) sys ; (
void ) out ; return 0 ; }
