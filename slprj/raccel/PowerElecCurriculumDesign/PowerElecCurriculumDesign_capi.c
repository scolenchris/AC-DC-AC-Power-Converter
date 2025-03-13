#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "PowerElecCurriculumDesign_capi_host.h"
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
#include "PowerElecCurriculumDesign.h"
#include "PowerElecCurriculumDesign_capi.h"
#include "PowerElecCurriculumDesign_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"PowerElecCurriculumDesign/Data Type Conversion" ) , TARGET_STRING ( "" ) , 0
, 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING (
"PowerElecCurriculumDesign/Data Type Conversion1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 0 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"PowerElecCurriculumDesign/Pulse Generator" ) , TARGET_STRING ( "" ) , 0 , 0
, 0 , 0 , 1 } , { 3 , 0 , TARGET_STRING (
"PowerElecCurriculumDesign/Sine Wave" ) , TARGET_STRING ( "modulator" ) , 0 ,
0 , 0 , 0 , 2 } , { 4 , 0 , TARGET_STRING (
"PowerElecCurriculumDesign/Repeating Sequence/Output" ) , TARGET_STRING ( ""
) , 0 , 0 , 0 , 0 , 2 } , { 5 , 0 , TARGET_STRING (
"PowerElecCurriculumDesign/Solver Configuration/EVAL_KEY/INPUT_1_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 6 , 0 , TARGET_STRING (
"PowerElecCurriculumDesign/Solver Configuration/EVAL_KEY/INPUT_2_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
"PowerElecCurriculumDesign/Solver Configuration/EVAL_KEY/INPUT_3_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 8 , 0 , TARGET_STRING (
"PowerElecCurriculumDesign/Solver Configuration/EVAL_KEY/INPUT_4_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 9 , 0 , TARGET_STRING (
"PowerElecCurriculumDesign/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 10 , 0 , TARGET_STRING (
"PowerElecCurriculumDesign/Solver Configuration/EVAL_KEY/OUTPUT_1_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 11 , 0 , TARGET_STRING (
"PowerElecCurriculumDesign/Solver Configuration/EVAL_KEY/OUTPUT_1_2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 0 , 0 , 2 } , { 12 , 0 , TARGET_STRING (
"PowerElecCurriculumDesign/Solver Configuration/EVAL_KEY/STATE_1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 13 , TARGET_STRING (
"PowerElecCurriculumDesign/Repeating Sequence" ) , TARGET_STRING (
"rep_seq_y" ) , 0 , 4 , 0 } , { 14 , TARGET_STRING (
"PowerElecCurriculumDesign/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 0 ,
0 } , { 15 , TARGET_STRING ( "PowerElecCurriculumDesign/Pulse Generator" ) ,
TARGET_STRING ( "Amplitude" ) , 0 , 0 , 0 } , { 16 , TARGET_STRING (
"PowerElecCurriculumDesign/Pulse Generator" ) , TARGET_STRING ( "Period" ) ,
0 , 0 , 0 } , { 17 , TARGET_STRING (
"PowerElecCurriculumDesign/Pulse Generator" ) , TARGET_STRING ( "PulseWidth"
) , 0 , 0 , 0 } , { 18 , TARGET_STRING (
"PowerElecCurriculumDesign/Pulse Generator" ) , TARGET_STRING ( "PhaseDelay"
) , 0 , 0 , 0 } , { 19 , TARGET_STRING (
"PowerElecCurriculumDesign/Sine Wave" ) , TARGET_STRING ( "Amplitude" ) , 0 ,
0 , 0 } , { 20 , TARGET_STRING ( "PowerElecCurriculumDesign/Sine Wave" ) ,
TARGET_STRING ( "Bias" ) , 0 , 0 , 0 } , { 21 , TARGET_STRING (
"PowerElecCurriculumDesign/Sine Wave" ) , TARGET_STRING ( "Frequency" ) , 0 ,
0 , 0 } , { 22 , TARGET_STRING ( "PowerElecCurriculumDesign/Sine Wave" ) ,
TARGET_STRING ( "Phase" ) , 0 , 0 , 0 } , { 23 , TARGET_STRING (
"PowerElecCurriculumDesign/Compare To Zero/Constant" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 24 , TARGET_STRING (
"PowerElecCurriculumDesign/Compare To Zero1/Constant" ) , TARGET_STRING (
"Value" ) , 1 , 0 , 0 } , { 25 , TARGET_STRING (
"PowerElecCurriculumDesign/Repeating Sequence/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 0 , 0 } , { 26 , TARGET_STRING (
"PowerElecCurriculumDesign/Repeating Sequence/Look-Up Table1" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 4 , 0 } , { 0 , ( NULL ) ,
( NULL ) , 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ;
static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] =
{ { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 0 , ( NULL ) , 0 , 0 , 0
} } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . mfabkmo1fw , & rtB . hh4njpdtv0 ,
& rtB . bqbjyzq0dx , & rtB . gzs1upx1ld , & rtB . e3lyudtmtl , & rtB .
c0sk0m0en4 [ 0 ] , & rtB . d4jymh4nxd [ 0 ] , & rtB . khv2ifj12b [ 0 ] , &
rtB . f30llq3r5r [ 0 ] , & rtB . gx1b4l2gux [ 0 ] , & rtB . lgt3rvvya0 , &
rtB . bea5qhjk50 , & rtB . antypkipw4 [ 0 ] , & rtP .
RepeatingSequence_rep_seq_y [ 0 ] , & rtP . Constant_Value_n4aqhn1fhp , & rtP
. PulseGenerator_Amp , & rtP . PulseGenerator_Period , & rtP .
PulseGenerator_Duty , & rtP . PulseGenerator_PhaseDelay , & rtP .
SineWave_Amp , & rtP . SineWave_Bias , & rtP . SineWave_Freq , & rtP .
SineWave_Phase , & rtP . Constant_Value_azpurcqvrs , & rtP .
Constant_Value_kvcj4gt0ry , & rtP . Constant_Value , & rtP .
LookUpTable1_bp01Data [ 0 ] , } ; static int32_T * rtVarDimsAddrMap [ ] = { (
NULL ) } ;
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
1 , 1 , 4 , 1 , 13 , 1 , 161 , 1 , 1 , 3 } ; static const real_T
rtcapiStoredFloats [ ] = { 0.0 , 1.0 , - 2.0 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 1 ] , (
int8_T ) 1 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ]
, ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 2 , ( uint8_T ) 0
} , { ( const void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( int8_T ) 0 , ( uint8_T ) 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 13 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 14 ,
rtModelParameters , 0 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3545317450U , 4198979647U , 4040043506U , 356543726U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * PowerElecCurriculumDesign_GetCAPIStaticMap (
void ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void PowerElecCurriculumDesign_InitializeDataMapInfo ( void ) {
rtwCAPI_SetVersion ( ( * rt_dataMapInfoPtr ) . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetDataAddressMap ( ( * rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ;
rtwCAPI_SetVarDimsAddressMap ( ( * rt_dataMapInfoPtr ) . mmi ,
rtVarDimsAddrMap ) ; rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr )
. mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi
, ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi ,
0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void PowerElecCurriculumDesign_host_InitializeDataMapInfo (
PowerElecCurriculumDesign_host_DataMapInfo_T * dataMap , const char * path )
{ rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap
-> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL
) ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
