#ifndef PowerElecCurriculumDesign_h_
#define PowerElecCurriculumDesign_h_
#ifndef PowerElecCurriculumDesign_COMMON_INCLUDES_
#define PowerElecCurriculumDesign_COMMON_INCLUDES_
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
#include "PowerElecCurriculumDesign_dda62cd9_1_gateway.h"
#endif
#include "PowerElecCurriculumDesign_types.h"
#include <string.h>
#include "rt_zcfcnRefine.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "rtGetInf.h"
#include "zero_crossing_types.h"
#define MODEL_NAME PowerElecCurriculumDesign
#define NSAMPLE_TIMES (4) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (13) 
#define NUM_ZC_EVENTS (84) 
#ifndef NCSTATES
#define NCSTATES (62)   
#elif NCSTATES != 62
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
typedef struct { real_T bqbjyzq0dx ; real_T d4jymh4nxd [ 4 ] ; real_T
e3lyudtmtl ; real_T gzs1upx1ld ; real_T mfabkmo1fw ; real_T khv2ifj12b [ 4 ]
; real_T hh4njpdtv0 ; real_T f30llq3r5r [ 4 ] ; real_T c0sk0m0en4 [ 4 ] ;
real_T antypkipw4 [ 161 ] ; real_T gx1b4l2gux [ 13 ] ; real_T bea5qhjk50 ;
real_T lgt3rvvya0 ; } B ; typedef struct { real_T eqxw5ipaqu [ 2 ] ; real_T
bu2ap5h1zw [ 2 ] ; real_T l3dkmxtkup [ 2 ] ; real_T ndakhsxbau [ 2 ] ; real_T
cowewv1m30 [ 83 ] ; real_T be21jvh4m5 ; real_T hujy3sr5qa [ 84 ] ; real_T
biae4oaxki ; real_T mathxaaa54 ; real_T nosrs3fidx ; real_T gagkrcvl21 ;
real_T otfubklm10 ; real_T ektz4axiiq ; int64_T g2kvorjwgo ; void *
ahk0b0xovg ; void * avzvouupma ; void * iti3hdl1fz ; void * ox0lvdvqpj ; void
* muo3vhtfq4 ; void * mmmuzbxi3e ; void * j34nvcnrrz ; void * mo1bheafsg ;
void * lwdcez4qca ; void * hrgh03s5hg ; struct { void * LoggedData [ 5 ] ; }
imtv1ikkob ; void * fzpvdsa1iq ; void * jtosohksrj ; void * nhjis5yhic ; void
* jwlodnitzv ; void * f5ciyeaxlh ; void * gg3m2wwxtm ; void * ia5hdvfnyf ;
void * mv3ojv2n2a ; void * oureyvll2s ; void * gsrr3boy5t ; struct { void *
LoggedData [ 5 ] ; } dtf5ktu0oy ; int32_T nbbv5gde22 ; int32_T mfduvdp04x ;
int_T aitoajng4b [ 80 ] ; int_T j2ywn1tz2f ; int_T ibj1gtgw5z ; int_T
aha51gyvzc ; int32_T n2bqajqtph ; uint8_T e3wigxva1h [ 84 ] ; uint8_T
b0g44fcvf4 [ 84 ] ; uint8_T o2agmntgwx ; uint8_T jj20uftslt ; uint8_T
fxjjl0vnkj ; uint8_T hmcgtpzjhj ; uint8_T etqduttqdz ; uint8_T fm3ahzflhh ;
boolean_T aqch01fh2d ; boolean_T cdarvsloed ; boolean_T bbigt0bkaa ;
boolean_T fy1435topv ; boolean_T d11s1nwvhm ; } DW ; typedef struct { real_T
opqf3j24fn [ 62 ] ; } X ; typedef struct { real_T opqf3j24fn [ 62 ] ; } XDot
; typedef struct { boolean_T opqf3j24fn [ 62 ] ; } XDis ; typedef struct {
real_T opqf3j24fn [ 62 ] ; } CStateAbsTol ; typedef struct { real_T
opqf3j24fn [ 62 ] ; } CXPtMin ; typedef struct { real_T opqf3j24fn [ 62 ] ; }
CXPtMax ; typedef struct { real_T etrvewkzwq ; real_T lnq3q1oozy ; real_T
gbr1piglhf ; real_T liiklxbfyl ; real_T amha4yhimw ; real_T difi5e2j2p ;
real_T iwrzjb4je2 ; real_T g5bxi4dtag ; real_T hjqrnlxtek ; real_T cvwucymcwl
; real_T jmllp54crz ; real_T pcpudgbh5q ; real_T mh4kytl3qs ; real_T
i44twz0v5k ; real_T igxfufvueq ; real_T fscovd10k5 ; real_T mtlhmzf2n2 ;
real_T ech05rehgx ; real_T abd1mva4qu ; real_T ffzi55hek3 ; real_T c5ga3v1cs5
; real_T dldyjnkxq0 ; real_T pgq3iv1hnk ; real_T m202czrxzw ; real_T
mecile4r2g ; real_T ny1rfd1wgy ; real_T njgg4xq3ce ; real_T g4felkntun ;
real_T g05vtmgezy ; real_T fxhsjkhvff ; real_T ajk03jabpu ; real_T m2mox2idtp
; real_T fz13tazll5 ; real_T agdxdznm4y ; real_T pvmcr0giba ; real_T
ghechymvyj ; real_T givmvcmaxp ; real_T ek1izs55fg ; real_T ogoqmwruwm ;
real_T duod2qiqdw ; real_T osh12verp5 ; real_T gyrjwf3xa1 ; real_T pmgy2dfpnl
; real_T a4rtonfccg ; real_T bqkrlch13h ; real_T luy0tl4cz3 ; real_T
iowdvikid0 ; real_T aahjl0xh5y ; real_T f1a5fh4i3b ; real_T gacxbaypjl ;
real_T euejg3kuxb ; real_T czzedlxkf0 ; real_T odmutdsmmp ; real_T o35al0010e
; real_T nzh2ebd01d ; real_T efbh4szehy ; real_T lqlfb5legc ; real_T
bqfg2gfgaq ; real_T d34lxa3jch ; real_T bncv2vmq4d ; real_T llizfrbska ;
real_T ggjkfaeqsn ; real_T jr1s0y0rea ; real_T fswtyez2uw ; real_T d1zqc0qzhp
; real_T j0xuhgfpdn ; real_T htrcc1osjk ; real_T f5xv05oarv ; real_T
p0b4hnzzn5 ; real_T c2qfyj2zjf ; real_T gemvvrjvxj ; real_T k5kfs5ehyo ;
real_T b0vsvbvxo2 ; real_T i2m5du2hci ; real_T hv4fh0pzwq ; real_T maecvv20nn
; real_T jxygebzn1p ; real_T ikrrqhq4lc ; real_T hrnd2ekhrn ; real_T
fy0vxxfuop ; real_T eeiei4s0r5 ; real_T l41lm0c3ld ; real_T defokfrh3s ;
real_T gi4utfbkcy ; real_T c4f3fn03pl ; } ZCV ; typedef struct { ZCSigState
nbozhyiyh4 ; ZCSigState kwai4hzmir ; ZCSigState hp5mrt20ci ; ZCSigState
nrgw250cx1 ; ZCSigState ldqh1buh23 ; ZCSigState nypc3frtzo ; ZCSigState
emohuolg0q ; ZCSigState hv0o3x4nq1 ; ZCSigState g221lrpagg ; ZCSigState
db2hkqurrr ; ZCSigState eqtqvm4nzg ; ZCSigState jkzn1b4x0t ; ZCSigState
kskywat0rc ; ZCSigState ltdsciencd ; ZCSigState lornd1wih5 ; ZCSigState
mhelknwnjf ; ZCSigState c0nypkvlfb ; ZCSigState eg4of4tgn2 ; ZCSigState
hcvgexffbo ; ZCSigState otuxrlwygr ; ZCSigState jvlmau24nj ; ZCSigState
el5xqp4hy2 ; ZCSigState landn5gph0 ; ZCSigState mqmlvscfkb ; ZCSigState
g34swm3yqy ; ZCSigState lzsbf13enx ; ZCSigState ir0myn0v44 ; ZCSigState
ke2pzkjj1p ; ZCSigState kmuxgyeyfy ; ZCSigState kjjs1o0mm1 ; ZCSigState
angncel2c2 ; ZCSigState a4a44qvnno ; ZCSigState duai0ghphw ; ZCSigState
f0kdphelfo ; ZCSigState bii2chrhyi ; ZCSigState jqqlyjwmi2 ; ZCSigState
memazaiww2 ; ZCSigState auxg0yxl3k ; ZCSigState muu5dwq3cs ; ZCSigState
pr3hjeobtr ; ZCSigState oiuxvodcv5 ; ZCSigState pv52yjl3a1 ; ZCSigState
avftdf0131 ; ZCSigState iqvhedeivt ; ZCSigState m5cc2b5gyz ; ZCSigState
odwfjcirxr ; ZCSigState nnswhfkby4 ; ZCSigState bun5hioq4m ; ZCSigState
jj4weujv5p ; ZCSigState jjukrke5th ; ZCSigState epkq1cp3pz ; ZCSigState
ejuw5qgiv0 ; ZCSigState addnedgbub ; ZCSigState lbxicwkg1b ; ZCSigState
detkhysobm ; ZCSigState idc1lg0p05 ; ZCSigState mgxbmeucvn ; ZCSigState
fdgrrbjnh1 ; ZCSigState erqii4rtum ; ZCSigState eotx4mzp1q ; ZCSigState
koqi52oqgi ; ZCSigState bgp3yq5cao ; ZCSigState fm0fvg2p1g ; ZCSigState
kmg5cvljd4 ; ZCSigState ecyuvfqbvl ; ZCSigState hfxyharzxm ; ZCSigState
cfmj3s1q11 ; ZCSigState dwhfxsoj00 ; ZCSigState l22glofxvx ; ZCSigState
ltyxwkn53c ; ZCSigState h2or0hzg5l ; ZCSigState cqqxmh31s5 ; ZCSigState
aamcnzzg3p ; ZCSigState fl0rnokkds ; ZCSigState k54uc2tlkg ; ZCSigState
avy31jkwky ; ZCSigState jx1dtas1pg ; ZCSigState bjpok4myai ; ZCSigState
iitbiqsm3a ; ZCSigState gljpucmt4q ; ZCSigState iw2imko2wv ; ZCSigState
cwfng2bxhy ; ZCSigState ei222hkqrx ; ZCSigState lvf4uegpi1 ; } PrevZCX ;
typedef struct { int_T ir [ 15 ] ; int_T jc [ 63 ] ; real_T pr [ 15 ] ; }
MassMatrix ; typedef struct { rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ;
struct P_ { real_T RepeatingSequence_rep_seq_y [ 3 ] ; real_T
PulseGenerator_Amp ; real_T PulseGenerator_Period ; real_T
PulseGenerator_Duty ; real_T PulseGenerator_PhaseDelay ; real_T
LookUpTable1_bp01Data [ 3 ] ; real_T SineWave_Amp ; real_T SineWave_Bias ;
real_T SineWave_Freq ; real_T SineWave_Phase ; real_T Constant_Value ; real_T
Constant_Value_n4aqhn1fhp ; boolean_T Constant_Value_azpurcqvrs ; boolean_T
Constant_Value_kvcj4gt0ry ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern PrevZCX rtPrevZCX ; extern MassMatrix rtMassMatrix ; extern P rtP ;
extern mxArray * mr_PowerElecCurriculumDesign_GetDWork ( ) ; extern void
mr_PowerElecCurriculumDesign_SetDWork ( const mxArray * ssDW ) ; extern
mxArray * mr_PowerElecCurriculumDesign_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
PowerElecCurriculumDesign_GetCAPIStaticMap ( void ) ; extern SimStruct *
const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ; extern
rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid )
; void MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T
tid ) ; void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
