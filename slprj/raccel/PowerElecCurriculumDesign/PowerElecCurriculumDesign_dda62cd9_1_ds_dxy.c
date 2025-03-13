#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dxy.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_dxy ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t46 , NeDsMethodOutput * out ) { real_T t5
[ 4 ] ; size_t t13 ; ( void ) t46 ; out -> mDXY . mX [ 10ULL ] =
1.1102230246251565E-15 ; out -> mDXY . mX [ 8ULL ] = - 1.0E-6 ; t5 [ 1ULL ] =
0.0 ; out -> mDXY . mX [ 0ULL ] = 1.0E-6 ; out -> mDXY . mX [ 2ULL ] = 1.0 ;
t5 [ 0ULL ] = 0.0 ; out -> mDXY . mX [ 6ULL ] = - 1.0 ; out -> mDXY . mX [
7ULL ] = 0.01 ; t5 [ 2ULL ] = 0.0 ; out -> mDXY . mX [ 4ULL ] = 1.0 ; out ->
mDXY . mX [ 11ULL ] = 1.0000000000000011 ; out -> mDXY . mX [ 9ULL ] = -
1.0E-6 ; t5 [ 3ULL ] = 0.0 ; out -> mDXY . mX [ 1ULL ] = 1.0E-6 ; out -> mDXY
. mX [ 3ULL ] = 1.0 ; out -> mDXY . mX [ 5ULL ] = 1.0 ; for ( t13 = 0ULL ;
t13 < 4ULL ; t13 ++ ) { out -> mDXY . mX [ t13 + 12ULL ] = t5 [ t13 ] ; } out
-> mDXY . mX [ 16ULL ] = 1.0E-6 ; out -> mDXY . mX [ 17ULL ] = - 1.0 ; out ->
mDXY . mX [ 18ULL ] = - 1.0 ; out -> mDXY . mX [ 19ULL ] = 1.0 ; out -> mDXY
. mX [ 20ULL ] = 1.0 ; out -> mDXY . mX [ 21ULL ] = 1.0E-9 ; out -> mDXY . mX
[ 22ULL ] = - 1.0 ; out -> mDXY . mX [ 23ULL ] = 1.0 ; out -> mDXY . mX [
24ULL ] = 1.0 ; out -> mDXY . mX [ 25ULL ] = 1.0 ; out -> mDXY . mX [ 26ULL ]
= - 1.0E-6 ; out -> mDXY . mX [ 27ULL ] = 1.0 ; out -> mDXY . mX [ 28ULL ] =
1.0 ; ( void ) sys ; ( void ) out ; return 0 ; }
