#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_assert.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_assert ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t7 , NeDsMethodOutput *
out ) { real_T intrm_sf_mf_12 ; real_T intrm_sf_mf_39 ; real_T intrm_sf_mf_44
; real_T intrm_sf_mf_49 ; real_T intrm_sf_mf_55 ; real_T intrm_sf_mf_7 ;
real_T t5 ; boolean_T t0 ; boolean_T t1 ; boolean_T t2 ; boolean_T t3 ;
intrm_sf_mf_12 = ( t7 -> mX . mX [ 34ULL ] * 1.0E-6 + t7 -> mX . mX [ 8ULL ]
) * 1.602176487E-19 / 4.1186322001386077E-21 ; intrm_sf_mf_39 = - t7 -> mX .
mX [ 13ULL ] * 38.921701457926758 ; t5 = - t7 -> mX . mX [ 12ULL ] *
38.921701457926758 ; intrm_sf_mf_49 = - t7 -> mX . mX [ 14ULL ] *
38.921701457926758 ; intrm_sf_mf_44 = - t7 -> mX . mX [ 11ULL ] *
38.921701457926758 ; if ( t7 -> mU . mX [ 3ULL ] < 0.0 ) { intrm_sf_mf_55 =
1.0 ; } else { intrm_sf_mf_55 = t7 -> mU . mX [ 3ULL ] > 1.0 ? 999.0 : t7 ->
mU . mX [ 3ULL ] * 998.0 + 1.0 ; } intrm_sf_mf_7 = ( t7 -> mX . mX [ 32ULL ]
* 1.0E-6 + t7 -> mX . mX [ 7ULL ] ) * 1.602176487E-19 /
4.1186322001386077E-21 ; if ( ( size_t ) t7 -> mQ . mX [ 0ULL ] >= 1ULL ) {
t0 = ( ( size_t ) t7 -> mQ . mX [ 0ULL ] <= 5ULL ) ; } else { t0 = false ; }
if ( ( size_t ) t7 -> mQ . mX [ 1ULL ] >= 1ULL ) { t1 = ( ( size_t ) t7 -> mQ
. mX [ 1ULL ] <= 5ULL ) ; } else { t1 = false ; } if ( ( size_t ) t7 -> mQ .
mX [ 2ULL ] >= 1ULL ) { t2 = ( ( size_t ) t7 -> mQ . mX [ 2ULL ] <= 5ULL ) ;
} else { t2 = false ; } if ( ( size_t ) t7 -> mQ . mX [ 3ULL ] >= 1ULL ) { t3
= ( ( size_t ) t7 -> mQ . mX [ 3ULL ] <= 5ULL ) ; } else { t3 = false ; } out
-> mASSERT . mX [ 0ULL ] = ( int32_T ) t0 ; out -> mASSERT . mX [ 1ULL ] = (
int32_T ) t1 ; out -> mASSERT . mX [ 2ULL ] = ( int32_T ) t2 ; out -> mASSERT
. mX [ 3ULL ] = ( int32_T ) t3 ; out -> mASSERT . mX [ 4ULL ] = 1 ; out ->
mASSERT . mX [ 5ULL ] = 1 ; out -> mASSERT . mX [ 6ULL ] = 1 ; out -> mASSERT
. mX [ 7ULL ] = 1 ; out -> mASSERT . mX [ 8ULL ] = 1 ; out -> mASSERT . mX [
9ULL ] = 1 ; out -> mASSERT . mX [ 10ULL ] = 1 ; out -> mASSERT . mX [ 11ULL
] = 1 ; out -> mASSERT . mX [ 12ULL ] = 1 ; out -> mASSERT . mX [ 13ULL ] = 1
; out -> mASSERT . mX [ 14ULL ] = 1 ; out -> mASSERT . mX [ 15ULL ] = 1 ; out
-> mASSERT . mX [ 16ULL ] = 1 ; out -> mASSERT . mX [ 17ULL ] = 1 ; out ->
mASSERT . mX [ 18ULL ] = 1 ; out -> mASSERT . mX [ 19ULL ] = 1 ; out ->
mASSERT . mX [ 20ULL ] = 1 ; out -> mASSERT . mX [ 21ULL ] = 1 ; out ->
mASSERT . mX [ 22ULL ] = 1 ; out -> mASSERT . mX [ 23ULL ] = 1 ; out ->
mASSERT . mX [ 24ULL ] = 1 ; out -> mASSERT . mX [ 25ULL ] = 1 ; out ->
mASSERT . mX [ 26ULL ] = 1 ; out -> mASSERT . mX [ 27ULL ] = 1 ; out ->
mASSERT . mX [ 28ULL ] = 1 ; out -> mASSERT . mX [ 29ULL ] = 1 ; out ->
mASSERT . mX [ 30ULL ] = 1 ; out -> mASSERT . mX [ 31ULL ] = 1 ; out ->
mASSERT . mX [ 32ULL ] = 1 ; out -> mASSERT . mX [ 33ULL ] = 1 ; out ->
mASSERT . mX [ 34ULL ] = 1 ; out -> mASSERT . mX [ 35ULL ] = 1 ; out ->
mASSERT . mX [ 36ULL ] = 1 ; out -> mASSERT . mX [ 37ULL ] = 1 ; out ->
mASSERT . mX [ 38ULL ] = 1 ; out -> mASSERT . mX [ 39ULL ] = 1 ; out ->
mASSERT . mX [ 40ULL ] = 1 ; out -> mASSERT . mX [ 41ULL ] = 1 ; out ->
mASSERT . mX [ 42ULL ] = 1 ; out -> mASSERT . mX [ 43ULL ] = 1 ; out ->
mASSERT . mX [ 44ULL ] = 1 ; out -> mASSERT . mX [ 45ULL ] = 1 ; out ->
mASSERT . mX [ 46ULL ] = 1 ; out -> mASSERT . mX [ 47ULL ] = 1 ; out ->
mASSERT . mX [ 48ULL ] = 1 ; out -> mASSERT . mX [ 49ULL ] = 1 ; out ->
mASSERT . mX [ 50ULL ] = 1 ; out -> mASSERT . mX [ 51ULL ] = 1 ; out ->
mASSERT . mX [ 52ULL ] = 1 ; out -> mASSERT . mX [ 53ULL ] = 1 ; out ->
mASSERT . mX [ 54ULL ] = 1 ; out -> mASSERT . mX [ 55ULL ] = 1 ; out ->
mASSERT . mX [ 56ULL ] = 1 ; out -> mASSERT . mX [ 57ULL ] = 1 ; out ->
mASSERT . mX [ 58ULL ] = 1 ; out -> mASSERT . mX [ 59ULL ] = 1 ; out ->
mASSERT . mX [ 60ULL ] = ( int32_T ) ( ( intrm_sf_mf_39 < 663.67513503334737
) || ( intrm_sf_mf_39 > 40.0 ) ) ; out -> mASSERT . mX [ 61ULL ] = 1 ; out ->
mASSERT . mX [ 62ULL ] = 1 ; out -> mASSERT . mX [ 63ULL ] = ( int32_T ) ( (
t5 < 663.67513503334737 ) || ( t5 > 40.0 ) ) ; out -> mASSERT . mX [ 64ULL ]
= 1 ; out -> mASSERT . mX [ 65ULL ] = 1 ; out -> mASSERT . mX [ 66ULL ] = 1 ;
out -> mASSERT . mX [ 67ULL ] = 1 ; out -> mASSERT . mX [ 68ULL ] = 1 ; out
-> mASSERT . mX [ 69ULL ] = 1 ; out -> mASSERT . mX [ 70ULL ] = 1 ; out ->
mASSERT . mX [ 71ULL ] = 1 ; out -> mASSERT . mX [ 72ULL ] = 1 ; out ->
mASSERT . mX [ 73ULL ] = 1 ; out -> mASSERT . mX [ 74ULL ] = 1 ; out ->
mASSERT . mX [ 75ULL ] = 1 ; out -> mASSERT . mX [ 76ULL ] = 1 ; out ->
mASSERT . mX [ 77ULL ] = 1 ; out -> mASSERT . mX [ 78ULL ] = 1 ; out ->
mASSERT . mX [ 79ULL ] = 1 ; out -> mASSERT . mX [ 80ULL ] = ( int32_T ) ( (
intrm_sf_mf_49 < 663.67513503334737 ) || ( intrm_sf_mf_49 > 40.0 ) ) ; out ->
mASSERT . mX [ 81ULL ] = 1 ; out -> mASSERT . mX [ 82ULL ] = 1 ; out ->
mASSERT . mX [ 83ULL ] = ( int32_T ) ( ( intrm_sf_mf_44 < 663.67513503334737
) || ( intrm_sf_mf_44 > 40.0 ) ) ; out -> mASSERT . mX [ 84ULL ] = 1 ; out ->
mASSERT . mX [ 85ULL ] = 1 ; out -> mASSERT . mX [ 86ULL ] = 1 ; out ->
mASSERT . mX [ 87ULL ] = 1 ; out -> mASSERT . mX [ 88ULL ] = 1 ; out ->
mASSERT . mX [ 89ULL ] = 1 ; out -> mASSERT . mX [ 90ULL ] = 1 ; out ->
mASSERT . mX [ 91ULL ] = 1 ; out -> mASSERT . mX [ 92ULL ] = 1 ; out ->
mASSERT . mX [ 93ULL ] = 1 ; out -> mASSERT . mX [ 94ULL ] = 1 ; out ->
mASSERT . mX [ 95ULL ] = 1 ; out -> mASSERT . mX [ 96ULL ] = 1 ; out ->
mASSERT . mX [ 97ULL ] = 1 ; out -> mASSERT . mX [ 98ULL ] = 1 ; out ->
mASSERT . mX [ 99ULL ] = 1 ; out -> mASSERT . mX [ 100ULL ] = ( int32_T ) ( (
intrm_sf_mf_7 < 663.67513503334737 ) || ( intrm_sf_mf_7 > 80.0 ) ) ; out ->
mASSERT . mX [ 101ULL ] = 1 ; out -> mASSERT . mX [ 102ULL ] = 1 ; out ->
mASSERT . mX [ 103ULL ] = ( int32_T ) ( ( intrm_sf_mf_12 < 663.67513503334737
) || ( intrm_sf_mf_12 > 80.0 ) ) ; out -> mASSERT . mX [ 104ULL ] = 1 ; out
-> mASSERT . mX [ 105ULL ] = 1 ; out -> mASSERT . mX [ 106ULL ] = 1 ; out ->
mASSERT . mX [ 107ULL ] = 1 ; out -> mASSERT . mX [ 108ULL ] = 1 ; out ->
mASSERT . mX [ 109ULL ] = 1 ; out -> mASSERT . mX [ 110ULL ] = 1 ; out ->
mASSERT . mX [ 111ULL ] = 1 ; out -> mASSERT . mX [ 112ULL ] = 1 ; out ->
mASSERT . mX [ 113ULL ] = 1 ; out -> mASSERT . mX [ 114ULL ] = 1 ; out ->
mASSERT . mX [ 115ULL ] = 1 ; out -> mASSERT . mX [ 116ULL ] = 1 ; out ->
mASSERT . mX [ 117ULL ] = 1 ; out -> mASSERT . mX [ 118ULL ] = 1 ; out ->
mASSERT . mX [ 119ULL ] = 1 ; out -> mASSERT . mX [ 120ULL ] = 1 ; out ->
mASSERT . mX [ 121ULL ] = 1 ; out -> mASSERT . mX [ 122ULL ] = 1 ; out ->
mASSERT . mX [ 123ULL ] = 1 ; out -> mASSERT . mX [ 124ULL ] = 1 ; out ->
mASSERT . mX [ 125ULL ] = 1 ; out -> mASSERT . mX [ 126ULL ] = 1 ; out ->
mASSERT . mX [ 127ULL ] = 1 ; out -> mASSERT . mX [ 128ULL ] = 1 ; out ->
mASSERT . mX [ 129ULL ] = 1 ; out -> mASSERT . mX [ 130ULL ] = 1 ; out ->
mASSERT . mX [ 131ULL ] = 1 ; out -> mASSERT . mX [ 132ULL ] = 1 ; out ->
mASSERT . mX [ 133ULL ] = 1 ; out -> mASSERT . mX [ 134ULL ] = 1 ; out ->
mASSERT . mX [ 135ULL ] = 1 ; out -> mASSERT . mX [ 136ULL ] = 1 ; out ->
mASSERT . mX [ 137ULL ] = 1 ; out -> mASSERT . mX [ 138ULL ] = 1 ; out ->
mASSERT . mX [ 139ULL ] = 1 ; out -> mASSERT . mX [ 140ULL ] = 1 ; out ->
mASSERT . mX [ 141ULL ] = 1 ; out -> mASSERT . mX [ 142ULL ] = 1 ; out ->
mASSERT . mX [ 143ULL ] = 1 ; out -> mASSERT . mX [ 144ULL ] = 1 ; out ->
mASSERT . mX [ 145ULL ] = 1 ; out -> mASSERT . mX [ 146ULL ] = 1 ; out ->
mASSERT . mX [ 147ULL ] = 1 ; out -> mASSERT . mX [ 148ULL ] = 1 ; out ->
mASSERT . mX [ 149ULL ] = 1 ; out -> mASSERT . mX [ 150ULL ] = 1 ; out ->
mASSERT . mX [ 151ULL ] = 1 ; out -> mASSERT . mX [ 152ULL ] = 1 ; out ->
mASSERT . mX [ 153ULL ] = 1 ; out -> mASSERT . mX [ 154ULL ] = 1 ; out ->
mASSERT . mX [ 155ULL ] = 1 ; out -> mASSERT . mX [ 156ULL ] = 1 ; out ->
mASSERT . mX [ 157ULL ] = 1 ; out -> mASSERT . mX [ 158ULL ] = 1 ; out ->
mASSERT . mX [ 159ULL ] = ( int32_T ) ( intrm_sf_mf_55 != 0.0 ) ; out ->
mASSERT . mX [ 160ULL ] = ( int32_T ) ( 1000.0 - intrm_sf_mf_55 != 0.0 ) ;
out -> mASSERT . mX [ 161ULL ] = 1 ; out -> mASSERT . mX [ 162ULL ] = 1 ; out
-> mASSERT . mX [ 163ULL ] = ( int32_T ) ( ( ! ( ( ( ( ( - t7 -> mX . mX [
1ULL ] + t7 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t7 -> mX . mX [ 20ULL ] ) + t7
-> mX . mX [ 18ULL ] * 1.0E-6 ) + t7 -> mX . mX [ 19ULL ] * -
1.0000000000000011 ) + t7 -> mX . mX [ 17ULL ] > 0.0 ) ) || ( ( size_t ) t7
-> mQ . mX [ 0ULL ] == 1ULL ) || ( ( size_t ) t7 -> mQ . mX [ 0ULL ] == 2ULL
) || ( ( size_t ) t7 -> mQ . mX [ 0ULL ] == 3ULL ) || ( ( size_t ) t7 -> mQ .
mX [ 0ULL ] == 4ULL ) || ( t7 -> mD . mX [ 7ULL ] * 0.001 + 0.799999992 !=
0.0 ) ) ; out -> mASSERT . mX [ 164ULL ] = 1 ; out -> mASSERT . mX [ 165ULL ]
= 1 ; out -> mASSERT . mX [ 166ULL ] = ( int32_T ) ( ( ! ( - t7 -> mX . mX [
17ULL ] + t7 -> mX . mX [ 20ULL ] > 0.0 ) ) || ( ( size_t ) t7 -> mQ . mX [
1ULL ] == 1ULL ) || ( ( size_t ) t7 -> mQ . mX [ 1ULL ] == 2ULL ) || ( (
size_t ) t7 -> mQ . mX [ 1ULL ] == 3ULL ) || ( ( size_t ) t7 -> mQ . mX [
1ULL ] == 4ULL ) || ( t7 -> mD . mX [ 9ULL ] * 0.001 + 0.799999992 != 0.0 ) )
; out -> mASSERT . mX [ 167ULL ] = 1 ; out -> mASSERT . mX [ 168ULL ] = 1 ;
out -> mASSERT . mX [ 169ULL ] = ( int32_T ) ( ( ! ( ( ( ( - t7 -> mX . mX [
1ULL ] + t7 -> mX . mX [ 0ULL ] * - 1.0E-6 ) - t7 -> mX . mX [ 20ULL ] ) + t7
-> mX . mX [ 18ULL ] * 1.0E-6 ) + t7 -> mX . mX [ 19ULL ] * -
1.0000000000000011 > 0.0 ) ) || ( ( size_t ) t7 -> mQ . mX [ 2ULL ] == 1ULL )
|| ( ( size_t ) t7 -> mQ . mX [ 2ULL ] == 2ULL ) || ( ( size_t ) t7 -> mQ .
mX [ 2ULL ] == 3ULL ) || ( ( size_t ) t7 -> mQ . mX [ 2ULL ] == 4ULL ) || (
t7 -> mD . mX [ 11ULL ] * 0.001 + 0.799999992 != 0.0 ) ) ; out -> mASSERT .
mX [ 170ULL ] = 1 ; out -> mASSERT . mX [ 171ULL ] = 1 ; out -> mASSERT . mX
[ 172ULL ] = ( int32_T ) ( ( ! ( t7 -> mX . mX [ 20ULL ] > 0.0 ) ) || ( (
size_t ) t7 -> mQ . mX [ 3ULL ] == 1ULL ) || ( ( size_t ) t7 -> mQ . mX [
3ULL ] == 2ULL ) || ( ( size_t ) t7 -> mQ . mX [ 3ULL ] == 3ULL ) || ( (
size_t ) t7 -> mQ . mX [ 3ULL ] == 4ULL ) || ( t7 -> mD . mX [ 13ULL ] *
0.001 + 0.799999992 != 0.0 ) ) ; ( void ) sys ; ( void ) out ; return 0 ; }
