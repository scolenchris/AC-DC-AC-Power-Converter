#include "PowerElecCurriculumDesign.h"
#include "rtwtypes.h"
#include "PowerElecCurriculumDesign_types.h"
#include "mwmathutil.h"
#include <string.h>
#include <float.h>
#include <stddef.h>
#include "PowerElecCurriculumDesign_private.h"
#include "rt_logging_mmi.h"
#include "PowerElecCurriculumDesign_capi.h"
#include "PowerElecCurriculumDesign_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; extern ssExecutionInfo gblExecutionInfo ; RTWExtModeInfo *
gblRTWExtModeInfo = NULL ; void raccelForceExtModeShutdown ( boolean_T
extModeStartPktReceived ) { if ( ! extModeStartPktReceived ) { boolean_T
stopRequested = false ; rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 3 , &
stopRequested ) ; } rtExtModeShutdown ( 3 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_engine_exec.h"
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 4 ; const char_T
* gbl_raccel_Version = "24.1 (R2024a) 19-Nov-2023" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; int_T enableFcnCallFlag [ ] = { 1 , 1 , 1 , 1 } ;
const char * raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const
char * inportFileName , int * matFileFormat ) { return
rt_RAccelReadInportsMatFile ( S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_engine_exec.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
B rtB ; X rtX ; DW rtDW ; PrevZCX rtPrevZCX ; MassMatrix rtMassMatrix ;
static SimStruct model_S ; SimStruct * const rtS = & model_S ; real_T
look1_binlxpw ( real_T u0 , const real_T bp0 [ ] , const real_T table [ ] ,
uint32_T maxIndex ) { real_T frac ; real_T yL_0d0 ; uint32_T bpIdx ; uint32_T
iLeft ; uint32_T iRght ; if ( u0 <= bp0 [ 0U ] ) { iLeft = 0U ; frac = ( u0 -
bp0 [ 0U ] ) / ( bp0 [ 1U ] - bp0 [ 0U ] ) ; } else if ( u0 < bp0 [ maxIndex
] ) { bpIdx = maxIndex >> 1U ; iLeft = 0U ; iRght = maxIndex ; while ( iRght
- iLeft > 1U ) { if ( u0 < bp0 [ bpIdx ] ) { iRght = bpIdx ; } else { iLeft =
bpIdx ; } bpIdx = ( iRght + iLeft ) >> 1U ; } frac = ( u0 - bp0 [ iLeft ] ) /
( bp0 [ iLeft + 1U ] - bp0 [ iLeft ] ) ; } else { iLeft = maxIndex - 1U ;
frac = ( u0 - bp0 [ maxIndex - 1U ] ) / ( bp0 [ maxIndex ] - bp0 [ maxIndex -
1U ] ) ; } yL_0d0 = table [ iLeft ] ; return ( table [ iLeft + 1U ] - yL_0d0
) * frac + yL_0d0 ; } void MdlInitialize ( void ) { int_T tmp_e ; int_T tmp_f
; int_T tmp_g ; int_T tmp_i ; int_T tmp_j ; int_T tmp_m ; boolean_T tmp ;
boolean_T tmp_p ; SimStruct * S ; void * diag ; tmp = false ; tmp_p = false ;
if ( tmp_p || tmp ) { tmp_e = strcmp ( ssGetSolverName ( rtS ) , "daessc" ) ;
tmp_i = strcmp ( ssGetSolverName ( rtS ) , "ode14x" ) ; tmp_m = strcmp (
ssGetSolverName ( rtS ) , "ode15s" ) ; tmp_g = strcmp ( ssGetSolverName ( rtS
) , "ode1be" ) ; tmp_j = strcmp ( ssGetSolverName ( rtS ) , "ode23t" ) ;
tmp_f = strcmp ( ssGetSolverName ( rtS ) , "odeN" ) ; if ( ( boolean_T ) ( (
tmp_e != 0 ) & ( tmp_i != 0 ) & ( tmp_m != 0 ) & ( tmp_g != 0 ) & ( tmp_j !=
0 ) & ( tmp_f != 0 ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
"SL_SERVICES:utils:CODEGEN_MSG_WITH_FALLBACK" , 4 , 3 ,
 "\"Detected inconsistent solvers in the model reference hierarchy. Model built with ode23t requires one of {daessc, ode14x, ode15s, ode1be, ode23t, odeN} solvers to run. Use one of the required solvers in the top model.\""
, 3 ,
 "physmod:simscape:engine:sli:SimscapeExecutionBlock:InconsistentSolversInModelRef"
, 3 , "ode23t" , 3 , "{daessc, ode14x, ode15s, ode1be, ode23t, odeN}" ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } } rtDW . e3wigxva1h [ 0 ] = 29U ; rtDW .
e3wigxva1h [ 1 ] = 29U ; rtDW . e3wigxva1h [ 2 ] = 29U ; rtDW . e3wigxva1h [
3 ] = 29U ; rtDW . e3wigxva1h [ 4 ] = 29U ; rtDW . e3wigxva1h [ 5 ] = 29U ;
rtDW . e3wigxva1h [ 6 ] = 29U ; rtDW . e3wigxva1h [ 7 ] = 29U ; rtDW .
e3wigxva1h [ 8 ] = 29U ; rtDW . e3wigxva1h [ 9 ] = 29U ; rtDW . e3wigxva1h [
10 ] = 29U ; rtDW . e3wigxva1h [ 11 ] = 29U ; rtDW . e3wigxva1h [ 12 ] = 29U
; rtDW . e3wigxva1h [ 13 ] = 29U ; rtDW . e3wigxva1h [ 14 ] = 29U ; rtDW .
e3wigxva1h [ 15 ] = 29U ; rtDW . e3wigxva1h [ 16 ] = 29U ; rtDW . e3wigxva1h
[ 17 ] = 29U ; rtDW . e3wigxva1h [ 18 ] = 43U ; rtDW . e3wigxva1h [ 19 ] =
29U ; rtDW . e3wigxva1h [ 20 ] = 43U ; rtDW . e3wigxva1h [ 21 ] = 29U ; rtDW
. e3wigxva1h [ 22 ] = 29U ; rtDW . e3wigxva1h [ 23 ] = 43U ; rtDW .
e3wigxva1h [ 24 ] = 29U ; rtDW . e3wigxva1h [ 25 ] = 43U ; rtDW . e3wigxva1h
[ 26 ] = 29U ; rtDW . e3wigxva1h [ 27 ] = 43U ; rtDW . e3wigxva1h [ 28 ] =
29U ; rtDW . e3wigxva1h [ 29 ] = 43U ; rtDW . e3wigxva1h [ 30 ] = 29U ; rtDW
. e3wigxva1h [ 31 ] = 43U ; rtDW . e3wigxva1h [ 32 ] = 43U ; rtDW .
e3wigxva1h [ 33 ] = 43U ; rtDW . e3wigxva1h [ 34 ] = 29U ; rtDW . e3wigxva1h
[ 35 ] = 29U ; rtDW . e3wigxva1h [ 36 ] = 29U ; rtDW . e3wigxva1h [ 37 ] =
29U ; rtDW . e3wigxva1h [ 38 ] = 29U ; rtDW . e3wigxva1h [ 39 ] = 29U ; rtDW
. e3wigxva1h [ 40 ] = 29U ; rtDW . e3wigxva1h [ 41 ] = 29U ; rtDW .
e3wigxva1h [ 42 ] = 29U ; rtDW . e3wigxva1h [ 43 ] = 43U ; rtDW . e3wigxva1h
[ 44 ] = 43U ; rtDW . e3wigxva1h [ 45 ] = 29U ; rtDW . e3wigxva1h [ 46 ] =
29U ; rtDW . e3wigxva1h [ 47 ] = 29U ; rtDW . e3wigxva1h [ 48 ] = 29U ; rtDW
. e3wigxva1h [ 49 ] = 29U ; rtDW . e3wigxva1h [ 50 ] = 29U ; rtDW .
e3wigxva1h [ 51 ] = 29U ; rtDW . e3wigxva1h [ 52 ] = 29U ; rtDW . e3wigxva1h
[ 53 ] = 29U ; rtDW . e3wigxva1h [ 54 ] = 43U ; rtDW . e3wigxva1h [ 55 ] =
43U ; rtDW . e3wigxva1h [ 56 ] = 29U ; rtDW . e3wigxva1h [ 57 ] = 29U ; rtDW
. e3wigxva1h [ 58 ] = 29U ; rtDW . e3wigxva1h [ 59 ] = 29U ; rtDW .
e3wigxva1h [ 60 ] = 29U ; rtDW . e3wigxva1h [ 61 ] = 29U ; rtDW . e3wigxva1h
[ 62 ] = 29U ; rtDW . e3wigxva1h [ 63 ] = 29U ; rtDW . e3wigxva1h [ 64 ] =
29U ; rtDW . e3wigxva1h [ 65 ] = 43U ; rtDW . e3wigxva1h [ 66 ] = 43U ; rtDW
. e3wigxva1h [ 67 ] = 29U ; rtDW . e3wigxva1h [ 68 ] = 29U ; rtDW .
e3wigxva1h [ 69 ] = 29U ; rtDW . e3wigxva1h [ 70 ] = 29U ; rtDW . e3wigxva1h
[ 71 ] = 29U ; rtDW . e3wigxva1h [ 72 ] = 29U ; rtDW . e3wigxva1h [ 73 ] =
29U ; rtDW . e3wigxva1h [ 74 ] = 29U ; rtDW . e3wigxva1h [ 75 ] = 29U ; rtDW
. e3wigxva1h [ 76 ] = 29U ; rtDW . e3wigxva1h [ 77 ] = 29U ; rtDW .
e3wigxva1h [ 78 ] = 29U ; rtDW . e3wigxva1h [ 79 ] = 29U ; rtDW . e3wigxva1h
[ 80 ] = 29U ; rtDW . e3wigxva1h [ 81 ] = 29U ; rtDW . e3wigxva1h [ 82 ] =
29U ; rtDW . e3wigxva1h [ 83 ] = 29U ; { static int_T modelMassMatrixIr [ 15
] = { 8 , 0 , 1 , 10 , 2 , 3 , 4 , 6 , 7 , 5 , 9 , 13 , 11 , 12 , 14 } ;
static int_T modelMassMatrixJc [ 63 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 ,
9 , 10 , 11 , 12 , 13 , 14 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15
, 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 ,
15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15 , 15
, 15 , 15 , 15 , 15 , 15 , 15 , 15 } ; static real_T modelMassMatrixPr [ 15 ]
= { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 } ; ( void ) memcpy ( rtMassMatrix . ir , modelMassMatrixIr ,
15 * sizeof ( int_T ) ) ; ( void ) memcpy ( rtMassMatrix . jc ,
modelMassMatrixJc , 63 * sizeof ( int_T ) ) ; ( void ) memcpy ( rtMassMatrix
. pr , modelMassMatrixPr , 15 * sizeof ( real_T ) ) ; } } void MdlEnable (
void ) { rtDW . nbbv5gde22 = 1 ; _ssSetSampleHit ( rtS , 2 , 1 ) ;
_ssSetTaskTime ( rtS , 2 , ssGetT ( rtS ) ) ; _ssSetVarNextHitTime ( rtS , 0
, ssGetT ( rtS ) ) ; ; } void MdlStart ( void ) { CXPtMax * _rtXPerturbMax ;
CXPtMin * _rtXPerturbMin ; NeModelParameters modelParameters ;
NeModelParameters modelParameters_e ; NeModelParameters modelParameters_i ;
NeModelParameters modelParameters_p ; NeslSimulationData * simulationData ;
NeslSimulator * tmp ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_e ;
NeuDiagnosticTree * diagnosticTree_i ; NeuDiagnosticTree * diagnosticTree_m ;
NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_e ; char *
msg_i ; char * msg_m ; char * msg_p ; real_T tmp_m [ 16 ] ; real_T time ;
real_T tmp_e ; int32_T tmp_i ; int_T tmp_g [ 5 ] ; boolean_T tmp_p ;
boolean_T val ; { bool externalInputIsInDatasetFormat = false ; void *
pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; tmp = nesl_lease_simulator
( "PowerElecCurriculumDesign/Solver Configuration_1" , 0 , 0 ) ; rtDW .
ahk0b0xovg = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . ahk0b0xovg ) ;
if ( tmp_p ) { PowerElecCurriculumDesign_dda62cd9_1_gateway ( ) ; tmp =
nesl_lease_simulator ( "PowerElecCurriculumDesign/Solver Configuration_1" , 0
, 0 ) ; rtDW . ahk0b0xovg = ( void * ) tmp ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
"PowerElecCurriculumDesign/Solver Configuration_100" , ( void * * ) ( & rtDW
. ahk0b0xovg ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . avzvouupma = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . iti3hdl1fz = ( void * ) diagnosticManager
; modelParameters . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters .
mSolverAbsTol = 0.001 ; modelParameters . mSolverRelTol = 0.001 ;
modelParameters . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ;
modelParameters . mStartTime = 0.0 ; modelParameters . mLoadInitialState =
false ; modelParameters . mUseSimState = false ; modelParameters .
mLinTrimCompile = false ; modelParameters . mLoggingMode = SSC_LOGGING_OFF ;
modelParameters . mRTWModifiedTimeStamp = 5.89969618E+8 ; modelParameters .
mZcDisabled = false ; modelParameters . mUseModelRefSolver = false ;
modelParameters . mTargetFPGAHIL = false ; tmp_e = 0.001 ; modelParameters .
mSolverTolerance = tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize =
tmp_e ; tmp_p = true ; modelParameters . mVariableStepSolver = tmp_p ; tmp_p
= false ; modelParameters . mIsUsingODEN = tmp_p ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; val = ssGetGlobalInitialStatesAvailable
( rtS ) ; if ( tmp_p ) { val = ( val && ssIsFirstInitCond ( rtS ) ) ; }
modelParameters . mLoadInitialState = val ; modelParameters . mZcDisabled =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . iti3hdl1fz ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . ahk0b0xovg
, & modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . avzvouupma ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 62 ;
simulationData -> mData -> mContStates . mX = & rtX . opqf3j24fn [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 83 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cowewv1m30 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 80 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aitoajng4b [ 0 ] ; tmp_p = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp_p ; simulationData -> mData -> mHadEvents = false ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ;
tmp_p = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp_p ; tmp_p =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp_p ; tmp_p = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp_p ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp_p = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp_p ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ] = 0 ;
tmp_m [ 0 ] = rtB . d4jymh4nxd [ 0 ] ; tmp_m [ 1 ] = rtB . d4jymh4nxd [ 1 ] ;
tmp_m [ 2 ] = rtB . d4jymh4nxd [ 2 ] ; tmp_m [ 3 ] = rtB . d4jymh4nxd [ 3 ] ;
tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . khv2ifj12b [ 0 ] ; tmp_m [ 5 ] = rtB .
khv2ifj12b [ 1 ] ; tmp_m [ 6 ] = rtB . khv2ifj12b [ 2 ] ; tmp_m [ 7 ] = rtB .
khv2ifj12b [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . f30llq3r5r [ 0 ] ;
tmp_m [ 9 ] = rtB . f30llq3r5r [ 1 ] ; tmp_m [ 10 ] = rtB . f30llq3r5r [ 2 ]
; tmp_m [ 11 ] = rtB . f30llq3r5r [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] =
rtB . c0sk0m0en4 [ 0 ] ; tmp_m [ 13 ] = rtB . c0sk0m0en4 [ 1 ] ; tmp_m [ 14 ]
= rtB . c0sk0m0en4 [ 2 ] ; tmp_m [ 15 ] = rtB . c0sk0m0en4 [ 3 ] ; tmp_g [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_g [ 0 ] ; simulationData -> mData -> mNumjacDxLo . mN = 62 ;
simulationData -> mData -> mNumjacDxLo . mX = & _rtXPerturbMin -> opqf3j24fn
[ 0 ] ; simulationData -> mData -> mNumjacDxHi . mN = 62 ; simulationData ->
mData -> mNumjacDxHi . mX = & _rtXPerturbMax -> opqf3j24fn [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . iti3hdl1fz ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. ahk0b0xovg , NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager
) ; if ( tmp_i != 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus (
rtS ) ) ; if ( tmp_p ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( rtS , msg_p ) ; } } tmp = nesl_lease_simulator (
"PowerElecCurriculumDesign/Solver Configuration_1" , 1 , 0 ) ; rtDW .
mmmuzbxi3e = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . mmmuzbxi3e ) ;
if ( tmp_p ) { PowerElecCurriculumDesign_dda62cd9_1_gateway ( ) ; tmp =
nesl_lease_simulator ( "PowerElecCurriculumDesign/Solver Configuration_1" , 1
, 0 ) ; rtDW . mmmuzbxi3e = ( void * ) tmp ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
"PowerElecCurriculumDesign/Solver Configuration_110" , ( void * * ) ( & rtDW
. mmmuzbxi3e ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . j34nvcnrrz = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . mo1bheafsg = ( void * ) diagnosticManager
; modelParameters_p . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_p .
mSolverAbsTol = 0.001 ; modelParameters_p . mSolverRelTol = 0.001 ;
modelParameters_p . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ;
modelParameters_p . mStartTime = 0.0 ; modelParameters_p . mLoadInitialState
= false ; modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_OFF
; modelParameters_p . mRTWModifiedTimeStamp = 5.89969618E+8 ;
modelParameters_p . mZcDisabled = false ; modelParameters_p .
mUseModelRefSolver = false ; modelParameters_p . mTargetFPGAHIL = false ;
tmp_e = 0.001 ; modelParameters_p . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_p . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_p
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_p .
mIsUsingODEN = tmp_p ; tmp_p = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp_p ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p . mLoadInitialState = val ;
modelParameters_p . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . mo1bheafsg ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . mmmuzbxi3e , &
modelParameters_p , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } tmp = nesl_lease_simulator (
"PowerElecCurriculumDesign/Solver Configuration_1" , 1 , 2 ) ; rtDW .
fzpvdsa1iq = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . fzpvdsa1iq ) ;
if ( tmp_p ) { PowerElecCurriculumDesign_dda62cd9_1_gateway ( ) ; tmp =
nesl_lease_simulator ( "PowerElecCurriculumDesign/Solver Configuration_1" , 1
, 2 ) ; rtDW . fzpvdsa1iq = ( void * ) tmp ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
"PowerElecCurriculumDesign/Solver Configuration_112" , ( void * * ) ( & rtDW
. fzpvdsa1iq ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . jtosohksrj = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . nhjis5yhic = ( void * ) diagnosticManager
; modelParameters_e . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_e .
mSolverAbsTol = 0.001 ; modelParameters_e . mSolverRelTol = 0.001 ;
modelParameters_e . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ;
modelParameters_e . mStartTime = 0.0 ; modelParameters_e . mLoadInitialState
= false ; modelParameters_e . mUseSimState = false ; modelParameters_e .
mLinTrimCompile = false ; modelParameters_e . mLoggingMode = SSC_LOGGING_OFF
; modelParameters_e . mRTWModifiedTimeStamp = 5.89969618E+8 ;
modelParameters_e . mZcDisabled = false ; modelParameters_e .
mUseModelRefSolver = false ; modelParameters_e . mTargetFPGAHIL = false ;
tmp_e = 0.001 ; modelParameters_e . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_e . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_e
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_e .
mIsUsingODEN = tmp_p ; tmp_p = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp_p ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_e . mLoadInitialState = val ;
modelParameters_e . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . nhjis5yhic ; diagnosticTree_i =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . fzpvdsa1iq , &
modelParameters_e , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg_i =
rtw_diagnostics_msg ( diagnosticTree_i ) ; ssSetErrorStatus ( rtS , msg_i ) ;
} } tmp = nesl_lease_simulator (
"PowerElecCurriculumDesign/Solver Configuration_1" , 1 , 1 ) ; rtDW .
gg3m2wwxtm = ( void * ) tmp ; tmp_p = pointer_is_null ( rtDW . gg3m2wwxtm ) ;
if ( tmp_p ) { PowerElecCurriculumDesign_dda62cd9_1_gateway ( ) ; tmp =
nesl_lease_simulator ( "PowerElecCurriculumDesign/Solver Configuration_1" , 1
, 1 ) ; rtDW . gg3m2wwxtm = ( void * ) tmp ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
"PowerElecCurriculumDesign/Solver Configuration_111" , ( void * * ) ( & rtDW
. gg3m2wwxtm ) , 0U * sizeof ( real_T ) , nesl_save_simdata ,
nesl_restore_simdata ) ; simulationData = nesl_create_simulation_data ( ) ;
rtDW . ia5hdvfnyf = ( void * ) simulationData ; diagnosticManager =
rtw_create_diagnostics ( ) ; rtDW . mv3ojv2n2a = ( void * ) diagnosticManager
; modelParameters_i . mSolverType = NE_SOLVER_TYPE_DAE ; modelParameters_i .
mSolverAbsTol = 0.001 ; modelParameters_i . mSolverRelTol = 0.001 ;
modelParameters_i . mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ;
modelParameters_i . mStartTime = 0.0 ; modelParameters_i . mLoadInitialState
= false ; modelParameters_i . mUseSimState = false ; modelParameters_i .
mLinTrimCompile = false ; modelParameters_i . mLoggingMode = SSC_LOGGING_OFF
; modelParameters_i . mRTWModifiedTimeStamp = 5.89969618E+8 ;
modelParameters_i . mZcDisabled = false ; modelParameters_i .
mUseModelRefSolver = false ; modelParameters_i . mTargetFPGAHIL = false ;
tmp_e = 0.001 ; modelParameters_i . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_i . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_i
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_i .
mIsUsingODEN = tmp_p ; tmp_p = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp_p ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_i . mLoadInitialState = val ;
modelParameters_i . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . mv3ojv2n2a ; diagnosticTree_m =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . gg3m2wwxtm , &
modelParameters_i , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg_m =
rtw_diagnostics_msg ( diagnosticTree_m ) ; ssSetErrorStatus ( rtS , msg_m ) ;
} } MdlInitialize ( ) ; MdlEnable ( ) ; } void MdlOutputs ( int_T tid ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree *
diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_g ; NeuDiagnosticTree *
diagnosticTree_i ; NeuDiagnosticTree * diagnosticTree_m ; NeuDiagnosticTree *
diagnosticTree_p ; ZCV * _rtZCSV ; char * msg ; char * msg_e ; char * msg_g ;
char * msg_i ; char * msg_m ; char * msg_p ; real_T tmp_f [ 177 ] ; real_T
tmp_k [ 177 ] ; real_T tmp_n [ 177 ] ; real_T tmp [ 16 ] ; real_T tmp_g [ 16
] ; real_T tmp_i [ 16 ] ; real_T ratio ; real_T taskTimeV ; real_T time ;
real_T time_c ; real_T time_e ; real_T time_f ; real_T time_g ; real_T time_i
; real_T time_j ; real_T time_k ; real_T time_m ; real_T time_p ; int32_T
tmp_e ; int_T tmp_b [ 6 ] ; int_T tmp_c [ 6 ] ; int_T tmp_l [ 6 ] ; int_T
tmp_j [ 5 ] ; int_T tmp_m [ 5 ] ; int_T tmp_p [ 5 ] ; int_T i ; uint32_T
numCycles ; boolean_T dnzzolv3id ; boolean_T hadEvents ; _rtZCSV = ( ( ZCV *
) ssGetSolverZcSignalVector ( rtS ) ) ; if ( ssIsSampleHit ( rtS , 2 , 0 ) )
{ taskTimeV = ssGetTaskTime ( rtS , 2 ) ; if ( ssGetTNextWasAdjusted ( rtS ,
2 ) ) { rtDW . be21jvh4m5 = _ssGetVarNextHitTime ( rtS , 0 ) ; } if ( rtDW .
nbbv5gde22 != 0 ) { rtDW . nbbv5gde22 = 0 ; if ( taskTimeV >= rtP .
PulseGenerator_PhaseDelay ) { ratio = ( taskTimeV - rtP .
PulseGenerator_PhaseDelay ) / rtP . PulseGenerator_Period ; numCycles = (
uint32_T ) muDoubleScalarFloor ( ratio ) ; if ( muDoubleScalarAbs ( ( real_T
) ( numCycles + 1U ) - ratio ) < DBL_EPSILON * ratio ) { numCycles ++ ; }
rtDW . g2kvorjwgo = numCycles ; ratio = ( ( real_T ) numCycles * rtP .
PulseGenerator_Period + rtP . PulseGenerator_PhaseDelay ) + rtP .
PulseGenerator_Duty * rtP . PulseGenerator_Period / 100.0 ; if ( taskTimeV <
ratio ) { rtDW . mfduvdp04x = 1 ; rtDW . be21jvh4m5 = ratio ; } else { rtDW .
mfduvdp04x = 0 ; rtDW . be21jvh4m5 = ( real_T ) ( numCycles + 1U ) * rtP .
PulseGenerator_Period + rtP . PulseGenerator_PhaseDelay ; } } else { if ( rtP
. PulseGenerator_PhaseDelay != 0.0 ) { rtDW . g2kvorjwgo = - 1LL ; } else {
rtDW . g2kvorjwgo = 0LL ; } rtDW . mfduvdp04x = 0 ; rtDW . be21jvh4m5 = rtP .
PulseGenerator_PhaseDelay ; } } else if ( rtDW . be21jvh4m5 <= taskTimeV ) {
if ( rtDW . mfduvdp04x == 1 ) { rtDW . mfduvdp04x = 0 ; rtDW . be21jvh4m5 = (
real_T ) ( rtDW . g2kvorjwgo + 1LL ) * rtP . PulseGenerator_Period + rtP .
PulseGenerator_PhaseDelay ; } else { rtDW . g2kvorjwgo ++ ; rtDW . mfduvdp04x
= 1 ; rtDW . be21jvh4m5 = ( rtP . PulseGenerator_Duty * rtP .
PulseGenerator_Period * 0.01 + ( real_T ) rtDW . g2kvorjwgo * rtP .
PulseGenerator_Period ) + rtP . PulseGenerator_PhaseDelay ; } }
_ssSetVarNextHitTime ( rtS , 0 , rtDW . be21jvh4m5 ) ; if ( rtDW . mfduvdp04x
== 1 ) { rtB . bqbjyzq0dx = rtP . PulseGenerator_Amp ; } else { rtB .
bqbjyzq0dx = 0.0 ; } } rtB . d4jymh4nxd [ 0 ] = rtB . bqbjyzq0dx ; rtB .
d4jymh4nxd [ 1 ] = 0.0 ; rtB . d4jymh4nxd [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . eqxw5ipaqu [ 0 ] = ! ( rtB . d4jymh4nxd
[ 0 ] == rtDW . eqxw5ipaqu [ 1 ] ) ; rtDW . eqxw5ipaqu [ 1 ] = rtB .
d4jymh4nxd [ 0 ] ; } rtB . d4jymh4nxd [ 0 ] = rtDW . eqxw5ipaqu [ 1 ] ; rtB .
d4jymh4nxd [ 3 ] = rtDW . eqxw5ipaqu [ 0 ] ; rtB . e3lyudtmtl = look1_binlxpw
( muDoubleScalarRem ( ssGetT ( rtS ) , rtP . Constant_Value ) , rtP .
LookUpTable1_bp01Data , rtP . RepeatingSequence_rep_seq_y , 2U ) ; rtB .
gzs1upx1ld = muDoubleScalarSin ( rtP . SineWave_Freq * ssGetTaskTime ( rtS ,
0 ) + rtP . SineWave_Phase ) * rtP . SineWave_Amp + rtP . SineWave_Bias ; if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( ssIsModeUpdateTimeStep ( rtS ) ) {
rtDW . aqch01fh2d = ( rtB . e3lyudtmtl <= rtB . gzs1upx1ld ) ; } dnzzolv3id =
rtDW . aqch01fh2d ; rtB . mfabkmo1fw = ( ( int32_T ) rtDW . aqch01fh2d > (
int32_T ) rtP . Constant_Value_azpurcqvrs ) ; } rtB . khv2ifj12b [ 0 ] = rtB
. mfabkmo1fw ; rtB . khv2ifj12b [ 1 ] = 0.0 ; rtB . khv2ifj12b [ 2 ] = 0.0 ;
if ( ssIsMajorTimeStep ( rtS ) ) { rtDW . bu2ap5h1zw [ 0 ] = ! ( rtB .
khv2ifj12b [ 0 ] == rtDW . bu2ap5h1zw [ 1 ] ) ; rtDW . bu2ap5h1zw [ 1 ] = rtB
. khv2ifj12b [ 0 ] ; } rtB . khv2ifj12b [ 0 ] = rtDW . bu2ap5h1zw [ 1 ] ; rtB
. khv2ifj12b [ 3 ] = rtDW . bu2ap5h1zw [ 0 ] ; if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { rtB . hh4njpdtv0 = ( dnzzolv3id == rtP . Constant_Value_kvcj4gt0ry )
; } rtB . f30llq3r5r [ 0 ] = rtB . hh4njpdtv0 ; rtB . f30llq3r5r [ 1 ] = 0.0
; rtB . f30llq3r5r [ 2 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { rtDW .
l3dkmxtkup [ 0 ] = ! ( rtB . f30llq3r5r [ 0 ] == rtDW . l3dkmxtkup [ 1 ] ) ;
rtDW . l3dkmxtkup [ 1 ] = rtB . f30llq3r5r [ 0 ] ; } rtB . f30llq3r5r [ 0 ] =
rtDW . l3dkmxtkup [ 1 ] ; rtB . f30llq3r5r [ 3 ] = rtDW . l3dkmxtkup [ 0 ] ;
rtB . c0sk0m0en4 [ 0 ] = rtP . Constant_Value_n4aqhn1fhp ; rtB . c0sk0m0en4 [
1 ] = 0.0 ; rtB . c0sk0m0en4 [ 2 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) {
rtDW . ndakhsxbau [ 0 ] = ! ( rtB . c0sk0m0en4 [ 0 ] == rtDW . ndakhsxbau [ 1
] ) ; rtDW . ndakhsxbau [ 1 ] = rtB . c0sk0m0en4 [ 0 ] ; } rtB . c0sk0m0en4 [
0 ] = rtDW . ndakhsxbau [ 1 ] ; rtB . c0sk0m0en4 [ 3 ] = rtDW . ndakhsxbau [
0 ] ; simulationData = ( NeslSimulationData * ) rtDW . avzvouupma ; hadEvents
= false ; if ( ssIsMajorTimeStep ( rtS ) ) { time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 62 ;
simulationData -> mData -> mContStates . mX = & rtX . opqf3j24fn [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 83 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cowewv1m30 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 80 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aitoajng4b [ 0 ] ; dnzzolv3id = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = dnzzolv3id ; simulationData -> mData -> mHadEvents =
false ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS
) ; dnzzolv3id = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck ==
1U ) ; simulationData -> mData -> mIsSolverAssertCheck = dnzzolv3id ;
dnzzolv3id = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = dnzzolv3id ; dnzzolv3id = ssIsSolverComputingJacobian
( rtS ) ; simulationData -> mData -> mIsComputingJacobian = dnzzolv3id ;
simulationData -> mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian (
rtS ) != 0 ) ; dnzzolv3id = ssIsSolverRequestingReset ( rtS ) ;
simulationData -> mData -> mIsSolverRequestingReset = dnzzolv3id ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_p [ 0 ] = 0 ; tmp [ 0 ] = rtB . d4jymh4nxd [ 0 ] ; tmp [ 1 ] =
rtB . d4jymh4nxd [ 1 ] ; tmp [ 2 ] = rtB . d4jymh4nxd [ 2 ] ; tmp [ 3 ] = rtB
. d4jymh4nxd [ 3 ] ; tmp_p [ 1 ] = 4 ; tmp [ 4 ] = rtB . khv2ifj12b [ 0 ] ;
tmp [ 5 ] = rtB . khv2ifj12b [ 1 ] ; tmp [ 6 ] = rtB . khv2ifj12b [ 2 ] ; tmp
[ 7 ] = rtB . khv2ifj12b [ 3 ] ; tmp_p [ 2 ] = 8 ; tmp [ 8 ] = rtB .
f30llq3r5r [ 0 ] ; tmp [ 9 ] = rtB . f30llq3r5r [ 1 ] ; tmp [ 10 ] = rtB .
f30llq3r5r [ 2 ] ; tmp [ 11 ] = rtB . f30llq3r5r [ 3 ] ; tmp_p [ 3 ] = 12 ;
tmp [ 12 ] = rtB . c0sk0m0en4 [ 0 ] ; tmp [ 13 ] = rtB . c0sk0m0en4 [ 1 ] ;
tmp [ 14 ] = rtB . c0sk0m0en4 [ 2 ] ; tmp [ 15 ] = rtB . c0sk0m0en4 [ 3 ] ;
tmp_p [ 4 ] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ;
simulationData -> mData -> mInputValues . mX = & tmp [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets
. mX = & tmp_p [ 0 ] ; simulationData -> mData -> mNonSampledZCs . mN = 84 ;
simulationData -> mData -> mNonSampledZCs . mX = & _rtZCSV -> lnq3q1oozy ;
simulationData -> mData -> mNonSampledZCs . mN = 84 ; simulationData -> mData
-> mNonSampledZCs . mX = & rtDW . hujy3sr5qa [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . iti3hdl1fz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ahk0b0xovg ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_e !=
0 ) { dnzzolv3id = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
dnzzolv3id ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } memcpy ( & rtDW . b0g44fcvf4 [ 0 ] , &
rtPrevZCX . nbozhyiyh4 , 84 ) ; for ( i = 0 ; i < 84 ; i ++ ) { tmp_e =
rt_ZCFcnRefine ( rtDW . e3wigxva1h [ i ] , & rtDW . b0g44fcvf4 [ i ] , ( rtDW
. hujy3sr5qa [ i ] ) ) ; hadEvents = ( ( tmp_e != 0 ) || hadEvents ) ; }
memcpy ( & rtPrevZCX . nbozhyiyh4 , & rtDW . b0g44fcvf4 [ 0 ] , 84 ) ; }
time_p = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_p ; simulationData -> mData ->
mContStates . mN = 62 ; simulationData -> mData -> mContStates . mX = & rtX .
opqf3j24fn [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 83 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . cowewv1m30 [ 0 ] ;
simulationData -> mData -> mModeVector . mN = 80 ; simulationData -> mData ->
mModeVector . mX = & rtDW . aitoajng4b [ 0 ] ; dnzzolv3id = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = dnzzolv3id ; simulationData
-> mData -> mHadEvents = false ; simulationData -> mData -> mIsMajorTimeStep
= ssIsMajorTimeStep ( rtS ) ; dnzzolv3id = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = dnzzolv3id ; dnzzolv3id = ssIsSolverCheckingCIC ( rtS
) ; simulationData -> mData -> mIsSolverCheckingCIC = dnzzolv3id ; dnzzolv3id
= ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = dnzzolv3id ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; dnzzolv3id
= ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = dnzzolv3id ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_m [ 0 ] = 0 ;
tmp_i [ 0 ] = rtB . d4jymh4nxd [ 0 ] ; tmp_i [ 1 ] = rtB . d4jymh4nxd [ 1 ] ;
tmp_i [ 2 ] = rtB . d4jymh4nxd [ 2 ] ; tmp_i [ 3 ] = rtB . d4jymh4nxd [ 3 ] ;
tmp_m [ 1 ] = 4 ; tmp_i [ 4 ] = rtB . khv2ifj12b [ 0 ] ; tmp_i [ 5 ] = rtB .
khv2ifj12b [ 1 ] ; tmp_i [ 6 ] = rtB . khv2ifj12b [ 2 ] ; tmp_i [ 7 ] = rtB .
khv2ifj12b [ 3 ] ; tmp_m [ 2 ] = 8 ; tmp_i [ 8 ] = rtB . f30llq3r5r [ 0 ] ;
tmp_i [ 9 ] = rtB . f30llq3r5r [ 1 ] ; tmp_i [ 10 ] = rtB . f30llq3r5r [ 2 ]
; tmp_i [ 11 ] = rtB . f30llq3r5r [ 3 ] ; tmp_m [ 3 ] = 12 ; tmp_i [ 12 ] =
rtB . c0sk0m0en4 [ 0 ] ; tmp_i [ 13 ] = rtB . c0sk0m0en4 [ 1 ] ; tmp_i [ 14 ]
= rtB . c0sk0m0en4 [ 2 ] ; tmp_i [ 15 ] = rtB . c0sk0m0en4 [ 3 ] ; tmp_m [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_i [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mOutputs . mN = 161 ; simulationData
-> mData -> mOutputs . mX = & rtB . antypkipw4 [ 0 ] ; simulationData ->
mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX =
NULL ; simulationData -> mData -> mCstateHasChanged = false ; simulationData
-> mData -> mDstateHasChanged = false ; time_e = ssGetTaskTime ( rtS , 0 ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_e ; simulationData -> mData -> mSampleHits . mN = 0 ;
simulationData -> mData -> mSampleHits . mX = NULL ; simulationData -> mData
-> mIsFundamentalSampleHit = false ; simulationData -> mData -> mHadEvents =
hadEvents ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . iti3hdl1fz
; diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_e = ne_simulator_method ( ( NeslSimulator * ) rtDW
. ahk0b0xovg , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if (
tmp_e != 0 ) { dnzzolv3id = error_buffer_is_empty ( ssGetErrorStatus ( rtS )
) ; if ( dnzzolv3id ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( rtS , msg_p ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } if ( ssIsMajorTimeStep
( rtS ) && ( simulationData -> mData -> mCstateHasChanged || simulationData
-> mData -> mDstateHasChanged ) ) { time_i = ssGetT ( rtS ) ; simulationData
-> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time_i
; simulationData -> mData -> mContStates . mN = 62 ; simulationData -> mData
-> mContStates . mX = & rtX . opqf3j24fn [ 0 ] ; simulationData -> mData ->
mDiscStates . mN = 83 ; simulationData -> mData -> mDiscStates . mX = & rtDW
. cowewv1m30 [ 0 ] ; simulationData -> mData -> mModeVector . mN = 80 ;
simulationData -> mData -> mModeVector . mX = & rtDW . aitoajng4b [ 0 ] ;
dnzzolv3id = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = dnzzolv3id
; simulationData -> mData -> mHadEvents = false ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; dnzzolv3id = ( ssGetMdlInfoPtr
( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = dnzzolv3id ; dnzzolv3id = ssIsSolverCheckingCIC ( rtS
) ; simulationData -> mData -> mIsSolverCheckingCIC = dnzzolv3id ; dnzzolv3id
= ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = dnzzolv3id ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; dnzzolv3id
= ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = dnzzolv3id ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_j [ 0 ] = 0 ;
tmp_g [ 0 ] = rtB . d4jymh4nxd [ 0 ] ; tmp_g [ 1 ] = rtB . d4jymh4nxd [ 1 ] ;
tmp_g [ 2 ] = rtB . d4jymh4nxd [ 2 ] ; tmp_g [ 3 ] = rtB . d4jymh4nxd [ 3 ] ;
tmp_j [ 1 ] = 4 ; tmp_g [ 4 ] = rtB . khv2ifj12b [ 0 ] ; tmp_g [ 5 ] = rtB .
khv2ifj12b [ 1 ] ; tmp_g [ 6 ] = rtB . khv2ifj12b [ 2 ] ; tmp_g [ 7 ] = rtB .
khv2ifj12b [ 3 ] ; tmp_j [ 2 ] = 8 ; tmp_g [ 8 ] = rtB . f30llq3r5r [ 0 ] ;
tmp_g [ 9 ] = rtB . f30llq3r5r [ 1 ] ; tmp_g [ 10 ] = rtB . f30llq3r5r [ 2 ]
; tmp_g [ 11 ] = rtB . f30llq3r5r [ 3 ] ; tmp_j [ 3 ] = 12 ; tmp_g [ 12 ] =
rtB . c0sk0m0en4 [ 0 ] ; tmp_g [ 13 ] = rtB . c0sk0m0en4 [ 1 ] ; tmp_g [ 14 ]
= rtB . c0sk0m0en4 [ 2 ] ; tmp_g [ 15 ] = rtB . c0sk0m0en4 [ 3 ] ; tmp_j [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_g [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_j [ 0 ] ; simulationData -> mData -> mNonSampledZCs . mN = 84 ;
simulationData -> mData -> mNonSampledZCs . mX = & _rtZCSV -> lnq3q1oozy ;
simulationData -> mData -> mNonSampledZCs . mN = 84 ; simulationData -> mData
-> mNonSampledZCs . mX = & rtDW . hujy3sr5qa [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . iti3hdl1fz ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ahk0b0xovg ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_e !=
0 ) { dnzzolv3id = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
dnzzolv3id ) { msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ;
ssSetErrorStatus ( rtS , msg_e ) ; } } for ( i = 0 ; i < 84 ; i ++ ) {
rt_ZCFcnRefine ( rtDW . e3wigxva1h [ i ] , & rtDW . b0g44fcvf4 [ i ] , ( rtDW
. hujy3sr5qa [ i ] ) ) ; } memcpy ( & rtPrevZCX . nbozhyiyh4 , & rtDW .
b0g44fcvf4 [ 0 ] , 84 ) ; } simulationData = ( NeslSimulationData * ) rtDW .
j34nvcnrrz ; time_m = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time_m ; simulationData ->
mData -> mContStates . mN = 0 ; simulationData -> mData -> mContStates . mX =
NULL ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData ->
mData -> mDiscStates . mX = & rtDW . biae4oaxki ; simulationData -> mData ->
mModeVector . mN = 0 ; simulationData -> mData -> mModeVector . mX = & rtDW .
j2ywn1tz2f ; dnzzolv3id = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
dnzzolv3id ; simulationData -> mData -> mHadEvents = false ; simulationData
-> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; dnzzolv3id = (
ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = dnzzolv3id ; dnzzolv3id =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = dnzzolv3id ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; dnzzolv3id = ssIsSolverRequestingReset ( rtS ) ; simulationData ->
mData -> mIsSolverRequestingReset = dnzzolv3id ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_c [ 0 ] = 0 ;
tmp_f [ 0 ] = rtB . d4jymh4nxd [ 0 ] ; tmp_f [ 1 ] = rtB . d4jymh4nxd [ 1 ] ;
tmp_f [ 2 ] = rtB . d4jymh4nxd [ 2 ] ; tmp_f [ 3 ] = rtB . d4jymh4nxd [ 3 ] ;
tmp_c [ 1 ] = 4 ; tmp_f [ 4 ] = rtB . khv2ifj12b [ 0 ] ; tmp_f [ 5 ] = rtB .
khv2ifj12b [ 1 ] ; tmp_f [ 6 ] = rtB . khv2ifj12b [ 2 ] ; tmp_f [ 7 ] = rtB .
khv2ifj12b [ 3 ] ; tmp_c [ 2 ] = 8 ; tmp_f [ 8 ] = rtB . f30llq3r5r [ 0 ] ;
tmp_f [ 9 ] = rtB . f30llq3r5r [ 1 ] ; tmp_f [ 10 ] = rtB . f30llq3r5r [ 2 ]
; tmp_f [ 11 ] = rtB . f30llq3r5r [ 3 ] ; tmp_c [ 3 ] = 12 ; tmp_f [ 12 ] =
rtB . c0sk0m0en4 [ 0 ] ; tmp_f [ 13 ] = rtB . c0sk0m0en4 [ 1 ] ; tmp_f [ 14 ]
= rtB . c0sk0m0en4 [ 2 ] ; tmp_f [ 15 ] = rtB . c0sk0m0en4 [ 3 ] ; tmp_c [ 4
] = 16 ; memcpy ( & tmp_f [ 16 ] , & rtB . antypkipw4 [ 0 ] , 161U * sizeof (
real_T ) ) ; tmp_c [ 5 ] = 177 ; simulationData -> mData -> mInputValues . mN
= 177 ; simulationData -> mData -> mInputValues . mX = & tmp_f [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 6 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_c [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 13 ; simulationData -> mData -> mOutputs . mX = & rtB . gx1b4l2gux [ 0 ]
; simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData
-> mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; simulationData -> mData -> mDstateHasChanged = false ; time_g =
ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_g ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mHadEvents = false ; diagnosticManager = ( NeuDiagnosticManager *
) rtDW . mo1bheafsg ; diagnosticTree_i =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_e =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mmmuzbxi3e ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_e != 0 ) {
dnzzolv3id = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
dnzzolv3id ) { msg_i = rtw_diagnostics_msg ( diagnosticTree_i ) ;
ssSetErrorStatus ( rtS , msg_i ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . jtosohksrj ; time_j = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_j ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . nosrs3fidx ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . ibj1gtgw5z ;
dnzzolv3id = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = dnzzolv3id
; simulationData -> mData -> mHadEvents = false ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; dnzzolv3id = ( ssGetMdlInfoPtr
( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = dnzzolv3id ; dnzzolv3id = ssIsSolverCheckingCIC ( rtS
) ; simulationData -> mData -> mIsSolverCheckingCIC = dnzzolv3id ;
simulationData -> mData -> mIsComputingJacobian = false ; simulationData ->
mData -> mIsEvaluatingF0 = false ; dnzzolv3id = ssIsSolverRequestingReset (
rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = dnzzolv3id ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_b [ 0 ] = 0 ; tmp_k [ 0 ] = rtB . d4jymh4nxd [ 0 ] ; tmp_k [ 1 ]
= rtB . d4jymh4nxd [ 1 ] ; tmp_k [ 2 ] = rtB . d4jymh4nxd [ 2 ] ; tmp_k [ 3 ]
= rtB . d4jymh4nxd [ 3 ] ; tmp_b [ 1 ] = 4 ; tmp_k [ 4 ] = rtB . khv2ifj12b [
0 ] ; tmp_k [ 5 ] = rtB . khv2ifj12b [ 1 ] ; tmp_k [ 6 ] = rtB . khv2ifj12b [
2 ] ; tmp_k [ 7 ] = rtB . khv2ifj12b [ 3 ] ; tmp_b [ 2 ] = 8 ; tmp_k [ 8 ] =
rtB . f30llq3r5r [ 0 ] ; tmp_k [ 9 ] = rtB . f30llq3r5r [ 1 ] ; tmp_k [ 10 ]
= rtB . f30llq3r5r [ 2 ] ; tmp_k [ 11 ] = rtB . f30llq3r5r [ 3 ] ; tmp_b [ 3
] = 12 ; tmp_k [ 12 ] = rtB . c0sk0m0en4 [ 0 ] ; tmp_k [ 13 ] = rtB .
c0sk0m0en4 [ 1 ] ; tmp_k [ 14 ] = rtB . c0sk0m0en4 [ 2 ] ; tmp_k [ 15 ] = rtB
. c0sk0m0en4 [ 3 ] ; tmp_b [ 4 ] = 16 ; memcpy ( & tmp_k [ 16 ] , & rtB .
antypkipw4 [ 0 ] , 161U * sizeof ( real_T ) ) ; tmp_b [ 5 ] = 177 ;
simulationData -> mData -> mInputValues . mN = 177 ; simulationData -> mData
-> mInputValues . mX = & tmp_k [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_b [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . bea5qhjk50 ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; simulationData ->
mData -> mDstateHasChanged = false ; time_f = ssGetTaskTime ( rtS , 0 ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_f ; simulationData -> mData -> mSampleHits . mN = 0 ;
simulationData -> mData -> mSampleHits . mX = NULL ; simulationData -> mData
-> mIsFundamentalSampleHit = false ; simulationData -> mData -> mHadEvents =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . nhjis5yhic ;
diagnosticTree_m = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_e = ne_simulator_method ( ( NeslSimulator * ) rtDW
. fzpvdsa1iq , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if (
tmp_e != 0 ) { dnzzolv3id = error_buffer_is_empty ( ssGetErrorStatus ( rtS )
) ; if ( dnzzolv3id ) { msg_m = rtw_diagnostics_msg ( diagnosticTree_m ) ;
ssSetErrorStatus ( rtS , msg_m ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } simulationData = (
NeslSimulationData * ) rtDW . ia5hdvfnyf ; time_c = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_c ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . otfubklm10 ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . aha51gyvzc ;
dnzzolv3id = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = dnzzolv3id
; simulationData -> mData -> mHadEvents = false ; simulationData -> mData ->
mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; dnzzolv3id = ( ssGetMdlInfoPtr
( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = dnzzolv3id ; dnzzolv3id = ssIsSolverCheckingCIC ( rtS
) ; simulationData -> mData -> mIsSolverCheckingCIC = dnzzolv3id ;
simulationData -> mData -> mIsComputingJacobian = false ; simulationData ->
mData -> mIsEvaluatingF0 = false ; dnzzolv3id = ssIsSolverRequestingReset (
rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = dnzzolv3id ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_l [ 0 ] = 0 ; tmp_n [ 0 ] = rtB . d4jymh4nxd [ 0 ] ; tmp_n [ 1 ]
= rtB . d4jymh4nxd [ 1 ] ; tmp_n [ 2 ] = rtB . d4jymh4nxd [ 2 ] ; tmp_n [ 3 ]
= rtB . d4jymh4nxd [ 3 ] ; tmp_l [ 1 ] = 4 ; tmp_n [ 4 ] = rtB . khv2ifj12b [
0 ] ; tmp_n [ 5 ] = rtB . khv2ifj12b [ 1 ] ; tmp_n [ 6 ] = rtB . khv2ifj12b [
2 ] ; tmp_n [ 7 ] = rtB . khv2ifj12b [ 3 ] ; tmp_l [ 2 ] = 8 ; tmp_n [ 8 ] =
rtB . f30llq3r5r [ 0 ] ; tmp_n [ 9 ] = rtB . f30llq3r5r [ 1 ] ; tmp_n [ 10 ]
= rtB . f30llq3r5r [ 2 ] ; tmp_n [ 11 ] = rtB . f30llq3r5r [ 3 ] ; tmp_l [ 3
] = 12 ; tmp_n [ 12 ] = rtB . c0sk0m0en4 [ 0 ] ; tmp_n [ 13 ] = rtB .
c0sk0m0en4 [ 1 ] ; tmp_n [ 14 ] = rtB . c0sk0m0en4 [ 2 ] ; tmp_n [ 15 ] = rtB
. c0sk0m0en4 [ 3 ] ; tmp_l [ 4 ] = 16 ; memcpy ( & tmp_n [ 16 ] , & rtB .
antypkipw4 [ 0 ] , 161U * sizeof ( real_T ) ) ; tmp_l [ 5 ] = 177 ;
simulationData -> mData -> mInputValues . mN = 177 ; simulationData -> mData
-> mInputValues . mX = & tmp_n [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 6 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_l [ 0 ] ; simulationData -> mData -> mOutputs . mN = 1 ; simulationData
-> mData -> mOutputs . mX = & rtB . lgt3rvvya0 ; simulationData -> mData ->
mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX = NULL ;
simulationData -> mData -> mCstateHasChanged = false ; simulationData ->
mData -> mDstateHasChanged = false ; time_k = ssGetTaskTime ( rtS , 0 ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_k ; simulationData -> mData -> mSampleHits . mN = 0 ;
simulationData -> mData -> mSampleHits . mX = NULL ; simulationData -> mData
-> mIsFundamentalSampleHit = false ; simulationData -> mData -> mHadEvents =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . mv3ojv2n2a ;
diagnosticTree_g = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_e = ne_simulator_method ( ( NeslSimulator * ) rtDW
. gg3m2wwxtm , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if (
tmp_e != 0 ) { dnzzolv3id = error_buffer_is_empty ( ssGetErrorStatus ( rtS )
) ; if ( dnzzolv3id ) { msg_g = rtw_diagnostics_msg ( diagnosticTree_g ) ;
ssSetErrorStatus ( rtS , msg_g ) ; } } if ( ssIsMajorTimeStep ( rtS ) &&
simulationData -> mData -> mCstateHasChanged ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; } UNUSED_PARAMETER ( tid
) ; } void MdlOutputsTID3 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlUpdate ( int_T tid ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp_p [ 16 ] ; real_T time ; int32_T tmp_i ; int_T
tmp_e [ 5 ] ; boolean_T tmp ; simulationData = ( NeslSimulationData * ) rtDW
. avzvouupma ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 62 ; simulationData -> mData -> mContStates . mX
= & rtX . opqf3j24fn [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 83
; simulationData -> mData -> mDiscStates . mX = & rtDW . cowewv1m30 [ 0 ] ;
simulationData -> mData -> mModeVector . mN = 80 ; simulationData -> mData ->
mModeVector . mX = & rtDW . aitoajng4b [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData -> mHadEvents =
false ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS
) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . d4jymh4nxd [ 0 ] ; tmp_p [ 1 ] = rtB . d4jymh4nxd [ 1 ] ;
tmp_p [ 2 ] = rtB . d4jymh4nxd [ 2 ] ; tmp_p [ 3 ] = rtB . d4jymh4nxd [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . khv2ifj12b [ 0 ] ; tmp_p [ 5 ] = rtB .
khv2ifj12b [ 1 ] ; tmp_p [ 6 ] = rtB . khv2ifj12b [ 2 ] ; tmp_p [ 7 ] = rtB .
khv2ifj12b [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . f30llq3r5r [ 0 ] ;
tmp_p [ 9 ] = rtB . f30llq3r5r [ 1 ] ; tmp_p [ 10 ] = rtB . f30llq3r5r [ 2 ]
; tmp_p [ 11 ] = rtB . f30llq3r5r [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . c0sk0m0en4 [ 0 ] ; tmp_p [ 13 ] = rtB . c0sk0m0en4 [ 1 ] ; tmp_p [ 14 ]
= rtB . c0sk0m0en4 [ 2 ] ; tmp_p [ 15 ] = rtB . c0sk0m0en4 [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
iti3hdl1fz ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. ahk0b0xovg , NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if (
tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if
( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid
) { UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 16 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e
[ 5 ] ; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ;
simulationData = ( NeslSimulationData * ) rtDW . avzvouupma ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 62 ;
simulationData -> mData -> mContStates . mX = & rtX . opqf3j24fn [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 83 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cowewv1m30 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 80 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aitoajng4b [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mHadEvents = false ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . d4jymh4nxd [ 0 ] ; tmp_p [ 1 ]
= rtB . d4jymh4nxd [ 1 ] ; tmp_p [ 2 ] = rtB . d4jymh4nxd [ 2 ] ; tmp_p [ 3 ]
= rtB . d4jymh4nxd [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . khv2ifj12b [
0 ] ; tmp_p [ 5 ] = rtB . khv2ifj12b [ 1 ] ; tmp_p [ 6 ] = rtB . khv2ifj12b [
2 ] ; tmp_p [ 7 ] = rtB . khv2ifj12b [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
rtB . f30llq3r5r [ 0 ] ; tmp_p [ 9 ] = rtB . f30llq3r5r [ 1 ] ; tmp_p [ 10 ]
= rtB . f30llq3r5r [ 2 ] ; tmp_p [ 11 ] = rtB . f30llq3r5r [ 3 ] ; tmp_e [ 3
] = 12 ; tmp_p [ 12 ] = rtB . c0sk0m0en4 [ 0 ] ; tmp_p [ 13 ] = rtB .
c0sk0m0en4 [ 1 ] ; tmp_p [ 14 ] = rtB . c0sk0m0en4 [ 2 ] ; tmp_p [ 15 ] = rtB
. c0sk0m0en4 [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 62 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> opqf3j24fn [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . iti3hdl1fz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ahk0b0xovg ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { } void MdlForcingFunction ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 16 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e
[ 5 ] ; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ;
simulationData = ( NeslSimulationData * ) rtDW . avzvouupma ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 62 ;
simulationData -> mData -> mContStates . mX = & rtX . opqf3j24fn [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 83 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cowewv1m30 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 80 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aitoajng4b [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mHadEvents = false ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . d4jymh4nxd [ 0 ] ; tmp_p [ 1 ]
= rtB . d4jymh4nxd [ 1 ] ; tmp_p [ 2 ] = rtB . d4jymh4nxd [ 2 ] ; tmp_p [ 3 ]
= rtB . d4jymh4nxd [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . khv2ifj12b [
0 ] ; tmp_p [ 5 ] = rtB . khv2ifj12b [ 1 ] ; tmp_p [ 6 ] = rtB . khv2ifj12b [
2 ] ; tmp_p [ 7 ] = rtB . khv2ifj12b [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
rtB . f30llq3r5r [ 0 ] ; tmp_p [ 9 ] = rtB . f30llq3r5r [ 1 ] ; tmp_p [ 10 ]
= rtB . f30llq3r5r [ 2 ] ; tmp_p [ 11 ] = rtB . f30llq3r5r [ 3 ] ; tmp_e [ 3
] = 12 ; tmp_p [ 12 ] = rtB . c0sk0m0en4 [ 0 ] ; tmp_p [ 13 ] = rtB .
c0sk0m0en4 [ 1 ] ; tmp_p [ 14 ] = rtB . c0sk0m0en4 [ 2 ] ; tmp_p [ 15 ] = rtB
. c0sk0m0en4 [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 62 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> opqf3j24fn [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . iti3hdl1fz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ahk0b0xovg ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } } void MdlMassMatrix ( void ) { NeslSimulationData *
simulationData ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree
* diagnosticTree ; char * msg ; real_T tmp_p [ 16 ] ; real_T time ; real_T *
tmp_i ; real_T * tmp_m ; int32_T tmp_g ; int_T tmp_e [ 5 ] ; boolean_T tmp ;
simulationData = ( NeslSimulationData * ) rtDW . avzvouupma ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 62 ;
simulationData -> mData -> mContStates . mX = & rtX . opqf3j24fn [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 83 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . cowewv1m30 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 80 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aitoajng4b [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
( rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
tmp ; simulationData -> mData -> mHadEvents = false ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . d4jymh4nxd [ 0 ] ; tmp_p [ 1 ]
= rtB . d4jymh4nxd [ 1 ] ; tmp_p [ 2 ] = rtB . d4jymh4nxd [ 2 ] ; tmp_p [ 3 ]
= rtB . d4jymh4nxd [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . khv2ifj12b [
0 ] ; tmp_p [ 5 ] = rtB . khv2ifj12b [ 1 ] ; tmp_p [ 6 ] = rtB . khv2ifj12b [
2 ] ; tmp_p [ 7 ] = rtB . khv2ifj12b [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
rtB . f30llq3r5r [ 0 ] ; tmp_p [ 9 ] = rtB . f30llq3r5r [ 1 ] ; tmp_p [ 10 ]
= rtB . f30llq3r5r [ 2 ] ; tmp_p [ 11 ] = rtB . f30llq3r5r [ 3 ] ; tmp_e [ 3
] = 12 ; tmp_p [ 12 ] = rtB . c0sk0m0en4 [ 0 ] ; tmp_p [ 13 ] = rtB .
c0sk0m0en4 [ 1 ] ; tmp_p [ 14 ] = rtB . c0sk0m0en4 [ 2 ] ; tmp_p [ 15 ] = rtB
. c0sk0m0en4 [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ; tmp_i =
ssGetMassMatrixPr ( rtS ) ; tmp_m = double_pointer_shift ( tmp_i , rtDW .
n2bqajqtph ) ; simulationData -> mData -> mMassMatrixPr . mN = 15 ;
simulationData -> mData -> mMassMatrixPr . mX = tmp_m ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . iti3hdl1fz ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_g =
ne_simulator_method ( ( NeslSimulator * ) rtDW . ahk0b0xovg ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_g != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlZeroCrossings ( void ) { NeslSimulationData * simulationData
; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; ZCV * _rtZCSV ; char * msg ; real_T tmp_p [ 16 ] ; real_T
time ; int32_T tmp_i ; int_T tmp_e [ 5 ] ; boolean_T tmp ; _rtZCSV = ( ( ZCV
* ) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> etrvewkzwq = rtB .
e3lyudtmtl - rtB . gzs1upx1ld ; simulationData = ( NeslSimulationData * )
rtDW . avzvouupma ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime
. mN = 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 62 ; simulationData -> mData -> mContStates . mX
= & rtX . opqf3j24fn [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 83
; simulationData -> mData -> mDiscStates . mX = & rtDW . cowewv1m30 [ 0 ] ;
simulationData -> mData -> mModeVector . mN = 80 ; simulationData -> mData ->
mModeVector . mX = & rtDW . aitoajng4b [ 0 ] ; tmp = ( ssIsMajorTimeStep (
rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData
-> mData -> mFoundZcEvents = tmp ; simulationData -> mData -> mHadEvents =
false ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS
) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = rtB . d4jymh4nxd [ 0 ] ; tmp_p [ 1 ] = rtB . d4jymh4nxd [ 1 ] ;
tmp_p [ 2 ] = rtB . d4jymh4nxd [ 2 ] ; tmp_p [ 3 ] = rtB . d4jymh4nxd [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . khv2ifj12b [ 0 ] ; tmp_p [ 5 ] = rtB .
khv2ifj12b [ 1 ] ; tmp_p [ 6 ] = rtB . khv2ifj12b [ 2 ] ; tmp_p [ 7 ] = rtB .
khv2ifj12b [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . f30llq3r5r [ 0 ] ;
tmp_p [ 9 ] = rtB . f30llq3r5r [ 1 ] ; tmp_p [ 10 ] = rtB . f30llq3r5r [ 2 ]
; tmp_p [ 11 ] = rtB . f30llq3r5r [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . c0sk0m0en4 [ 0 ] ; tmp_p [ 13 ] = rtB . c0sk0m0en4 [ 1 ] ; tmp_p [ 14 ]
= rtB . c0sk0m0en4 [ 2 ] ; tmp_p [ 15 ] = rtB . c0sk0m0en4 [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mNonSampledZCs . mN = 84 ;
simulationData -> mData -> mNonSampledZCs . mX = & _rtZCSV -> lnq3q1oozy ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . iti3hdl1fz ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . ahk0b0xovg ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . iti3hdl1fz ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . avzvouupma ) ; nesl_erase_simulator (
"PowerElecCurriculumDesign/Solver Configuration_1" ) ; nesl_destroy_registry
( ) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
mo1bheafsg ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
j34nvcnrrz ) ; nesl_erase_simulator (
"PowerElecCurriculumDesign/Solver Configuration_1" ) ; nesl_destroy_registry
( ) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
nhjis5yhic ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
jtosohksrj ) ; nesl_erase_simulator (
"PowerElecCurriculumDesign/Solver Configuration_1" ) ; nesl_destroy_registry
( ) ; neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW .
mv3ojv2n2a ) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW .
ia5hdvfnyf ) ; nesl_erase_simulator (
"PowerElecCurriculumDesign/Solver Configuration_1" ) ; nesl_destroy_registry
( ) ; } static void mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( mxArray
* destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_PowerElecCurriculumDesign_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_PowerElecCurriculumDesign_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_PowerElecCurriculumDesign_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_PowerElecCurriculumDesign_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_PowerElecCurriculumDesign_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_PowerElecCurriculumDesign_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_PowerElecCurriculumDesign_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_PowerElecCurriculumDesign_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_PowerElecCurriculumDesign_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_PowerElecCurriculumDesign_cacheBitFieldToCellArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal
) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_PowerElecCurriculumDesign_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_PowerElecCurriculumDesign_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_PowerElecCurriculumDesign_GetDWork (
) { static const char_T * ssDWFieldNames [ 3 ] = { "rtB" , "rtDW" ,
"rtPrevZCX" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( ssDW , 0
, 0 , ( const void * ) & ( rtB ) , sizeof ( rtB ) ) ; { static const char_T *
rtdwDataFieldNames [ 34 ] = { "rtDW.eqxw5ipaqu" , "rtDW.bu2ap5h1zw" ,
"rtDW.l3dkmxtkup" , "rtDW.ndakhsxbau" , "rtDW.cowewv1m30" , "rtDW.be21jvh4m5"
, "rtDW.hujy3sr5qa" , "rtDW.biae4oaxki" , "rtDW.mathxaaa54" ,
"rtDW.nosrs3fidx" , "rtDW.gagkrcvl21" , "rtDW.otfubklm10" , "rtDW.ektz4axiiq"
, "rtDW.g2kvorjwgo" , "rtDW.nbbv5gde22" , "rtDW.mfduvdp04x" ,
"rtDW.aitoajng4b" , "rtDW.j2ywn1tz2f" , "rtDW.ibj1gtgw5z" , "rtDW.aha51gyvzc"
, "rtDW.n2bqajqtph" , "rtDW.e3wigxva1h" , "rtDW.b0g44fcvf4" ,
"rtDW.o2agmntgwx" , "rtDW.jj20uftslt" , "rtDW.fxjjl0vnkj" , "rtDW.hmcgtpzjhj"
, "rtDW.etqduttqdz" , "rtDW.fm3ahzflhh" , "rtDW.aqch01fh2d" ,
"rtDW.cdarvsloed" , "rtDW.bbigt0bkaa" , "rtDW.fy1435topv" , "rtDW.d11s1nwvhm"
, } ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 34 ,
rtdwDataFieldNames ) ; mr_PowerElecCurriculumDesign_cacheDataAsMxArray (
rtdwData , 0 , 0 , ( const void * ) & ( rtDW . eqxw5ipaqu ) , sizeof ( rtDW .
eqxw5ipaqu ) ) ; mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData ,
0 , 1 , ( const void * ) & ( rtDW . bu2ap5h1zw ) , sizeof ( rtDW . bu2ap5h1zw
) ) ; mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 2 , (
const void * ) & ( rtDW . l3dkmxtkup ) , sizeof ( rtDW . l3dkmxtkup ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const
void * ) & ( rtDW . ndakhsxbau ) , sizeof ( rtDW . ndakhsxbau ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const
void * ) & ( rtDW . cowewv1m30 ) , sizeof ( rtDW . cowewv1m30 ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const
void * ) & ( rtDW . be21jvh4m5 ) , sizeof ( rtDW . be21jvh4m5 ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const
void * ) & ( rtDW . hujy3sr5qa ) , sizeof ( rtDW . hujy3sr5qa ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const
void * ) & ( rtDW . biae4oaxki ) , sizeof ( rtDW . biae4oaxki ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const
void * ) & ( rtDW . mathxaaa54 ) , sizeof ( rtDW . mathxaaa54 ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const
void * ) & ( rtDW . nosrs3fidx ) , sizeof ( rtDW . nosrs3fidx ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const
void * ) & ( rtDW . gagkrcvl21 ) , sizeof ( rtDW . gagkrcvl21 ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const
void * ) & ( rtDW . otfubklm10 ) , sizeof ( rtDW . otfubklm10 ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const
void * ) & ( rtDW . ektz4axiiq ) , sizeof ( rtDW . ektz4axiiq ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const
void * ) & ( rtDW . g2kvorjwgo ) , sizeof ( rtDW . g2kvorjwgo ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const
void * ) & ( rtDW . nbbv5gde22 ) , sizeof ( rtDW . nbbv5gde22 ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const
void * ) & ( rtDW . mfduvdp04x ) , sizeof ( rtDW . mfduvdp04x ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const
void * ) & ( rtDW . aitoajng4b ) , sizeof ( rtDW . aitoajng4b ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const
void * ) & ( rtDW . j2ywn1tz2f ) , sizeof ( rtDW . j2ywn1tz2f ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const
void * ) & ( rtDW . ibj1gtgw5z ) , sizeof ( rtDW . ibj1gtgw5z ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const
void * ) & ( rtDW . aha51gyvzc ) , sizeof ( rtDW . aha51gyvzc ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const
void * ) & ( rtDW . n2bqajqtph ) , sizeof ( rtDW . n2bqajqtph ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const
void * ) & ( rtDW . e3wigxva1h ) , sizeof ( rtDW . e3wigxva1h ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const
void * ) & ( rtDW . b0g44fcvf4 ) , sizeof ( rtDW . b0g44fcvf4 ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const
void * ) & ( rtDW . o2agmntgwx ) , sizeof ( rtDW . o2agmntgwx ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const
void * ) & ( rtDW . jj20uftslt ) , sizeof ( rtDW . jj20uftslt ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const
void * ) & ( rtDW . fxjjl0vnkj ) , sizeof ( rtDW . fxjjl0vnkj ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const
void * ) & ( rtDW . hmcgtpzjhj ) , sizeof ( rtDW . hmcgtpzjhj ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const
void * ) & ( rtDW . etqduttqdz ) , sizeof ( rtDW . etqduttqdz ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const
void * ) & ( rtDW . fm3ahzflhh ) , sizeof ( rtDW . fm3ahzflhh ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const
void * ) & ( rtDW . aqch01fh2d ) , sizeof ( rtDW . aqch01fh2d ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const
void * ) & ( rtDW . cdarvsloed ) , sizeof ( rtDW . cdarvsloed ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const
void * ) & ( rtDW . bbigt0bkaa ) , sizeof ( rtDW . bbigt0bkaa ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const
void * ) & ( rtDW . fy1435topv ) , sizeof ( rtDW . fy1435topv ) ) ;
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const
void * ) & ( rtDW . d11s1nwvhm ) , sizeof ( rtDW . d11s1nwvhm ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; }
mr_PowerElecCurriculumDesign_cacheDataAsMxArray ( ssDW , 0 , 2 , ( const void
* ) & ( rtPrevZCX ) , sizeof ( rtPrevZCX ) ) ; return ssDW ; } void
mr_PowerElecCurriculumDesign_SetDWork ( const mxArray * ssDW ) { ( void )
ssDW ; mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & (
rtB ) , ssDW , 0 , 0 , sizeof ( rtB ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
eqxw5ipaqu ) , rtdwData , 0 , 0 , sizeof ( rtDW . eqxw5ipaqu ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bu2ap5h1zw ) , rtdwData , 0 , 1 , sizeof ( rtDW . bu2ap5h1zw ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
l3dkmxtkup ) , rtdwData , 0 , 2 , sizeof ( rtDW . l3dkmxtkup ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ndakhsxbau ) , rtdwData , 0 , 3 , sizeof ( rtDW . ndakhsxbau ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cowewv1m30 ) , rtdwData , 0 , 4 , sizeof ( rtDW . cowewv1m30 ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
be21jvh4m5 ) , rtdwData , 0 , 5 , sizeof ( rtDW . be21jvh4m5 ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hujy3sr5qa ) , rtdwData , 0 , 6 , sizeof ( rtDW . hujy3sr5qa ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
biae4oaxki ) , rtdwData , 0 , 7 , sizeof ( rtDW . biae4oaxki ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mathxaaa54 ) , rtdwData , 0 , 8 , sizeof ( rtDW . mathxaaa54 ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nosrs3fidx ) , rtdwData , 0 , 9 , sizeof ( rtDW . nosrs3fidx ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
gagkrcvl21 ) , rtdwData , 0 , 10 , sizeof ( rtDW . gagkrcvl21 ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
otfubklm10 ) , rtdwData , 0 , 11 , sizeof ( rtDW . otfubklm10 ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ektz4axiiq ) , rtdwData , 0 , 12 , sizeof ( rtDW . ektz4axiiq ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
g2kvorjwgo ) , rtdwData , 0 , 13 , sizeof ( rtDW . g2kvorjwgo ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
nbbv5gde22 ) , rtdwData , 0 , 14 , sizeof ( rtDW . nbbv5gde22 ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
mfduvdp04x ) , rtdwData , 0 , 15 , sizeof ( rtDW . mfduvdp04x ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aitoajng4b ) , rtdwData , 0 , 16 , sizeof ( rtDW . aitoajng4b ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
j2ywn1tz2f ) , rtdwData , 0 , 17 , sizeof ( rtDW . j2ywn1tz2f ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ibj1gtgw5z ) , rtdwData , 0 , 18 , sizeof ( rtDW . ibj1gtgw5z ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aha51gyvzc ) , rtdwData , 0 , 19 , sizeof ( rtDW . aha51gyvzc ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
n2bqajqtph ) , rtdwData , 0 , 20 , sizeof ( rtDW . n2bqajqtph ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
e3wigxva1h ) , rtdwData , 0 , 21 , sizeof ( rtDW . e3wigxva1h ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
b0g44fcvf4 ) , rtdwData , 0 , 22 , sizeof ( rtDW . b0g44fcvf4 ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
o2agmntgwx ) , rtdwData , 0 , 23 , sizeof ( rtDW . o2agmntgwx ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
jj20uftslt ) , rtdwData , 0 , 24 , sizeof ( rtDW . jj20uftslt ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fxjjl0vnkj ) , rtdwData , 0 , 25 , sizeof ( rtDW . fxjjl0vnkj ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
hmcgtpzjhj ) , rtdwData , 0 , 26 , sizeof ( rtDW . hmcgtpzjhj ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
etqduttqdz ) , rtdwData , 0 , 27 , sizeof ( rtDW . etqduttqdz ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fm3ahzflhh ) , rtdwData , 0 , 28 , sizeof ( rtDW . fm3ahzflhh ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aqch01fh2d ) , rtdwData , 0 , 29 , sizeof ( rtDW . aqch01fh2d ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cdarvsloed ) , rtdwData , 0 , 30 , sizeof ( rtDW . cdarvsloed ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
bbigt0bkaa ) , rtdwData , 0 , 31 , sizeof ( rtDW . bbigt0bkaa ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
fy1435topv ) , rtdwData , 0 , 32 , sizeof ( rtDW . fy1435topv ) ) ;
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & ( rtDW .
d11s1nwvhm ) , rtdwData , 0 , 33 , sizeof ( rtDW . d11s1nwvhm ) ) ; }
mr_PowerElecCurriculumDesign_restoreDataFromMxArray ( ( void * ) & (
rtPrevZCX ) , ssDW , 0 , 2 , sizeof ( rtPrevZCX ) ) ; } mxArray *
mr_PowerElecCurriculumDesign_GetSimStateDisallowedBlocks ( ) { mxArray * data
= mxCreateCellMatrix ( 6 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 6 ] = { "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "Scope" , "SimscapeExecutionBlock" ,
"SimscapeExecutionBlock" , "Scope" , } ; static const char_T * blockPath [ 6
] = { "PowerElecCurriculumDesign/Solver Configuration/EVAL_KEY/STATE_1" ,
"PowerElecCurriculumDesign/Solver Configuration/EVAL_KEY/OUTPUT_1_0" ,
"PowerElecCurriculumDesign/Scope" ,
"PowerElecCurriculumDesign/Solver Configuration/EVAL_KEY/OUTPUT_1_2" ,
"PowerElecCurriculumDesign/Solver Configuration/EVAL_KEY/OUTPUT_1_1" ,
"PowerElecCurriculumDesign/Scope1" , } ; static const int reason [ 6 ] = { 0
, 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 6 ; ++ ( subs [
0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs [
0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 62 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 110 ) ;
ssSetNumBlockIO ( rtS , 13 ) ; ssSetNumBlockParams ( rtS , 18 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , - 2.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3545317450U ) ; ssSetChecksumVal ( rtS , 1 ,
4198979647U ) ; ssSetChecksumVal ( rtS , 2 , 4040043506U ) ; ssSetChecksumVal
( rtS , 3 , 356543726U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; executionInfo -> gblObjects_ . numToFiles = 0 ;
executionInfo -> gblObjects_ . numFrFiles = 0 ; executionInfo -> gblObjects_
. numFrWksBlocks = 0 ; executionInfo -> gblObjects_ . numModelInputs = 0 ;
executionInfo -> gblObjects_ . numRootInportBlks = 0 ; executionInfo ->
gblObjects_ . inportDataTypeIdx = NULL ; executionInfo -> gblObjects_ .
inportDims = NULL ; executionInfo -> gblObjects_ . inportComplex = NULL ;
executionInfo -> gblObjects_ . inportInterpoFlag = NULL ; executionInfo ->
gblObjects_ . inportContinuous = NULL ; ( void ) memset ( ( char_T * ) rtS ,
0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char_T * ) & mdlInfo , 0 ,
sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char_T * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char_T * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & rtB ) ) ; ( void ) memset ( ( ( void * ) & rtB ) , 0 , sizeof
( B ) ) ; } { real_T * x = ( real_T * ) & rtX ; ssSetContStates ( rtS , x ) ;
( void ) memset ( ( void * ) x , 0 , sizeof ( X ) ) ; } { void * dwork = (
void * ) & rtDW ; ssSetRootDWork ( rtS , dwork ) ; ( void ) memset ( dwork ,
0 , sizeof ( DW ) ) ; } { rtDW . n2bqajqtph = 0 ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 23 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; }
PowerElecCurriculumDesign_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"PowerElecCurriculumDesign" ) ; ssSetPath ( rtS , "PowerElecCurriculumDesign"
) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal ( rtS , 0.1 ) ; { static
RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL
) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { { static int_T
rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 83 } ; static
int_T rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ;
static int_T rt_LoggedStateDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 ,
83 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 } ; static BuiltInDTypeId rt_LoggedStateDataTypeIds [ ] = {
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
SS_DOUBLE } ; static int_T rt_LoggedStateComplexSignals [ ] = { 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 } ; static RTWPreprocessingFcnPtr
rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) , ( NULL ) ,
( NULL ) } ; static const char_T * rt_LoggedStateLabels [ ] = { "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" ,
"CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "CSTATE" , "Discrete" ,
"Discrete" , "Discrete" , "Discrete" , "Discrete" } ; static const char_T *
rt_LoggedStateBlockNames [ ] = { "PowerElecCurriculumDesign/Inductor" ,
"PowerElecCurriculumDesign/Capacitor" ,
"PowerElecCurriculumDesign/Capacitor1" ,
"PowerElecCurriculumDesign/Inductor2" ,
"PowerElecCurriculumDesign/Capacitor2" ,
"PowerElecCurriculumDesign/Capacitor3" ,
"PowerElecCurriculumDesign/Capacitor4" , "PowerElecCurriculumDesign/Diode1" ,
"PowerElecCurriculumDesign/Diode2" , "PowerElecCurriculumDesign/Diode" ,
"PowerElecCurriculumDesign/Inductor1" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" ,
"PowerElecCurriculumDesign/Thyristor3" ,
"PowerElecCurriculumDesign/Thyristor4" ,
"PowerElecCurriculumDesign/AC Voltage Source" ,
"PowerElecCurriculumDesign/IGBT" , "PowerElecCurriculumDesign/Inductor" ,
"PowerElecCurriculumDesign/Capacitor" ,
"PowerElecCurriculumDesign/Capacitor1" ,
"PowerElecCurriculumDesign/Capacitor2" ,
"PowerElecCurriculumDesign/Current Sensor" ,
"PowerElecCurriculumDesign/Inductor2" ,
"PowerElecCurriculumDesign/Capacitor3" , "PowerElecCurriculumDesign/Diode1" ,
"PowerElecCurriculumDesign/Finite-Gain Op-Amp1" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" ,
"PowerElecCurriculumDesign/Capacitor4" , "PowerElecCurriculumDesign/Diode2" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" ,
"PowerElecCurriculumDesign/Diode1" , "PowerElecCurriculumDesign/Comparator" ,
"PowerElecCurriculumDesign/Diode2" , "PowerElecCurriculumDesign/Comparator1"
, "PowerElecCurriculumDesign/Diode3" , "PowerElecCurriculumDesign/Diode4" ,
"PowerElecCurriculumDesign/Potentiometer" , "PowerElecCurriculumDesign/Diode"
, "PowerElecCurriculumDesign/Diode" , "PowerElecCurriculumDesign/Diode3" ,
"PowerElecCurriculumDesign/Diode3" , "PowerElecCurriculumDesign/Diode4" ,
"PowerElecCurriculumDesign/Diode4" , "PowerElecCurriculumDesign/Diode6" ,
"PowerElecCurriculumDesign/IGBT1" , "PowerElecCurriculumDesign/IGBT3" ,
"PowerElecCurriculumDesign/Diode5" , "PowerElecCurriculumDesign/Diode6" ,
"PowerElecCurriculumDesign/IGBT2" , "PowerElecCurriculumDesign/Diode7" ,
"PowerElecCurriculumDesign/IGBT4" , "PowerElecCurriculumDesign/Diode8" ,
"PowerElecCurriculumDesign/Diode9" , "PowerElecCurriculumDesign/Diode9" ,
"PowerElecCurriculumDesign/Finite-Gain Op-Amp1" ,
"PowerElecCurriculumDesign/Finite-Gain Op-Amp2" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" ,
"PowerElecCurriculumDesign/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"PowerElecCurriculumDesign/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"PowerElecCurriculumDesign/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"PowerElecCurriculumDesign/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"PowerElecCurriculumDesign/Solver\nConfiguration/EVAL_KEY/STATE_1" } ; static
const char_T * rt_LoggedStateNames [ ] = {
"PowerElecCurriculumDesign.Inductor.i_L" ,
"PowerElecCurriculumDesign.Capacitor.vc" ,
"PowerElecCurriculumDesign.Capacitor1.vc" ,
"PowerElecCurriculumDesign.Inductor2.i_L" ,
"PowerElecCurriculumDesign.Capacitor2.vc" ,
"PowerElecCurriculumDesign.Capacitor3.vc" ,
"PowerElecCurriculumDesign.Capacitor4.vc" ,
"PowerElecCurriculumDesign.Diode1.private.Cjunction.vc" ,
"PowerElecCurriculumDesign.Diode2.private.Cjunction.vc" ,
"PowerElecCurriculumDesign.Diode.private.Cjunction.vc" ,
"PowerElecCurriculumDesign.Inductor1.i_L" ,
"PowerElecCurriculumDesign.PNP_Bipolar_Transistor1.capacitor_bc.vc" ,
"PowerElecCurriculumDesign.PNP_Bipolar_Transistor.capacitor_bc.vc" ,
"PowerElecCurriculumDesign.PNP_Bipolar_Transistor.capacitor_be.vc" ,
"PowerElecCurriculumDesign.PNP_Bipolar_Transistor1.capacitor_be.vc" ,
"PowerElecCurriculumDesign.Thyristor3.iak" ,
"PowerElecCurriculumDesign.Thyristor4.iak" ,
"PowerElecCurriculumDesign.AC_Voltage_Source.p.v" ,
"PowerElecCurriculumDesign.IGBT.ice" , "PowerElecCurriculumDesign.Inductor.v"
, "PowerElecCurriculumDesign.Capacitor.n.v" ,
"PowerElecCurriculumDesign.Capacitor1.i" ,
"PowerElecCurriculumDesign.Capacitor2.n.v" ,
"PowerElecCurriculumDesign.Current_Sensor.n.v" ,
"PowerElecCurriculumDesign.Inductor2.v" ,
"PowerElecCurriculumDesign.Capacitor3.p.v" ,
"PowerElecCurriculumDesign.Diode1.private.i_res" ,
"PowerElecCurriculumDesign.Finite_Gain_Op_Amp1.n.v" ,
"PowerElecCurriculumDesign.PNP_Bipolar_Transistor.collector_resistor.i" ,
"PowerElecCurriculumDesign.Capacitor4.p.v" ,
"PowerElecCurriculumDesign.Diode2.private.i_res" ,
"PowerElecCurriculumDesign.PNP_Bipolar_Transistor1.collector_resistor.i" ,
"PowerElecCurriculumDesign.Diode1.i_capacitor" ,
"PowerElecCurriculumDesign.Comparator.comparator1.J.v" ,
"PowerElecCurriculumDesign.Diode2.i_capacitor" ,
"PowerElecCurriculumDesign.Comparator1.comparator1.J.v" ,
"PowerElecCurriculumDesign.Diode3.private.Diode.v_diode" ,
"PowerElecCurriculumDesign.Diode4.private.Diode.v_diode" ,
"PowerElecCurriculumDesign.Potentiometer.iR" ,
"PowerElecCurriculumDesign.Diode.i_capacitor" ,
"PowerElecCurriculumDesign.Diode.private.Diode.threshold" ,
"PowerElecCurriculumDesign.Diode3.private.Diode.BV_threshold" ,
"PowerElecCurriculumDesign.Diode3.private.Diode.threshold" ,
"PowerElecCurriculumDesign.Diode4.private.Diode.BV_threshold" ,
"PowerElecCurriculumDesign.Diode4.private.Diode.threshold" ,
"PowerElecCurriculumDesign.Diode6.i_diode" ,
"PowerElecCurriculumDesign.IGBT1.ice" , "PowerElecCurriculumDesign.IGBT3.ice"
, "PowerElecCurriculumDesign.Diode5.private.Diode.threshold" ,
"PowerElecCurriculumDesign.Diode6.private.Diode.threshold" ,
"PowerElecCurriculumDesign.IGBT2.ice" ,
"PowerElecCurriculumDesign.Diode7.private.Diode.threshold" ,
"PowerElecCurriculumDesign.IGBT4.ice" ,
"PowerElecCurriculumDesign.Diode8.private.Diode.threshold" ,
"PowerElecCurriculumDesign.Diode9.i_diode" ,
"PowerElecCurriculumDesign.Diode9.private.Diode.threshold" ,
"PowerElecCurriculumDesign.Finite_Gain_Op_Amp1.out.v" ,
"PowerElecCurriculumDesign.Finite_Gain_Op_Amp2.out.v" ,
"PowerElecCurriculumDesign.PNP_Bipolar_Transistor.transistor.ic" ,
"PowerElecCurriculumDesign.PNP_Bipolar_Transistor.transistor.ib" ,
"PowerElecCurriculumDesign.PNP_Bipolar_Transistor1.transistor.ic" ,
"PowerElecCurriculumDesign.PNP_Bipolar_Transistor1.transistor.ib" ,
"Discrete" , "Discrete" , "Discrete" , "Discrete" , "Discrete" } ; static
boolean_T rt_LoggedStateCrossMdlRef [ ] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 }
; static RTWLogDataTypeConvert rt_RTWLogDataTypeConvert [ ] = { { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0
, 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 ,
0.0 } , { 0 , SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 ,
SS_DOUBLE , SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } , { 0 , SS_DOUBLE ,
SS_DOUBLE , 0 , 0 , 0 , 1.0 , 0 , 0.0 } } ; static int_T
rt_LoggedStateIdxList [ ] = { 0 , 0 , 1 , 2 , 3 , 4 } ; static
RTWLogSignalInfo rt_LoggedStateSignalInfo = { 67 , rt_LoggedStateWidths ,
rt_LoggedStateNumDimensions , rt_LoggedStateDimensions ,
rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 67 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . opqf3j24fn [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . opqf3j24fn [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . opqf3j24fn [ 2 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . opqf3j24fn [ 3 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . opqf3j24fn [ 4 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . opqf3j24fn [ 5 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . opqf3j24fn [ 6 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . opqf3j24fn [ 7 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . opqf3j24fn [ 8 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . opqf3j24fn [ 9 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . opqf3j24fn [ 10 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . opqf3j24fn [ 11 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . opqf3j24fn [ 12 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . opqf3j24fn [ 13 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . opqf3j24fn [ 14 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . opqf3j24fn [ 15 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . opqf3j24fn [ 16 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . opqf3j24fn [ 17 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . opqf3j24fn [ 18 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . opqf3j24fn [ 19 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . opqf3j24fn [ 20 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . opqf3j24fn [ 21 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . opqf3j24fn [ 22 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . opqf3j24fn [ 23 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . opqf3j24fn [ 24 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . opqf3j24fn [ 25 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . opqf3j24fn [ 26 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . opqf3j24fn [ 27 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . opqf3j24fn [ 28 ] ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . opqf3j24fn [ 29 ] ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . opqf3j24fn [ 30 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . opqf3j24fn [ 31 ] ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . opqf3j24fn [ 32 ] ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . opqf3j24fn [ 33 ] ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . opqf3j24fn [ 34 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . opqf3j24fn [ 35 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . opqf3j24fn [ 36 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . opqf3j24fn [ 37 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . opqf3j24fn [ 38 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . opqf3j24fn [ 39 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . opqf3j24fn [ 40 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . opqf3j24fn [ 41 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . opqf3j24fn [ 42 ] ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . opqf3j24fn [ 43 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . opqf3j24fn [ 44 ] ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . opqf3j24fn [ 45 ] ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . opqf3j24fn [ 46 ] ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . opqf3j24fn [ 47 ] ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . opqf3j24fn [ 48 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . opqf3j24fn [ 49 ] ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . opqf3j24fn [ 50 ] ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . opqf3j24fn [ 51 ] ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . opqf3j24fn [ 52 ] ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) & rtX . opqf3j24fn [ 53 ] ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) & rtX . opqf3j24fn [ 54 ] ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) & rtX . opqf3j24fn [ 55 ] ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) & rtX . opqf3j24fn [ 56 ] ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) & rtX . opqf3j24fn [ 57 ] ;
rt_LoggedStateSignalPtrs [ 58 ] = ( void * ) & rtX . opqf3j24fn [ 58 ] ;
rt_LoggedStateSignalPtrs [ 59 ] = ( void * ) & rtX . opqf3j24fn [ 59 ] ;
rt_LoggedStateSignalPtrs [ 60 ] = ( void * ) & rtX . opqf3j24fn [ 60 ] ;
rt_LoggedStateSignalPtrs [ 61 ] = ( void * ) & rtX . opqf3j24fn [ 61 ] ;
rt_LoggedStateSignalPtrs [ 62 ] = ( void * ) rtDW . eqxw5ipaqu ;
rt_LoggedStateSignalPtrs [ 63 ] = ( void * ) rtDW . bu2ap5h1zw ;
rt_LoggedStateSignalPtrs [ 64 ] = ( void * ) rtDW . l3dkmxtkup ;
rt_LoggedStateSignalPtrs [ 65 ] = ( void * ) rtDW . ndakhsxbau ;
rt_LoggedStateSignalPtrs [ 66 ] = ( void * ) rtDW . cowewv1m30 ; }
rtliSetLogT ( ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX (
ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) ,
"xFinal" ) ; rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ;
rtliSetLogYSignalInfo ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ;
rtliSetLogYSignalPtrs ( ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static
struct _ssStatesInfo2 statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 )
; } { static ssPeriodicStatesInfo periodicStatesInfo ;
ssSetPeriodicStatesInfo ( rtS , & periodicStatesInfo ) ; } { static
ssJacobianPerturbationBounds jacobianPerturbationBounds ;
ssSetJacobianPerturbationBounds ( rtS , & jacobianPerturbationBounds ) ; } {
static ssSolverInfo slvrInfo ; static struct _ssSFcnModelMethods3 mdlMethods3
; static struct _ssSFcnModelMethods2 mdlMethods2 ; static boolean_T
contStatesDisabled [ 62 ] ; static real_T absTol [ 62 ] = { 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 } ; static uint8_T absTolControl [ 62 ] = { 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U ,
0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U
, 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U , 0U } ; static
real_T contStateJacPerturbBoundMinVec [ 62 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 62 ] ; static uint8_T zcAttributes [ 85 ] =
{ ( ZC_EVENT_ALL ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) } ; static ssNonContDerivSigInfo nonContDerivSigInfo [ 3 ] = {
{ 1 * sizeof ( real_T ) , ( char * ) ( & rtB . hh4njpdtv0 ) , ( NULL ) } , {
1 * sizeof ( real_T ) , ( char * ) ( & rtB . mfabkmo1fw ) , ( NULL ) } , { 1
* sizeof ( real_T ) , ( char * ) ( & rtB . bqbjyzq0dx ) , ( NULL ) } } ; {
int i ; for ( i = 0 ; i < 62 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ]
= 0 ; contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } }
ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ;
ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , - 1 ) ;
ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS , 1.0E-6 ) ;
ssSetSolverMaxOrder ( rtS , - 1 ) ; ssSetSolverRefineFactor ( rtS , 1 ) ;
ssSetOutputTimes ( rtS , ( NULL ) ) ; ssSetNumOutputTimes ( rtS , 0 ) ;
ssSetOutputTimesOnly ( rtS , 0 ) ; ssSetOutputTimesIndex ( rtS , 0 ) ;
ssSetZCCacheNeedsReset ( rtS , 1 ) ; ssSetDerivCacheNeedsReset ( rtS , 0 ) ;
ssSetNumNonContDerivSigInfos ( rtS , 3 ) ; ssSetNonContDerivSigInfos ( rtS ,
nonContDerivSigInfo ) ; ssSetSolverInfo ( rtS , & slvrInfo ) ;
ssSetSolverName ( rtS , "ode23t" ) ; ssSetVariableStepSolver ( rtS , 1 ) ;
ssSetSolverConsistencyChecking ( rtS , 0 ) ; ssSetSolverAdaptiveZcDetection (
rtS , 1 ) ; ssSetSolverRobustResetMethod ( rtS , 0 ) ;
_ssSetSolverUpdateJacobianAtReset ( rtS , true ) ; ssSetAbsTolVector ( rtS ,
absTol ) ; ssSetAbsTolControlVector ( rtS , absTolControl ) ;
ssSetSolverAbsTol_Obsolete ( rtS , absTol ) ;
ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl ) ;
ssSetJacobianPerturbationBoundsMinVec ( rtS , contStateJacPerturbBoundMinVec
) ; ssSetJacobianPerturbationBoundsMaxVec ( rtS ,
contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 0 ) ; (
void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) ) ;
ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetMassMatrixType ( rtS , ( ssMatrixType ) 1 ) ;
ssSetMassMatrixNzMax ( rtS , 15 ) ; ssSetModelMassMatrix ( rtS ,
MdlMassMatrix ) ; ssSetModelForcingFunction ( rtS , MdlForcingFunction ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 1 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 15 ) ; ssSetModelOutputs ( rtS ,
MdlOutputs ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives (
rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 85 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ;
ssSetSolverZcThreshold ( rtS , 0.001 ) ; ssSetSolverMaxConsecutiveMinStep (
rtS , 1000 ) ; ssSetSolverShapePreserveControl ( rtS , 1 ) ; ssSetTNextTid (
rtS , INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset (
rtS ) ; ssSetNumNonsampledZCs ( rtS , 85 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 1000 ) ; {
int_T * ir = rtMassMatrix . ir ; int_T * jc = rtMassMatrix . jc ; real_T * pr
= rtMassMatrix . pr ; ssSetMassMatrixIr ( rtS , ir ) ; ssSetMassMatrixJc (
rtS , jc ) ; ssSetMassMatrixPr ( rtS , pr ) ; ( void ) memset ( ( void * ) ir
, 0 , 15 * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) jc , 0 , ( 62 +
1 ) * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) pr , 0 , 15 * sizeof
( real_T ) ) ; } } { ZCSigState * zc = ( ZCSigState * ) & rtPrevZCX ;
ssSetPrevZCSigState ( rtS , zc ) ; } { rtPrevZCX . nbozhyiyh4 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . kwai4hzmir = UNINITIALIZED_ZCSIG ;
rtPrevZCX . hp5mrt20ci = UNINITIALIZED_ZCSIG ; rtPrevZCX . nrgw250cx1 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ldqh1buh23 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . nypc3frtzo = UNINITIALIZED_ZCSIG ; rtPrevZCX . emohuolg0q =
UNINITIALIZED_ZCSIG ; rtPrevZCX . hv0o3x4nq1 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . g221lrpagg = UNINITIALIZED_ZCSIG ; rtPrevZCX . db2hkqurrr =
UNINITIALIZED_ZCSIG ; rtPrevZCX . eqtqvm4nzg = UNINITIALIZED_ZCSIG ;
rtPrevZCX . jkzn1b4x0t = UNINITIALIZED_ZCSIG ; rtPrevZCX . kskywat0rc =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ltdsciencd = UNINITIALIZED_ZCSIG ;
rtPrevZCX . lornd1wih5 = UNINITIALIZED_ZCSIG ; rtPrevZCX . mhelknwnjf =
UNINITIALIZED_ZCSIG ; rtPrevZCX . c0nypkvlfb = UNINITIALIZED_ZCSIG ;
rtPrevZCX . eg4of4tgn2 = UNINITIALIZED_ZCSIG ; rtPrevZCX . hcvgexffbo =
UNINITIALIZED_ZCSIG ; rtPrevZCX . otuxrlwygr = UNINITIALIZED_ZCSIG ;
rtPrevZCX . jvlmau24nj = UNINITIALIZED_ZCSIG ; rtPrevZCX . el5xqp4hy2 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . landn5gph0 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . mqmlvscfkb = UNINITIALIZED_ZCSIG ; rtPrevZCX . g34swm3yqy =
UNINITIALIZED_ZCSIG ; rtPrevZCX . lzsbf13enx = UNINITIALIZED_ZCSIG ;
rtPrevZCX . ir0myn0v44 = UNINITIALIZED_ZCSIG ; rtPrevZCX . ke2pzkjj1p =
UNINITIALIZED_ZCSIG ; rtPrevZCX . kmuxgyeyfy = UNINITIALIZED_ZCSIG ;
rtPrevZCX . kjjs1o0mm1 = UNINITIALIZED_ZCSIG ; rtPrevZCX . angncel2c2 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . a4a44qvnno = UNINITIALIZED_ZCSIG ;
rtPrevZCX . duai0ghphw = UNINITIALIZED_ZCSIG ; rtPrevZCX . f0kdphelfo =
UNINITIALIZED_ZCSIG ; rtPrevZCX . bii2chrhyi = UNINITIALIZED_ZCSIG ;
rtPrevZCX . jqqlyjwmi2 = UNINITIALIZED_ZCSIG ; rtPrevZCX . memazaiww2 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . auxg0yxl3k = UNINITIALIZED_ZCSIG ;
rtPrevZCX . muu5dwq3cs = UNINITIALIZED_ZCSIG ; rtPrevZCX . pr3hjeobtr =
UNINITIALIZED_ZCSIG ; rtPrevZCX . oiuxvodcv5 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . pv52yjl3a1 = UNINITIALIZED_ZCSIG ; rtPrevZCX . avftdf0131 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . iqvhedeivt = UNINITIALIZED_ZCSIG ;
rtPrevZCX . m5cc2b5gyz = UNINITIALIZED_ZCSIG ; rtPrevZCX . odwfjcirxr =
UNINITIALIZED_ZCSIG ; rtPrevZCX . nnswhfkby4 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . bun5hioq4m = UNINITIALIZED_ZCSIG ; rtPrevZCX . jj4weujv5p =
UNINITIALIZED_ZCSIG ; rtPrevZCX . jjukrke5th = UNINITIALIZED_ZCSIG ;
rtPrevZCX . epkq1cp3pz = UNINITIALIZED_ZCSIG ; rtPrevZCX . ejuw5qgiv0 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . addnedgbub = UNINITIALIZED_ZCSIG ;
rtPrevZCX . lbxicwkg1b = UNINITIALIZED_ZCSIG ; rtPrevZCX . detkhysobm =
UNINITIALIZED_ZCSIG ; rtPrevZCX . idc1lg0p05 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . mgxbmeucvn = UNINITIALIZED_ZCSIG ; rtPrevZCX . fdgrrbjnh1 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . erqii4rtum = UNINITIALIZED_ZCSIG ;
rtPrevZCX . eotx4mzp1q = UNINITIALIZED_ZCSIG ; rtPrevZCX . koqi52oqgi =
UNINITIALIZED_ZCSIG ; rtPrevZCX . bgp3yq5cao = UNINITIALIZED_ZCSIG ;
rtPrevZCX . fm0fvg2p1g = UNINITIALIZED_ZCSIG ; rtPrevZCX . kmg5cvljd4 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ecyuvfqbvl = UNINITIALIZED_ZCSIG ;
rtPrevZCX . hfxyharzxm = UNINITIALIZED_ZCSIG ; rtPrevZCX . cfmj3s1q11 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . dwhfxsoj00 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . l22glofxvx = UNINITIALIZED_ZCSIG ; rtPrevZCX . ltyxwkn53c =
UNINITIALIZED_ZCSIG ; rtPrevZCX . h2or0hzg5l = UNINITIALIZED_ZCSIG ;
rtPrevZCX . cqqxmh31s5 = UNINITIALIZED_ZCSIG ; rtPrevZCX . aamcnzzg3p =
UNINITIALIZED_ZCSIG ; rtPrevZCX . fl0rnokkds = UNINITIALIZED_ZCSIG ;
rtPrevZCX . k54uc2tlkg = UNINITIALIZED_ZCSIG ; rtPrevZCX . avy31jkwky =
UNINITIALIZED_ZCSIG ; rtPrevZCX . jx1dtas1pg = UNINITIALIZED_ZCSIG ;
rtPrevZCX . bjpok4myai = UNINITIALIZED_ZCSIG ; rtPrevZCX . iitbiqsm3a =
UNINITIALIZED_ZCSIG ; rtPrevZCX . gljpucmt4q = UNINITIALIZED_ZCSIG ;
rtPrevZCX . iw2imko2wv = UNINITIALIZED_ZCSIG ; rtPrevZCX . cwfng2bxhy =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ei222hkqrx = UNINITIALIZED_ZCSIG ;
rtPrevZCX . lvf4uegpi1 = UNINITIALIZED_ZCSIG ; } ssSetChecksumVal ( rtS , 0 ,
3545317450U ) ; ssSetChecksumVal ( rtS , 1 , 4198979647U ) ; ssSetChecksumVal
( rtS , 2 , 4040043506U ) ; ssSetChecksumVal ( rtS , 3 , 356543726U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_PowerElecCurriculumDesign_GetSimStateDisallowedBlocks ) ;
slsaGetWorkFcnForSimTargetOP ( rtS , mr_PowerElecCurriculumDesign_GetDWork )
; slsaSetWorkFcnForSimTargetOP ( rtS , mr_PowerElecCurriculumDesign_SetDWork
) ; rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS
) ) { return rtS ; } executionInfo -> simulationOptions_ . stateSaveName_ =
rtliGetLogX ( ssGetRTWLogInfo ( rtS ) ) ; executionInfo -> simulationOptions_
. finalStateName_ = rtliGetLogXFinal ( ssGetRTWLogInfo ( rtS ) ) ;
executionInfo -> simulationOptions_ . outputSaveName_ = rtliGetLogY (
ssGetRTWLogInfo ( rtS ) ) ; return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID3 ( tid ) ; }
