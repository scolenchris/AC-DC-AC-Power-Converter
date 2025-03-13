#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dxf.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T PowerElecCurriculumDesign_dda62cd9_1_ds_dxf ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t259 , NeDsMethodOutput * out ) { real_T
t66 [ 12 ] ; real_T t53 [ 7 ] ; real_T t67 [ 7 ] ; real_T t51 [ 5 ] ; real_T
t55 [ 5 ] ; real_T t64 [ 5 ] ; real_T t65 [ 5 ] ; real_T t76 [ 5 ] ; real_T
t52 [ 4 ] ; real_T t68 [ 4 ] ; real_T t69 [ 4 ] ; real_T t72 [ 4 ] ; real_T
t82 [ 4 ] ; real_T t84 [ 4 ] ; real_T intrm_sf_mf_44 ; real_T t1 ; real_T t10
; real_T t144 ; real_T t145 ; real_T t146 ; real_T t147 ; real_T t149 ;
real_T t167 ; real_T t168 ; real_T t169 ; real_T t196 ; real_T t197 ; real_T
t198 ; real_T t199 ; real_T t2 ; real_T t200 ; real_T t206 ; real_T t207 ;
real_T t208 ; real_T t228 ; real_T t231 ; real_T t232 ; real_T t234 ; real_T
t238 ; real_T t3 ; real_T t38 ; real_T t4 ; real_T t40 ; real_T t9 ; size_t
t114 ; t40 = ( t259 -> mX . mX [ 34ULL ] * 1.0E-6 + t259 -> mX . mX [ 8ULL ]
) * 1.602176487E-19 / 4.1186322001386077E-21 ; t146 = - t259 -> mX . mX [
13ULL ] * 38.921701457926758 ; t197 = - t259 -> mX . mX [ 12ULL ] *
38.921701457926758 ; t147 = 1.0 - - t259 -> mX . mX [ 12ULL ] /
15.448951451824009 ; t144 = - t259 -> mX . mX [ 14ULL ] * 38.921701457926758
; intrm_sf_mf_44 = - t259 -> mX . mX [ 11ULL ] * 38.921701457926758 ; t149 =
1.0 - - t259 -> mX . mX [ 11ULL ] / 15.448951451824009 ; t38 = ( t259 -> mX .
mX [ 32ULL ] * 1.0E-6 + t259 -> mX . mX [ 7ULL ] ) * 1.602176487E-19 /
4.1186322001386077E-21 ; if ( t259 -> mM . mX [ 41ULL ] != 0 ) { t198 = (
t144 - 39.0 ) * 2.3538526683701997E+17 ; } else if ( t259 -> mM . mX [ 42ULL
] != 0 ) { t198 = ( t144 + 40.0 ) * 1.1548224173015786E-17 ; } else { t198 =
pmf_exp ( t144 ) ; } if ( t259 -> mM . mX [ 43ULL ] != 0 ) { t145 = (
intrm_sf_mf_44 - 39.0 ) * 2.3538526683701997E+17 ; } else if ( t259 -> mM .
mX [ 44ULL ] != 0 ) { t145 = ( intrm_sf_mf_44 + 40.0 ) *
1.1548224173015786E-17 ; } else { t145 = pmf_exp ( intrm_sf_mf_44 ) ; } if (
t259 -> mM . mX [ 70ULL ] != 0 ) { t167 = 1.0 ; } else { t167 = t259 -> mM .
mX [ 71ULL ] != 0 ? 999.0 : t259 -> mU . mX [ 3ULL ] * 998.0 + 1.0 ; } if (
t259 -> mM . mX [ 37ULL ] != 0 ) { t168 = ( t146 - 39.0 ) *
2.3538526683701997E+17 ; } else if ( t259 -> mM . mX [ 38ULL ] != 0 ) { t168
= ( t146 + 40.0 ) * 1.1548224173015786E-17 ; } else { t168 = pmf_exp ( t146 )
; } if ( t259 -> mM . mX [ 39ULL ] != 0 ) { t169 = ( t197 - 39.0 ) *
2.3538526683701997E+17 ; } else if ( t259 -> mM . mX [ 40ULL ] != 0 ) { t169
= ( t197 + 40.0 ) * 1.1548224173015786E-17 ; } else { t169 = pmf_exp ( t197 )
; } t67 [ 0ULL ] = - 1.0E-15 ; t10 = 38.900693461923616 ; t196 =
3.890069346192361E-5 ; t1 = - 38.921701457926758 ; t2 = - 38.921701457926758
; t3 = - 38.921701457926758 ; t4 = - 38.921701457926758 ; t9 =
38.900693461923616 ; t199 = 3.890069346192361E-5 ; if ( t259 -> mM . mX [
41ULL ] != 0 ) { t200 = t3 * 2.3538526683701997E+17 ; } else if ( t259 -> mM
. mX [ 42ULL ] != 0 ) { t200 = t3 * 1.1548224173015786E-17 ; } else { t200 =
pmf_exp ( t144 ) * t3 ; } if ( t259 -> mM . mX [ 43ULL ] != 0 ) { t144 = t4 *
2.3538526683701997E+17 ; } else if ( t259 -> mM . mX [ 44ULL ] != 0 ) { t144
= t4 * 1.1548224173015786E-17 ; } else { t144 = pmf_exp ( intrm_sf_mf_44 ) *
t4 ; } if ( t259 -> mM . mX [ 37ULL ] != 0 ) { intrm_sf_mf_44 = t1 *
2.3538526683701997E+17 ; } else if ( t259 -> mM . mX [ 38ULL ] != 0 ) {
intrm_sf_mf_44 = t1 * 1.1548224173015786E-17 ; } else { intrm_sf_mf_44 =
pmf_exp ( t146 ) * t1 ; } if ( t259 -> mM . mX [ 39ULL ] != 0 ) { t146 = t2 *
2.3538526683701997E+17 ; } else if ( t259 -> mM . mX [ 40ULL ] != 0 ) { t146
= t2 * 1.1548224173015786E-17 ; } else { t146 = pmf_exp ( t197 ) * t2 ; } if
( t259 -> mM . mX [ 65ULL ] != 0 ) { t51 [ 1ULL ] = - 0.001 ; } else { t51 [
1ULL ] = - 1.0000000000000001E-11 ; } if ( ( size_t ) t259 -> mQ . mX [ 0ULL
] == 1ULL ) { t51 [ 2ULL ] = 1.00000000001 ; } else if ( ( size_t ) t259 ->
mQ . mX [ 0ULL ] == 2ULL ) { t51 [ 2ULL ] = 1.00000000001 ; } else if ( (
size_t ) t259 -> mQ . mX [ 0ULL ] == 3ULL ) { if ( t259 -> mM . mX [ 72ULL ]
!= 0 ) { t51 [ 2ULL ] = 1.001 ; } else { t51 [ 2ULL ] = 1.00000000001 ; } }
else if ( ( size_t ) t259 -> mQ . mX [ 0ULL ] == 4ULL ) { if ( t259 -> mM .
mX [ 72ULL ] != 0 ) { t51 [ 2ULL ] = 1.001 ; } else { t51 [ 2ULL ] =
1.00000000001 ; } } else if ( t259 -> mM . mX [ 73ULL ] != 0 ) { t206 = t259
-> mD . mX [ 7ULL ] * 0.001 + 0.799999992 ; t51 [ 2ULL ] = 1.0 - t259 -> mD .
mX [ 7ULL ] * - 1.0E-6 / ( t206 == 0.0 ? 1.0E-16 : t206 ) ; } else { t51 [
2ULL ] = 1.00000000001 ; } if ( ( size_t ) t259 -> mQ . mX [ 2ULL ] == 1ULL )
{ t51 [ 4ULL ] = 1.0000000000000001E-11 ; } else if ( ( size_t ) t259 -> mQ .
mX [ 2ULL ] == 2ULL ) { t51 [ 4ULL ] = 1.0000000000000001E-11 ; } else if ( (
size_t ) t259 -> mQ . mX [ 2ULL ] == 3ULL ) { if ( t259 -> mM . mX [ 76ULL ]
!= 0 ) { t51 [ 4ULL ] = 0.0009999999999999998 ; } else { t51 [ 4ULL ] =
1.0000000000000001E-11 ; } } else if ( ( size_t ) t259 -> mQ . mX [ 2ULL ] ==
4ULL ) { if ( t259 -> mM . mX [ 76ULL ] != 0 ) { t51 [ 4ULL ] =
0.0009999999999999998 ; } else { t51 [ 4ULL ] = 1.0000000000000001E-11 ; } }
else if ( t259 -> mM . mX [ 77ULL ] != 0 ) { t3 = t259 -> mD . mX [ 11ULL ] *
0.001 + 0.799999992 ; t51 [ 4ULL ] = - ( t259 -> mD . mX [ 11ULL ] * - 1.0E-6
/ ( t3 == 0.0 ? 1.0E-16 : t3 ) ) ; } else { t51 [ 4ULL ] =
1.0000000000000001E-11 ; } if ( t259 -> mM . mX [ 65ULL ] != 0 ) { t52 [ 1ULL
] = - 1000.0 ; } else { t52 [ 1ULL ] = - 1.0E-5 ; } if ( ( size_t ) t259 ->
mQ . mX [ 0ULL ] == 1ULL ) { t52 [ 2ULL ] = 1.0E-5 ; } else if ( ( size_t )
t259 -> mQ . mX [ 0ULL ] == 2ULL ) { t52 [ 2ULL ] = 1.0E-5 ; } else if ( (
size_t ) t259 -> mQ . mX [ 0ULL ] == 3ULL ) { if ( t259 -> mM . mX [ 72ULL ]
!= 0 ) { t52 [ 2ULL ] = 999.99999999999989 ; } else { t52 [ 2ULL ] = 1.0E-5 ;
} } else if ( ( size_t ) t259 -> mQ . mX [ 0ULL ] == 4ULL ) { if ( t259 -> mM
. mX [ 72ULL ] != 0 ) { t52 [ 2ULL ] = 999.99999999999989 ; } else { t52 [
2ULL ] = 1.0E-5 ; } } else if ( t259 -> mM . mX [ 73ULL ] != 0 ) { t3 = t259
-> mD . mX [ 7ULL ] * 0.001 + 0.799999992 ; t52 [ 2ULL ] = - ( - t259 -> mD .
mX [ 7ULL ] / ( t3 == 0.0 ? 1.0E-16 : t3 ) ) ; } else { t52 [ 2ULL ] = 1.0E-5
; } if ( ( size_t ) t259 -> mQ . mX [ 2ULL ] == 1ULL ) { t52 [ 3ULL ] =
1.0E-5 ; } else if ( ( size_t ) t259 -> mQ . mX [ 2ULL ] == 2ULL ) { t52 [
3ULL ] = 1.0E-5 ; } else if ( ( size_t ) t259 -> mQ . mX [ 2ULL ] == 3ULL ) {
if ( t259 -> mM . mX [ 76ULL ] != 0 ) { t52 [ 3ULL ] = 999.99999999999989 ; }
else { t52 [ 3ULL ] = 1.0E-5 ; } } else if ( ( size_t ) t259 -> mQ . mX [
2ULL ] == 4ULL ) { if ( t259 -> mM . mX [ 76ULL ] != 0 ) { t52 [ 3ULL ] =
999.99999999999989 ; } else { t52 [ 3ULL ] = 1.0E-5 ; } } else if ( t259 ->
mM . mX [ 77ULL ] != 0 ) { t3 = t259 -> mD . mX [ 11ULL ] * 0.001 +
0.799999992 ; t52 [ 3ULL ] = - ( - t259 -> mD . mX [ 11ULL ] / ( t3 == 0.0 ?
1.0E-16 : t3 ) ) ; } else { t52 [ 3ULL ] = 1.0E-5 ; } if ( t259 -> mM . mX [
66ULL ] != 0 ) { t53 [ 5ULL ] = - 1000.0 ; } else { t53 [ 5ULL ] = - 1.0E-5 ;
} if ( t259 -> mM . mX [ 68ULL ] != 0 ) { t53 [ 6ULL ] = - 1000.0 ; } else {
t53 [ 6ULL ] = - 1.0E-5 ; } if ( t38 > 80.0 ) { t206 = - ( t9 *
1.0055905568311664E-12 * 5.54062238439351E+34 ) ; } else if ( t259 -> mM . mX
[ 50ULL ] != 0 ) { t206 = - ( t9 * 1.0055905568311664E-12 *
4.9060947306492808E-35 ) ; } else { t206 = - ( pmf_exp ( t38 ) * t9 *
1.0055905568311664E-12 ) ; } if ( t40 > 80.0 ) { t9 = - ( t10 *
1.0055905568311664E-12 * 5.54062238439351E+34 ) ; } else if ( t259 -> mM . mX
[ 51ULL ] != 0 ) { t9 = - ( t10 * 1.0055905568311664E-12 *
4.9060947306492808E-35 ) ; } else { t9 = - ( pmf_exp ( t40 ) * t10 *
1.0055905568311664E-12 ) ; } if ( t259 -> mM . mX [ 65ULL ] != 0 ) { t55 [
4ULL ] = - 1000.0 ; } else { t55 [ 4ULL ] = - 1.0E-5 ; } if ( ( size_t ) t259
-> mQ . mX [ 0ULL ] == 1ULL ) { t207 = - 1.0E-5 ; } else if ( ( size_t ) t259
-> mQ . mX [ 0ULL ] == 2ULL ) { t207 = - 1.0E-5 ; } else if ( ( size_t ) t259
-> mQ . mX [ 0ULL ] == 3ULL ) { if ( t259 -> mM . mX [ 72ULL ] != 0 ) { t207
= - 999.99999999999989 ; } else { t207 = - 1.0E-5 ; } } else if ( ( size_t )
t259 -> mQ . mX [ 0ULL ] == 4ULL ) { if ( t259 -> mM . mX [ 72ULL ] != 0 ) {
t207 = - 999.99999999999989 ; } else { t207 = - 1.0E-5 ; } } else if ( t259
-> mM . mX [ 73ULL ] != 0 ) { t3 = t259 -> mD . mX [ 7ULL ] * 0.001 +
0.799999992 ; t207 = - ( t259 -> mD . mX [ 7ULL ] / ( t3 == 0.0 ? 1.0E-16 :
t3 ) ) ; } else { t207 = - 1.0E-5 ; } if ( ( size_t ) t259 -> mQ . mX [ 1ULL
] == 1ULL ) { t208 = 1.0E-5 ; } else if ( ( size_t ) t259 -> mQ . mX [ 1ULL ]
== 2ULL ) { t208 = 1.0E-5 ; } else if ( ( size_t ) t259 -> mQ . mX [ 1ULL ]
== 3ULL ) { if ( t259 -> mM . mX [ 74ULL ] != 0 ) { t208 = 999.99999999999989
; } else { t208 = 1.0E-5 ; } } else if ( ( size_t ) t259 -> mQ . mX [ 1ULL ]
== 4ULL ) { if ( t259 -> mM . mX [ 74ULL ] != 0 ) { t208 = 999.99999999999989
; } else { t208 = 1.0E-5 ; } } else if ( t259 -> mM . mX [ 75ULL ] != 0 ) {
t3 = t259 -> mD . mX [ 9ULL ] * 0.001 + 0.799999992 ; t208 = - ( - t259 -> mD
. mX [ 9ULL ] / ( t3 == 0.0 ? 1.0E-16 : t3 ) ) ; } else { t208 = 1.0E-5 ; }
if ( t259 -> mM . mX [ 65ULL ] != 0 ) { t64 [ 2ULL ] = 1.001 ; } else { t64 [
2ULL ] = 1.00000000001 ; } if ( ( size_t ) t259 -> mQ . mX [ 0ULL ] == 1ULL )
{ t64 [ 3ULL ] = - 1.0000000000000001E-11 ; } else if ( ( size_t ) t259 -> mQ
. mX [ 0ULL ] == 2ULL ) { t64 [ 3ULL ] = - 1.0000000000000001E-11 ; } else if
( ( size_t ) t259 -> mQ . mX [ 0ULL ] == 3ULL ) { if ( t259 -> mM . mX [
72ULL ] != 0 ) { t64 [ 3ULL ] = - 0.0009999999999999998 ; } else { t64 [ 3ULL
] = - 1.0000000000000001E-11 ; } } else if ( ( size_t ) t259 -> mQ . mX [
0ULL ] == 4ULL ) { if ( t259 -> mM . mX [ 72ULL ] != 0 ) { t64 [ 3ULL ] = -
0.0009999999999999998 ; } else { t64 [ 3ULL ] = - 1.0000000000000001E-11 ; }
} else if ( t259 -> mM . mX [ 73ULL ] != 0 ) { t3 = t259 -> mD . mX [ 7ULL ]
* 0.001 + 0.799999992 ; t64 [ 3ULL ] = - ( t259 -> mD . mX [ 7ULL ] * 1.0E-6
/ ( t3 == 0.0 ? 1.0E-16 : t3 ) ) ; } else { t64 [ 3ULL ] = -
1.0000000000000001E-11 ; } if ( ( size_t ) t259 -> mQ . mX [ 2ULL ] == 1ULL )
{ t64 [ 4ULL ] = - 1.0000000000000001E-11 ; } else if ( ( size_t ) t259 -> mQ
. mX [ 2ULL ] == 2ULL ) { t64 [ 4ULL ] = - 1.0000000000000001E-11 ; } else if
( ( size_t ) t259 -> mQ . mX [ 2ULL ] == 3ULL ) { if ( t259 -> mM . mX [
76ULL ] != 0 ) { t64 [ 4ULL ] = - 0.0009999999999999998 ; } else { t64 [ 4ULL
] = - 1.0000000000000001E-11 ; } } else if ( ( size_t ) t259 -> mQ . mX [
2ULL ] == 4ULL ) { if ( t259 -> mM . mX [ 76ULL ] != 0 ) { t64 [ 4ULL ] = -
0.0009999999999999998 ; } else { t64 [ 4ULL ] = - 1.0000000000000001E-11 ; }
} else if ( t259 -> mM . mX [ 77ULL ] != 0 ) { t234 = t259 -> mD . mX [ 11ULL
] * 0.001 + 0.799999992 ; t64 [ 4ULL ] = - ( t259 -> mD . mX [ 11ULL ] *
1.0E-6 / ( t234 == 0.0 ? 1.0E-16 : t234 ) ) ; } else { t64 [ 4ULL ] = -
1.0000000000000001E-11 ; } if ( t259 -> mM . mX [ 65ULL ] != 0 ) { t65 [ 1ULL
] = - 1.1102230246251565E-12 ; } else { t65 [ 1ULL ] = -
1.1102230246251566E-20 ; } if ( ( size_t ) t259 -> mQ . mX [ 0ULL ] == 1ULL )
{ t65 [ 2ULL ] = 1.0001000000000013E-5 ; } else if ( ( size_t ) t259 -> mQ .
mX [ 0ULL ] == 2ULL ) { t65 [ 2ULL ] = 1.0001000000000013E-5 ; } else if ( (
size_t ) t259 -> mQ . mX [ 0ULL ] == 3ULL ) { if ( t259 -> mM . mX [ 72ULL ]
!= 0 ) { t65 [ 2ULL ] = 1000.000000001001 ; } else { t65 [ 2ULL ] =
1.0001000000000013E-5 ; } } else if ( ( size_t ) t259 -> mQ . mX [ 0ULL ] ==
4ULL ) { if ( t259 -> mM . mX [ 72ULL ] != 0 ) { t65 [ 2ULL ] =
1000.000000001001 ; } else { t65 [ 2ULL ] = 1.0001000000000013E-5 ; } } else
if ( t259 -> mM . mX [ 73ULL ] != 0 ) { t238 = t259 -> mD . mX [ 7ULL ] *
0.001 + 0.799999992 ; t65 [ 2ULL ] = 1.0E-9 - t259 -> mD . mX [ 7ULL ] * -
1.0000000000000011 / ( t238 == 0.0 ? 1.0E-16 : t238 ) ; } else { t65 [ 2ULL ]
= 1.0001000000000013E-5 ; } if ( ( size_t ) t259 -> mQ . mX [ 2ULL ] == 1ULL
) { t65 [ 4ULL ] = 1.0000000000000013E-5 ; } else if ( ( size_t ) t259 -> mQ
. mX [ 2ULL ] == 2ULL ) { t65 [ 4ULL ] = 1.0000000000000013E-5 ; } else if (
( size_t ) t259 -> mQ . mX [ 2ULL ] == 3ULL ) { if ( t259 -> mM . mX [ 76ULL
] != 0 ) { t65 [ 4ULL ] = 1000.000000000001 ; } else { t65 [ 4ULL ] =
1.0000000000000013E-5 ; } } else if ( ( size_t ) t259 -> mQ . mX [ 2ULL ] ==
4ULL ) { if ( t259 -> mM . mX [ 76ULL ] != 0 ) { t65 [ 4ULL ] =
1000.000000000001 ; } else { t65 [ 4ULL ] = 1.0000000000000013E-5 ; } } else
if ( t259 -> mM . mX [ 77ULL ] != 0 ) { t3 = t259 -> mD . mX [ 11ULL ] *
0.001 + 0.799999992 ; t65 [ 4ULL ] = - ( t259 -> mD . mX [ 11ULL ] * -
1.0000000000000011 / ( t3 == 0.0 ? 1.0E-16 : t3 ) ) ; } else { t65 [ 4ULL ] =
1.0000000000000013E-5 ; } if ( t259 -> mM . mX [ 66ULL ] != 0 ) { t66 [ 4ULL
] = - 1000.0 ; } else { t66 [ 4ULL ] = - 1.0E-5 ; } if ( t259 -> mM . mX [
67ULL ] != 0 ) { t66 [ 5ULL ] = 1000.0 ; } else { t66 [ 5ULL ] = 1.0E-5 ; }
if ( t259 -> mM . mX [ 68ULL ] != 0 ) { t66 [ 6ULL ] = - 1000.0 ; } else {
t66 [ 6ULL ] = - 1.0E-5 ; } if ( t259 -> mM . mX [ 69ULL ] != 0 ) { t66 [
7ULL ] = 1000.0 ; } else { t66 [ 7ULL ] = 1.0E-5 ; } if ( ( size_t ) t259 ->
mQ . mX [ 0ULL ] == 1ULL ) { t66 [ 8ULL ] = 1.0E-5 ; } else if ( ( size_t )
t259 -> mQ . mX [ 0ULL ] == 2ULL ) { t66 [ 8ULL ] = 1.0E-5 ; } else if ( (
size_t ) t259 -> mQ . mX [ 0ULL ] == 3ULL ) { if ( t259 -> mM . mX [ 72ULL ]
!= 0 ) { t66 [ 8ULL ] = 999.99999999999989 ; } else { t66 [ 8ULL ] = 1.0E-5 ;
} } else if ( ( size_t ) t259 -> mQ . mX [ 0ULL ] == 4ULL ) { if ( t259 -> mM
. mX [ 72ULL ] != 0 ) { t66 [ 8ULL ] = 999.99999999999989 ; } else { t66 [
8ULL ] = 1.0E-5 ; } } else if ( t259 -> mM . mX [ 73ULL ] != 0 ) { t3 = t259
-> mD . mX [ 7ULL ] * 0.001 + 0.799999992 ; t66 [ 8ULL ] = - ( - t259 -> mD .
mX [ 7ULL ] / ( t3 == 0.0 ? 1.0E-16 : t3 ) ) ; } else { t66 [ 8ULL ] = 1.0E-5
; } if ( ( size_t ) t259 -> mQ . mX [ 1ULL ] == 1ULL ) { t66 [ 9ULL ] = -
1.0E-5 ; } else if ( ( size_t ) t259 -> mQ . mX [ 1ULL ] == 2ULL ) { t66 [
9ULL ] = - 1.0E-5 ; } else if ( ( size_t ) t259 -> mQ . mX [ 1ULL ] == 3ULL )
{ if ( t259 -> mM . mX [ 74ULL ] != 0 ) { t66 [ 9ULL ] = - 999.99999999999989
; } else { t66 [ 9ULL ] = - 1.0E-5 ; } } else if ( ( size_t ) t259 -> mQ . mX
[ 1ULL ] == 4ULL ) { if ( t259 -> mM . mX [ 74ULL ] != 0 ) { t66 [ 9ULL ] = -
999.99999999999989 ; } else { t66 [ 9ULL ] = - 1.0E-5 ; } } else if ( t259 ->
mM . mX [ 75ULL ] != 0 ) { t3 = t259 -> mD . mX [ 9ULL ] * 0.001 +
0.799999992 ; t66 [ 9ULL ] = - ( t259 -> mD . mX [ 9ULL ] / ( t3 == 0.0 ?
1.0E-16 : t3 ) ) ; } else { t66 [ 9ULL ] = - 1.0E-5 ; } if ( ( size_t ) t259
-> mQ . mX [ 2ULL ] == 1ULL ) { t66 [ 10ULL ] = 1.0E-5 ; } else if ( ( size_t
) t259 -> mQ . mX [ 2ULL ] == 2ULL ) { t66 [ 10ULL ] = 1.0E-5 ; } else if ( (
size_t ) t259 -> mQ . mX [ 2ULL ] == 3ULL ) { if ( t259 -> mM . mX [ 76ULL ]
!= 0 ) { t66 [ 10ULL ] = 999.99999999999989 ; } else { t66 [ 10ULL ] = 1.0E-5
; } } else if ( ( size_t ) t259 -> mQ . mX [ 2ULL ] == 4ULL ) { if ( t259 ->
mM . mX [ 76ULL ] != 0 ) { t66 [ 10ULL ] = 999.99999999999989 ; } else { t66
[ 10ULL ] = 1.0E-5 ; } } else if ( t259 -> mM . mX [ 77ULL ] != 0 ) { t3 =
t259 -> mD . mX [ 11ULL ] * 0.001 + 0.799999992 ; t66 [ 10ULL ] = - ( - t259
-> mD . mX [ 11ULL ] / ( t3 == 0.0 ? 1.0E-16 : t3 ) ) ; } else { t66 [ 10ULL
] = 1.0E-5 ; } if ( ( size_t ) t259 -> mQ . mX [ 3ULL ] == 1ULL ) { t66 [
11ULL ] = - 1.0E-5 ; } else if ( ( size_t ) t259 -> mQ . mX [ 3ULL ] == 2ULL
) { t66 [ 11ULL ] = - 1.0E-5 ; } else if ( ( size_t ) t259 -> mQ . mX [ 3ULL
] == 3ULL ) { if ( t259 -> mM . mX [ 78ULL ] != 0 ) { t66 [ 11ULL ] = -
999.99999999999989 ; } else { t66 [ 11ULL ] = - 1.0E-5 ; } } else if ( (
size_t ) t259 -> mQ . mX [ 3ULL ] == 4ULL ) { if ( t259 -> mM . mX [ 78ULL ]
!= 0 ) { t66 [ 11ULL ] = - 999.99999999999989 ; } else { t66 [ 11ULL ] = -
1.0E-5 ; } } else if ( t259 -> mM . mX [ 79ULL ] != 0 ) { t3 = t259 -> mD .
mX [ 13ULL ] * 0.001 + 0.799999992 ; t66 [ 11ULL ] = - ( t259 -> mD . mX [
13ULL ] / ( t3 == 0.0 ? 1.0E-16 : t3 ) ) ; } else { t66 [ 11ULL ] = - 1.0E-5
; } if ( t259 -> mM . mX [ 66ULL ] != 0 ) { t67 [ 5ULL ] = - 0.001 ; } else {
t67 [ 5ULL ] = - 1.0000000000000001E-11 ; } if ( t259 -> mM . mX [ 68ULL ] !=
0 ) { t67 [ 6ULL ] = - 0.001 ; } else { t67 [ 6ULL ] = -
1.0000000000000001E-11 ; } if ( t259 -> mM . mX [ 68ULL ] != 0 ) { t68 [ 2ULL
] = 1000.0 ; } else { t68 [ 2ULL ] = 1.0E-5 ; } if ( t259 -> mM . mX [ 69ULL
] != 0 ) { t68 [ 3ULL ] = - 1000.0 ; } else { t68 [ 3ULL ] = - 1.0E-5 ; } if
( t259 -> mM . mX [ 66ULL ] != 0 ) { t69 [ 2ULL ] = 1000.0 ; } else { t69 [
2ULL ] = 1.0E-5 ; } if ( t259 -> mM . mX [ 67ULL ] != 0 ) { t69 [ 3ULL ] = -
1000.0 ; } else { t69 [ 3ULL ] = - 1.0E-5 ; } if ( t259 -> mM . mX [ 63ULL ]
!= 0 ) { t228 = 0.0 ; } else if ( t259 -> mM . mX [ 64ULL ] != 0 ) { t228 =
0.0 ; } else { t228 = - 1.0E+6 ; } if ( t259 -> mM . mX [ 61ULL ] != 0 ) {
t72 [ 0ULL ] = 0.0 ; } else if ( t259 -> mM . mX [ 62ULL ] != 0 ) { t72 [
0ULL ] = 0.0 ; } else { t72 [ 0ULL ] = 1.0E+6 ; } if ( t259 -> mM . mX [
63ULL ] != 0 ) { t72 [ 1ULL ] = 0.0 ; } else if ( t259 -> mM . mX [ 64ULL ]
!= 0 ) { t72 [ 1ULL ] = 0.0 ; } else { t72 [ 1ULL ] = 1.0E+6 ; } if ( t259 ->
mM . mX [ 61ULL ] != 0 ) { t231 = 0.0 ; } else if ( t259 -> mM . mX [ 62ULL ]
!= 0 ) { t231 = 0.0 ; } else { t231 = - 1.0E+6 ; } if ( t38 > 80.0 ) { t232 =
- 1.0 - t199 * 1.0055905568311664E-12 * 5.54062238439351E+34 ; } else if (
t259 -> mM . mX [ 50ULL ] != 0 ) { t232 = - 1.0 - t199 *
1.0055905568311664E-12 * 4.9060947306492808E-35 ; } else { t232 = - 1.0 -
pmf_exp ( t38 ) * t199 * 1.0055905568311664E-12 ; } if ( t40 > 80.0 ) { t38 =
- 1.0 - t196 * 1.0055905568311664E-12 * 5.54062238439351E+34 ; } else if (
t259 -> mM . mX [ 51ULL ] != 0 ) { t38 = - 1.0 - t196 *
1.0055905568311664E-12 * 4.9060947306492808E-35 ; } else { t38 = - 1.0 -
pmf_exp ( t40 ) * t196 * 1.0055905568311664E-12 ; } if ( t259 -> mM . mX [
52ULL ] != 0 ) { t3 = 1.0 ; } else { t3 = ( real_T ) ( t259 -> mM . mX [
53ULL ] != 0 ) ; } if ( t259 -> mM . mX [ 54ULL ] != 0 ) { t40 = 1.0 ; } else
{ t40 = ( real_T ) ( t259 -> mM . mX [ 55ULL ] != 0 ) ; } if ( t259 -> mM .
mX [ 65ULL ] != 0 ) { t76 [ 4ULL ] = - 0.001 ; } else { t76 [ 4ULL ] = -
1.0000000000000001E-11 ; } if ( t259 -> mM . mX [ 52ULL ] != 0 ) { t199 = -
0.3 ; } else { t199 = t259 -> mM . mX [ 53ULL ] != 0 ? - 1.0 : 1.0 ; } if (
t259 -> mM . mX [ 52ULL ] != 0 ) { t197 = - 1.0 ; } else { t197 = t259 -> mM
. mX [ 53ULL ] != 0 ? - 5.0E-15 : 0.0 ; } if ( t259 -> mM . mX [ 52ULL ] != 0
) { t234 = 0.0 ; } else { t234 = t259 -> mM . mX [ 53ULL ] != 0 ? - 5.0E-15 :
- 1.0 ; } if ( t259 -> mM . mX [ 52ULL ] != 0 ) { t1 = 1.0 ; } else { t1 =
t259 -> mM . mX [ 53ULL ] != 0 ? - 1.0 : - 0.3 ; } if ( t259 -> mM . mX [
54ULL ] != 0 ) { t2 = - 0.3 ; } else { t2 = t259 -> mM . mX [ 55ULL ] != 0 ?
- 1.0 : 1.0 ; } if ( t259 -> mM . mX [ 54ULL ] != 0 ) { t4 = - 1.0 ; } else {
t4 = t259 -> mM . mX [ 55ULL ] != 0 ? - 5.0E-15 : 0.0 ; } if ( t259 -> mM .
mX [ 54ULL ] != 0 ) { t238 = 0.0 ; } else { t238 = t259 -> mM . mX [ 55ULL ]
!= 0 ? - 5.0E-15 : - 1.0 ; } if ( t259 -> mM . mX [ 54ULL ] != 0 ) { t10 =
1.0 ; } else { t10 = t259 -> mM . mX [ 55ULL ] != 0 ? - 1.0 : - 0.3 ; } t51 [
0ULL ] = - 1.0E-6 ; t51 [ 3ULL ] = 1.0 ; t52 [ 0ULL ] = - 1.0 ; t53 [ 0ULL ]
= - 1.0E-9 ; t53 [ 1ULL ] = - 1.0 ; t53 [ 2ULL ] = 1.0E-9 ; t53 [ 3ULL ] = -
1.0 ; t53 [ 4ULL ] = 1.0E-9 ; t55 [ 0ULL ] = 1.0 ; t55 [ 1ULL ] = - 1.0E-9 ;
t55 [ 2ULL ] = 1.0E-9 ; t55 [ 3ULL ] = 1.0E-9 ; t64 [ 0ULL ] = - 1.0 ; t64 [
1ULL ] = 1.0E-6 ; t65 [ 0ULL ] = - 1.0000000000000011 ; t65 [ 3ULL ] = 1.0E-9
; t66 [ 0ULL ] = - 1.0 ; t66 [ 1ULL ] = - 1.0 ; t66 [ 2ULL ] = 1.0 ; t66 [
3ULL ] = 1.0 ; t67 [ 1ULL ] = - 1.0E-6 ; t67 [ 2ULL ] = 1.0000000000000011 ;
t67 [ 3ULL ] = - 1.0E-6 ; t67 [ 4ULL ] = 1.0000000000000011 ; t68 [ 0ULL ] =
1.0 ; t68 [ 1ULL ] = - 1.0 ; t69 [ 0ULL ] = 1.0 ; t69 [ 1ULL ] = - 1.0 ; t72
[ 2ULL ] = - ( - 1.0 / ( t167 == 0.0 ? 1.0E-16 : t167 ) ) ; t72 [ 3ULL ] = -
( - 1.0 / ( 1000.0 - t167 == 0.0 ? 1.0E-16 : 1000.0 - t167 ) ) ; t76 [ 0ULL ]
= 1.0E-6 ; t76 [ 1ULL ] = - 1.0000000000000011 ; t76 [ 2ULL ] = 1.0E-15 ; t76
[ 3ULL ] = 1.0E-15 ; t82 [ 0ULL ] = - 1.0 ; t82 [ 1ULL ] = 1.0 ; t82 [ 2ULL ]
= - 1.0 ; t82 [ 3ULL ] = 1.0 ; t84 [ 0ULL ] = 1.0 ; t84 [ 1ULL ] = 1.0 ; t84
[ 2ULL ] = - 1.0 ; t84 [ 3ULL ] = 1.0 ; for ( t114 = 0ULL ; t114 < 5ULL ;
t114 ++ ) { out -> mDXF . mX [ t114 ] = t51 [ t114 ] ; } for ( t114 = 0ULL ;
t114 < 4ULL ; t114 ++ ) { out -> mDXF . mX [ t114 + 5ULL ] = t52 [ t114 ] ; }
for ( t114 = 0ULL ; t114 < 7ULL ; t114 ++ ) { out -> mDXF . mX [ t114 + 9ULL
] = t53 [ t114 ] ; } out -> mDXF . mX [ 16ULL ] = 1.0 ; out -> mDXF . mX [
17ULL ] = - 1.0 ; out -> mDXF . mX [ 18ULL ] = t206 ; out -> mDXF . mX [
19ULL ] = t9 ; for ( t114 = 0ULL ; t114 < 5ULL ; t114 ++ ) { out -> mDXF . mX
[ t114 + 20ULL ] = t55 [ t114 ] ; } out -> mDXF . mX [ 25ULL ] = 1.0 ; out ->
mDXF . mX [ 26ULL ] = - 1.0 ; out -> mDXF . mX [ 27ULL ] = - 1.0 ; out ->
mDXF . mX [ 28ULL ] = 1.0 ; out -> mDXF . mX [ 29ULL ] = - ( ( ( - t144 *
t149 + ( t198 - t145 ) * 0.064729312090752486 ) - t144 ) *
1.9907674850572683E-11 ) ; out -> mDXF . mX [ 30ULL ] = - ( t144 *
1.9907674850572683E-11 ) ; out -> mDXF . mX [ 31ULL ] = 1.0 ; out -> mDXF .
mX [ 32ULL ] = - ( ( ( - t146 * t147 + ( t168 - t169 ) * 0.064729312090752486
) - t146 ) * 1.9907674850572683E-11 ) ; out -> mDXF . mX [ 33ULL ] = - ( t146
* 1.9907674850572683E-11 ) ; out -> mDXF . mX [ 34ULL ] = - ( intrm_sf_mf_44
* t147 * 1.9907674850572683E-11 ) ; out -> mDXF . mX [ 35ULL ] = - (
intrm_sf_mf_44 * 2.5739080686533654E-13 ) ; out -> mDXF . mX [ 36ULL ] = - (
t200 * t149 * 1.9907674850572683E-11 ) ; out -> mDXF . mX [ 37ULL ] = - (
t200 * 2.5739080686533654E-13 ) ; out -> mDXF . mX [ 38ULL ] = - 1.0 ; out ->
mDXF . mX [ 39ULL ] = 1.0 ; out -> mDXF . mX [ 40ULL ] = - 1.0 ; out -> mDXF
. mX [ 41ULL ] = 1.0 ; out -> mDXF . mX [ 42ULL ] = t207 ; out -> mDXF . mX [
43ULL ] = t208 ; for ( t114 = 0ULL ; t114 < 5ULL ; t114 ++ ) { out -> mDXF .
mX [ t114 + 44ULL ] = t64 [ t114 ] ; } for ( t114 = 0ULL ; t114 < 5ULL ; t114
++ ) { out -> mDXF . mX [ t114 + 49ULL ] = t65 [ t114 ] ; } for ( t114 = 0ULL
; t114 < 12ULL ; t114 ++ ) { out -> mDXF . mX [ t114 + 54ULL ] = t66 [ t114 ]
; } for ( t114 = 0ULL ; t114 < 7ULL ; t114 ++ ) { out -> mDXF . mX [ t114 +
66ULL ] = t67 [ t114 ] ; } for ( t114 = 0ULL ; t114 < 4ULL ; t114 ++ ) { out
-> mDXF . mX [ t114 + 73ULL ] = t68 [ t114 ] ; } for ( t114 = 0ULL ; t114 <
4ULL ; t114 ++ ) { out -> mDXF . mX [ t114 + 77ULL ] = t69 [ t114 ] ; } out
-> mDXF . mX [ 81ULL ] = 1.0E-9 ; out -> mDXF . mX [ 82ULL ] = -
9.9999999947364415E-10 ; out -> mDXF . mX [ 83ULL ] = 1.0 ; out -> mDXF . mX
[ 84ULL ] = t228 ; out -> mDXF . mX [ 85ULL ] = 1.0 ; for ( t114 = 0ULL ;
t114 < 4ULL ; t114 ++ ) { out -> mDXF . mX [ t114 + 86ULL ] = t72 [ t114 ] ;
} out -> mDXF . mX [ 90ULL ] = - 0.01 ; out -> mDXF . mX [ 91ULL ] = 1.0 ;
out -> mDXF . mX [ 92ULL ] = t231 ; out -> mDXF . mX [ 93ULL ] = 1.0 ; out ->
mDXF . mX [ 94ULL ] = - 0.01 ; out -> mDXF . mX [ 95ULL ] = t232 ; out ->
mDXF . mX [ 96ULL ] = t38 ; out -> mDXF . mX [ 97ULL ] = t3 ; out -> mDXF .
mX [ 98ULL ] = - 1.00005 ; out -> mDXF . mX [ 99ULL ] = ( real_T ) ( t259 ->
mM . mX [ 52ULL ] == 0 ) ; out -> mDXF . mX [ 100ULL ] = t40 ; out -> mDXF .
mX [ 101ULL ] = - 1.00005 ; out -> mDXF . mX [ 102ULL ] = ( real_T ) ( t259
-> mM . mX [ 54ULL ] == 0 ) ; for ( t114 = 0ULL ; t114 < 5ULL ; t114 ++ ) {
out -> mDXF . mX [ t114 + 103ULL ] = t76 [ t114 ] ; } out -> mDXF . mX [
108ULL ] = t259 -> mM . mX [ 49ULL ] != 0 ? - 1.0 : - 0.3 ; out -> mDXF . mX
[ 109ULL ] = t259 -> mM . mX [ 49ULL ] != 0 ? - 1.0E-8 : - 1.0 ; out -> mDXF
. mX [ 110ULL ] = t199 ; out -> mDXF . mX [ 111ULL ] = t197 ; out -> mDXF .
mX [ 112ULL ] = t234 ; out -> mDXF . mX [ 113ULL ] = t1 ; out -> mDXF . mX [
114ULL ] = t2 ; out -> mDXF . mX [ 115ULL ] = t4 ; out -> mDXF . mX [ 116ULL
] = t238 ; out -> mDXF . mX [ 117ULL ] = t10 ; for ( t114 = 0ULL ; t114 <
4ULL ; t114 ++ ) { out -> mDXF . mX [ t114 + 118ULL ] = t82 [ t114 ] ; } out
-> mDXF . mX [ 122ULL ] = 1.0 ; out -> mDXF . mX [ 123ULL ] = 1.0 ; for (
t114 = 0ULL ; t114 < 4ULL ; t114 ++ ) { out -> mDXF . mX [ t114 + 124ULL ] =
t84 [ t114 ] ; } out -> mDXF . mX [ 128ULL ] = t259 -> mM . mX [ 56ULL ] != 0
? - 1.0 : - 0.3 ; out -> mDXF . mX [ 129ULL ] = t259 -> mM . mX [ 56ULL ] !=
0 ? - 1.0E-8 : - 1.0 ; out -> mDXF . mX [ 130ULL ] = t259 -> mM . mX [ 57ULL
] != 0 ? - 1.0 : - 0.3 ; out -> mDXF . mX [ 131ULL ] = t259 -> mM . mX [
57ULL ] != 0 ? - 1.0E-8 : - 1.0 ; out -> mDXF . mX [ 132ULL ] = 1.0 ; out ->
mDXF . mX [ 133ULL ] = 1.0 ; out -> mDXF . mX [ 134ULL ] = t259 -> mM . mX [
58ULL ] != 0 ? - 1.0 : - 0.3 ; out -> mDXF . mX [ 135ULL ] = t259 -> mM . mX
[ 58ULL ] != 0 ? - 1.0E-8 : - 1.0 ; out -> mDXF . mX [ 136ULL ] = 1.0 ; out
-> mDXF . mX [ 137ULL ] = 1.0 ; out -> mDXF . mX [ 138ULL ] = t259 -> mM . mX
[ 59ULL ] != 0 ? - 1.0 : - 0.3 ; out -> mDXF . mX [ 139ULL ] = t259 -> mM .
mX [ 59ULL ] != 0 ? - 1.0E-8 : - 1.0 ; out -> mDXF . mX [ 140ULL ] = 1.0 ;
out -> mDXF . mX [ 141ULL ] = - 1.0 ; out -> mDXF . mX [ 142ULL ] = - 1.0 ;
out -> mDXF . mX [ 143ULL ] = t259 -> mM . mX [ 60ULL ] != 0 ? - 1.0 : - 0.3
; out -> mDXF . mX [ 144ULL ] = t259 -> mM . mX [ 60ULL ] != 0 ? - 1.0E-8 : -
1.0 ; out -> mDXF . mX [ 145ULL ] = 1.0 ; out -> mDXF . mX [ 146ULL ] = 1.0 ;
( void ) sys ; ( void ) out ; return 0 ; }
