#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "mrz_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "mrz.h"
#include "mrz_capi.h"
#include "mrz_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"mrz/Pulse Generator2" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 0 } , { 1 ,
0 , TARGET_STRING ( "mrz/Gain" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1 }
, { 2 , 0 , TARGET_STRING ( "mrz/Gain1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 1 } , { 3 , 0 , TARGET_STRING ( "mrz/Saturation" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 2 } , { 4 , 0 , TARGET_STRING ( "mrz/Sine Wave" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 5 , 0 , TARGET_STRING (
"mrz/Ramp/Product" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 6 , 0 ,
TARGET_STRING ( "mrz/Ramp/Step" ) , TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 1
} , { 7 , 0 , TARGET_STRING ( "mrz/Ramp/Output" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 2 } , { 8 , 0 , TARGET_STRING ( "mrz/Ramp/Sum" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 9 , 0 , TARGET_STRING (
"mrz/Repeating Sequence/Look-Up Table1" ) , TARGET_STRING ( "" ) , 0 , 0 , 0
, 0 , 2 } , { 10 , 0 , TARGET_STRING (
"mrz/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 2 } , { 11 , 0 , TARGET_STRING (
"mrz/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 2 } , { 12 , 0 , TARGET_STRING (
"mrz/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 2 } , { 13 , 0 , TARGET_STRING (
"mrz/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 2 } , { 14 , 0 , TARGET_STRING (
"mrz/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) , TARGET_STRING ( "" ) , 0 ,
0 , 2 , 0 , 2 } , { 15 , 0 , TARGET_STRING (
"mrz/Solver Configuration/EVAL_KEY/STATE_1" ) , TARGET_STRING ( "" ) , 0 , 0
, 3 , 0 , 2 } , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_BlockParameters rtBlockParameters [ ] = { { 16 ,
TARGET_STRING ( "mrz/Ramp" ) , TARGET_STRING ( "slope" ) , 0 , 0 , 0 } , { 17
, TARGET_STRING ( "mrz/Ramp" ) , TARGET_STRING ( "start" ) , 0 , 0 , 0 } , {
18 , TARGET_STRING ( "mrz/Ramp" ) , TARGET_STRING ( "InitialOutput" ) , 0 , 0
, 0 } , { 19 , TARGET_STRING ( "mrz/Repeating Sequence" ) , TARGET_STRING (
"rep_seq_y" ) , 0 , 4 , 0 } , { 20 , TARGET_STRING ( "mrz/Pulse Generator2" )
, TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 21 , TARGET_STRING (
"mrz/Pulse Generator2" ) , TARGET_STRING ( "Period" ) , 0 , 0 , 0 } , { 22 ,
TARGET_STRING ( "mrz/Pulse Generator2" ) , TARGET_STRING ( "PulseWidth" ) , 0
, 0 , 0 } , { 23 , TARGET_STRING ( "mrz/Pulse Generator2" ) , TARGET_STRING (
"PhaseDelay" ) , 0 , 0 , 0 } , { 24 , TARGET_STRING ( "mrz/Gain" ) ,
TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 25 , TARGET_STRING ( "mrz/Gain1" )
, TARGET_STRING ( "Gain" ) , 0 , 0 , 0 } , { 26 , TARGET_STRING (
"mrz/Saturation" ) , TARGET_STRING ( "UpperLimit" ) , 0 , 0 , 0 } , { 27 ,
TARGET_STRING ( "mrz/Saturation" ) , TARGET_STRING ( "LowerLimit" ) , 0 , 0 ,
0 } , { 28 , TARGET_STRING ( "mrz/Sine Wave" ) , TARGET_STRING ( "Amplitude"
) , 0 , 0 , 0 } , { 29 , TARGET_STRING ( "mrz/Sine Wave" ) , TARGET_STRING (
"Bias" ) , 0 , 0 , 0 } , { 30 , TARGET_STRING ( "mrz/Sine Wave" ) ,
TARGET_STRING ( "Frequency" ) , 0 , 0 , 0 } , { 31 , TARGET_STRING (
"mrz/Sine Wave" ) , TARGET_STRING ( "Phase" ) , 0 , 0 , 0 } , { 32 ,
TARGET_STRING ( "mrz/Compare To Zero/Constant" ) , TARGET_STRING ( "Value" )
, 1 , 0 , 0 } , { 33 , TARGET_STRING ( "mrz/Compare To Zero1/Constant" ) ,
TARGET_STRING ( "Value" ) , 1 , 0 , 0 } , { 34 , TARGET_STRING (
"mrz/Ramp/Step" ) , TARGET_STRING ( "Before" ) , 0 , 0 , 0 } , { 35 ,
TARGET_STRING ( "mrz/Repeating Sequence/Constant" ) , TARGET_STRING ( "Value"
) , 0 , 0 , 0 } , { 36 , TARGET_STRING (
"mrz/Repeating Sequence/Look-Up Table1" ) , TARGET_STRING (
"BreakpointsForDimension1" ) , 0 , 4 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static const
rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 ,
0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { { 0 , 0 ,
( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . aqtgd423hn , & rtB . oowprsxy2x ,
& rtB . abzdytk1pf , & rtB . ksaz1bbmuy , & rtB . i3xyz3kjxa , & rtB .
elx4gn4sq3 , & rtB . ifrha4igj5 , & rtB . cqx0zb5ro1 , & rtB . jb4u2yifrj , &
rtB . dijpktxxg5 , & rtB . fo5pnop3iv [ 0 ] , & rtB . gdb3wbgzo5 [ 0 ] , &
rtB . mnoms1r00y [ 0 ] , & rtB . li5o4gitlq [ 0 ] , & rtB . fwy2vxyapw [ 0 ]
, & rtB . npcesp25b1 [ 0 ] , & rtP . Ramp_slope , & rtP . Ramp_start , & rtP
. Ramp_InitialOutput , & rtP . RepeatingSequence_rep_seq_y [ 0 ] , & rtP .
PulseGenerator2_Amp , & rtP . PulseGenerator2_Period , & rtP .
PulseGenerator2_Duty , & rtP . PulseGenerator2_PhaseDelay , & rtP . Gain_Gain
, & rtP . Gain1_Gain , & rtP . Saturation_UpperSat , & rtP .
Saturation_LowerSat , & rtP . SineWave_Amp , & rtP . SineWave_Bias , & rtP .
SineWave_Freq , & rtP . SineWave_Phase , & rtP . Constant_Value_g52i3c4nmp ,
& rtP . Constant_Value_otszzbjsj3 , & rtP . Step_Y0 , & rtP . Constant_Value
, & rtP . LookUpTable1_bp01Data [ 0 ] , } ; static int32_T * rtVarDimsAddrMap
[ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T )
SS_BOOLEAN , 0 , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } , { rtwCAPI_VECTOR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] = {
1 , 1 , 4 , 1 , 16 , 1 , 143 , 1 , 1 , 3 } ; static const real_T
rtcapiStoredFloats [ ] = { - 2.0 , 0.0 , 1.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 2 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 1 ]
, ( const void * ) & rtcapiStoredFloats [ 2 ] , ( int8_T ) 1 , ( uint8_T ) 0
} , { ( const void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) &
rtcapiStoredFloats [ 1 ] , ( int8_T ) 0 , ( uint8_T ) 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 16 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 21 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3417737163U , 3313404931U , 2695279267U , 775507009U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * mrz_GetCAPIStaticMap ( void ) { return &
mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void mrz_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void mrz_host_InitializeDataMapInfo ( mrz_host_DataMapInfo_T * dataMap ,
const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
