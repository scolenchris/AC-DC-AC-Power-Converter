#ifndef mrz_h_
#define mrz_h_
#ifndef mrz_COMMON_INCLUDES_
#define mrz_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw.h"
#include "mrz_dda62cd9_1_gateway.h"
#endif
#include "mrz_types.h"
#include <string.h>
#include "rt_zcfcnRefine.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "zero_crossing_types.h"
#define MODEL_NAME mrz
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (16) 
#define NUM_ZC_EVENTS (78) 
#ifndef NCSTATES
#define NCSTATES (53)   
#elif NCSTATES != 53
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T dijpktxxg5 ; real_T i3xyz3kjxa ; real_T oowprsxy2x ;
real_T abzdytk1pf ; real_T aqtgd423hn ; real_T gdb3wbgzo5 [ 4 ] ; real_T
mnoms1r00y [ 4 ] ; real_T li5o4gitlq [ 4 ] ; real_T ifrha4igj5 ; real_T
jb4u2yifrj ; real_T elx4gn4sq3 ; real_T cqx0zb5ro1 ; real_T ksaz1bbmuy ;
real_T fo5pnop3iv [ 4 ] ; real_T npcesp25b1 [ 143 ] ; real_T fwy2vxyapw [ 16
] ; } B ; typedef struct { real_T onukoq1yyy [ 2 ] ; real_T l0v5zfgnmo [ 2 ]
; real_T lwb1tu1r3r [ 2 ] ; real_T cb3r4qb33r [ 2 ] ; real_T ekbgaownj3 [ 88
] ; real_T nt1zn5x4x4 ; real_T czxyqzxhds [ 78 ] ; real_T m5bkigs10b ; real_T
gepsevpqjd ; int64_T ixvc4iclw2 ; void * mm1nwudnea ; void * gm0m00b0cq ;
void * j24sb1yofu ; void * llrigqtdbo ; void * d2rl0ftjnt ; void * h1fg01ehox
; void * dpeqg0do3s ; void * l1oy2ljexe ; void * ksjycxges0 ; void *
iel4ohv1uu ; struct { void * LoggedData ; } mexbnbhdn3 ; struct { void *
LoggedData [ 2 ] ; } co20mzxnzd ; struct { void * LoggedData [ 2 ] ; }
alxh3ftyis ; struct { void * LoggedData ; } dg3mjayekr ; struct { void *
LoggedData ; } jfpvblliou ; struct { void * LoggedData [ 2 ] ; } hq4xd344ph ;
struct { void * LoggedData ; } of5bqeziju ; struct { void * LoggedData ; }
nzvg2kss4a ; struct { void * LoggedData ; } nvndnr13w5 ; struct { void *
LoggedData [ 2 ] ; } eshjkr3yqz ; struct { void * LoggedData [ 2 ] ; }
d2o3j0zjsq ; int32_T ohzhxlmfeq ; int32_T jl3atcwzyb ; int_T aysnlclzmm [ 74
] ; int_T hbxlgtkw0k ; int_T kqtei5yteo ; int_T plv3jzt5fb ; int32_T
c014wwns5r ; uint8_T gdbdtpq3sd [ 78 ] ; uint8_T a2sh2jpidr [ 78 ] ; uint8_T
dijuzt4qqx ; uint8_T h2j04rsdlc ; boolean_T agbmberyid ; boolean_T lvdamp5ela
; boolean_T kbudmxztdb ; } DW ; typedef struct { real_T nhhi0oezes [ 53 ] ; }
X ; typedef struct { real_T nhhi0oezes [ 53 ] ; } XDot ; typedef struct {
boolean_T nhhi0oezes [ 53 ] ; } XDis ; typedef struct { real_T nhhi0oezes [
53 ] ; } CStateAbsTol ; typedef struct { real_T nhhi0oezes [ 53 ] ; } CXPtMin
; typedef struct { real_T nhhi0oezes [ 53 ] ; } CXPtMax ; typedef struct {
real_T jhtcoqlris ; real_T ahqz1pq1zs ; real_T ihwwszl0nj ; real_T nimv422dib
; real_T epgy53l0pc ; real_T e3rqy1k4nm ; real_T otfcobmsd1 ; real_T
lywm0kujfe ; real_T iu5n5nysxf ; real_T aoxwngwzv3 ; real_T j2oukhly3t ;
real_T l1mhpdxqpp ; real_T pgcdf1rynb ; real_T l0h3q0fhuf ; real_T plfkrl44l0
; real_T d1f0wr2v0e ; real_T bawfb5aksr ; real_T bux01xgv5u ; real_T
pg3ehouvj4 ; real_T mcrb03fb5e ; real_T kfcxloikcw ; real_T h1qgsjbjyz ;
real_T ifrw3fnvbm ; real_T p1lm1rqz0k ; real_T lytld2f0o5 ; real_T czdhsejj1h
; real_T jwyesdtf5t ; real_T np0pcp3tuf ; real_T egpoqwj0qf ; real_T
da1oc4i1xu ; real_T enqlfagmac ; real_T ff4bfxkdmn ; real_T cvueirtekh ;
real_T kyuj3dubjf ; real_T fn0wblr3py ; real_T oodfwa2qzy ; real_T cw3yt2mwiz
; real_T ngdgc2hawu ; real_T g05vchja3v ; real_T kaho2rzh3u ; real_T
fpxlztqwor ; real_T hr0ggtvfkq ; real_T d3kudyovxj ; real_T hlq1wkkq2v ;
real_T k3nnqurhkc ; real_T cw4qnioltc ; real_T abcq45yds5 ; real_T gplyainazx
; real_T dukizxkiim ; real_T igaetmqvhm ; real_T apynggo1mr ; real_T
mxcne45out ; real_T icj234uh0i ; real_T m3aoefz1zi ; real_T hxnz22stdh ;
real_T ckvzffveam ; real_T hu2cgfstl4 ; real_T k4ublx0rwq ; real_T himb05wvsc
; real_T fqs5ltdvnx ; real_T cruvhukhb1 ; real_T mh5spaibui ; real_T
bg0egcbq1s ; real_T cum5qu3owh ; real_T n0otfuh4ni ; real_T b3vyqn2ehz ;
real_T p30rnwrg0u ; real_T hse0qyp22k ; real_T d3mvuakwwh ; real_T n3kffrrxum
; real_T nweghjlpkq ; real_T ftiujrhkxd ; real_T bthz54nvku ; real_T
e52f2l43i1 ; real_T o4kgyevyy5 ; real_T ogd3x4g2mc ; real_T nfnzx2ladl ;
real_T peoedayt53 ; real_T jz0omhltns ; real_T czh42nsyp5 ; real_T b4cqmspm3o
; real_T j5nibypywc ; } ZCV ; typedef struct { ZCSigState nvu2ubujtb ;
ZCSigState j20fleh4sq ; ZCSigState az1hdolrmn ; ZCSigState jgbiiwouk2 ;
ZCSigState aihgdpj2oj ; ZCSigState pxt3mnokuf ; ZCSigState diaeczx5zq ;
ZCSigState pqeez3mf1c ; ZCSigState osxawid1ra ; ZCSigState h0xmowu54q ;
ZCSigState dh5nyw3kxr ; ZCSigState orsunffbty ; ZCSigState orpqodapxh ;
ZCSigState bdr3a4k5mx ; ZCSigState n3a50ne3zg ; ZCSigState chctjqmo3x ;
ZCSigState c2lho40bof ; ZCSigState egaalqfg0d ; ZCSigState nmdytw0us3 ;
ZCSigState n5d0zq51oy ; ZCSigState j01r1gmv4p ; ZCSigState a3a40ncrui ;
ZCSigState jqsjlwtnqi ; ZCSigState pwennzaipw ; ZCSigState na3bnhukif ;
ZCSigState owqa20zglc ; ZCSigState i0cx3vrjiu ; ZCSigState ad13vt1qgo ;
ZCSigState gihri2ddcs ; ZCSigState itctzxqmke ; ZCSigState hvklqwb0e0 ;
ZCSigState jfnr1npo0w ; ZCSigState o3yrup4cbj ; ZCSigState bswyc2yxyg ;
ZCSigState gjsw1dtjh1 ; ZCSigState j5hr3desi3 ; ZCSigState pkn01jkvbh ;
ZCSigState jtsr1yions ; ZCSigState nkhj0fufcr ; ZCSigState awhpupmrno ;
ZCSigState e3fnkkpb1h ; ZCSigState kenyppr0zz ; ZCSigState irfifybpgh ;
ZCSigState gme32b5pxq ; ZCSigState ogy0usriej ; ZCSigState nqzmsxaksx ;
ZCSigState ivpgvhhhof ; ZCSigState of5g1niugz ; ZCSigState kcxpuok2i5 ;
ZCSigState hzpq1yo3fh ; ZCSigState dhhv1goxa2 ; ZCSigState prptlc2k2s ;
ZCSigState lfrt1xe2ft ; ZCSigState evwjivy555 ; ZCSigState dnczadeevx ;
ZCSigState f4xqsvsox3 ; ZCSigState n2nk4rp3wx ; ZCSigState pkubnajsya ;
ZCSigState aqwxfgcyxs ; ZCSigState n30kgh22b0 ; ZCSigState bcaijz32px ;
ZCSigState je33co1kbj ; ZCSigState a3hjfm0bkf ; ZCSigState l0jooekalx ;
ZCSigState cs0q3t4lvb ; ZCSigState h5etrebluh ; ZCSigState e0ekguwdnb ;
ZCSigState kb4kti2p3n ; ZCSigState g41tnnhkyq ; ZCSigState lwxewwog3l ;
ZCSigState noq1ju5r5i ; ZCSigState lwma5tg42i ; ZCSigState cnlclavbxj ;
ZCSigState bvu5sfptxs ; ZCSigState d554slldon ; ZCSigState hdnk53rhyj ;
ZCSigState ddva5zxarl ; ZCSigState eapwh5fg4i ; } PrevZCX ; typedef struct {
int_T ir [ 32 ] ; int_T jc [ 54 ] ; real_T pr [ 32 ] ; } MassMatrix ; typedef
struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct P_ { real_T
Ramp_InitialOutput ; real_T RepeatingSequence_rep_seq_y [ 3 ] ; real_T
Ramp_slope ; real_T Ramp_start ; real_T LookUpTable1_bp01Data [ 3 ] ; real_T
SineWave_Amp ; real_T SineWave_Bias ; real_T SineWave_Freq ; real_T
SineWave_Phase ; real_T Gain_Gain ; real_T Gain1_Gain ; real_T
PulseGenerator2_Amp ; real_T PulseGenerator2_Period ; real_T
PulseGenerator2_Duty ; real_T PulseGenerator2_PhaseDelay ; real_T Step_Y0 ;
real_T Saturation_UpperSat ; real_T Saturation_LowerSat ; real_T
Constant_Value ; boolean_T Constant_Value_g52i3c4nmp ; boolean_T
Constant_Value_otszzbjsj3 ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern PrevZCX rtPrevZCX ; extern MassMatrix rtMassMatrix ; extern P rtP ;
extern mxArray * mr_mrz_GetDWork ( ) ; extern void mr_mrz_SetDWork ( const
mxArray * ssDW ) ; extern mxArray * mr_mrz_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo * mrz_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
