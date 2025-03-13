#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
#include "mrz_dda62cd9_1_ds_y.h"
#include "mrz_dda62cd9_1_ds.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T mrz_dda62cd9_1_ds_y ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t12 , NeDsMethodOutput * out ) { real_T
Voltage_Sensor12_V ; out -> mY . mX [ 0ULL ] = t12 -> mX . mX [ 23ULL ] *
1.0E-6 + t12 -> mX . mX [ 2ULL ] ; out -> mY . mX [ 1ULL ] = t12 -> mX . mX [
29ULL ] * 1.0E-6 + t12 -> mX . mX [ 6ULL ] ; Voltage_Sensor12_V = t12 -> mX .
mX [ 21ULL ] * 0.01 + t12 -> mX . mX [ 0ULL ] ; out -> mY . mX [ 3ULL ] = t12
-> mX . mX [ 22ULL ] * 0.01 + t12 -> mX . mX [ 1ULL ] ; out -> mY . mX [ 4ULL
] = ( - t12 -> mX . mX [ 38ULL ] + t12 -> mX . mX [ 37ULL ] ) - t12 -> mX .
mX [ 36ULL ] ; out -> mY . mX [ 5ULL ] = t12 -> mX . mX [ 34ULL ] ; out -> mY
. mX [ 8ULL ] = - t12 -> mX . mX [ 17ULL ] + t12 -> mX . mX [ 18ULL ] ; out
-> mY . mX [ 9ULL ] = t12 -> mX . mX [ 32ULL ] ; out -> mY . mX [ 11ULL ] = (
t12 -> mX . mX [ 0ULL ] * - 1.0E-12 + t12 -> mX . mX [ 21ULL ] * - 1.0E-14 )
+ t12 -> mX . mX [ 10ULL ] ; out -> mY . mX [ 2ULL ] = Voltage_Sensor12_V ;
out -> mY . mX [ 6ULL ] = t12 -> mX . mX [ 41ULL ] ; out -> mY . mX [ 7ULL ]
= t12 -> mX . mX [ 40ULL ] ; out -> mY . mX [ 10ULL ] = Voltage_Sensor12_V ;
out -> mY . mX [ 12ULL ] = t12 -> mX . mX [ 40ULL ] ; out -> mY . mX [ 13ULL
] = t12 -> mX . mX [ 39ULL ] ; out -> mY . mX [ 14ULL ] = t12 -> mX . mX [
41ULL ] ; out -> mY . mX [ 15ULL ] = t12 -> mX . mX [ 39ULL ] ; ( void ) sys
; ( void ) out ; return 0 ; }
