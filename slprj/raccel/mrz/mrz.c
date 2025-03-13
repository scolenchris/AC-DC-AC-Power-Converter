#include "mrz.h"
#include "rtwtypes.h"
#include "mrz_types.h"
#include "mwmathutil.h"
#include <string.h>
#include <float.h>
#include <stddef.h>
#include "mrz_private.h"
#include "rt_logging_mmi.h"
#include "mrz_capi.h"
#include "mrz_dt.h"
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
 "\"Detected inconsistent solvers in the model reference hierarchy. Model built with daessc requires one of {daessc, ode14x, ode15s, ode1be, ode23t, odeN} solvers to run. Use one of the required solvers in the top model.\""
, 3 ,
 "physmod:simscape:engine:sli:SimscapeExecutionBlock:InconsistentSolversInModelRef"
, 3 , "daessc" , 3 , "{daessc, ode14x, ode15s, ode1be, ode23t, odeN}" ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } } rtDW . gdbdtpq3sd [ 0 ] = 29U ; rtDW .
gdbdtpq3sd [ 1 ] = 29U ; rtDW . gdbdtpq3sd [ 2 ] = 29U ; rtDW . gdbdtpq3sd [
3 ] = 29U ; rtDW . gdbdtpq3sd [ 4 ] = 29U ; rtDW . gdbdtpq3sd [ 5 ] = 29U ;
rtDW . gdbdtpq3sd [ 6 ] = 29U ; rtDW . gdbdtpq3sd [ 7 ] = 29U ; rtDW .
gdbdtpq3sd [ 8 ] = 29U ; rtDW . gdbdtpq3sd [ 9 ] = 29U ; rtDW . gdbdtpq3sd [
10 ] = 29U ; rtDW . gdbdtpq3sd [ 11 ] = 29U ; rtDW . gdbdtpq3sd [ 12 ] = 29U
; rtDW . gdbdtpq3sd [ 13 ] = 29U ; rtDW . gdbdtpq3sd [ 14 ] = 29U ; rtDW .
gdbdtpq3sd [ 15 ] = 29U ; rtDW . gdbdtpq3sd [ 16 ] = 29U ; rtDW . gdbdtpq3sd
[ 17 ] = 29U ; rtDW . gdbdtpq3sd [ 18 ] = 29U ; rtDW . gdbdtpq3sd [ 19 ] =
29U ; rtDW . gdbdtpq3sd [ 20 ] = 29U ; rtDW . gdbdtpq3sd [ 21 ] = 43U ; rtDW
. gdbdtpq3sd [ 22 ] = 29U ; rtDW . gdbdtpq3sd [ 23 ] = 43U ; rtDW .
gdbdtpq3sd [ 24 ] = 29U ; rtDW . gdbdtpq3sd [ 25 ] = 43U ; rtDW . gdbdtpq3sd
[ 26 ] = 29U ; rtDW . gdbdtpq3sd [ 27 ] = 43U ; rtDW . gdbdtpq3sd [ 28 ] =
29U ; rtDW . gdbdtpq3sd [ 29 ] = 43U ; rtDW . gdbdtpq3sd [ 30 ] = 29U ; rtDW
. gdbdtpq3sd [ 31 ] = 29U ; rtDW . gdbdtpq3sd [ 32 ] = 29U ; rtDW .
gdbdtpq3sd [ 33 ] = 29U ; rtDW . gdbdtpq3sd [ 34 ] = 43U ; rtDW . gdbdtpq3sd
[ 35 ] = 43U ; rtDW . gdbdtpq3sd [ 36 ] = 29U ; rtDW . gdbdtpq3sd [ 37 ] =
29U ; rtDW . gdbdtpq3sd [ 38 ] = 29U ; rtDW . gdbdtpq3sd [ 39 ] = 29U ; rtDW
. gdbdtpq3sd [ 40 ] = 29U ; rtDW . gdbdtpq3sd [ 41 ] = 29U ; rtDW .
gdbdtpq3sd [ 42 ] = 29U ; rtDW . gdbdtpq3sd [ 43 ] = 29U ; rtDW . gdbdtpq3sd
[ 44 ] = 29U ; rtDW . gdbdtpq3sd [ 45 ] = 43U ; rtDW . gdbdtpq3sd [ 46 ] =
43U ; rtDW . gdbdtpq3sd [ 47 ] = 29U ; rtDW . gdbdtpq3sd [ 48 ] = 29U ; rtDW
. gdbdtpq3sd [ 49 ] = 29U ; rtDW . gdbdtpq3sd [ 50 ] = 29U ; rtDW .
gdbdtpq3sd [ 51 ] = 29U ; rtDW . gdbdtpq3sd [ 52 ] = 29U ; rtDW . gdbdtpq3sd
[ 53 ] = 29U ; rtDW . gdbdtpq3sd [ 54 ] = 29U ; rtDW . gdbdtpq3sd [ 55 ] =
29U ; rtDW . gdbdtpq3sd [ 56 ] = 43U ; rtDW . gdbdtpq3sd [ 57 ] = 43U ; rtDW
. gdbdtpq3sd [ 58 ] = 29U ; rtDW . gdbdtpq3sd [ 59 ] = 29U ; rtDW .
gdbdtpq3sd [ 60 ] = 29U ; rtDW . gdbdtpq3sd [ 61 ] = 29U ; rtDW . gdbdtpq3sd
[ 62 ] = 29U ; rtDW . gdbdtpq3sd [ 63 ] = 29U ; rtDW . gdbdtpq3sd [ 64 ] =
29U ; rtDW . gdbdtpq3sd [ 65 ] = 29U ; rtDW . gdbdtpq3sd [ 66 ] = 29U ; rtDW
. gdbdtpq3sd [ 67 ] = 43U ; rtDW . gdbdtpq3sd [ 68 ] = 43U ; rtDW .
gdbdtpq3sd [ 69 ] = 29U ; rtDW . gdbdtpq3sd [ 70 ] = 29U ; rtDW . gdbdtpq3sd
[ 71 ] = 29U ; rtDW . gdbdtpq3sd [ 72 ] = 29U ; rtDW . gdbdtpq3sd [ 73 ] =
29U ; rtDW . gdbdtpq3sd [ 74 ] = 29U ; rtDW . gdbdtpq3sd [ 75 ] = 29U ; rtDW
. gdbdtpq3sd [ 76 ] = 29U ; rtDW . gdbdtpq3sd [ 77 ] = 29U ; { static int_T
modelMassMatrixIr [ 32 ] = { 6 , 46 , 1 , 2 , 46 , 0 , 46 , 7 , 46 , 4 , 5 ,
46 , 3 , 46 , 13 , 46 , 8 , 46 , 9 , 46 , 12 , 46 , 10 , 46 , 14 , 46 , 11 ,
46 , 15 , 46 , 16 , 46 } ; static int_T modelMassMatrixJc [ 54 ] = { 0 , 2 ,
3 , 5 , 7 , 9 , 10 , 12 , 14 , 16 , 18 , 20 , 22 , 24 , 26 , 28 , 30 , 32 ,
32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32
, 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 , 32 ,
32 , 32 , 32 , 32 , 32 } ; static real_T modelMassMatrixPr [ 32 ] = { 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 } ; ( void ) memcpy ( rtMassMatrix . ir ,
modelMassMatrixIr , 32 * sizeof ( int_T ) ) ; ( void ) memcpy ( rtMassMatrix
. jc , modelMassMatrixJc , 54 * sizeof ( int_T ) ) ; ( void ) memcpy (
rtMassMatrix . pr , modelMassMatrixPr , 32 * sizeof ( real_T ) ) ; } } void
MdlEnable ( void ) { rtDW . ohzhxlmfeq = 1 ; _ssSetSampleHit ( rtS , 2 , 1 )
; _ssSetTaskTime ( rtS , 2 , ssGetT ( rtS ) ) ; _ssSetVarNextHitTime ( rtS ,
0 , ssGetT ( rtS ) ) ; ; } void MdlStart ( void ) { CXPtMax * _rtXPerturbMax
; CXPtMin * _rtXPerturbMin ; NeModelParameters modelParameters ;
NeModelParameters modelParameters_p ; NeslSimulationData * simulationData ;
NeslSimulator * tmp ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_e ;
NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_e ; char *
msg_p ; real_T tmp_m [ 16 ] ; real_T time ; real_T tmp_e ; int32_T tmp_i ;
int_T tmp_g [ 5 ] ; boolean_T tmp_p ; boolean_T val ; { bool
externalInputIsInDatasetFormat = false ; void * pISigstreamManager =
rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( CXPtMax * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( CXPtMin * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; tmp = nesl_lease_simulator
( "mrz/Solver Configuration_1" , 0 , 0 ) ; rtDW . mm1nwudnea = ( void * ) tmp
; tmp_p = pointer_is_null ( rtDW . mm1nwudnea ) ; if ( tmp_p ) {
mrz_dda62cd9_1_gateway ( ) ; tmp = nesl_lease_simulator (
"mrz/Solver Configuration_1" , 0 , 0 ) ; rtDW . mm1nwudnea = ( void * ) tmp ;
} slsaSaveRawMemoryForSimTargetOP ( rtS , "mrz/Solver Configuration_100" , (
void * * ) ( & rtDW . mm1nwudnea ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; rtDW . gm0m00b0cq = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
j24sb1yofu = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverAbsTol = 0.001 ;
modelParameters . mSolverRelTol = 0.001 ; modelParameters .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ; modelParameters . mStartTime
= 0.0 ; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_OFF ; modelParameters .
mRTWModifiedTimeStamp = 6.57008492E+8 ; modelParameters . mZcDisabled = false
; modelParameters . mUseModelRefSolver = false ; modelParameters .
mTargetFPGAHIL = false ; tmp_e = 0.001 ; modelParameters . mSolverTolerance =
tmp_e ; tmp_e = 0.0 ; modelParameters . mFixedStepSize = tmp_e ; tmp_p = true
; modelParameters . mVariableStepSolver = tmp_p ; tmp_p = false ;
modelParameters . mIsUsingODEN = tmp_p ; tmp_p =
slIsRapidAcceleratorSimulating ( ) ; val = ssGetGlobalInitialStatesAvailable
( rtS ) ; if ( tmp_p ) { val = ( val && ssIsFirstInitCond ( rtS ) ) ; }
modelParameters . mLoadInitialState = val ; modelParameters . mZcDisabled =
false ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . j24sb1yofu ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . mm1nwudnea
, & modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) rtDW . gm0m00b0cq ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 53 ;
simulationData -> mData -> mContStates . mX = & rtX . nhhi0oezes [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 88 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . ekbgaownj3 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 74 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aysnlclzmm [ 0 ] ; tmp_p = ( ssIsMajorTimeStep ( rtS ) &&
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
tmp_m [ 0 ] = rtB . gdb3wbgzo5 [ 0 ] ; tmp_m [ 1 ] = rtB . gdb3wbgzo5 [ 1 ] ;
tmp_m [ 2 ] = rtB . gdb3wbgzo5 [ 2 ] ; tmp_m [ 3 ] = rtB . gdb3wbgzo5 [ 3 ] ;
tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . mnoms1r00y [ 0 ] ; tmp_m [ 5 ] = rtB .
mnoms1r00y [ 1 ] ; tmp_m [ 6 ] = rtB . mnoms1r00y [ 2 ] ; tmp_m [ 7 ] = rtB .
mnoms1r00y [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . li5o4gitlq [ 0 ] ;
tmp_m [ 9 ] = rtB . li5o4gitlq [ 1 ] ; tmp_m [ 10 ] = rtB . li5o4gitlq [ 2 ]
; tmp_m [ 11 ] = rtB . li5o4gitlq [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] =
rtB . fo5pnop3iv [ 0 ] ; tmp_m [ 13 ] = rtB . fo5pnop3iv [ 1 ] ; tmp_m [ 14 ]
= rtB . fo5pnop3iv [ 2 ] ; tmp_m [ 15 ] = rtB . fo5pnop3iv [ 3 ] ; tmp_g [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_g [ 0 ] ; simulationData -> mData -> mNumjacDxLo . mN = 53 ;
simulationData -> mData -> mNumjacDxLo . mX = & _rtXPerturbMin -> nhhi0oezes
[ 0 ] ; simulationData -> mData -> mNumjacDxHi . mN = 53 ; simulationData ->
mData -> mNumjacDxHi . mX = & _rtXPerturbMax -> nhhi0oezes [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . j24sb1yofu ;
diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. mm1nwudnea , NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager
) ; if ( tmp_i != 0 ) { tmp_p = error_buffer_is_empty ( ssGetErrorStatus (
rtS ) ) ; if ( tmp_p ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ;
ssSetErrorStatus ( rtS , msg_p ) ; } } tmp = nesl_lease_simulator (
"mrz/Solver Configuration_1" , 1 , 0 ) ; rtDW . h1fg01ehox = ( void * ) tmp ;
tmp_p = pointer_is_null ( rtDW . h1fg01ehox ) ; if ( tmp_p ) {
mrz_dda62cd9_1_gateway ( ) ; tmp = nesl_lease_simulator (
"mrz/Solver Configuration_1" , 1 , 0 ) ; rtDW . h1fg01ehox = ( void * ) tmp ;
} slsaSaveRawMemoryForSimTargetOP ( rtS , "mrz/Solver Configuration_110" , (
void * * ) ( & rtDW . h1fg01ehox ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; rtDW . dpeqg0do3s = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; rtDW .
l1oy2ljexe = ( void * ) diagnosticManager ; modelParameters_p . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverAbsTol = 0.001 ;
modelParameters_p . mSolverRelTol = 0.001 ; modelParameters_p .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_MAYBE ; modelParameters_p .
mStartTime = 0.0 ; modelParameters_p . mLoadInitialState = false ;
modelParameters_p . mUseSimState = false ; modelParameters_p .
mLinTrimCompile = false ; modelParameters_p . mLoggingMode = SSC_LOGGING_OFF
; modelParameters_p . mRTWModifiedTimeStamp = 6.57008492E+8 ;
modelParameters_p . mZcDisabled = false ; modelParameters_p .
mUseModelRefSolver = false ; modelParameters_p . mTargetFPGAHIL = false ;
tmp_e = 0.001 ; modelParameters_p . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters_p . mFixedStepSize = tmp_e ; tmp_p = true ; modelParameters_p
. mVariableStepSolver = tmp_p ; tmp_p = false ; modelParameters_p .
mIsUsingODEN = tmp_p ; tmp_p = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp_p ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p . mLoadInitialState = val ;
modelParameters_p . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . l1oy2ljexe ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) rtDW . h1fg01ehox , &
modelParameters_p , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp_p =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp_p ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } MdlInitialize ( ) ; MdlEnable ( ) ; } void MdlOutputs ( int_T tid ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree *
diagnosticTree_e ; NeuDiagnosticTree * diagnosticTree_i ; NeuDiagnosticTree *
diagnosticTree_p ; ZCV * _rtZCSV ; char * msg ; char * msg_e ; char * msg_i ;
char * msg_p ; real_T tmp_c [ 159 ] ; real_T tmp_j [ 16 ] ; real_T tmp_m [ 16
] ; real_T tmp_p [ 16 ] ; real_T ratio ; real_T taskTimeV ; real_T time ;
real_T time_e ; real_T time_g ; real_T time_i ; real_T time_m ; real_T time_p
; int32_T tmp_i ; int_T tmp_k [ 6 ] ; int_T tmp_e [ 5 ] ; int_T tmp_f [ 5 ] ;
int_T tmp_g [ 5 ] ; int_T i ; uint32_T numCycles ; boolean_T hadEvents ;
boolean_T tmp ; _rtZCSV = ( ( ZCV * ) ssGetSolverZcSignalVector ( rtS ) ) ;
rtB . dijpktxxg5 = look1_binlxpw ( muDoubleScalarRem ( ssGetT ( rtS ) , rtP .
Constant_Value ) , rtP . LookUpTable1_bp01Data , rtP .
RepeatingSequence_rep_seq_y , 2U ) ; rtB . i3xyz3kjxa = muDoubleScalarSin (
rtP . SineWave_Freq * ssGetTaskTime ( rtS , 0 ) + rtP . SineWave_Phase ) *
rtP . SineWave_Amp + rtP . SineWave_Bias ; if ( ssIsSampleHit ( rtS , 1 , 0 )
) { if ( ssIsModeUpdateTimeStep ( rtS ) ) { rtDW . agbmberyid = ( rtB .
dijpktxxg5 <= rtB . i3xyz3kjxa ) ; } rtB . oowprsxy2x = ( real_T ) ( (
int32_T ) rtDW . agbmberyid <= ( int32_T ) rtP . Constant_Value_g52i3c4nmp )
* rtP . Gain_Gain ; rtB . abzdytk1pf = ( real_T ) ( ( int32_T ) rtDW .
agbmberyid > ( int32_T ) rtP . Constant_Value_otszzbjsj3 ) * rtP . Gain1_Gain
; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { taskTimeV = ssGetTaskTime ( rtS ,
2 ) ; if ( ssGetTNextWasAdjusted ( rtS , 2 ) ) { rtDW . nt1zn5x4x4 =
_ssGetVarNextHitTime ( rtS , 0 ) ; } if ( rtDW . ohzhxlmfeq != 0 ) { rtDW .
ohzhxlmfeq = 0 ; if ( taskTimeV >= rtP . PulseGenerator2_PhaseDelay ) { ratio
= ( taskTimeV - rtP . PulseGenerator2_PhaseDelay ) / rtP .
PulseGenerator2_Period ; numCycles = ( uint32_T ) muDoubleScalarFloor ( ratio
) ; if ( muDoubleScalarAbs ( ( real_T ) ( numCycles + 1U ) - ratio ) <
DBL_EPSILON * ratio ) { numCycles ++ ; } rtDW . ixvc4iclw2 = numCycles ;
ratio = ( ( real_T ) numCycles * rtP . PulseGenerator2_Period + rtP .
PulseGenerator2_PhaseDelay ) + rtP . PulseGenerator2_Duty * rtP .
PulseGenerator2_Period / 100.0 ; if ( taskTimeV < ratio ) { rtDW . jl3atcwzyb
= 1 ; rtDW . nt1zn5x4x4 = ratio ; } else { rtDW . jl3atcwzyb = 0 ; rtDW .
nt1zn5x4x4 = ( real_T ) ( numCycles + 1U ) * rtP . PulseGenerator2_Period +
rtP . PulseGenerator2_PhaseDelay ; } } else { if ( rtP .
PulseGenerator2_PhaseDelay != 0.0 ) { rtDW . ixvc4iclw2 = - 1LL ; } else {
rtDW . ixvc4iclw2 = 0LL ; } rtDW . jl3atcwzyb = 0 ; rtDW . nt1zn5x4x4 = rtP .
PulseGenerator2_PhaseDelay ; } } else if ( rtDW . nt1zn5x4x4 <= taskTimeV ) {
if ( rtDW . jl3atcwzyb == 1 ) { rtDW . jl3atcwzyb = 0 ; rtDW . nt1zn5x4x4 = (
real_T ) ( rtDW . ixvc4iclw2 + 1LL ) * rtP . PulseGenerator2_Period + rtP .
PulseGenerator2_PhaseDelay ; } else { rtDW . ixvc4iclw2 ++ ; rtDW .
jl3atcwzyb = 1 ; rtDW . nt1zn5x4x4 = ( rtP . PulseGenerator2_Duty * rtP .
PulseGenerator2_Period * 0.01 + ( real_T ) rtDW . ixvc4iclw2 * rtP .
PulseGenerator2_Period ) + rtP . PulseGenerator2_PhaseDelay ; } }
_ssSetVarNextHitTime ( rtS , 0 , rtDW . nt1zn5x4x4 ) ; if ( rtDW . jl3atcwzyb
== 1 ) { rtB . aqtgd423hn = rtP . PulseGenerator2_Amp ; } else { rtB .
aqtgd423hn = 0.0 ; } } rtB . gdb3wbgzo5 [ 0 ] = rtB . aqtgd423hn ; rtB .
gdb3wbgzo5 [ 1 ] = 0.0 ; rtB . gdb3wbgzo5 [ 2 ] = 0.0 ; if (
ssIsMajorTimeStep ( rtS ) ) { rtDW . onukoq1yyy [ 0 ] = ! ( rtB . gdb3wbgzo5
[ 0 ] == rtDW . onukoq1yyy [ 1 ] ) ; rtDW . onukoq1yyy [ 1 ] = rtB .
gdb3wbgzo5 [ 0 ] ; } rtB . gdb3wbgzo5 [ 0 ] = rtDW . onukoq1yyy [ 1 ] ; rtB .
gdb3wbgzo5 [ 3 ] = rtDW . onukoq1yyy [ 0 ] ; rtB . mnoms1r00y [ 0 ] = rtB .
oowprsxy2x ; rtB . mnoms1r00y [ 1 ] = 0.0 ; rtB . mnoms1r00y [ 2 ] = 0.0 ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . l0v5zfgnmo [ 0 ] = ! ( rtB .
mnoms1r00y [ 0 ] == rtDW . l0v5zfgnmo [ 1 ] ) ; rtDW . l0v5zfgnmo [ 1 ] = rtB
. mnoms1r00y [ 0 ] ; } rtB . mnoms1r00y [ 0 ] = rtDW . l0v5zfgnmo [ 1 ] ; rtB
. mnoms1r00y [ 3 ] = rtDW . l0v5zfgnmo [ 0 ] ; rtB . li5o4gitlq [ 0 ] = rtB .
abzdytk1pf ; rtB . li5o4gitlq [ 1 ] = 0.0 ; rtB . li5o4gitlq [ 2 ] = 0.0 ; if
( ssIsMajorTimeStep ( rtS ) ) { rtDW . lwb1tu1r3r [ 0 ] = ! ( rtB .
li5o4gitlq [ 0 ] == rtDW . lwb1tu1r3r [ 1 ] ) ; rtDW . lwb1tu1r3r [ 1 ] = rtB
. li5o4gitlq [ 0 ] ; } rtB . li5o4gitlq [ 0 ] = rtDW . lwb1tu1r3r [ 1 ] ; rtB
. li5o4gitlq [ 3 ] = rtDW . lwb1tu1r3r [ 0 ] ; if ( ssIsSampleHit ( rtS , 1 ,
0 ) ) { rtDW . kqtei5yteo = ( ssGetTaskTime ( rtS , 1 ) >= rtP . Ramp_start )
; if ( rtDW . kqtei5yteo == 1 ) { rtB . ifrha4igj5 = rtP . Ramp_slope ; }
else { rtB . ifrha4igj5 = rtP . Step_Y0 ; } } rtB . jb4u2yifrj = ssGetT ( rtS
) - rtP . Ramp_start ; rtB . elx4gn4sq3 = rtB . ifrha4igj5 * rtB . jb4u2yifrj
; rtB . cqx0zb5ro1 = rtB . elx4gn4sq3 + rtP . Ramp_InitialOutput ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { if ( rtB . cqx0zb5ro1 >= rtP .
Saturation_UpperSat ) { rtDW . plv3jzt5fb = 1 ; } else if ( rtB . cqx0zb5ro1
> rtP . Saturation_LowerSat ) { rtDW . plv3jzt5fb = 0 ; } else { rtDW .
plv3jzt5fb = - 1 ; } } if ( rtDW . plv3jzt5fb == 1 ) { rtB . ksaz1bbmuy = rtP
. Saturation_UpperSat ; } else if ( rtDW . plv3jzt5fb == - 1 ) { rtB .
ksaz1bbmuy = rtP . Saturation_LowerSat ; } else { rtB . ksaz1bbmuy = rtB .
cqx0zb5ro1 ; } rtB . fo5pnop3iv [ 0 ] = rtB . ksaz1bbmuy ; rtB . fo5pnop3iv [
1 ] = 0.0 ; rtB . fo5pnop3iv [ 2 ] = 0.0 ; rtB . fo5pnop3iv [ 3 ] = 0.0 ;
simulationData = ( NeslSimulationData * ) rtDW . gm0m00b0cq ; hadEvents =
false ; if ( ssIsMajorTimeStep ( rtS ) ) { time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 53 ;
simulationData -> mData -> mContStates . mX = & rtX . nhhi0oezes [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 88 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . ekbgaownj3 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 74 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aysnlclzmm [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
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
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . gdb3wbgzo5 [ 0 ] ; tmp_p [ 1 ]
= rtB . gdb3wbgzo5 [ 1 ] ; tmp_p [ 2 ] = rtB . gdb3wbgzo5 [ 2 ] ; tmp_p [ 3 ]
= rtB . gdb3wbgzo5 [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . mnoms1r00y [
0 ] ; tmp_p [ 5 ] = rtB . mnoms1r00y [ 1 ] ; tmp_p [ 6 ] = rtB . mnoms1r00y [
2 ] ; tmp_p [ 7 ] = rtB . mnoms1r00y [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
rtB . li5o4gitlq [ 0 ] ; tmp_p [ 9 ] = rtB . li5o4gitlq [ 1 ] ; tmp_p [ 10 ]
= rtB . li5o4gitlq [ 2 ] ; tmp_p [ 11 ] = rtB . li5o4gitlq [ 3 ] ; tmp_e [ 3
] = 12 ; tmp_p [ 12 ] = rtB . fo5pnop3iv [ 0 ] ; tmp_p [ 13 ] = rtB .
fo5pnop3iv [ 1 ] ; tmp_p [ 14 ] = rtB . fo5pnop3iv [ 2 ] ; tmp_p [ 15 ] = rtB
. fo5pnop3iv [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 78 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> epgy53l0pc ; simulationData -> mData ->
mNonSampledZCs . mN = 78 ; simulationData -> mData -> mNonSampledZCs . mX = &
rtDW . czxyqzxhds [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW
. j24sb1yofu ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. mm1nwudnea , NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager )
; if ( tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS )
) ; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } memcpy ( & rtDW . a2sh2jpidr [ 0 ] , &
rtPrevZCX . nvu2ubujtb , 78 ) ; for ( i = 0 ; i < 78 ; i ++ ) { tmp_i =
rt_ZCFcnRefine ( rtDW . gdbdtpq3sd [ i ] , & rtDW . a2sh2jpidr [ i ] , ( rtDW
. czxyqzxhds [ i ] ) ) ; hadEvents = ( ( tmp_i != 0 ) || hadEvents ) ; }
memcpy ( & rtPrevZCX . nvu2ubujtb , & rtDW . a2sh2jpidr [ 0 ] , 78 ) ; }
time_p = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_p ; simulationData -> mData ->
mContStates . mN = 53 ; simulationData -> mData -> mContStates . mX = & rtX .
nhhi0oezes [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 88 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . ekbgaownj3 [ 0 ] ;
simulationData -> mData -> mModeVector . mN = 74 ; simulationData -> mData ->
mModeVector . mX = & rtDW . aysnlclzmm [ 0 ] ; tmp = ( ssIsMajorTimeStep (
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
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_g [ 0 ] = 0 ;
tmp_m [ 0 ] = rtB . gdb3wbgzo5 [ 0 ] ; tmp_m [ 1 ] = rtB . gdb3wbgzo5 [ 1 ] ;
tmp_m [ 2 ] = rtB . gdb3wbgzo5 [ 2 ] ; tmp_m [ 3 ] = rtB . gdb3wbgzo5 [ 3 ] ;
tmp_g [ 1 ] = 4 ; tmp_m [ 4 ] = rtB . mnoms1r00y [ 0 ] ; tmp_m [ 5 ] = rtB .
mnoms1r00y [ 1 ] ; tmp_m [ 6 ] = rtB . mnoms1r00y [ 2 ] ; tmp_m [ 7 ] = rtB .
mnoms1r00y [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8 ] = rtB . li5o4gitlq [ 0 ] ;
tmp_m [ 9 ] = rtB . li5o4gitlq [ 1 ] ; tmp_m [ 10 ] = rtB . li5o4gitlq [ 2 ]
; tmp_m [ 11 ] = rtB . li5o4gitlq [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] =
rtB . fo5pnop3iv [ 0 ] ; tmp_m [ 13 ] = rtB . fo5pnop3iv [ 1 ] ; tmp_m [ 14 ]
= rtB . fo5pnop3iv [ 2 ] ; tmp_m [ 15 ] = rtB . fo5pnop3iv [ 3 ] ; tmp_g [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_m [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_g [ 0 ] ; simulationData -> mData -> mOutputs . mN = 143 ; simulationData
-> mData -> mOutputs . mX = & rtB . npcesp25b1 [ 0 ] ; simulationData ->
mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances . mX =
NULL ; simulationData -> mData -> mCstateHasChanged = false ; simulationData
-> mData -> mDstateHasChanged = false ; time_e = ssGetTaskTime ( rtS , 0 ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_e ; simulationData -> mData -> mSampleHits . mN = 0 ;
simulationData -> mData -> mSampleHits . mX = NULL ; simulationData -> mData
-> mIsFundamentalSampleHit = false ; simulationData -> mData -> mHadEvents =
hadEvents ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW . j24sb1yofu
; diagnosticTree_p = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. mm1nwudnea , NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if (
tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if
( tmp ) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus
( rtS , msg_p ) ; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData ->
mData -> mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep (
rtS ) ; } if ( ssIsMajorTimeStep ( rtS ) && ( simulationData -> mData ->
mCstateHasChanged || simulationData -> mData -> mDstateHasChanged ) ) {
time_i = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_i ; simulationData -> mData ->
mContStates . mN = 53 ; simulationData -> mData -> mContStates . mX = & rtX .
nhhi0oezes [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 88 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . ekbgaownj3 [ 0 ] ;
simulationData -> mData -> mModeVector . mN = 74 ; simulationData -> mData ->
mModeVector . mX = & rtDW . aysnlclzmm [ 0 ] ; tmp = ( ssIsMajorTimeStep (
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
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_f [ 0 ] = 0 ;
tmp_j [ 0 ] = rtB . gdb3wbgzo5 [ 0 ] ; tmp_j [ 1 ] = rtB . gdb3wbgzo5 [ 1 ] ;
tmp_j [ 2 ] = rtB . gdb3wbgzo5 [ 2 ] ; tmp_j [ 3 ] = rtB . gdb3wbgzo5 [ 3 ] ;
tmp_f [ 1 ] = 4 ; tmp_j [ 4 ] = rtB . mnoms1r00y [ 0 ] ; tmp_j [ 5 ] = rtB .
mnoms1r00y [ 1 ] ; tmp_j [ 6 ] = rtB . mnoms1r00y [ 2 ] ; tmp_j [ 7 ] = rtB .
mnoms1r00y [ 3 ] ; tmp_f [ 2 ] = 8 ; tmp_j [ 8 ] = rtB . li5o4gitlq [ 0 ] ;
tmp_j [ 9 ] = rtB . li5o4gitlq [ 1 ] ; tmp_j [ 10 ] = rtB . li5o4gitlq [ 2 ]
; tmp_j [ 11 ] = rtB . li5o4gitlq [ 3 ] ; tmp_f [ 3 ] = 12 ; tmp_j [ 12 ] =
rtB . fo5pnop3iv [ 0 ] ; tmp_j [ 13 ] = rtB . fo5pnop3iv [ 1 ] ; tmp_j [ 14 ]
= rtB . fo5pnop3iv [ 2 ] ; tmp_j [ 15 ] = rtB . fo5pnop3iv [ 3 ] ; tmp_f [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_j [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_f [ 0 ] ; simulationData -> mData -> mNonSampledZCs . mN = 78 ;
simulationData -> mData -> mNonSampledZCs . mX = & _rtZCSV -> epgy53l0pc ;
simulationData -> mData -> mNonSampledZCs . mN = 78 ; simulationData -> mData
-> mNonSampledZCs . mX = & rtDW . czxyqzxhds [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . j24sb1yofu ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mm1nwudnea ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg_e = rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS ,
msg_e ) ; } } for ( i = 0 ; i < 78 ; i ++ ) { rt_ZCFcnRefine ( rtDW .
gdbdtpq3sd [ i ] , & rtDW . a2sh2jpidr [ i ] , ( rtDW . czxyqzxhds [ i ] ) )
; } memcpy ( & rtPrevZCX . nvu2ubujtb , & rtDW . a2sh2jpidr [ 0 ] , 78 ) ; }
simulationData = ( NeslSimulationData * ) rtDW . dpeqg0do3s ; time_m = ssGetT
( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time_m ; simulationData -> mData -> mContStates . mN = 0 ;
simulationData -> mData -> mContStates . mX = NULL ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
rtDW . m5bkigs10b ; simulationData -> mData -> mModeVector . mN = 0 ;
simulationData -> mData -> mModeVector . mX = & rtDW . hbxlgtkw0k ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mHadEvents = false ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; simulationData -> mData -> mIsComputingJacobian
= false ; simulationData -> mData -> mIsEvaluatingF0 = false ; tmp =
ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_k [ 0 ] = 0 ;
tmp_c [ 0 ] = rtB . gdb3wbgzo5 [ 0 ] ; tmp_c [ 1 ] = rtB . gdb3wbgzo5 [ 1 ] ;
tmp_c [ 2 ] = rtB . gdb3wbgzo5 [ 2 ] ; tmp_c [ 3 ] = rtB . gdb3wbgzo5 [ 3 ] ;
tmp_k [ 1 ] = 4 ; tmp_c [ 4 ] = rtB . mnoms1r00y [ 0 ] ; tmp_c [ 5 ] = rtB .
mnoms1r00y [ 1 ] ; tmp_c [ 6 ] = rtB . mnoms1r00y [ 2 ] ; tmp_c [ 7 ] = rtB .
mnoms1r00y [ 3 ] ; tmp_k [ 2 ] = 8 ; tmp_c [ 8 ] = rtB . li5o4gitlq [ 0 ] ;
tmp_c [ 9 ] = rtB . li5o4gitlq [ 1 ] ; tmp_c [ 10 ] = rtB . li5o4gitlq [ 2 ]
; tmp_c [ 11 ] = rtB . li5o4gitlq [ 3 ] ; tmp_k [ 3 ] = 12 ; tmp_c [ 12 ] =
rtB . fo5pnop3iv [ 0 ] ; tmp_c [ 13 ] = rtB . fo5pnop3iv [ 1 ] ; tmp_c [ 14 ]
= rtB . fo5pnop3iv [ 2 ] ; tmp_c [ 15 ] = rtB . fo5pnop3iv [ 3 ] ; tmp_k [ 4
] = 16 ; memcpy ( & tmp_c [ 16 ] , & rtB . npcesp25b1 [ 0 ] , 143U * sizeof (
real_T ) ) ; tmp_k [ 5 ] = 159 ; simulationData -> mData -> mInputValues . mN
= 159 ; simulationData -> mData -> mInputValues . mX = & tmp_c [ 0 ] ;
simulationData -> mData -> mInputOffsets . mN = 6 ; simulationData -> mData
-> mInputOffsets . mX = & tmp_k [ 0 ] ; simulationData -> mData -> mOutputs .
mN = 16 ; simulationData -> mData -> mOutputs . mX = & rtB . fwy2vxyapw [ 0 ]
; simulationData -> mData -> mTolerances . mN = 0 ; simulationData -> mData
-> mTolerances . mX = NULL ; simulationData -> mData -> mCstateHasChanged =
false ; simulationData -> mData -> mDstateHasChanged = false ; time_g =
ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_g ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; simulationData
-> mData -> mHadEvents = false ; diagnosticManager = ( NeuDiagnosticManager *
) rtDW . l1oy2ljexe ; diagnosticTree_i =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . h1fg01ehox ,
NESL_SIM_OUTPUTS , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg_i
= rtw_diagnostics_msg ( diagnosticTree_i ) ; ssSetErrorStatus ( rtS , msg_i )
; } } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 16 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e [ 5 ] ; boolean_T
tmp ; simulationData = ( NeslSimulationData * ) rtDW . gm0m00b0cq ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 53 ; simulationData -> mData -> mContStates . mX = & rtX . nhhi0oezes [ 0 ]
; simulationData -> mData -> mDiscStates . mN = 88 ; simulationData -> mData
-> mDiscStates . mX = & rtDW . ekbgaownj3 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 74 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aysnlclzmm [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
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
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . gdb3wbgzo5 [ 0 ] ; tmp_p [ 1 ]
= rtB . gdb3wbgzo5 [ 1 ] ; tmp_p [ 2 ] = rtB . gdb3wbgzo5 [ 2 ] ; tmp_p [ 3 ]
= rtB . gdb3wbgzo5 [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . mnoms1r00y [
0 ] ; tmp_p [ 5 ] = rtB . mnoms1r00y [ 1 ] ; tmp_p [ 6 ] = rtB . mnoms1r00y [
2 ] ; tmp_p [ 7 ] = rtB . mnoms1r00y [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
rtB . li5o4gitlq [ 0 ] ; tmp_p [ 9 ] = rtB . li5o4gitlq [ 1 ] ; tmp_p [ 10 ]
= rtB . li5o4gitlq [ 2 ] ; tmp_p [ 11 ] = rtB . li5o4gitlq [ 3 ] ; tmp_e [ 3
] = 12 ; tmp_p [ 12 ] = rtB . fo5pnop3iv [ 0 ] ; tmp_p [ 13 ] = rtB .
fo5pnop3iv [ 1 ] ; tmp_p [ 14 ] = rtB . fo5pnop3iv [ 2 ] ; tmp_p [ 15 ] = rtB
. fo5pnop3iv [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . j24sb1yofu ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . mm1nwudnea ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( tmp_i != 0 ) {
tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
UNUSED_PARAMETER ( tid ) ; } void MdlUpdateTID3 ( int_T tid ) {
UNUSED_PARAMETER ( tid ) ; } void MdlDerivatives ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 16 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e
[ 5 ] ; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ;
simulationData = ( NeslSimulationData * ) rtDW . gm0m00b0cq ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 53 ;
simulationData -> mData -> mContStates . mX = & rtX . nhhi0oezes [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 88 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . ekbgaownj3 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 74 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aysnlclzmm [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
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
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . gdb3wbgzo5 [ 0 ] ; tmp_p [ 1 ]
= rtB . gdb3wbgzo5 [ 1 ] ; tmp_p [ 2 ] = rtB . gdb3wbgzo5 [ 2 ] ; tmp_p [ 3 ]
= rtB . gdb3wbgzo5 [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . mnoms1r00y [
0 ] ; tmp_p [ 5 ] = rtB . mnoms1r00y [ 1 ] ; tmp_p [ 6 ] = rtB . mnoms1r00y [
2 ] ; tmp_p [ 7 ] = rtB . mnoms1r00y [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
rtB . li5o4gitlq [ 0 ] ; tmp_p [ 9 ] = rtB . li5o4gitlq [ 1 ] ; tmp_p [ 10 ]
= rtB . li5o4gitlq [ 2 ] ; tmp_p [ 11 ] = rtB . li5o4gitlq [ 3 ] ; tmp_e [ 3
] = 12 ; tmp_p [ 12 ] = rtB . fo5pnop3iv [ 0 ] ; tmp_p [ 13 ] = rtB .
fo5pnop3iv [ 1 ] ; tmp_p [ 14 ] = rtB . fo5pnop3iv [ 2 ] ; tmp_p [ 15 ] = rtB
. fo5pnop3iv [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 53 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> nhhi0oezes [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . j24sb1yofu ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mm1nwudnea ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( tmp_i != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlProjection ( void ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; real_T tmp_p [ 16 ] ; real_T time ; int32_T tmp_i ; int_T
tmp_e [ 5 ] ; boolean_T tmp ; simulationData = ( NeslSimulationData * ) rtDW
. gm0m00b0cq ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN
= 1 ; simulationData -> mData -> mTime . mX = & time ; simulationData ->
mData -> mContStates . mN = 53 ; simulationData -> mData -> mContStates . mX
= & rtX . nhhi0oezes [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 88
; simulationData -> mData -> mDiscStates . mX = & rtDW . ekbgaownj3 [ 0 ] ;
simulationData -> mData -> mModeVector . mN = 74 ; simulationData -> mData ->
mModeVector . mX = & rtDW . aysnlclzmm [ 0 ] ; tmp = ( ssIsMajorTimeStep (
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
tmp_p [ 0 ] = rtB . gdb3wbgzo5 [ 0 ] ; tmp_p [ 1 ] = rtB . gdb3wbgzo5 [ 1 ] ;
tmp_p [ 2 ] = rtB . gdb3wbgzo5 [ 2 ] ; tmp_p [ 3 ] = rtB . gdb3wbgzo5 [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . mnoms1r00y [ 0 ] ; tmp_p [ 5 ] = rtB .
mnoms1r00y [ 1 ] ; tmp_p [ 6 ] = rtB . mnoms1r00y [ 2 ] ; tmp_p [ 7 ] = rtB .
mnoms1r00y [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . li5o4gitlq [ 0 ] ;
tmp_p [ 9 ] = rtB . li5o4gitlq [ 1 ] ; tmp_p [ 10 ] = rtB . li5o4gitlq [ 2 ]
; tmp_p [ 11 ] = rtB . li5o4gitlq [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . fo5pnop3iv [ 0 ] ; tmp_p [ 13 ] = rtB . fo5pnop3iv [ 1 ] ; tmp_p [ 14 ]
= rtB . fo5pnop3iv [ 2 ] ; tmp_p [ 15 ] = rtB . fo5pnop3iv [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; diagnosticManager = ( NeuDiagnosticManager * ) rtDW .
j24sb1yofu ; diagnosticTree = neu_diagnostic_manager_get_initial_tree (
diagnosticManager ) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW
. mm1nwudnea , NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ;
if ( tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) )
; if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } } void MdlForcingFunction ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; XDot * _rtXdot ;
char * msg ; real_T tmp_p [ 16 ] ; real_T time ; int32_T tmp_i ; int_T tmp_e
[ 5 ] ; boolean_T tmp ; _rtXdot = ( ( XDot * ) ssGetdX ( rtS ) ) ;
simulationData = ( NeslSimulationData * ) rtDW . gm0m00b0cq ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 53 ;
simulationData -> mData -> mContStates . mX = & rtX . nhhi0oezes [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 88 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . ekbgaownj3 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 74 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aysnlclzmm [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
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
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . gdb3wbgzo5 [ 0 ] ; tmp_p [ 1 ]
= rtB . gdb3wbgzo5 [ 1 ] ; tmp_p [ 2 ] = rtB . gdb3wbgzo5 [ 2 ] ; tmp_p [ 3 ]
= rtB . gdb3wbgzo5 [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . mnoms1r00y [
0 ] ; tmp_p [ 5 ] = rtB . mnoms1r00y [ 1 ] ; tmp_p [ 6 ] = rtB . mnoms1r00y [
2 ] ; tmp_p [ 7 ] = rtB . mnoms1r00y [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
rtB . li5o4gitlq [ 0 ] ; tmp_p [ 9 ] = rtB . li5o4gitlq [ 1 ] ; tmp_p [ 10 ]
= rtB . li5o4gitlq [ 2 ] ; tmp_p [ 11 ] = rtB . li5o4gitlq [ 3 ] ; tmp_e [ 3
] = 12 ; tmp_p [ 12 ] = rtB . fo5pnop3iv [ 0 ] ; tmp_p [ 13 ] = rtB .
fo5pnop3iv [ 1 ] ; tmp_p [ 14 ] = rtB . fo5pnop3iv [ 2 ] ; tmp_p [ 15 ] = rtB
. fo5pnop3iv [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 53 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> nhhi0oezes [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . j24sb1yofu ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mm1nwudnea ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS ,
msg ) ; } } } void MdlMassMatrix ( void ) { NeslSimulationData *
simulationData ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree
* diagnosticTree ; char * msg ; real_T tmp_p [ 16 ] ; real_T time ; real_T *
tmp_i ; real_T * tmp_m ; int32_T tmp_g ; int_T tmp_e [ 5 ] ; boolean_T tmp ;
simulationData = ( NeslSimulationData * ) rtDW . gm0m00b0cq ; time = ssGetT (
rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData
-> mTime . mX = & time ; simulationData -> mData -> mContStates . mN = 53 ;
simulationData -> mData -> mContStates . mX = & rtX . nhhi0oezes [ 0 ] ;
simulationData -> mData -> mDiscStates . mN = 88 ; simulationData -> mData ->
mDiscStates . mX = & rtDW . ekbgaownj3 [ 0 ] ; simulationData -> mData ->
mModeVector . mN = 74 ; simulationData -> mData -> mModeVector . mX = & rtDW
. aysnlclzmm [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo
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
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = rtB . gdb3wbgzo5 [ 0 ] ; tmp_p [ 1 ]
= rtB . gdb3wbgzo5 [ 1 ] ; tmp_p [ 2 ] = rtB . gdb3wbgzo5 [ 2 ] ; tmp_p [ 3 ]
= rtB . gdb3wbgzo5 [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . mnoms1r00y [
0 ] ; tmp_p [ 5 ] = rtB . mnoms1r00y [ 1 ] ; tmp_p [ 6 ] = rtB . mnoms1r00y [
2 ] ; tmp_p [ 7 ] = rtB . mnoms1r00y [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] =
rtB . li5o4gitlq [ 0 ] ; tmp_p [ 9 ] = rtB . li5o4gitlq [ 1 ] ; tmp_p [ 10 ]
= rtB . li5o4gitlq [ 2 ] ; tmp_p [ 11 ] = rtB . li5o4gitlq [ 3 ] ; tmp_e [ 3
] = 12 ; tmp_p [ 12 ] = rtB . fo5pnop3iv [ 0 ] ; tmp_p [ 13 ] = rtB .
fo5pnop3iv [ 1 ] ; tmp_p [ 14 ] = rtB . fo5pnop3iv [ 2 ] ; tmp_p [ 15 ] = rtB
. fo5pnop3iv [ 3 ] ; tmp_e [ 4 ] = 16 ; simulationData -> mData ->
mInputValues . mN = 16 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 5 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ; tmp_i =
ssGetMassMatrixPr ( rtS ) ; tmp_m = double_pointer_shift ( tmp_i , rtDW .
c014wwns5r ) ; simulationData -> mData -> mMassMatrixPr . mN = 32 ;
simulationData -> mData -> mMassMatrixPr . mX = tmp_m ; diagnosticManager = (
NeuDiagnosticManager * ) rtDW . j24sb1yofu ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_g =
ne_simulator_method ( ( NeslSimulator * ) rtDW . mm1nwudnea ,
NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if ( tmp_g != 0
) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlZeroCrossings ( void ) { NeslSimulationData * simulationData
; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree *
diagnosticTree ; ZCV * _rtZCSV ; char * msg ; real_T tmp_p [ 16 ] ; real_T
time ; int32_T tmp_i ; int_T tmp_e [ 5 ] ; boolean_T tmp ; _rtZCSV = ( ( ZCV
* ) ssGetSolverZcSignalVector ( rtS ) ) ; _rtZCSV -> jhtcoqlris = rtB .
dijpktxxg5 - rtB . i3xyz3kjxa ; _rtZCSV -> ahqz1pq1zs = ssGetT ( rtS ) - rtP
. Ramp_start ; _rtZCSV -> ihwwszl0nj = rtB . cqx0zb5ro1 - rtP .
Saturation_UpperSat ; _rtZCSV -> nimv422dib = rtB . cqx0zb5ro1 - rtP .
Saturation_LowerSat ; simulationData = ( NeslSimulationData * ) rtDW .
gm0m00b0cq ; time = ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN =
1 ; simulationData -> mData -> mTime . mX = & time ; simulationData -> mData
-> mContStates . mN = 53 ; simulationData -> mData -> mContStates . mX = &
rtX . nhhi0oezes [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 88 ;
simulationData -> mData -> mDiscStates . mX = & rtDW . ekbgaownj3 [ 0 ] ;
simulationData -> mData -> mModeVector . mN = 74 ; simulationData -> mData ->
mModeVector . mX = & rtDW . aysnlclzmm [ 0 ] ; tmp = ( ssIsMajorTimeStep (
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
tmp_p [ 0 ] = rtB . gdb3wbgzo5 [ 0 ] ; tmp_p [ 1 ] = rtB . gdb3wbgzo5 [ 1 ] ;
tmp_p [ 2 ] = rtB . gdb3wbgzo5 [ 2 ] ; tmp_p [ 3 ] = rtB . gdb3wbgzo5 [ 3 ] ;
tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] = rtB . mnoms1r00y [ 0 ] ; tmp_p [ 5 ] = rtB .
mnoms1r00y [ 1 ] ; tmp_p [ 6 ] = rtB . mnoms1r00y [ 2 ] ; tmp_p [ 7 ] = rtB .
mnoms1r00y [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = rtB . li5o4gitlq [ 0 ] ;
tmp_p [ 9 ] = rtB . li5o4gitlq [ 1 ] ; tmp_p [ 10 ] = rtB . li5o4gitlq [ 2 ]
; tmp_p [ 11 ] = rtB . li5o4gitlq [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
rtB . fo5pnop3iv [ 0 ] ; tmp_p [ 13 ] = rtB . fo5pnop3iv [ 1 ] ; tmp_p [ 14 ]
= rtB . fo5pnop3iv [ 2 ] ; tmp_p [ 15 ] = rtB . fo5pnop3iv [ 3 ] ; tmp_e [ 4
] = 16 ; simulationData -> mData -> mInputValues . mN = 16 ; simulationData
-> mData -> mInputValues . mX = & tmp_p [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 5 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_e [ 0 ] ; simulationData -> mData -> mNonSampledZCs . mN = 78 ;
simulationData -> mData -> mNonSampledZCs . mX = & _rtZCSV -> epgy53l0pc ;
diagnosticManager = ( NeuDiagnosticManager * ) rtDW . j24sb1yofu ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) rtDW . mm1nwudnea ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } } void MdlTerminate ( void ) { neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) rtDW . j24sb1yofu ) ; nesl_destroy_simulation_data (
( NeslSimulationData * ) rtDW . gm0m00b0cq ) ; nesl_erase_simulator (
"mrz/Solver Configuration_1" ) ; nesl_destroy_registry ( ) ;
neu_destroy_diagnostic_manager ( ( NeuDiagnosticManager * ) rtDW . l1oy2ljexe
) ; nesl_destroy_simulation_data ( ( NeslSimulationData * ) rtDW . dpeqg0do3s
) ; nesl_erase_simulator ( "mrz/Solver Configuration_1" ) ;
nesl_destroy_registry ( ) ; } static void mr_mrz_cacheDataAsMxArray ( mxArray
* destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_mrz_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int
j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_mrz_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_mrz_restoreDataFromMxArray ( void * destData , const mxArray * srcArray ,
mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , (
const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ,
numBytes ) ; } static void mr_mrz_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_mrz_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_mrz_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) ; static uint_T mr_mrz_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_mrz_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j
, mwIndex offset , const void * srcData , size_t numBytes ) ; static void
mr_mrz_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j
, mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T *
varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j )
) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T
* ) srcData , numBytes ) ; } static void
mr_mrz_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static
void mr_mrz_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_mrz_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_mrz_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber (
destArray , i , j ) , offset , mxCreateDoubleScalar ( ( real_T ) fieldVal ) )
; } static uint_T mr_mrz_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_mrz_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_mrz_GetDWork ( ) { static const char_T * ssDWFieldNames [
3 ] = { "rtB" , "rtDW" , "rtPrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_mrz_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & ( rtB ) ,
sizeof ( rtB ) ) ; { static const char_T * rtdwDataFieldNames [ 24 ] = {
"rtDW.onukoq1yyy" , "rtDW.l0v5zfgnmo" , "rtDW.lwb1tu1r3r" , "rtDW.cb3r4qb33r"
, "rtDW.ekbgaownj3" , "rtDW.nt1zn5x4x4" , "rtDW.czxyqzxhds" ,
"rtDW.m5bkigs10b" , "rtDW.gepsevpqjd" , "rtDW.ixvc4iclw2" , "rtDW.ohzhxlmfeq"
, "rtDW.jl3atcwzyb" , "rtDW.aysnlclzmm" , "rtDW.hbxlgtkw0k" ,
"rtDW.kqtei5yteo" , "rtDW.plv3jzt5fb" , "rtDW.c014wwns5r" , "rtDW.gdbdtpq3sd"
, "rtDW.a2sh2jpidr" , "rtDW.dijuzt4qqx" , "rtDW.h2j04rsdlc" ,
"rtDW.agbmberyid" , "rtDW.lvdamp5ela" , "rtDW.kbudmxztdb" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 24 , rtdwDataFieldNames ) ;
mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void * ) & ( rtDW .
onukoq1yyy ) , sizeof ( rtDW . onukoq1yyy ) ) ; mr_mrz_cacheDataAsMxArray (
rtdwData , 0 , 1 , ( const void * ) & ( rtDW . l0v5zfgnmo ) , sizeof ( rtDW .
l0v5zfgnmo ) ) ; mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void
* ) & ( rtDW . lwb1tu1r3r ) , sizeof ( rtDW . lwb1tu1r3r ) ) ;
mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void * ) & ( rtDW .
cb3r4qb33r ) , sizeof ( rtDW . cb3r4qb33r ) ) ; mr_mrz_cacheDataAsMxArray (
rtdwData , 0 , 4 , ( const void * ) & ( rtDW . ekbgaownj3 ) , sizeof ( rtDW .
ekbgaownj3 ) ) ; mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void
* ) & ( rtDW . nt1zn5x4x4 ) , sizeof ( rtDW . nt1zn5x4x4 ) ) ;
mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & ( rtDW .
czxyqzxhds ) , sizeof ( rtDW . czxyqzxhds ) ) ; mr_mrz_cacheDataAsMxArray (
rtdwData , 0 , 7 , ( const void * ) & ( rtDW . m5bkigs10b ) , sizeof ( rtDW .
m5bkigs10b ) ) ; mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void
* ) & ( rtDW . gepsevpqjd ) , sizeof ( rtDW . gepsevpqjd ) ) ;
mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & ( rtDW .
ixvc4iclw2 ) , sizeof ( rtDW . ixvc4iclw2 ) ) ; mr_mrz_cacheDataAsMxArray (
rtdwData , 0 , 10 , ( const void * ) & ( rtDW . ohzhxlmfeq ) , sizeof ( rtDW
. ohzhxlmfeq ) ) ; mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const
void * ) & ( rtDW . jl3atcwzyb ) , sizeof ( rtDW . jl3atcwzyb ) ) ;
mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & ( rtDW .
aysnlclzmm ) , sizeof ( rtDW . aysnlclzmm ) ) ; mr_mrz_cacheDataAsMxArray (
rtdwData , 0 , 13 , ( const void * ) & ( rtDW . hbxlgtkw0k ) , sizeof ( rtDW
. hbxlgtkw0k ) ) ; mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const
void * ) & ( rtDW . kqtei5yteo ) , sizeof ( rtDW . kqtei5yteo ) ) ;
mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & ( rtDW .
plv3jzt5fb ) , sizeof ( rtDW . plv3jzt5fb ) ) ; mr_mrz_cacheDataAsMxArray (
rtdwData , 0 , 16 , ( const void * ) & ( rtDW . c014wwns5r ) , sizeof ( rtDW
. c014wwns5r ) ) ; mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const
void * ) & ( rtDW . gdbdtpq3sd ) , sizeof ( rtDW . gdbdtpq3sd ) ) ;
mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & ( rtDW .
a2sh2jpidr ) , sizeof ( rtDW . a2sh2jpidr ) ) ; mr_mrz_cacheDataAsMxArray (
rtdwData , 0 , 19 , ( const void * ) & ( rtDW . dijuzt4qqx ) , sizeof ( rtDW
. dijuzt4qqx ) ) ; mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const
void * ) & ( rtDW . h2j04rsdlc ) , sizeof ( rtDW . h2j04rsdlc ) ) ;
mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & ( rtDW .
agbmberyid ) , sizeof ( rtDW . agbmberyid ) ) ; mr_mrz_cacheDataAsMxArray (
rtdwData , 0 , 22 , ( const void * ) & ( rtDW . lvdamp5ela ) , sizeof ( rtDW
. lvdamp5ela ) ) ; mr_mrz_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const
void * ) & ( rtDW . kbudmxztdb ) , sizeof ( rtDW . kbudmxztdb ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } mr_mrz_cacheDataAsMxArray
( ssDW , 0 , 2 , ( const void * ) & ( rtPrevZCX ) , sizeof ( rtPrevZCX ) ) ;
return ssDW ; } void mr_mrz_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW
; mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtB ) , ssDW , 0 , 0 ,
sizeof ( rtB ) ) ; { const mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0
, 1 ) ; mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW . onukoq1yyy ) ,
rtdwData , 0 , 0 , sizeof ( rtDW . onukoq1yyy ) ) ;
mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW . l0v5zfgnmo ) , rtdwData
, 0 , 1 , sizeof ( rtDW . l0v5zfgnmo ) ) ; mr_mrz_restoreDataFromMxArray ( (
void * ) & ( rtDW . lwb1tu1r3r ) , rtdwData , 0 , 2 , sizeof ( rtDW .
lwb1tu1r3r ) ) ; mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW .
cb3r4qb33r ) , rtdwData , 0 , 3 , sizeof ( rtDW . cb3r4qb33r ) ) ;
mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW . ekbgaownj3 ) , rtdwData
, 0 , 4 , sizeof ( rtDW . ekbgaownj3 ) ) ; mr_mrz_restoreDataFromMxArray ( (
void * ) & ( rtDW . nt1zn5x4x4 ) , rtdwData , 0 , 5 , sizeof ( rtDW .
nt1zn5x4x4 ) ) ; mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW .
czxyqzxhds ) , rtdwData , 0 , 6 , sizeof ( rtDW . czxyqzxhds ) ) ;
mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW . m5bkigs10b ) , rtdwData
, 0 , 7 , sizeof ( rtDW . m5bkigs10b ) ) ; mr_mrz_restoreDataFromMxArray ( (
void * ) & ( rtDW . gepsevpqjd ) , rtdwData , 0 , 8 , sizeof ( rtDW .
gepsevpqjd ) ) ; mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW .
ixvc4iclw2 ) , rtdwData , 0 , 9 , sizeof ( rtDW . ixvc4iclw2 ) ) ;
mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW . ohzhxlmfeq ) , rtdwData
, 0 , 10 , sizeof ( rtDW . ohzhxlmfeq ) ) ; mr_mrz_restoreDataFromMxArray ( (
void * ) & ( rtDW . jl3atcwzyb ) , rtdwData , 0 , 11 , sizeof ( rtDW .
jl3atcwzyb ) ) ; mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW .
aysnlclzmm ) , rtdwData , 0 , 12 , sizeof ( rtDW . aysnlclzmm ) ) ;
mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW . hbxlgtkw0k ) , rtdwData
, 0 , 13 , sizeof ( rtDW . hbxlgtkw0k ) ) ; mr_mrz_restoreDataFromMxArray ( (
void * ) & ( rtDW . kqtei5yteo ) , rtdwData , 0 , 14 , sizeof ( rtDW .
kqtei5yteo ) ) ; mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW .
plv3jzt5fb ) , rtdwData , 0 , 15 , sizeof ( rtDW . plv3jzt5fb ) ) ;
mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW . c014wwns5r ) , rtdwData
, 0 , 16 , sizeof ( rtDW . c014wwns5r ) ) ; mr_mrz_restoreDataFromMxArray ( (
void * ) & ( rtDW . gdbdtpq3sd ) , rtdwData , 0 , 17 , sizeof ( rtDW .
gdbdtpq3sd ) ) ; mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW .
a2sh2jpidr ) , rtdwData , 0 , 18 , sizeof ( rtDW . a2sh2jpidr ) ) ;
mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW . dijuzt4qqx ) , rtdwData
, 0 , 19 , sizeof ( rtDW . dijuzt4qqx ) ) ; mr_mrz_restoreDataFromMxArray ( (
void * ) & ( rtDW . h2j04rsdlc ) , rtdwData , 0 , 20 , sizeof ( rtDW .
h2j04rsdlc ) ) ; mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW .
agbmberyid ) , rtdwData , 0 , 21 , sizeof ( rtDW . agbmberyid ) ) ;
mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtDW . lvdamp5ela ) , rtdwData
, 0 , 22 , sizeof ( rtDW . lvdamp5ela ) ) ; mr_mrz_restoreDataFromMxArray ( (
void * ) & ( rtDW . kbudmxztdb ) , rtdwData , 0 , 23 , sizeof ( rtDW .
kbudmxztdb ) ) ; } mr_mrz_restoreDataFromMxArray ( ( void * ) & ( rtPrevZCX )
, ssDW , 0 , 2 , sizeof ( rtPrevZCX ) ) ; } mxArray *
mr_mrz_GetSimStateDisallowedBlocks ( ) { mxArray * data = mxCreateCellMatrix
( 10 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const char_T * blockType
[ 10 ] = { "SimscapeExecutionBlock" , "SimscapeExecutionBlock" , "Scope" ,
"Scope" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , "Scope" , } ;
static const char_T * blockPath [ 10 ] = {
"mrz/Solver Configuration/EVAL_KEY/STATE_1" ,
"mrz/Solver Configuration/EVAL_KEY/OUTPUT_1_0" , "mrz/Scope1" , "mrz/Scope7"
, "mrz/Scope8" , "mrz/Scope9" , "mrz/Scope10" , "mrz/Scope11" , "mrz/Scope2"
, "mrz/Scope3" , } ; static const int reason [ 10 ] = { 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] < 10 ; ++ ( subs [ 0
] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockType [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ;
subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs ) ;
mxSetCell ( data , offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs [
0 ] ] ) ) ; } } return data ; } void MdlInitializeSizes ( void ) {
ssSetNumContStates ( rtS , 53 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ;
ssSetNumY ( rtS , 0 ) ; ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS
, 0 ) ; ssSetNumSampleTimes ( rtS , 3 ) ; ssSetNumBlocks ( rtS , 147 ) ;
ssSetNumBlockIO ( rtS , 16 ) ; ssSetNumBlockParams ( rtS , 25 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , - 2.0 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 3417737163U ) ; ssSetChecksumVal ( rtS , 1 ,
3313404931U ) ; ssSetChecksumVal ( rtS , 2 , 2695279267U ) ; ssSetChecksumVal
( rtS , 3 , 775507009U ) ; }
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
0 , sizeof ( DW ) ) ; } { rtDW . c014wwns5r = 0 ; } { static
DataTypeTransInfo dtInfo ; ( void ) memset ( ( char_T * ) & dtInfo , 0 ,
sizeof ( dtInfo ) ) ; ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo .
numDataTypes = 23 ; dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo
. dataTypeNames = & rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = &
rtBTransTable ; dtInfo . PTransTable = & rtPTransTable ; dtInfo .
dataTypeInfoTable = rtDataTypeInfoTable ; } mrz_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"mrz" ) ; ssSetPath ( rtS , "mrz" ) ; ssSetTStart ( rtS , 0.0 ) ; ssSetTFinal
( rtS , 10.0 ) ; { static RTWLogInfo rt_DataLoggingInfo ; rt_DataLoggingInfo
. loggingInterval = ( NULL ) ; ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo )
; } { { static int_T rt_LoggedStateWidths [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 , 88 } ; static int_T
rt_LoggedStateNumDimensions [ ] = { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 } ; static int_T rt_LoggedStateDimensions [ ]
= { 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1
, 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 ,
1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1 , 2 , 2 , 2 , 2 ,
88 } ; static boolean_T rt_LoggedStateIsVarDims [ ] = { 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static BuiltInDTypeId
rt_LoggedStateDataTypeIds [ ] = { SS_DOUBLE , SS_DOUBLE , SS_DOUBLE ,
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
, 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 } ; static
RTWPreprocessingFcnPtr rt_LoggingStatePreprocessingFcnPtrs [ ] = { ( NULL ) ,
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
"CSTATE" , "CSTATE" , "CSTATE" , "Discrete" , "Discrete" , "Discrete" ,
"Discrete" , "Discrete" } ; static const char_T * rt_LoggedStateBlockNames [
] = { "mrz/CMOS NOT" , "mrz/CMOS AND" , "mrz/CMOS AND" , "mrz/CMOS AND" ,
"mrz/CMOS NOT" , "mrz/CMOS AND1" , "mrz/CMOS AND1" , "mrz/CMOS AND1" ,
"mrz/Inductor2" , "mrz/Capacitor" , "mrz/Capacitor1" , "mrz/Inductor1" ,
"mrz/Capacitor2" , "mrz/Inductor3" , "mrz/Capacitor4" , "mrz/Schmitt Trigger"
, "mrz/Schmitt Trigger" , "mrz/Ideal Transformer1" , "mrz/Ideal Transformer1"
, "mrz/Thyristor (Piecewise Linear)2" , "mrz/Thyristor (Piecewise Linear)3" ,
"mrz/CMOS NOT" , "mrz/CMOS AND" , "mrz/CMOS AND" , "mrz/Schmitt Trigger" ,
"mrz/Schmitt Trigger" , "mrz/CMOS AND" , "mrz/CMOS NOT" , "mrz/CMOS AND1" ,
"mrz/CMOS AND1" , "mrz/CMOS NOT" , "mrz/CMOS AND1" , "mrz/Capacitor" ,
"mrz/Inductor2" , "mrz/Diode2" , "mrz/Inductor1" , "mrz/Capacitor4" ,
"mrz/Diode1" , "mrz/Inductor3" , "mrz/Finite-Gain Op-Amp" ,
"mrz/Finite-Gain Op-Amp" , "mrz/Finite-Gain Op-Amp1" , "mrz/Op-Amp2" ,
"mrz/Op-Amp3" , "mrz/Potentiometer" , "mrz/IGBT" , "mrz/Diode2" , "mrz/IGBT1"
, "mrz/IGBT2" , "mrz/Diode4" , "mrz/IGBT3" , "mrz/IGBT4" ,
"mrz/Schmitt Trigger" , "mrz/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1" ,
"mrz/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1" ,
"mrz/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1" ,
"mrz/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1" ,
"mrz/Solver\nConfiguration/EVAL_KEY/STATE_1" } ; static const char_T *
rt_LoggedStateNames [ ] = { "mrz.CMOS_NOT.cA.vc" , "mrz.CMOS_AND.cB.vc" ,
"mrz.CMOS_AND.cJ.vc" , "mrz.CMOS_AND.cA.vc" , "mrz.CMOS_NOT.cJ.vc" ,
"mrz.CMOS_AND1.cB.vc" , "mrz.CMOS_AND1.cJ.vc" , "mrz.CMOS_AND1.cA.vc" ,
"mrz.Inductor2.i_L" , "mrz.Capacitor.vc" , "mrz.Capacitor1.vc" ,
"mrz.Inductor1.i_L" , "mrz.Capacitor2.vc" , "mrz.Inductor3.i_L" ,
"mrz.Capacitor4.vc" , "mrz.Schmitt_Trigger.cA.vc" ,
"mrz.Schmitt_Trigger.cJ.vc" , "mrz.Ideal_Transformer1.n2.v" ,
"mrz.Ideal_Transformer1.p2.v" , "mrz.Thyristor_Piecewise_Linear2.iak" ,
"mrz.Thyristor_Piecewise_Linear3.iak" , "mrz.CMOS_NOT.cA.i" ,
"mrz.CMOS_AND.cB.i" , "mrz.CMOS_AND.cJ.i" , "mrz.Schmitt_Trigger.cJ.i" ,
"mrz.Schmitt_Trigger.rOUT.p.v" , "mrz.CMOS_AND.rOUT.p.v" ,
"mrz.CMOS_NOT.cJ.i" , "mrz.CMOS_AND1.cB.i" , "mrz.CMOS_AND1.cJ.i" ,
"mrz.CMOS_NOT.rOUT.p.v" , "mrz.CMOS_AND1.rOUT.p.v" , "mrz.Capacitor.p.v" ,
"mrz.Inductor2.v" , "mrz.Diode2.n.v" , "mrz.Inductor1.v" ,
"mrz.Capacitor4.n.v" , "mrz.Diode1.n.v" , "mrz.Inductor3.v" ,
"mrz.Finite_Gain_Op_Amp.n.v" , "mrz.Finite_Gain_Op_Amp.p.v" ,
"mrz.Finite_Gain_Op_Amp1.p.v" , "mrz.Op_Amp2.n.v" , "mrz.Op_Amp3.p.v" ,
"mrz.Potentiometer.iR" , "mrz.IGBT.ice" , "mrz.Diode2.i" , "mrz.IGBT1.ice" ,
"mrz.IGBT2.ice" , "mrz.Diode4.i" , "mrz.IGBT3.ice" , "mrz.IGBT4.ice" ,
"mrz.Schmitt_Trigger.cA.i" , "Discrete" , "Discrete" , "Discrete" ,
"Discrete" , "Discrete" } ; static boolean_T rt_LoggedStateCrossMdlRef [ ] =
{ 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 ,
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
, 0 , 1.0 , 0 , 0.0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 0 , 0 ,
1 , 2 , 3 , 4 } ; static RTWLogSignalInfo rt_LoggedStateSignalInfo = { 58 ,
rt_LoggedStateWidths , rt_LoggedStateNumDimensions , rt_LoggedStateDimensions
, rt_LoggedStateIsVarDims , ( NULL ) , ( NULL ) , rt_LoggedStateDataTypeIds ,
rt_LoggedStateComplexSignals , ( NULL ) , rt_LoggingStatePreprocessingFcnPtrs
, { rt_LoggedStateLabels } , ( NULL ) , ( NULL ) , ( NULL ) , {
rt_LoggedStateBlockNames } , { rt_LoggedStateNames } ,
rt_LoggedStateCrossMdlRef , rt_RTWLogDataTypeConvert , rt_LoggedStateIdxList
} ; static void * rt_LoggedStateSignalPtrs [ 58 ] ; rtliSetLogXSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( LogSignalPtrsType ) rt_LoggedStateSignalPtrs ) ;
rtliSetLogXSignalInfo ( ssGetRTWLogInfo ( rtS ) , & rt_LoggedStateSignalInfo
) ; rt_LoggedStateSignalPtrs [ 0 ] = ( void * ) & rtX . nhhi0oezes [ 0 ] ;
rt_LoggedStateSignalPtrs [ 1 ] = ( void * ) & rtX . nhhi0oezes [ 1 ] ;
rt_LoggedStateSignalPtrs [ 2 ] = ( void * ) & rtX . nhhi0oezes [ 2 ] ;
rt_LoggedStateSignalPtrs [ 3 ] = ( void * ) & rtX . nhhi0oezes [ 3 ] ;
rt_LoggedStateSignalPtrs [ 4 ] = ( void * ) & rtX . nhhi0oezes [ 4 ] ;
rt_LoggedStateSignalPtrs [ 5 ] = ( void * ) & rtX . nhhi0oezes [ 5 ] ;
rt_LoggedStateSignalPtrs [ 6 ] = ( void * ) & rtX . nhhi0oezes [ 6 ] ;
rt_LoggedStateSignalPtrs [ 7 ] = ( void * ) & rtX . nhhi0oezes [ 7 ] ;
rt_LoggedStateSignalPtrs [ 8 ] = ( void * ) & rtX . nhhi0oezes [ 8 ] ;
rt_LoggedStateSignalPtrs [ 9 ] = ( void * ) & rtX . nhhi0oezes [ 9 ] ;
rt_LoggedStateSignalPtrs [ 10 ] = ( void * ) & rtX . nhhi0oezes [ 10 ] ;
rt_LoggedStateSignalPtrs [ 11 ] = ( void * ) & rtX . nhhi0oezes [ 11 ] ;
rt_LoggedStateSignalPtrs [ 12 ] = ( void * ) & rtX . nhhi0oezes [ 12 ] ;
rt_LoggedStateSignalPtrs [ 13 ] = ( void * ) & rtX . nhhi0oezes [ 13 ] ;
rt_LoggedStateSignalPtrs [ 14 ] = ( void * ) & rtX . nhhi0oezes [ 14 ] ;
rt_LoggedStateSignalPtrs [ 15 ] = ( void * ) & rtX . nhhi0oezes [ 15 ] ;
rt_LoggedStateSignalPtrs [ 16 ] = ( void * ) & rtX . nhhi0oezes [ 16 ] ;
rt_LoggedStateSignalPtrs [ 17 ] = ( void * ) & rtX . nhhi0oezes [ 17 ] ;
rt_LoggedStateSignalPtrs [ 18 ] = ( void * ) & rtX . nhhi0oezes [ 18 ] ;
rt_LoggedStateSignalPtrs [ 19 ] = ( void * ) & rtX . nhhi0oezes [ 19 ] ;
rt_LoggedStateSignalPtrs [ 20 ] = ( void * ) & rtX . nhhi0oezes [ 20 ] ;
rt_LoggedStateSignalPtrs [ 21 ] = ( void * ) & rtX . nhhi0oezes [ 21 ] ;
rt_LoggedStateSignalPtrs [ 22 ] = ( void * ) & rtX . nhhi0oezes [ 22 ] ;
rt_LoggedStateSignalPtrs [ 23 ] = ( void * ) & rtX . nhhi0oezes [ 23 ] ;
rt_LoggedStateSignalPtrs [ 24 ] = ( void * ) & rtX . nhhi0oezes [ 24 ] ;
rt_LoggedStateSignalPtrs [ 25 ] = ( void * ) & rtX . nhhi0oezes [ 25 ] ;
rt_LoggedStateSignalPtrs [ 26 ] = ( void * ) & rtX . nhhi0oezes [ 26 ] ;
rt_LoggedStateSignalPtrs [ 27 ] = ( void * ) & rtX . nhhi0oezes [ 27 ] ;
rt_LoggedStateSignalPtrs [ 28 ] = ( void * ) & rtX . nhhi0oezes [ 28 ] ;
rt_LoggedStateSignalPtrs [ 29 ] = ( void * ) & rtX . nhhi0oezes [ 29 ] ;
rt_LoggedStateSignalPtrs [ 30 ] = ( void * ) & rtX . nhhi0oezes [ 30 ] ;
rt_LoggedStateSignalPtrs [ 31 ] = ( void * ) & rtX . nhhi0oezes [ 31 ] ;
rt_LoggedStateSignalPtrs [ 32 ] = ( void * ) & rtX . nhhi0oezes [ 32 ] ;
rt_LoggedStateSignalPtrs [ 33 ] = ( void * ) & rtX . nhhi0oezes [ 33 ] ;
rt_LoggedStateSignalPtrs [ 34 ] = ( void * ) & rtX . nhhi0oezes [ 34 ] ;
rt_LoggedStateSignalPtrs [ 35 ] = ( void * ) & rtX . nhhi0oezes [ 35 ] ;
rt_LoggedStateSignalPtrs [ 36 ] = ( void * ) & rtX . nhhi0oezes [ 36 ] ;
rt_LoggedStateSignalPtrs [ 37 ] = ( void * ) & rtX . nhhi0oezes [ 37 ] ;
rt_LoggedStateSignalPtrs [ 38 ] = ( void * ) & rtX . nhhi0oezes [ 38 ] ;
rt_LoggedStateSignalPtrs [ 39 ] = ( void * ) & rtX . nhhi0oezes [ 39 ] ;
rt_LoggedStateSignalPtrs [ 40 ] = ( void * ) & rtX . nhhi0oezes [ 40 ] ;
rt_LoggedStateSignalPtrs [ 41 ] = ( void * ) & rtX . nhhi0oezes [ 41 ] ;
rt_LoggedStateSignalPtrs [ 42 ] = ( void * ) & rtX . nhhi0oezes [ 42 ] ;
rt_LoggedStateSignalPtrs [ 43 ] = ( void * ) & rtX . nhhi0oezes [ 43 ] ;
rt_LoggedStateSignalPtrs [ 44 ] = ( void * ) & rtX . nhhi0oezes [ 44 ] ;
rt_LoggedStateSignalPtrs [ 45 ] = ( void * ) & rtX . nhhi0oezes [ 45 ] ;
rt_LoggedStateSignalPtrs [ 46 ] = ( void * ) & rtX . nhhi0oezes [ 46 ] ;
rt_LoggedStateSignalPtrs [ 47 ] = ( void * ) & rtX . nhhi0oezes [ 47 ] ;
rt_LoggedStateSignalPtrs [ 48 ] = ( void * ) & rtX . nhhi0oezes [ 48 ] ;
rt_LoggedStateSignalPtrs [ 49 ] = ( void * ) & rtX . nhhi0oezes [ 49 ] ;
rt_LoggedStateSignalPtrs [ 50 ] = ( void * ) & rtX . nhhi0oezes [ 50 ] ;
rt_LoggedStateSignalPtrs [ 51 ] = ( void * ) & rtX . nhhi0oezes [ 51 ] ;
rt_LoggedStateSignalPtrs [ 52 ] = ( void * ) & rtX . nhhi0oezes [ 52 ] ;
rt_LoggedStateSignalPtrs [ 53 ] = ( void * ) rtDW . onukoq1yyy ;
rt_LoggedStateSignalPtrs [ 54 ] = ( void * ) rtDW . l0v5zfgnmo ;
rt_LoggedStateSignalPtrs [ 55 ] = ( void * ) rtDW . lwb1tu1r3r ;
rt_LoggedStateSignalPtrs [ 56 ] = ( void * ) rtDW . cb3r4qb33r ;
rt_LoggedStateSignalPtrs [ 57 ] = ( void * ) rtDW . ekbgaownj3 ; }
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
contStatesDisabled [ 53 ] ; static real_T absTol [ 53 ] = { 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 } ; static uint8_T absTolControl [ 53 ] = { 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U } ; static real_T contStateJacPerturbBoundMinVec [ 53 ] ;
static real_T contStateJacPerturbBoundMaxVec [ 53 ] ; static uint8_T
zcAttributes [ 82 ] = { ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_UP ) , (
ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_Z2N | ZC_EVENT_P2N |
ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x80 | ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) } ; static ssNonContDerivSigInfo
nonContDerivSigInfo [ 4 ] = { { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
ifrha4igj5 ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
aqtgd423hn ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
abzdytk1pf ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & rtB .
oowprsxy2x ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i < 53 ; ++ i ) {
contStateJacPerturbBoundMinVec [ i ] = 0 ; contStateJacPerturbBoundMaxVec [ i
] = rtGetInf ( ) ; } } ssSetSolverRelTol ( rtS , 0.001 ) ; ssSetStepSize (
rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 ) ; ssSetMaxNumMinSteps ( rtS , -
1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ; ssSetMaxStepSize ( rtS ,
0.0019611688566385566 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
4 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "daessc" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 1 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset
( rtS , true ) ; ssSetAbsTolVector ( rtS , absTol ) ;
ssSetAbsTolControlVector ( rtS , absTolControl ) ; ssSetSolverAbsTol_Obsolete
( rtS , absTol ) ; ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl )
; ssSetJacobianPerturbationBoundsMinVec ( rtS ,
contStateJacPerturbBoundMinVec ) ; ssSetJacobianPerturbationBoundsMaxVec (
rtS , contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1
) ; ( void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) )
; ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetMassMatrixType ( rtS , ( ssMatrixType ) 3 ) ; ssSetMassMatrixNzMax ( rtS
, 32 ) ; ssSetModelMassMatrix ( rtS , MdlMassMatrix ) ;
ssSetModelForcingFunction ( rtS , MdlForcingFunction ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 3 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 32 ) ; ssSetModelOutputs ( rtS ,
MdlOutputs ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives (
rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 82 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverConsecutiveZCsStepRelTol ( rtS ,
2.8421709430404007E-13 ) ; ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ;
ssSetSolverConsecutiveZCsError ( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic (
rtS , 1 ) ; ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ;
ssSetSolverZcThreshold ( rtS , 0.001 ) ; ssSetSolverMaxConsecutiveMinStep (
rtS , 5 ) ; ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS
, INT_MIN ) ; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS )
; ssSetNumNonsampledZCs ( rtS , 82 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 5 ) ; { int_T
* ir = rtMassMatrix . ir ; int_T * jc = rtMassMatrix . jc ; real_T * pr =
rtMassMatrix . pr ; ssSetMassMatrixIr ( rtS , ir ) ; ssSetMassMatrixJc ( rtS
, jc ) ; ssSetMassMatrixPr ( rtS , pr ) ; ( void ) memset ( ( void * ) ir , 0
, 32 * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) jc , 0 , ( 53 + 1 )
* sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) pr , 0 , 32 * sizeof (
real_T ) ) ; } } { ZCSigState * zc = ( ZCSigState * ) & rtPrevZCX ;
ssSetPrevZCSigState ( rtS , zc ) ; } { rtPrevZCX . nvu2ubujtb =
UNINITIALIZED_ZCSIG ; rtPrevZCX . j20fleh4sq = UNINITIALIZED_ZCSIG ;
rtPrevZCX . az1hdolrmn = UNINITIALIZED_ZCSIG ; rtPrevZCX . jgbiiwouk2 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . aihgdpj2oj = UNINITIALIZED_ZCSIG ;
rtPrevZCX . pxt3mnokuf = UNINITIALIZED_ZCSIG ; rtPrevZCX . diaeczx5zq =
UNINITIALIZED_ZCSIG ; rtPrevZCX . pqeez3mf1c = UNINITIALIZED_ZCSIG ;
rtPrevZCX . osxawid1ra = UNINITIALIZED_ZCSIG ; rtPrevZCX . h0xmowu54q =
UNINITIALIZED_ZCSIG ; rtPrevZCX . dh5nyw3kxr = UNINITIALIZED_ZCSIG ;
rtPrevZCX . orsunffbty = UNINITIALIZED_ZCSIG ; rtPrevZCX . orpqodapxh =
UNINITIALIZED_ZCSIG ; rtPrevZCX . bdr3a4k5mx = UNINITIALIZED_ZCSIG ;
rtPrevZCX . n3a50ne3zg = UNINITIALIZED_ZCSIG ; rtPrevZCX . chctjqmo3x =
UNINITIALIZED_ZCSIG ; rtPrevZCX . c2lho40bof = UNINITIALIZED_ZCSIG ;
rtPrevZCX . egaalqfg0d = UNINITIALIZED_ZCSIG ; rtPrevZCX . nmdytw0us3 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . n5d0zq51oy = UNINITIALIZED_ZCSIG ;
rtPrevZCX . j01r1gmv4p = UNINITIALIZED_ZCSIG ; rtPrevZCX . a3a40ncrui =
UNINITIALIZED_ZCSIG ; rtPrevZCX . jqsjlwtnqi = UNINITIALIZED_ZCSIG ;
rtPrevZCX . pwennzaipw = UNINITIALIZED_ZCSIG ; rtPrevZCX . na3bnhukif =
UNINITIALIZED_ZCSIG ; rtPrevZCX . owqa20zglc = UNINITIALIZED_ZCSIG ;
rtPrevZCX . i0cx3vrjiu = UNINITIALIZED_ZCSIG ; rtPrevZCX . ad13vt1qgo =
UNINITIALIZED_ZCSIG ; rtPrevZCX . gihri2ddcs = UNINITIALIZED_ZCSIG ;
rtPrevZCX . itctzxqmke = UNINITIALIZED_ZCSIG ; rtPrevZCX . hvklqwb0e0 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . jfnr1npo0w = UNINITIALIZED_ZCSIG ;
rtPrevZCX . o3yrup4cbj = UNINITIALIZED_ZCSIG ; rtPrevZCX . bswyc2yxyg =
UNINITIALIZED_ZCSIG ; rtPrevZCX . gjsw1dtjh1 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . j5hr3desi3 = UNINITIALIZED_ZCSIG ; rtPrevZCX . pkn01jkvbh =
UNINITIALIZED_ZCSIG ; rtPrevZCX . jtsr1yions = UNINITIALIZED_ZCSIG ;
rtPrevZCX . nkhj0fufcr = UNINITIALIZED_ZCSIG ; rtPrevZCX . awhpupmrno =
UNINITIALIZED_ZCSIG ; rtPrevZCX . e3fnkkpb1h = UNINITIALIZED_ZCSIG ;
rtPrevZCX . kenyppr0zz = UNINITIALIZED_ZCSIG ; rtPrevZCX . irfifybpgh =
UNINITIALIZED_ZCSIG ; rtPrevZCX . gme32b5pxq = UNINITIALIZED_ZCSIG ;
rtPrevZCX . ogy0usriej = UNINITIALIZED_ZCSIG ; rtPrevZCX . nqzmsxaksx =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ivpgvhhhof = UNINITIALIZED_ZCSIG ;
rtPrevZCX . of5g1niugz = UNINITIALIZED_ZCSIG ; rtPrevZCX . kcxpuok2i5 =
UNINITIALIZED_ZCSIG ; rtPrevZCX . hzpq1yo3fh = UNINITIALIZED_ZCSIG ;
rtPrevZCX . dhhv1goxa2 = UNINITIALIZED_ZCSIG ; rtPrevZCX . prptlc2k2s =
UNINITIALIZED_ZCSIG ; rtPrevZCX . lfrt1xe2ft = UNINITIALIZED_ZCSIG ;
rtPrevZCX . evwjivy555 = UNINITIALIZED_ZCSIG ; rtPrevZCX . dnczadeevx =
UNINITIALIZED_ZCSIG ; rtPrevZCX . f4xqsvsox3 = UNINITIALIZED_ZCSIG ;
rtPrevZCX . n2nk4rp3wx = UNINITIALIZED_ZCSIG ; rtPrevZCX . pkubnajsya =
UNINITIALIZED_ZCSIG ; rtPrevZCX . aqwxfgcyxs = UNINITIALIZED_ZCSIG ;
rtPrevZCX . n30kgh22b0 = UNINITIALIZED_ZCSIG ; rtPrevZCX . bcaijz32px =
UNINITIALIZED_ZCSIG ; rtPrevZCX . je33co1kbj = UNINITIALIZED_ZCSIG ;
rtPrevZCX . a3hjfm0bkf = UNINITIALIZED_ZCSIG ; rtPrevZCX . l0jooekalx =
UNINITIALIZED_ZCSIG ; rtPrevZCX . cs0q3t4lvb = UNINITIALIZED_ZCSIG ;
rtPrevZCX . h5etrebluh = UNINITIALIZED_ZCSIG ; rtPrevZCX . e0ekguwdnb =
UNINITIALIZED_ZCSIG ; rtPrevZCX . kb4kti2p3n = UNINITIALIZED_ZCSIG ;
rtPrevZCX . g41tnnhkyq = UNINITIALIZED_ZCSIG ; rtPrevZCX . lwxewwog3l =
UNINITIALIZED_ZCSIG ; rtPrevZCX . noq1ju5r5i = UNINITIALIZED_ZCSIG ;
rtPrevZCX . lwma5tg42i = UNINITIALIZED_ZCSIG ; rtPrevZCX . cnlclavbxj =
UNINITIALIZED_ZCSIG ; rtPrevZCX . bvu5sfptxs = UNINITIALIZED_ZCSIG ;
rtPrevZCX . d554slldon = UNINITIALIZED_ZCSIG ; rtPrevZCX . hdnk53rhyj =
UNINITIALIZED_ZCSIG ; rtPrevZCX . ddva5zxarl = UNINITIALIZED_ZCSIG ;
rtPrevZCX . eapwh5fg4i = UNINITIALIZED_ZCSIG ; } ssSetChecksumVal ( rtS , 0 ,
3417737163U ) ; ssSetChecksumVal ( rtS , 1 , 3313404931U ) ; ssSetChecksumVal
( rtS , 2 , 2695279267U ) ; ssSetChecksumVal ( rtS , 3 , 775507009U ) ; {
static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static
RTWExtModeInfo rt_ExtModeInfo ; static const sysRanDType * systemRan [ 1 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_mrz_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS ,
mr_mrz_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS , mr_mrz_SetDWork ) ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } executionInfo -> simulationOptions_ . stateSaveName_ =
rtliGetLogX ( ssGetRTWLogInfo ( rtS ) ) ; executionInfo -> simulationOptions_
. finalStateName_ = rtliGetLogXFinal ( ssGetRTWLogInfo ( rtS ) ) ;
executionInfo -> simulationOptions_ . outputSaveName_ = rtliGetLogY (
ssGetRTWLogInfo ( rtS ) ) ; return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
void MdlOutputsParameterSampleTime ( int_T tid ) { MdlOutputsTID3 ( tid ) ; }
