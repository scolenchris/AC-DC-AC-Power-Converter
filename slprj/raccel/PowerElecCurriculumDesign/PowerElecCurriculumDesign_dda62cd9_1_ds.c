#include "ne_ds.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_tdxy_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_y.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_nldv.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_eq_tol.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sclv.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_obs_all.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_obs_exp.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_var_tol.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_mode.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dxm_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_log.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_obs_act.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_imax.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_imin.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dxicrm_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_obs_il.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dxicr_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_m_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_vpf.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_slf0.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_lv.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dnf_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dnf_v_x.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_slf.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_tdxf_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_a_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_ddf_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_ic.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_slv.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dxf_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_vmf.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dxf.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_qx_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_lock2_i.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_zc.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_lock2_r.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_update_i.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_f.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_cache_i.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_update2_i.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_update2_r.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_lock_i.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_update_r.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_lock_r.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dxy.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_vsf.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dxdelt_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_a.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_mdxy_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dxy_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_dxcer_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_icrm_p.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_ddf.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_assert.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds.h"
#include "ssc_ml_fun.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_external_struct.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_externals.h"
#include "PowerElecCurriculumDesign_dda62cd9_1_ds_sys_struct.h"
static int32_T ds_m ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_vmm ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxm ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dum_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dum ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dtm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dpm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dpm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_b_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_b ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_c_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_c ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_duf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_duf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dtf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dpdxf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dpdxf ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dwf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dwf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dnf ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_cer ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dxcer ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddcer ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddcer_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_icr ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_icr_im ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_icr_id ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_icr_il ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dxicr ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_ddicr ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddicr_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_tduicr_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_icrm ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dxicrm ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_ddicrm_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddicrm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_freqs ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_solverhits ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_mduy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_tduy_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_duy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_duy ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dty_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dty ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_cache_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_sfo ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_sfp ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_init_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_init_i ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_passert ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_iassert ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_del_t ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_del_v ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_del_v0 ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_del_tmax ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dxdelt ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dudelt_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dudelt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtdelt_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtdelt ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dp_l ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dp_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dp_j
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dp_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qx ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_qu ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_q1 ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qu_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_qt_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_q1_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dimin ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dimax ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
NeDsMethodOutput * ds_output_m_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmm (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxm_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dum ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dpm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dpm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_a ( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_c_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_c ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_vpf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_vsf ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_slf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_slf0 ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dpdxf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dpdxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dwf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dwf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduf_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tdxf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dnf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dnf_v_x ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cer ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxcer ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxcer_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddcer ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddcer_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ic ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_icr_im ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_icr_id ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddicr ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddicr_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduicr_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_icrm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxicrm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddicrm_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_ddicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_freqs ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_solverhits ( const NeDynamicSystem * ds , PmAllocator * allocator )
; static NeDsMethodOutput * ds_output_mduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_mdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_y ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_dxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxy ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dty_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dty ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_zc ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_cache_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update2_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update2_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock2_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock2_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_sfo ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_sfp ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_init_r
( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_init_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_log ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_assert ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_passert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_iassert (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_del_t ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_del_v0 ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_del_tmax ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxdelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxdelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dudelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dudelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtdelt_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dtdelt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_act ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_all (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_il ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dp_l ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dp_i ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dp_j ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dp_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qx ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qu ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_q1 ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qu_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_var_tol (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_eq_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lv ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_slv ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_nldv ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_sclv ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_imin ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_imax ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dimin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dimax ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static void release_reference ( NeDynamicSystem * ds ) ; static void
get_reference ( NeDynamicSystem * ds ) ; static NeDynamicSystem * diagnostics
( NeDynamicSystem * ds , boolean_T ) ; static void expand ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , PmRealVector * out ,
boolean_T kp ) ; static void rtpmap ( const NeDynamicSystem * ds , const
PmIntVector * inl , const PmIntVector * ini , const PmIntVector * inj , const
PmRealVector * inr , PmIntVector * outl , PmIntVector * outi , PmIntVector *
outj , PmRealVector * outr ) ; static NeEquationData s_equation_data [ 62 ] =
{ { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Capacitor" , 1U , 0U , TRUE , 1.0 , "1" , } , { ""
, 0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Capacitor1" ,
1U , 1U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Capacitor2" , 1U , 2U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Capacitor3" , 1U , 3U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Capacitor4" , 1U , 4U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Diode" ,
1U , 5U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Diode1" , 1U , 6U , TRUE , 1.0 , "1" , } , { "" ,
0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Diode2" , 1U ,
7U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Inductor" , 2U , 8U , TRUE , 1.0 , "1" , } , { ""
, 0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Inductor1" ,
2U , 10U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Inductor2" , 2U , 12U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 14U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 15U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 16U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 17U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/AC Voltage Source" , 1U , 18U , FALSE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Capacitor2" , 1U , 19U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Capacitor3" , 1U , 20U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Capacitor4" , 1U , 21U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Comparator" , 1U , 22U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Comparator1" , 1U , 23U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Diode" ,
3U , 24U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Diode" , 3U , 27U , TRUE , 1.0 , "1" , } , { "" ,
0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Diode1" , 5U ,
30U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Diode2" , 5U , 35U , FALSE , 1.0 , "1" , } , { ""
, 0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Diode3" , 5U
, 40U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Diode3" , 5U , 45U , TRUE , 1.0 , "1" , } , { "" ,
0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Diode3" , 5U ,
50U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Diode4" , 5U , 55U , TRUE , 1.0 , "1" , } , { "" ,
0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Diode4" , 5U ,
60U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Diode4" , 5U , 65U , TRUE , 1.0 , "1" , } , { "" ,
0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Diode5" , 3U ,
70U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Diode5" , 3U , 73U , TRUE , 1.0 , "1" , } , { "" ,
0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Diode6" , 3U ,
76U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Diode6" , 3U , 79U , TRUE , 1.0 , "1" , } , { "" ,
0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Diode7" , 3U ,
82U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Diode7" , 3U , 85U , TRUE , 1.0 , "1" , } , { "" ,
0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Diode8" , 3U ,
88U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Diode8" , 3U , 91U , TRUE , 1.0 , "1" , } , { "" ,
0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Diode9" , 3U ,
94U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Diode9" , 3U , 97U , TRUE , 1.0 , "1" , } , { "" ,
0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Finite-Gain Op-Amp1" , 5U , 100U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Finite-Gain Op-Amp2" , 5U , 105U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/IGBT" , 3U , 110U , TRUE , 1.0 , "1" , } , { "" ,
0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/IGBT1" , 3U ,
113U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/IGBT2" , 3U , 116U , TRUE , 1.0 , "1" , } , { "" ,
0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/IGBT3" , 3U ,
119U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/IGBT4" , 3U , 122U , TRUE , 1.0 , "1" , } , { "" ,
0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 125U , FALSE , 1.0
, "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 126U , FALSE , 1.0
, "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 127U , FALSE , 1.0
, "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 128U , FALSE , 1.0
, "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Potentiometer" , 1U , 129U , FALSE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Potentiometer" , 1U , 130U , FALSE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Resistor1" , 1U , 131U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "PowerElecCurriculumDesign/Resistor3"
, 1U , 132U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
, "PowerElecCurriculumDesign/Thyristor1" , 12U , 133U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Thyristor2" , 12U , 145U , TRUE , 1.0 , "1" , } ,
{ "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Thyristor3" , 12U , 157U , TRUE , 1.0 , "1" , } ,
{ "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"PowerElecCurriculumDesign/Thyristor4" , 12U , 169U , TRUE , 1.0 , "1" , } ,
{ "" , 0U , 1 , NE_EQUATION_DOMAIN_TIME , "" , 4U , 181U , TRUE , 1.0 , "1" ,
} , { "" , 0U , 1 , NE_EQUATION_DOMAIN_TIME , "" , 4U , 185U , TRUE , 1.0 ,
"1" , } } ; static NeCERData * s_cer_data = NULL ; static NeICRData
s_icr_data [ 14 ] = { { "" , 0U , 0 , "PowerElecCurriculumDesign/Diode" , 1U
, 0U , } , { "" , 0U , 0 , "PowerElecCurriculumDesign/Diode1" , 1U , 1U , } ,
{ "" , 0U , 0 , "PowerElecCurriculumDesign/Diode2" , 1U , 2U , } , { "" , 0U
, 0 , "PowerElecCurriculumDesign/Diode3" , 1U , 3U , } , { "" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode4" , 1U , 4U , } , { "" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode5" , 1U , 5U , } , { "" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode6" , 1U , 6U , } , { "" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode7" , 1U , 7U , } , { "" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode8" , 1U , 8U , } , { "" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode9" , 1U , 9U , } , { "" , 0U , 0 ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 10U , } , { "" , 0U
, 0 , "PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 11U , } , {
"" , 0U , 0 , "PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 12U
, } , { "" , 0U , 0 , "PowerElecCurriculumDesign/PNP Bipolar Transistor1" ,
1U , 13U , } } ; static NeVariableData s_variable_data [ 62 ] = { {
"Inductor.i_L" , 0U , 0 , "PowerElecCurriculumDesign/Inductor" , 1.0 , "1" ,
0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\346\204\237\347\224\265\346\265\201" , } , { "Capacitor.vc" ,
0U , 0 , "PowerElecCurriculumDesign/Capacitor" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Capacitor1.vc" , 0U , 0 , "PowerElecCurriculumDesign/Capacitor1" , 1.0 , "1"
, 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Inductor2.i_L" , 0U , 0 , "PowerElecCurriculumDesign/Inductor2" , 1.0 , "1"
, 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\346\204\237\347\224\265\346\265\201" , } , { "Capacitor2.vc" ,
0U , 0 , "PowerElecCurriculumDesign/Capacitor2" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"Capacitor3.vc" , 0U , 0 , "PowerElecCurriculumDesign/Capacitor3" , 1.0 , "1"
, 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Capacitor4.vc" , 0U , 0 , "PowerElecCurriculumDesign/Capacitor4" , 1.0 , "1"
, 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Diode1.private.Cjunction.vc" , 0U , 0 , "PowerElecCurriculumDesign/Diode1" ,
1.0 , "1" , 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Diode2.private.Cjunction.vc" , 0U , 0 , "PowerElecCurriculumDesign/Diode2" ,
1.0 , "1" , 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Diode.private.Cjunction.vc" , 0U , 0 , "PowerElecCurriculumDesign/Diode" ,
1.0 , "1" , 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Inductor1.i_L" , 0U , 0 , "PowerElecCurriculumDesign/Inductor1" , 1.0 , "1"
, 0.0 , TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\346\204\237\347\224\265\346\265\201" , } , {
"PNP_Bipolar_Transistor1.capacitor_bc.vc" , 0U , 0 ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1.0 , "1" , 0.0 , TRUE
, FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.capacitor_bc.vc" , 0U , 0 ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.capacitor_be.vc" , 0U , 0 ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1.0 , "1" , 0.0 , TRUE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.capacitor_be.vc" , 0U , 0 ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1.0 , "1" , 0.0 , TRUE
, FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Thyristor3.iak" , 0U , 0 , "PowerElecCurriculumDesign/Thyristor3" , 1.0 ,
"1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Current" , }
, { "Thyristor4.iak" , 0U , 0 , "PowerElecCurriculumDesign/Thyristor4" , 1.0
, "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Current" ,
} , { "AC_Voltage_Source.p.v" , 0U , 1 ,
"PowerElecCurriculumDesign/AC Voltage Source" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } ,
{ "IGBT.ice" , 0U , 0 , "PowerElecCurriculumDesign/IGBT" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Collector-emitter current" , } , { "Inductor.v" , 0U , 0 ,
"PowerElecCurriculumDesign/Inductor" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1
, "1x1" } , NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } , {
"Capacitor.n.v" , 0U , 1 , "PowerElecCurriculumDesign/Capacitor" , 1.0 , "1"
, 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\216\213" , } , { "Capacitor1.i" , 0U , 0 ,
"PowerElecCurriculumDesign/Capacitor1" , 1.0 , "1" , 0.0 , FALSE , FALSE , {
1 , "1x1" } , NE_INIT_MODE_NONE , "\347\224\265\346\265\201" , } , {
"Capacitor2.n.v" , 0U , 1 , "PowerElecCurriculumDesign/Capacitor2" , 1.0 ,
"1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\216\213" , } , { "Current_Sensor.n.v" , 0U , 1 ,
"PowerElecCurriculumDesign/Current Sensor" , 1.0 , "1" , 0.0 , FALSE , FALSE
, { 1 , "1x1" } , NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } , {
"Inductor2.v" , 0U , 0 , "PowerElecCurriculumDesign/Inductor2" , 1.0 , "1" ,
0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\216\213" , } , { "Capacitor3.p.v" , 0U , 1 ,
"PowerElecCurriculumDesign/Capacitor3" , 1.0 , "1" , 0.0 , FALSE , FALSE , {
1 , "1x1" } , NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } , {
"Diode1.private.i_res" , 0U , 0 , "PowerElecCurriculumDesign/Diode1" , 1.0 ,
"1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "i_res" , } ,
{ "Finite_Gain_Op_Amp1.n.v" , 0U , 1 ,
"PowerElecCurriculumDesign/Finite-Gain Op-Amp1" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } ,
{ "PNP_Bipolar_Transistor.collector_resistor.i" , 0U , 0 ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1.0 , "1" , 0.0 , FALSE
, FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "\347\224\265\346\265\201" , }
, { "Capacitor4.p.v" , 0U , 1 , "PowerElecCurriculumDesign/Capacitor4" , 1.0
, "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\216\213" , } , { "Diode2.private.i_res" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode2" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "i_res" , } , {
"PNP_Bipolar_Transistor1.collector_resistor.i" , 0U , 0 ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1.0 , "1" , 0.0 , FALSE
, FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "\347\224\265\346\265\201" , }
, { "Diode1.i_capacitor" , 0U , 0 , "PowerElecCurriculumDesign/Diode1" , 1.0
, "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Junction capacitance current" , } , { "Comparator.comparator1.J.v" , 0U , 1
, "PowerElecCurriculumDesign/Comparator" , 1.0 , "1" , 0.0 , FALSE , FALSE ,
{ 1 , "1x1" } , NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } , {
"Diode2.i_capacitor" , 0U , 0 , "PowerElecCurriculumDesign/Diode2" , 1.0 ,
"1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Junction capacitance current" , } , { "Comparator1.comparator1.J.v" , 0U , 1
, "PowerElecCurriculumDesign/Comparator1" , 1.0 , "1" , 0.0 , FALSE , FALSE ,
{ 1 , "1x1" } , NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } , {
"Diode3.private.Diode.v_diode" , 0U , 0 , "PowerElecCurriculumDesign/Diode3"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Intrinsic diode voltage" , } , { "Diode4.private.Diode.v_diode" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode4" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Intrinsic diode voltage" , } , {
"Potentiometer.iR" , 0U , 0 , "PowerElecCurriculumDesign/Potentiometer" , 1.0
, "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Current (R -> *)" , } , { "Diode.i_capacitor" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Junction capacitance current" , } , {
"Diode.private.Diode.threshold" , 0U , 0 , "PowerElecCurriculumDesign/Diode"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"threshold" , } , { "Diode3.private.Diode.BV_threshold" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode3" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "BV_threshold" , } , {
"Diode3.private.Diode.threshold" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode3" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "threshold" , } , {
"Diode4.private.Diode.BV_threshold" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode4" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "BV_threshold" , } , {
"Diode4.private.Diode.threshold" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode4" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "threshold" , } , { "Diode6.i_diode" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode6" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Intrinsic diode current" , } , { "IGBT1.ice" ,
0U , 0 , "PowerElecCurriculumDesign/IGBT1" , 1.0 , "1" , 0.0 , FALSE , FALSE
, { 1 , "1x1" } , NE_INIT_MODE_NONE , "Collector-emitter current" , } , {
"IGBT3.ice" , 0U , 0 , "PowerElecCurriculumDesign/IGBT3" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Collector-emitter current" , } , { "Diode5.private.Diode.threshold" , 0U , 0
, "PowerElecCurriculumDesign/Diode5" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1
, "1x1" } , NE_INIT_MODE_NONE , "threshold" , } , {
"Diode6.private.Diode.threshold" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode6" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "threshold" , } , { "IGBT2.ice" , 0U , 0 ,
"PowerElecCurriculumDesign/IGBT2" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Collector-emitter current" , } , {
"Diode7.private.Diode.threshold" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode7" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "threshold" , } , { "IGBT4.ice" , 0U , 0 ,
"PowerElecCurriculumDesign/IGBT4" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Collector-emitter current" , } , {
"Diode8.private.Diode.threshold" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode8" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "threshold" , } , { "Diode9.i_diode" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode9" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Intrinsic diode current" , } , {
"Diode9.private.Diode.threshold" , 0U , 0 ,
"PowerElecCurriculumDesign/Diode9" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "threshold" , } , { "Finite_Gain_Op_Amp1.out.v"
, 0U , 1 , "PowerElecCurriculumDesign/Finite-Gain Op-Amp1" , 1.0 , "1" , 0.0
, FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\216\213" , } , { "Finite_Gain_Op_Amp2.out.v" , 0U , 1 ,
"PowerElecCurriculumDesign/Finite-Gain Op-Amp2" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } ,
{ "PNP_Bipolar_Transistor.transistor.ic" , 0U , 0 ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1.0 , "1" , 0.0 , FALSE
, FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Collector current" , } , {
"PNP_Bipolar_Transistor.transistor.ib" , 0U , 0 ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1.0 , "1" , 0.0 , FALSE
, FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Base current" , } , {
"PNP_Bipolar_Transistor1.transistor.ic" , 0U , 0 ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1.0 , "1" , 0.0 , FALSE
, FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Collector current" , } , {
"PNP_Bipolar_Transistor1.transistor.ib" , 0U , 0 ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1.0 , "1" , 0.0 , FALSE
, FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Base current" , } } ; static
NeVariableData s_discrete_data [ 14 ] = { { "Capacitor2.faulted" , 0U , 0 ,
"PowerElecCurriculumDesign/Capacitor2" , 1.0 , "1" , 0.0 , FALSE , FALSE , {
1 , "1x1" } , NE_INIT_MODE_NONE ,
"Faulted/not-faulted flag for behavioral trigger" , } , { "Resistor.faulted"
, 0U , 0 , "PowerElecCurriculumDesign/Resistor" , 1.0 , "1" , 0.0 , FALSE ,
FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Fault flag" , } , {
"Resistor1.faulted" , 0U , 0 , "PowerElecCurriculumDesign/Resistor1" , 1.0 ,
"1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE , "Fault flag"
, } , { "Resistor2.faulted" , 0U , 0 , "PowerElecCurriculumDesign/Resistor2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Fault flag" , } , { "Resistor3.faulted" , 0U , 0 ,
"PowerElecCurriculumDesign/Resistor3" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1
, "1x1" } , NE_INIT_MODE_NONE , "Fault flag" , } , { "Resistor4.faulted" , 0U
, 0 , "PowerElecCurriculumDesign/Resistor4" , 1.0 , "1" , 0.0 , FALSE , FALSE
, { 1 , "1x1" } , NE_INIT_MODE_NONE , "Fault flag" , } , {
"Thyristor1.ideal_switch.state" , 0U , 0 ,
"PowerElecCurriculumDesign/Thyristor1" , 1.0 , "1" , 0.0 , FALSE , FALSE , {
1 , "1x1" } , NE_INIT_MODE_NONE , "Show modes (internal debugging purpose)" ,
} , { "Thyristor1.ideal_switch.zIh" , 0U , 0 ,
"PowerElecCurriculumDesign/Thyristor1" , 1.0 , "1" , 0.0 , FALSE , FALSE , {
1 , "1x1" } , NE_INIT_MODE_NONE , "Capture the current when i<=Ih" , } , {
"Thyristor2.ideal_switch.state" , 0U , 0 ,
"PowerElecCurriculumDesign/Thyristor2" , 1.0 , "1" , 0.0 , FALSE , FALSE , {
1 , "1x1" } , NE_INIT_MODE_NONE , "Show modes (internal debugging purpose)" ,
} , { "Thyristor2.ideal_switch.zIh" , 0U , 0 ,
"PowerElecCurriculumDesign/Thyristor2" , 1.0 , "1" , 0.0 , FALSE , FALSE , {
1 , "1x1" } , NE_INIT_MODE_NONE , "Capture the current when i<=Ih" , } , {
"Thyristor3.ideal_switch.state" , 0U , 0 ,
"PowerElecCurriculumDesign/Thyristor3" , 1.0 , "1" , 0.0 , FALSE , FALSE , {
1 , "1x1" } , NE_INIT_MODE_NONE , "Show modes (internal debugging purpose)" ,
} , { "Thyristor3.ideal_switch.zIh" , 0U , 0 ,
"PowerElecCurriculumDesign/Thyristor3" , 1.0 , "1" , 0.0 , FALSE , FALSE , {
1 , "1x1" } , NE_INIT_MODE_NONE , "Capture the current when i<=Ih" , } , {
"Thyristor4.ideal_switch.state" , 0U , 0 ,
"PowerElecCurriculumDesign/Thyristor4" , 1.0 , "1" , 0.0 , FALSE , FALSE , {
1 , "1x1" } , NE_INIT_MODE_NONE , "Show modes (internal debugging purpose)" ,
} , { "Thyristor4.ideal_switch.zIh" , 0U , 0 ,
"PowerElecCurriculumDesign/Thyristor4" , 1.0 , "1" , 0.0 , FALSE , FALSE , {
1 , "1x1" } , NE_INIT_MODE_NONE , "Capture the current when i<=Ih" , } } ;
static NeObservableData s_observable_data [ 751 ] = { { "AC_Voltage_Source.i"
, "PowerElecCurriculumDesign/AC Voltage Source" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"AC_Voltage_Source.n.v" , "PowerElecCurriculumDesign/AC Voltage Source" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "AC_Voltage_Source.p.v" ,
"PowerElecCurriculumDesign/AC Voltage Source" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"AC_Voltage_Source.v" , "PowerElecCurriculumDesign/AC Voltage Source" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Capacitor.i" ,
"PowerElecCurriculumDesign/Capacitor" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"Capacitor.n.v" , "PowerElecCurriculumDesign/Capacitor" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor.p.v" , "PowerElecCurriculumDesign/Capacitor" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor.v" , "PowerElecCurriculumDesign/Capacitor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor.vc" , "PowerElecCurriculumDesign/Capacitor" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Capacitor.power_dissipated" , "PowerElecCurriculumDesign/Capacitor" , { 1 ,
"1x1" } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Capacitor1.i" ,
"PowerElecCurriculumDesign/Capacitor1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"Capacitor1.n.v" , "PowerElecCurriculumDesign/Capacitor1" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor1.p.v" , "PowerElecCurriculumDesign/Capacitor1" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor1.v" , "PowerElecCurriculumDesign/Capacitor1" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor1.vc" , "PowerElecCurriculumDesign/Capacitor1" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE ,
TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Capacitor1.power_dissipated" , "PowerElecCurriculumDesign/Capacitor1" , { 1
, "1x1" } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Capacitor2.H.T" ,
"PowerElecCurriculumDesign/Capacitor2" , { 1 , "1x1" } , "K" , 1.0 , "K" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\346\270\251\345\272\246" , } , {
"Capacitor2.T" , "PowerElecCurriculumDesign/Capacitor2" , { 1 , "1x1" } , "K"
, 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature" , } , {
"Capacitor2.faultExtTrigger" , "PowerElecCurriculumDesign/Capacitor2" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"External fault trigger" , } , { "Capacitor2.faulted" ,
"PowerElecCurriculumDesign/Capacitor2" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Faulted/not-faulted flag for behavioral trigger" , } , { "Capacitor2.i" ,
"PowerElecCurriculumDesign/Capacitor2" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Capacitor2.n.v" ,
"PowerElecCurriculumDesign/Capacitor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor2.p.v" , "PowerElecCurriculumDesign/Capacitor2" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor2.v" , "PowerElecCurriculumDesign/Capacitor2" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Capacitor2.vc" ,
"PowerElecCurriculumDesign/Capacitor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Capacitor voltage" , } , {
"Capacitor2.power_dissipated" , "PowerElecCurriculumDesign/Capacitor2" , { 1
, "1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , }
, { "Capacitor3.i" , "PowerElecCurriculumDesign/Capacitor3" , { 1 , "1x1" } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"Capacitor3.n.v" , "PowerElecCurriculumDesign/Capacitor3" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor3.p.v" , "PowerElecCurriculumDesign/Capacitor3" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor3.v" , "PowerElecCurriculumDesign/Capacitor3" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor3.vc" , "PowerElecCurriculumDesign/Capacitor3" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE ,
TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Capacitor3.power_dissipated" , "PowerElecCurriculumDesign/Capacitor3" , { 1
, "1x1" } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Capacitor4.i" ,
"PowerElecCurriculumDesign/Capacitor4" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"Capacitor4.n.v" , "PowerElecCurriculumDesign/Capacitor4" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor4.p.v" , "PowerElecCurriculumDesign/Capacitor4" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor4.v" , "PowerElecCurriculumDesign/Capacitor4" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor4.vc" , "PowerElecCurriculumDesign/Capacitor4" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE ,
TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Capacitor4.power_dissipated" , "PowerElecCurriculumDesign/Capacitor4" , { 1
, "1x1" } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Comparator.J.v" ,
"PowerElecCurriculumDesign/Comparator" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Comparator.comparator1.A.v" , "PowerElecCurriculumDesign/Comparator" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Comparator.comparator1.B.v" ,
"PowerElecCurriculumDesign/Comparator" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Comparator.comparator1.J.v" , "PowerElecCurriculumDesign/Comparator" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Comparator.comparator1.iA" ,
"PowerElecCurriculumDesign/Comparator" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current into port A" , } , {
"Comparator.comparator1.iB" , "PowerElecCurriculumDesign/Comparator" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current into port B" ,
} , { "Comparator.comparator1.iJ" , "PowerElecCurriculumDesign/Comparator" ,
{ 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current into output port" , } , { "Comparator.n.v" ,
"PowerElecCurriculumDesign/Comparator" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Comparator.p.v" , "PowerElecCurriculumDesign/Comparator" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Comparator.rOUT.i" , "PowerElecCurriculumDesign/Comparator" , { 1 , "1x1" }
, "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , }
, { "Comparator.rOUT.n.v" , "PowerElecCurriculumDesign/Comparator" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Comparator.rOUT.p.v" ,
"PowerElecCurriculumDesign/Comparator" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Comparator.rOUT.v" , "PowerElecCurriculumDesign/Comparator" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "Comparator.rOUT.power_dissipated" ,
"PowerElecCurriculumDesign/Comparator" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 ,
"A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Comparator1.J.v"
, "PowerElecCurriculumDesign/Comparator1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Comparator1.comparator1.A.v" , "PowerElecCurriculumDesign/Comparator1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Comparator1.comparator1.B.v" ,
"PowerElecCurriculumDesign/Comparator1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Comparator1.comparator1.J.v" , "PowerElecCurriculumDesign/Comparator1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Comparator1.comparator1.iA" ,
"PowerElecCurriculumDesign/Comparator1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current into port A" , } , {
"Comparator1.comparator1.iB" , "PowerElecCurriculumDesign/Comparator1" , { 1
, "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current into port B" ,
} , { "Comparator1.comparator1.iJ" , "PowerElecCurriculumDesign/Comparator1"
, { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current into output port" , } , { "Comparator1.n.v" ,
"PowerElecCurriculumDesign/Comparator1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Comparator1.p.v" , "PowerElecCurriculumDesign/Comparator1" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Comparator1.rOUT.i" , "PowerElecCurriculumDesign/Comparator1" , { 1 , "1x1"
} , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , }
, { "Comparator1.rOUT.n.v" , "PowerElecCurriculumDesign/Comparator1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Comparator1.rOUT.p.v" ,
"PowerElecCurriculumDesign/Comparator1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Comparator1.rOUT.v" , "PowerElecCurriculumDesign/Comparator1" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "Comparator1.rOUT.power_dissipated" ,
"PowerElecCurriculumDesign/Comparator1" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 ,
"A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Current_Sensor.I"
, "PowerElecCurriculumDesign/Current Sensor" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , { "Current_Sensor.i1" ,
"PowerElecCurriculumDesign/Current Sensor" , { 1 , "1x1" } , "A" , 1.0 , "A"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"Current_Sensor.n.v" , "PowerElecCurriculumDesign/Current Sensor" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Current_Sensor.p.v" ,
"PowerElecCurriculumDesign/Current Sensor" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Current_Sensor_I0" , "PowerElecCurriculumDesign/PS-Simulink\nConverter4" , {
1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Current_Sensor_I0" ,
} , { "DC_Voltage_Source.i" , "PowerElecCurriculumDesign/DC Voltage Source" ,
{ 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "DC_Voltage_Source.n.v" ,
"PowerElecCurriculumDesign/DC Voltage Source" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"DC_Voltage_Source.p.v" , "PowerElecCurriculumDesign/DC Voltage Source" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "DC_Voltage_Source.v" ,
"PowerElecCurriculumDesign/DC Voltage Source" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode.private.Cjunction.i" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1"
} , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\346\265\201" , }
, { "Diode.private.Cjunction.n.v" , "PowerElecCurriculumDesign/Diode" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\216\213" , } , { "Diode.private.Cjunction.p.v" ,
"PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode.private.Cjunction.v" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode.private.Cjunction.vc" , "PowerElecCurriculumDesign/Diode" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , TRUE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Diode.private.Diode.BV_threshold" , "PowerElecCurriculumDesign/Diode" , { 1
, "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } , {
"Diode.private.Diode.Qscale" , "PowerElecCurriculumDesign/Diode" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Diode.private.Diode.faulted" , "PowerElecCurriculumDesign/Diode" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Diode.private.Diode.i_diode" , "PowerElecCurriculumDesign/Diode" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , { "Diode.private.Diode.n.v" ,
"PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode.private.Diode.p.v" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode.private.Diode.threshold" , "PowerElecCurriculumDesign/Diode" , { 1
, "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Diode.private.Diode.timerFaultTransition" ,
"PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "s" , 1.0 , "s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , { "Diode.private.Diode.v_diode"
, "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Diode.n.v" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode.Qj" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "C" , 1.0 ,
"C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Diode.TJ" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Diode.Tsim" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "K" , 1.0
, "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Diode.fault_input" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "1"
, 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Diode.faulted" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Diode.i" ,
"PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Diode.i_capacitor" ,
"PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Diode.i_diode" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Diode.i_out" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Diode.ni.v" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode.p.v" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode.power_dissipated" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" }
, "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Diode.v" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Diode.v_capacitor" ,
"PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Diode.v_diode" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Diode.v_on" , "PowerElecCurriculumDesign/Diode" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Diode1.private.Cjunction.i" , "PowerElecCurriculumDesign/Diode1" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\346\265\201" , } , { "Diode1.private.Cjunction.n.v" ,
"PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode1.private.Cjunction.p.v" , "PowerElecCurriculumDesign/Diode1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\216\213" , } , { "Diode1.private.Cjunction.v" ,
"PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode1.private.Cjunction.vc" , "PowerElecCurriculumDesign/Diode1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , TRUE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Diode1.private.Diode.Qscale" , "PowerElecCurriculumDesign/Diode1" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Diode1.private.Diode.Tsim" , "PowerElecCurriculumDesign/Diode1" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Diode1.private.Diode.faulted" , "PowerElecCurriculumDesign/Diode1" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Diode1.private.Diode.i_diode" , "PowerElecCurriculumDesign/Diode1" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , { "Diode1.private.Diode.n.v" ,
"PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode1.private.Diode.p.v" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode1.private.Diode.timerFaultTransition" ,
"PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "s" , 1.0 , "s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Diode1.private.Diode.v_diode" , "PowerElecCurriculumDesign/Diode1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , { "Diode1.n.v" ,
"PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode1.Qj" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Diode1.TJ" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Diode1.Tsim" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Diode1.fault_input" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Diode1.faulted" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Diode1.i" ,
"PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Diode1.i_capacitor"
, "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Diode1.i_diode" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Diode1.i_out" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Diode1.private.i_res" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i_res" , } , { "Diode1.ni.v" ,
"PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode1.private.ohmicResistance.i" , "PowerElecCurriculumDesign/Diode1" , { 1
, "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\346\265\201" , } , { "Diode1.private.ohmicResistance.n.v" ,
"PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode1.private.ohmicResistance.p.v" , "PowerElecCurriculumDesign/Diode1" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\216\213" , } , { "Diode1.private.ohmicResistance.v" ,
"PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode1.p.v" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode1.private.pi.v" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode1.power_dissipated" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1"
} , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Diode1.v" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Diode1.v_capacitor"
, "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Diode1.v_diode" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Diode1.v_on" , "PowerElecCurriculumDesign/Diode1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Diode2.private.Cjunction.i" , "PowerElecCurriculumDesign/Diode2" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\346\265\201" , } , { "Diode2.private.Cjunction.n.v" ,
"PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode2.private.Cjunction.p.v" , "PowerElecCurriculumDesign/Diode2" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\216\213" , } , { "Diode2.private.Cjunction.v" ,
"PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode2.private.Cjunction.vc" , "PowerElecCurriculumDesign/Diode2" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , TRUE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Diode2.private.Diode.Qscale" , "PowerElecCurriculumDesign/Diode2" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Diode2.private.Diode.Tsim" , "PowerElecCurriculumDesign/Diode2" , { 1 ,
"1x1" } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Diode2.private.Diode.faulted" , "PowerElecCurriculumDesign/Diode2" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Diode2.private.Diode.i_diode" , "PowerElecCurriculumDesign/Diode2" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , { "Diode2.private.Diode.n.v" ,
"PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode2.private.Diode.p.v" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode2.private.Diode.timerFaultTransition" ,
"PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "s" , 1.0 , "s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Diode2.private.Diode.v_diode" , "PowerElecCurriculumDesign/Diode2" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , { "Diode2.n.v" ,
"PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode2.Qj" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Diode2.TJ" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Diode2.Tsim" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Diode2.fault_input" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Diode2.faulted" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Diode2.i" ,
"PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Diode2.i_capacitor"
, "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Diode2.i_diode" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Diode2.i_out" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Diode2.private.i_res" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "i_res" , } , { "Diode2.ni.v" ,
"PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode2.private.ohmicResistance.i" , "PowerElecCurriculumDesign/Diode2" , { 1
, "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\346\265\201" , } , { "Diode2.private.ohmicResistance.n.v" ,
"PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode2.private.ohmicResistance.p.v" , "PowerElecCurriculumDesign/Diode2" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\216\213" , } , { "Diode2.private.ohmicResistance.v" ,
"PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode2.p.v" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode2.private.pi.v" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode2.power_dissipated" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1"
} , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Diode2.v" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Diode2.v_capacitor"
, "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Diode2.v_diode" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Diode2.v_on" , "PowerElecCurriculumDesign/Diode2" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Diode3.private.Diode.BV_threshold" , "PowerElecCurriculumDesign/Diode3" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } ,
{ "Diode3.private.Diode.Qscale" , "PowerElecCurriculumDesign/Diode3" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Diode3.private.Diode.faulted" , "PowerElecCurriculumDesign/Diode3" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Diode3.private.Diode.i_diode" , "PowerElecCurriculumDesign/Diode3" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , { "Diode3.private.Diode.n.v" ,
"PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode3.private.Diode.p.v" , "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode3.private.Diode.threshold" , "PowerElecCurriculumDesign/Diode3" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Diode3.private.Diode.timerFaultTransition" ,
"PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "s" , 1.0 , "s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Diode3.private.Diode.v_diode" , "PowerElecCurriculumDesign/Diode3" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , { "Diode3.n.v" ,
"PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode3.Qj" , "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Diode3.TJ" , "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Diode3.Tsim" , "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Diode3.fault_input" , "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Diode3.faulted" , "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Diode3.i" ,
"PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Diode3.i_capacitor"
, "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Diode3.i_diode" , "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Diode3.i_out" , "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Diode3.ni.v" , "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode3.p.v" , "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode3.power_dissipated" , "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1"
} , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Diode3.v" , "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Diode3.v_capacitor"
, "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Diode3.v_diode" , "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Diode3.v_on" , "PowerElecCurriculumDesign/Diode3" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Diode4.private.Diode.BV_threshold" , "PowerElecCurriculumDesign/Diode4" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } ,
{ "Diode4.private.Diode.Qscale" , "PowerElecCurriculumDesign/Diode4" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Diode4.private.Diode.faulted" , "PowerElecCurriculumDesign/Diode4" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Diode4.private.Diode.i_diode" , "PowerElecCurriculumDesign/Diode4" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , { "Diode4.private.Diode.n.v" ,
"PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode4.private.Diode.p.v" , "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode4.private.Diode.threshold" , "PowerElecCurriculumDesign/Diode4" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Diode4.private.Diode.timerFaultTransition" ,
"PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "s" , 1.0 , "s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Diode4.private.Diode.v_diode" , "PowerElecCurriculumDesign/Diode4" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , { "Diode4.n.v" ,
"PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode4.Qj" , "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Diode4.TJ" , "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Diode4.Tsim" , "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Diode4.fault_input" , "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Diode4.faulted" , "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Diode4.i" ,
"PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Diode4.i_capacitor"
, "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Diode4.i_diode" , "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Diode4.i_out" , "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Diode4.ni.v" , "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode4.p.v" , "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode4.power_dissipated" , "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1"
} , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Diode4.v" , "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Diode4.v_capacitor"
, "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Diode4.v_diode" , "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Diode4.v_on" , "PowerElecCurriculumDesign/Diode4" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Diode5.private.Diode.BV_threshold" , "PowerElecCurriculumDesign/Diode5" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } ,
{ "Diode5.private.Diode.Qscale" , "PowerElecCurriculumDesign/Diode5" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Diode5.private.Diode.faulted" , "PowerElecCurriculumDesign/Diode5" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Diode5.private.Diode.i_diode" , "PowerElecCurriculumDesign/Diode5" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , { "Diode5.private.Diode.n.v" ,
"PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode5.private.Diode.p.v" , "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode5.private.Diode.threshold" , "PowerElecCurriculumDesign/Diode5" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Diode5.private.Diode.timerFaultTransition" ,
"PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "s" , 1.0 , "s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Diode5.private.Diode.v_diode" , "PowerElecCurriculumDesign/Diode5" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , { "Diode5.n.v" ,
"PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode5.Qj" , "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Diode5.TJ" , "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Diode5.Tsim" , "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Diode5.fault_input" , "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Diode5.faulted" , "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Diode5.i" ,
"PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Diode5.i_capacitor"
, "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Diode5.i_diode" , "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Diode5.i_out" , "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Diode5.ni.v" , "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode5.p.v" , "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode5.power_dissipated" , "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1"
} , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Diode5.v" , "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Diode5.v_capacitor"
, "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Diode5.v_diode" , "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Diode5.v_on" , "PowerElecCurriculumDesign/Diode5" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Diode6.private.Diode.BV_threshold" , "PowerElecCurriculumDesign/Diode6" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } ,
{ "Diode6.private.Diode.Qscale" , "PowerElecCurriculumDesign/Diode6" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Diode6.private.Diode.faulted" , "PowerElecCurriculumDesign/Diode6" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Diode6.private.Diode.i_diode" , "PowerElecCurriculumDesign/Diode6" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , { "Diode6.private.Diode.n.v" ,
"PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode6.private.Diode.p.v" , "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode6.private.Diode.threshold" , "PowerElecCurriculumDesign/Diode6" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Diode6.private.Diode.timerFaultTransition" ,
"PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "s" , 1.0 , "s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Diode6.private.Diode.v_diode" , "PowerElecCurriculumDesign/Diode6" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , { "Diode6.n.v" ,
"PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode6.Qj" , "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Diode6.TJ" , "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Diode6.Tsim" , "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Diode6.fault_input" , "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Diode6.faulted" , "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Diode6.i" ,
"PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Diode6.i_capacitor"
, "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Diode6.i_diode" , "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Diode6.i_out" , "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Diode6.ni.v" , "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode6.p.v" , "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode6.power_dissipated" , "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1"
} , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Diode6.v" , "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Diode6.v_capacitor"
, "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Diode6.v_diode" , "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Diode6.v_on" , "PowerElecCurriculumDesign/Diode6" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Diode7.private.Diode.BV_threshold" , "PowerElecCurriculumDesign/Diode7" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } ,
{ "Diode7.private.Diode.Qscale" , "PowerElecCurriculumDesign/Diode7" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Diode7.private.Diode.faulted" , "PowerElecCurriculumDesign/Diode7" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Diode7.private.Diode.i_diode" , "PowerElecCurriculumDesign/Diode7" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , { "Diode7.private.Diode.n.v" ,
"PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode7.private.Diode.p.v" , "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode7.private.Diode.threshold" , "PowerElecCurriculumDesign/Diode7" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Diode7.private.Diode.timerFaultTransition" ,
"PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "s" , 1.0 , "s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Diode7.private.Diode.v_diode" , "PowerElecCurriculumDesign/Diode7" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , { "Diode7.n.v" ,
"PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode7.Qj" , "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Diode7.TJ" , "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Diode7.Tsim" , "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Diode7.fault_input" , "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Diode7.faulted" , "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Diode7.i" ,
"PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Diode7.i_capacitor"
, "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Diode7.i_diode" , "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Diode7.i_out" , "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Diode7.ni.v" , "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode7.p.v" , "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode7.power_dissipated" , "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1"
} , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Diode7.v" , "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Diode7.v_capacitor"
, "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Diode7.v_diode" , "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Diode7.v_on" , "PowerElecCurriculumDesign/Diode7" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Diode8.private.Diode.BV_threshold" , "PowerElecCurriculumDesign/Diode8" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } ,
{ "Diode8.private.Diode.Qscale" , "PowerElecCurriculumDesign/Diode8" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Diode8.private.Diode.faulted" , "PowerElecCurriculumDesign/Diode8" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Diode8.private.Diode.i_diode" , "PowerElecCurriculumDesign/Diode8" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , { "Diode8.private.Diode.n.v" ,
"PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode8.private.Diode.p.v" , "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode8.private.Diode.threshold" , "PowerElecCurriculumDesign/Diode8" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Diode8.private.Diode.timerFaultTransition" ,
"PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "s" , 1.0 , "s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Diode8.private.Diode.v_diode" , "PowerElecCurriculumDesign/Diode8" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , { "Diode8.n.v" ,
"PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode8.Qj" , "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Diode8.TJ" , "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Diode8.Tsim" , "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Diode8.fault_input" , "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Diode8.faulted" , "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Diode8.i" ,
"PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Diode8.i_capacitor"
, "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Diode8.i_diode" , "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Diode8.i_out" , "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Diode8.ni.v" , "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode8.p.v" , "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode8.power_dissipated" , "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1"
} , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Diode8.v" , "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Diode8.v_capacitor"
, "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Diode8.v_diode" , "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Diode8.v_on" , "PowerElecCurriculumDesign/Diode8" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Diode9.private.Diode.BV_threshold" , "PowerElecCurriculumDesign/Diode9" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "BV_threshold" , } ,
{ "Diode9.private.Diode.Qscale" , "PowerElecCurriculumDesign/Diode9" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge scale" , } , {
"Diode9.private.Diode.faulted" , "PowerElecCurriculumDesign/Diode9" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , {
"Diode9.private.Diode.i_diode" , "PowerElecCurriculumDesign/Diode9" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode current" , } , { "Diode9.private.Diode.n.v" ,
"PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode9.private.Diode.p.v" , "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode9.private.Diode.threshold" , "PowerElecCurriculumDesign/Diode9" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "threshold" , } , {
"Diode9.private.Diode.timerFaultTransition" ,
"PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "s" , 1.0 , "s" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Time since triggering fault condition" , } , {
"Diode9.private.Diode.v_diode" , "PowerElecCurriculumDesign/Diode9" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Intrinsic diode voltage" , } , { "Diode9.n.v" ,
"PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode9.Qj" , "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "C" , 1.0
, "C" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Charge of junction capacitance" , } ,
{ "Diode9.TJ" , "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Junction temperature" , } , {
"Diode9.Tsim" , "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "K" ,
1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Simulation temperature on the IV characteristics" , } , {
"Diode9.fault_input" , "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } ,
"1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE ,
FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Input fault trigger" , } , {
"Diode9.faulted" , "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Diode9.i" ,
"PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , { "Diode9.i_capacitor"
, "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance current" , } , {
"Diode9.i_diode" , "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode current" , } , {
"Diode9.i_out" , "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Diode current output" , } , {
"Diode9.ni.v" , "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode9.p.v" , "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode9.power_dissipated" , "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1"
} , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "power_dissipated" , } , {
"Diode9.v" , "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Diode9.v_capacitor"
, "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Junction capacitance voltage" , } , {
"Diode9.v_diode" , "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Intrinsic diode voltage" , } , {
"Diode9.v_on" , "PowerElecCurriculumDesign/Diode9" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE , "v_on" , } , {
"Electrical_Reference1.V.v" ,
"PowerElecCurriculumDesign/Electrical Reference1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Electrical_Reference2.V.v" ,
"PowerElecCurriculumDesign/Electrical Reference2" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Electrical_Reference3.V.v" ,
"PowerElecCurriculumDesign/Electrical Reference3" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Electrical_Reference4.V.v" ,
"PowerElecCurriculumDesign/Electrical Reference4" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Electrical_Reference5.V.v" ,
"PowerElecCurriculumDesign/Electrical Reference5" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Electrical_Reference6.V.v" ,
"PowerElecCurriculumDesign/Electrical Reference6" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Finite_Gain_Op_Amp1.i1" , "PowerElecCurriculumDesign/Finite-Gain Op-Amp1" ,
{ 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Input current" , } ,
{ "Finite_Gain_Op_Amp1.i2" , "PowerElecCurriculumDesign/Finite-Gain Op-Amp1"
, { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current into output node" , } , { "Finite_Gain_Op_Amp1.n.v" ,
"PowerElecCurriculumDesign/Finite-Gain Op-Amp1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Finite_Gain_Op_Amp1.out.v" , "PowerElecCurriculumDesign/Finite-Gain Op-Amp1"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Finite_Gain_Op_Amp1.p.v" ,
"PowerElecCurriculumDesign/Finite-Gain Op-Amp1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Finite_Gain_Op_Amp1.v1" , "PowerElecCurriculumDesign/Finite-Gain Op-Amp1" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage across the input" , } , { "Finite_Gain_Op_Amp2.i1" ,
"PowerElecCurriculumDesign/Finite-Gain Op-Amp2" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Input current" , } , {
"Finite_Gain_Op_Amp2.i2" , "PowerElecCurriculumDesign/Finite-Gain Op-Amp2" ,
{ 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current into output node" , } , { "Finite_Gain_Op_Amp2.n.v" ,
"PowerElecCurriculumDesign/Finite-Gain Op-Amp2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Finite_Gain_Op_Amp2.out.v" , "PowerElecCurriculumDesign/Finite-Gain Op-Amp2"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Finite_Gain_Op_Amp2.p.v" ,
"PowerElecCurriculumDesign/Finite-Gain Op-Amp2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Finite_Gain_Op_Amp2.v1" , "PowerElecCurriculumDesign/Finite-Gain Op-Amp2" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage across the input" , } , { "IGBT.C.v" ,
"PowerElecCurriculumDesign/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT.E.v" , "PowerElecCurriculumDesign/IGBT" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT.G" , "PowerElecCurriculumDesign/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , { "IGBT.G_elec.v" ,
"PowerElecCurriculumDesign/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT.ice" , "PowerElecCurriculumDesign/IGBT" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter current" , } , {
"IGBT.ideal_switch.G" , "PowerElecCurriculumDesign/IGBT" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , { "IGBT.ideal_switch.i" ,
"PowerElecCurriculumDesign/IGBT" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , { "IGBT.ideal_switch.isOn" ,
"PowerElecCurriculumDesign/IGBT" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "isOn" , } , { "IGBT.ideal_switch.n.v"
, "PowerElecCurriculumDesign/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT.ideal_switch.p.v" , "PowerElecCurriculumDesign/IGBT" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT.ideal_switch.power_dissipated" , "PowerElecCurriculumDesign/IGBT" , { 1
, "1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , }
, { "IGBT.ideal_switch.v" , "PowerElecCurriculumDesign/IGBT" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "IGBT.vT" ,
"PowerElecCurriculumDesign/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , { "IGBT.vce" ,
"PowerElecCurriculumDesign/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter voltage" , } , {
"IGBT.vge" , "PowerElecCurriculumDesign/IGBT" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-emitter voltage" , } , {
"IGBT1.C.v" , "PowerElecCurriculumDesign/IGBT1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT1.E.v" , "PowerElecCurriculumDesign/IGBT1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT1.G" , "PowerElecCurriculumDesign/IGBT1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , { "IGBT1.G_elec.v" ,
"PowerElecCurriculumDesign/IGBT1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT1.ice" , "PowerElecCurriculumDesign/IGBT1" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter current" , } , {
"IGBT1.ideal_switch.G" , "PowerElecCurriculumDesign/IGBT1" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , { "IGBT1.ideal_switch.i" ,
"PowerElecCurriculumDesign/IGBT1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , { "IGBT1.ideal_switch.isOn" ,
"PowerElecCurriculumDesign/IGBT1" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "isOn" , } , { "IGBT1.ideal_switch.n.v"
, "PowerElecCurriculumDesign/IGBT1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT1.ideal_switch.p.v" , "PowerElecCurriculumDesign/IGBT1" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "IGBT1.ideal_switch.power_dissipated" , "PowerElecCurriculumDesign/IGBT1"
, { 1 , "1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , { "IGBT1.ideal_switch.v" ,
"PowerElecCurriculumDesign/IGBT1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "IGBT1.vT" ,
"PowerElecCurriculumDesign/IGBT1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , { "IGBT1.vce" ,
"PowerElecCurriculumDesign/IGBT1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter voltage" , } , {
"IGBT1.vge" , "PowerElecCurriculumDesign/IGBT1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-emitter voltage" , } , {
"IGBT2.C.v" , "PowerElecCurriculumDesign/IGBT2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT2.E.v" , "PowerElecCurriculumDesign/IGBT2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT2.G" , "PowerElecCurriculumDesign/IGBT2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , { "IGBT2.G_elec.v" ,
"PowerElecCurriculumDesign/IGBT2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT2.ice" , "PowerElecCurriculumDesign/IGBT2" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter current" , } , {
"IGBT2.ideal_switch.G" , "PowerElecCurriculumDesign/IGBT2" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , { "IGBT2.ideal_switch.i" ,
"PowerElecCurriculumDesign/IGBT2" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , { "IGBT2.ideal_switch.isOn" ,
"PowerElecCurriculumDesign/IGBT2" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "isOn" , } , { "IGBT2.ideal_switch.n.v"
, "PowerElecCurriculumDesign/IGBT2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT2.ideal_switch.p.v" , "PowerElecCurriculumDesign/IGBT2" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "IGBT2.ideal_switch.power_dissipated" , "PowerElecCurriculumDesign/IGBT2"
, { 1 , "1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , { "IGBT2.ideal_switch.v" ,
"PowerElecCurriculumDesign/IGBT2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "IGBT2.vT" ,
"PowerElecCurriculumDesign/IGBT2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , { "IGBT2.vce" ,
"PowerElecCurriculumDesign/IGBT2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter voltage" , } , {
"IGBT2.vge" , "PowerElecCurriculumDesign/IGBT2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-emitter voltage" , } , {
"IGBT3.C.v" , "PowerElecCurriculumDesign/IGBT3" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT3.E.v" , "PowerElecCurriculumDesign/IGBT3" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT3.G" , "PowerElecCurriculumDesign/IGBT3" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , { "IGBT3.G_elec.v" ,
"PowerElecCurriculumDesign/IGBT3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT3.ice" , "PowerElecCurriculumDesign/IGBT3" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter current" , } , {
"IGBT3.ideal_switch.G" , "PowerElecCurriculumDesign/IGBT3" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , { "IGBT3.ideal_switch.i" ,
"PowerElecCurriculumDesign/IGBT3" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , { "IGBT3.ideal_switch.isOn" ,
"PowerElecCurriculumDesign/IGBT3" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "isOn" , } , { "IGBT3.ideal_switch.n.v"
, "PowerElecCurriculumDesign/IGBT3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT3.ideal_switch.p.v" , "PowerElecCurriculumDesign/IGBT3" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "IGBT3.ideal_switch.power_dissipated" , "PowerElecCurriculumDesign/IGBT3"
, { 1 , "1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , { "IGBT3.ideal_switch.v" ,
"PowerElecCurriculumDesign/IGBT3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "IGBT3.vT" ,
"PowerElecCurriculumDesign/IGBT3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , { "IGBT3.vce" ,
"PowerElecCurriculumDesign/IGBT3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter voltage" , } , {
"IGBT3.vge" , "PowerElecCurriculumDesign/IGBT3" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-emitter voltage" , } , {
"IGBT4.C.v" , "PowerElecCurriculumDesign/IGBT4" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT4.E.v" , "PowerElecCurriculumDesign/IGBT4" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT4.G" , "PowerElecCurriculumDesign/IGBT4" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , { "IGBT4.G_elec.v" ,
"PowerElecCurriculumDesign/IGBT4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT4.ice" , "PowerElecCurriculumDesign/IGBT4" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter current" , } , {
"IGBT4.ideal_switch.G" , "PowerElecCurriculumDesign/IGBT4" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , { "IGBT4.ideal_switch.i" ,
"PowerElecCurriculumDesign/IGBT4" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , { "IGBT4.ideal_switch.isOn" ,
"PowerElecCurriculumDesign/IGBT4" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "isOn" , } , { "IGBT4.ideal_switch.n.v"
, "PowerElecCurriculumDesign/IGBT4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT4.ideal_switch.p.v" , "PowerElecCurriculumDesign/IGBT4" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "IGBT4.ideal_switch.power_dissipated" , "PowerElecCurriculumDesign/IGBT4"
, { 1 , "1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , { "IGBT4.ideal_switch.v" ,
"PowerElecCurriculumDesign/IGBT4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "IGBT4.vT" ,
"PowerElecCurriculumDesign/IGBT4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , { "IGBT4.vce" ,
"PowerElecCurriculumDesign/IGBT4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter voltage" , } , {
"IGBT4.vge" , "PowerElecCurriculumDesign/IGBT4" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-emitter voltage" , } , {
"Ideal_Transformer1.i1" , "PowerElecCurriculumDesign/Ideal Transformer1" , {
1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\345\210\235\347\272\247\347\224\265\346\265\201" , } , {
"Ideal_Transformer1.i2" , "PowerElecCurriculumDesign/Ideal Transformer1" , {
1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\346\254\241\347\272\247\347\224\265\346\265\201" , } , {
"Ideal_Transformer1.n1.v" , "PowerElecCurriculumDesign/Ideal Transformer1" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Ideal_Transformer1.n2.v" ,
"PowerElecCurriculumDesign/Ideal Transformer1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Ideal_Transformer1.p1.v" , "PowerElecCurriculumDesign/Ideal Transformer1" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Ideal_Transformer1.p2.v" ,
"PowerElecCurriculumDesign/Ideal Transformer1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Ideal_Transformer1.v1" , "PowerElecCurriculumDesign/Ideal Transformer1" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\345\210\235\347\272\247\347\224\265\345\216\213" , } , {
"Ideal_Transformer1.v2" , "PowerElecCurriculumDesign/Ideal Transformer1" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\346\254\241\347\272\247\347\224\265\345\216\213" , } , { "Inductor.i" ,
"PowerElecCurriculumDesign/Inductor" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"Inductor.n.v" , "PowerElecCurriculumDesign/Inductor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Inductor.p.v" , "PowerElecCurriculumDesign/Inductor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Inductor.v" , "PowerElecCurriculumDesign/Inductor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Inductor.i_L" , "PowerElecCurriculumDesign/Inductor" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\204\237\347\224\265\346\265\201" , } , {
"Inductor.power_dissipated" , "PowerElecCurriculumDesign/Inductor" , { 1 ,
"1x1" } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Inductor1.i" ,
"PowerElecCurriculumDesign/Inductor1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"Inductor1.n.v" , "PowerElecCurriculumDesign/Inductor1" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Inductor1.p.v" , "PowerElecCurriculumDesign/Inductor1" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Inductor1.v" , "PowerElecCurriculumDesign/Inductor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Inductor1.i_L" , "PowerElecCurriculumDesign/Inductor1" , { 1 , "1x1" } , "A"
, 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\204\237\347\224\265\346\265\201" , } , {
"Inductor1.power_dissipated" , "PowerElecCurriculumDesign/Inductor1" , { 1 ,
"1x1" } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Inductor2.i" ,
"PowerElecCurriculumDesign/Inductor2" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"Inductor2.n.v" , "PowerElecCurriculumDesign/Inductor2" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Inductor2.p.v" , "PowerElecCurriculumDesign/Inductor2" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Inductor2.v" , "PowerElecCurriculumDesign/Inductor2" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Inductor2.i_L" , "PowerElecCurriculumDesign/Inductor2" , { 1 , "1x1" } , "A"
, 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\204\237\347\224\265\346\265\201" , } , {
"Inductor2.power_dissipated" , "PowerElecCurriculumDesign/Inductor2" , { 1 ,
"1x1" } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"PNP_Bipolar_Transistor.B.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.n.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.p.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.Qbc" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "C" ,
1.0 , "uC" , NE_NOMINAL_SOURCE_BLOCK , NE_INIT_MODE_MANDATORY , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Base-collector charge" , } , {
"PNP_Bipolar_Transistor.Qbe" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "C" ,
1.0 , "uC" , NE_NOMINAL_SOURCE_BLOCK , NE_INIT_MODE_MANDATORY , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Base-emitter charge" , } , {
"PNP_Bipolar_Transistor.base_resistor.i" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"PNP_Bipolar_Transistor.base_resistor.n.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.base_resistor.p.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.base_resistor.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.base_resistor.power_dissipated" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } ,
"A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"PNP_Bipolar_Transistor.capacitor_bc.i" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"PNP_Bipolar_Transistor.capacitor_bc.n.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.capacitor_bc.p.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.capacitor_bc.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.capacitor_bc.vc" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.capacitor_bc.power_dissipated" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "kW" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"PNP_Bipolar_Transistor.capacitor_be.i" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"PNP_Bipolar_Transistor.capacitor_be.n.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.capacitor_be.p.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.capacitor_be.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.capacitor_be.vc" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.capacitor_be.power_dissipated" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "kW" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"PNP_Bipolar_Transistor.collector_resistor.i" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"PNP_Bipolar_Transistor.collector_resistor.n.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.collector_resistor.p.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.collector_resistor.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.collector_resistor.power_dissipated" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } ,
"A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"PNP_Bipolar_Transistor.emitter_resistor.i" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"PNP_Bipolar_Transistor.emitter_resistor.n.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.emitter_resistor.p.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.emitter_resistor.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.emitter_resistor.power_dissipated" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } ,
"A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"PNP_Bipolar_Transistor.ib" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Base current" , } , {
"PNP_Bipolar_Transistor.ic" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector current" , } , {
"PNP_Bipolar_Transistor.transistor.B.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.transistor.Icc" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Icc" , } , {
"PNP_Bipolar_Transistor.transistor.Iec" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Iec" , } , {
"PNP_Bipolar_Transistor.transistor.ib" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Base current" , } , {
"PNP_Bipolar_Transistor.transistor.ic" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector current" , } , {
"PNP_Bipolar_Transistor.transistor.ie" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Emitter current" , } , {
"PNP_Bipolar_Transistor.transistor.n.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.transistor.p.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor.transistor.power_dissipated" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"PNP_Bipolar_Transistor.transistor.vbc" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Base-collector voltage" , } , {
"PNP_Bipolar_Transistor.transistor.vbe" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Base-emitter voltage" , } , {
"PNP_Bipolar_Transistor.vbe" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Base-emitter voltage" , } , {
"PNP_Bipolar_Transistor.vce" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter voltage" , } , {
"PNP_Bipolar_Transistor1.B.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.n.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.p.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.Qbc" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "C" ,
1.0 , "uC" , NE_NOMINAL_SOURCE_BLOCK , NE_INIT_MODE_MANDATORY , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Base-collector charge" , } , {
"PNP_Bipolar_Transistor1.Qbe" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "C" ,
1.0 , "uC" , NE_NOMINAL_SOURCE_BLOCK , NE_INIT_MODE_MANDATORY , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Base-emitter charge" , } , {
"PNP_Bipolar_Transistor1.base_resistor.i" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"PNP_Bipolar_Transistor1.base_resistor.n.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.base_resistor.p.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.base_resistor.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.base_resistor.power_dissipated" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } ,
"A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"PNP_Bipolar_Transistor1.capacitor_bc.i" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"PNP_Bipolar_Transistor1.capacitor_bc.n.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.capacitor_bc.p.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.capacitor_bc.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.capacitor_bc.vc" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.capacitor_bc.power_dissipated" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "kW" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"PNP_Bipolar_Transistor1.capacitor_be.i" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"PNP_Bipolar_Transistor1.capacitor_be.n.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.capacitor_be.p.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.capacitor_be.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.capacitor_be.vc" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.capacitor_be.power_dissipated" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "kW" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"PNP_Bipolar_Transistor1.collector_resistor.i" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"PNP_Bipolar_Transistor1.collector_resistor.n.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.collector_resistor.p.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.collector_resistor.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.collector_resistor.power_dissipated" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } ,
"A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"PNP_Bipolar_Transistor1.emitter_resistor.i" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"PNP_Bipolar_Transistor1.emitter_resistor.n.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.emitter_resistor.p.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.emitter_resistor.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.emitter_resistor.power_dissipated" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } ,
"A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"PNP_Bipolar_Transistor1.ib" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Base current" , } , {
"PNP_Bipolar_Transistor1.ic" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector current" , } , {
"PNP_Bipolar_Transistor1.transistor.B.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.transistor.Icc" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Icc" , } , {
"PNP_Bipolar_Transistor1.transistor.Iec" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Iec" , } , {
"PNP_Bipolar_Transistor1.transistor.ib" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Base current" , } , {
"PNP_Bipolar_Transistor1.transistor.ic" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector current" , } , {
"PNP_Bipolar_Transistor1.transistor.ie" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Emitter current" , } , {
"PNP_Bipolar_Transistor1.transistor.n.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.transistor.p.v" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"PNP_Bipolar_Transistor1.transistor.power_dissipated" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "W" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"PNP_Bipolar_Transistor1.transistor.vbc" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Base-collector voltage" , } , {
"PNP_Bipolar_Transistor1.transistor.vbe" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Base-emitter voltage" , } , {
"PNP_Bipolar_Transistor1.vbe" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Base-emitter voltage" , } , {
"PNP_Bipolar_Transistor1.vce" ,
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter voltage" , } , {
"PS_Gain.I" , "PowerElecCurriculumDesign/PS Gain" , { 1 , "1x1" } , "1" , 1.0
, "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , { "PS_Gain.O" ,
"PowerElecCurriculumDesign/PS Gain" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "O" , } , { "PS_Gain1.I" ,
"PowerElecCurriculumDesign/PS Gain1" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I" , } , { "PS_Gain1.O" ,
"PowerElecCurriculumDesign/PS Gain1" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "O" , } , { "PS_Gain1_O0" ,
"PowerElecCurriculumDesign/PS-Simulink\nConverter3" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "PS_Gain1_O0" , } , { "PS_Gain_O0" ,
"PowerElecCurriculumDesign/PS-Simulink\nConverter2" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "PS_Gain_O0" , } , {
"Potentiometer.W.v" , "PowerElecCurriculumDesign/Potentiometer" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "Potentiometer.iL" , "PowerElecCurriculumDesign/Potentiometer" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (L -> *)" , }
, { "Potentiometer.iR" , "PowerElecCurriculumDesign/Potentiometer" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (R -> *)" , }
, { "Potentiometer.iW" , "PowerElecCurriculumDesign/Potentiometer" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (W -> *)" , }
, { "Potentiometer.pinL.v" , "PowerElecCurriculumDesign/Potentiometer" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Potentiometer.pinR.v" ,
"PowerElecCurriculumDesign/Potentiometer" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Potentiometer.x" , "PowerElecCurriculumDesign/Potentiometer" , { 1 , "1x1" }
, "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "x" , } , {
"Resistor.faultExtTrigger" , "PowerElecCurriculumDesign/Resistor" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"External fault trigger" , } , { "Resistor.faulted" ,
"PowerElecCurriculumDesign/Resistor" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Resistor.n.v" ,
"PowerElecCurriculumDesign/Resistor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor.p.v" , "PowerElecCurriculumDesign/Resistor" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor.Resistor.i" , "PowerElecCurriculumDesign/Resistor" , { 1 , "1x1" }
, "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , }
, { "Resistor.Resistor.n.v" , "PowerElecCurriculumDesign/Resistor" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor.Resistor.p.v" ,
"PowerElecCurriculumDesign/Resistor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor.Resistor.v" , "PowerElecCurriculumDesign/Resistor" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "Resistor.Resistor.power_dissipated" ,
"PowerElecCurriculumDesign/Resistor" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 ,
"A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"Resistor1.faultExtTrigger" , "PowerElecCurriculumDesign/Resistor1" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"External fault trigger" , } , { "Resistor1.faulted" ,
"PowerElecCurriculumDesign/Resistor1" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Resistor1.n.v" ,
"PowerElecCurriculumDesign/Resistor1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor1.p.v" , "PowerElecCurriculumDesign/Resistor1" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor1.Resistor.i" , "PowerElecCurriculumDesign/Resistor1" , { 1 , "1x1"
} , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , }
, { "Resistor1.Resistor.n.v" , "PowerElecCurriculumDesign/Resistor1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor1.Resistor.p.v" ,
"PowerElecCurriculumDesign/Resistor1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor1.Resistor.v" , "PowerElecCurriculumDesign/Resistor1" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "Resistor1.Resistor.power_dissipated" ,
"PowerElecCurriculumDesign/Resistor1" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 ,
"A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"Resistor2.faultExtTrigger" , "PowerElecCurriculumDesign/Resistor2" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"External fault trigger" , } , { "Resistor2.faulted" ,
"PowerElecCurriculumDesign/Resistor2" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Resistor2.n.v" ,
"PowerElecCurriculumDesign/Resistor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor2.p.v" , "PowerElecCurriculumDesign/Resistor2" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor2.Resistor.i" , "PowerElecCurriculumDesign/Resistor2" , { 1 , "1x1"
} , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , }
, { "Resistor2.Resistor.n.v" , "PowerElecCurriculumDesign/Resistor2" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor2.Resistor.p.v" ,
"PowerElecCurriculumDesign/Resistor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor2.Resistor.v" , "PowerElecCurriculumDesign/Resistor2" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "Resistor2.Resistor.power_dissipated" ,
"PowerElecCurriculumDesign/Resistor2" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 ,
"A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"Resistor3.faultExtTrigger" , "PowerElecCurriculumDesign/Resistor3" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"External fault trigger" , } , { "Resistor3.faulted" ,
"PowerElecCurriculumDesign/Resistor3" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Resistor3.n.v" ,
"PowerElecCurriculumDesign/Resistor3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor3.p.v" , "PowerElecCurriculumDesign/Resistor3" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor3.Resistor.i" , "PowerElecCurriculumDesign/Resistor3" , { 1 , "1x1"
} , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , }
, { "Resistor3.Resistor.n.v" , "PowerElecCurriculumDesign/Resistor3" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor3.Resistor.p.v" ,
"PowerElecCurriculumDesign/Resistor3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor3.Resistor.v" , "PowerElecCurriculumDesign/Resistor3" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "Resistor3.Resistor.power_dissipated" ,
"PowerElecCurriculumDesign/Resistor3" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 ,
"A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"Resistor4.faultExtTrigger" , "PowerElecCurriculumDesign/Resistor4" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"External fault trigger" , } , { "Resistor4.faulted" ,
"PowerElecCurriculumDesign/Resistor4" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Resistor4.n.v" ,
"PowerElecCurriculumDesign/Resistor4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor4.p.v" , "PowerElecCurriculumDesign/Resistor4" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor4.Resistor.i" , "PowerElecCurriculumDesign/Resistor4" , { 1 , "1x1"
} , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , }
, { "Resistor4.Resistor.n.v" , "PowerElecCurriculumDesign/Resistor4" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor4.Resistor.p.v" ,
"PowerElecCurriculumDesign/Resistor4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Resistor4.Resistor.v" , "PowerElecCurriculumDesign/Resistor4" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "Resistor4.Resistor.power_dissipated" ,
"PowerElecCurriculumDesign/Resistor4" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 ,
"A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"Simulink_PS_Converter1_output0" ,
"PowerElecCurriculumDesign/Simulink-PS\nConverter1" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter1_output0" , } ,
{ "Simulink_PS_Converter2_output0" ,
"PowerElecCurriculumDesign/Simulink-PS\nConverter2" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter2_output0" , } ,
{ "Simulink_PS_Converter3_output0" ,
"PowerElecCurriculumDesign/Simulink-PS\nConverter3" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter3_output0" , } ,
{ "Simulink_PS_Converter_output0" ,
"PowerElecCurriculumDesign/Simulink-PS\nConverter" , { 1 , "1x1" } , "1" ,
1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter_output0" , } ,
{ "Thyristor1.A.v" , "PowerElecCurriculumDesign/Thyristor1" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor1.G" , "PowerElecCurriculumDesign/Thyristor1" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , { "Thyristor1.G_elec.v" ,
"PowerElecCurriculumDesign/Thyristor1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor1.K.v" , "PowerElecCurriculumDesign/Thyristor1" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor1.iak" , "PowerElecCurriculumDesign/Thyristor1" , { 1 , "1x1" } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Thyristor1.ideal_switch.G" , "PowerElecCurriculumDesign/Thyristor1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Thyristor1.ideal_switch.i" , "PowerElecCurriculumDesign/Thyristor1" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"Thyristor1.ideal_switch.n.v" , "PowerElecCurriculumDesign/Thyristor1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Thyristor1.ideal_switch.p.v" ,
"PowerElecCurriculumDesign/Thyristor1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor1.ideal_switch.power_dissipated" ,
"PowerElecCurriculumDesign/Thyristor1" , { 1 , "1x1" } , "W" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Thyristor1.ideal_switch.state" , "PowerElecCurriculumDesign/Thyristor1" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Show modes (internal debugging purpose)" , } , { "Thyristor1.ideal_switch.v"
, "PowerElecCurriculumDesign/Thyristor1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"Thyristor1.ideal_switch.zIh" , "PowerElecCurriculumDesign/Thyristor1" , { 1
, "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Capture the current when i<=Ih" , } , {
"Thyristor1.ideal_switch.internal_mode_var_M__" ,
"PowerElecCurriculumDesign/Thyristor1" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "internal_mode_var_M__" , } , {
"Thyristor1.vT" , "PowerElecCurriculumDesign/Thyristor1" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , { "Thyristor1.vak" ,
"PowerElecCurriculumDesign/Thyristor1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Thyristor1.vgk" ,
"PowerElecCurriculumDesign/Thyristor1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-cathode voltage" , } , {
"Thyristor2.A.v" , "PowerElecCurriculumDesign/Thyristor2" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor2.G" , "PowerElecCurriculumDesign/Thyristor2" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , { "Thyristor2.G_elec.v" ,
"PowerElecCurriculumDesign/Thyristor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor2.K.v" , "PowerElecCurriculumDesign/Thyristor2" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor2.iak" , "PowerElecCurriculumDesign/Thyristor2" , { 1 , "1x1" } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Thyristor2.ideal_switch.G" , "PowerElecCurriculumDesign/Thyristor2" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Thyristor2.ideal_switch.i" , "PowerElecCurriculumDesign/Thyristor2" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"Thyristor2.ideal_switch.n.v" , "PowerElecCurriculumDesign/Thyristor2" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Thyristor2.ideal_switch.p.v" ,
"PowerElecCurriculumDesign/Thyristor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor2.ideal_switch.power_dissipated" ,
"PowerElecCurriculumDesign/Thyristor2" , { 1 , "1x1" } , "W" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Thyristor2.ideal_switch.state" , "PowerElecCurriculumDesign/Thyristor2" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Show modes (internal debugging purpose)" , } , { "Thyristor2.ideal_switch.v"
, "PowerElecCurriculumDesign/Thyristor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"Thyristor2.ideal_switch.zIh" , "PowerElecCurriculumDesign/Thyristor2" , { 1
, "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Capture the current when i<=Ih" , } , {
"Thyristor2.ideal_switch.internal_mode_var_M__" ,
"PowerElecCurriculumDesign/Thyristor2" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "internal_mode_var_M__" , } , {
"Thyristor2.vT" , "PowerElecCurriculumDesign/Thyristor2" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , { "Thyristor2.vak" ,
"PowerElecCurriculumDesign/Thyristor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Thyristor2.vgk" ,
"PowerElecCurriculumDesign/Thyristor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-cathode voltage" , } , {
"Thyristor3.A.v" , "PowerElecCurriculumDesign/Thyristor3" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor3.G" , "PowerElecCurriculumDesign/Thyristor3" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , { "Thyristor3.G_elec.v" ,
"PowerElecCurriculumDesign/Thyristor3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor3.K.v" , "PowerElecCurriculumDesign/Thyristor3" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor3.iak" , "PowerElecCurriculumDesign/Thyristor3" , { 1 , "1x1" } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Thyristor3.ideal_switch.G" , "PowerElecCurriculumDesign/Thyristor3" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Thyristor3.ideal_switch.i" , "PowerElecCurriculumDesign/Thyristor3" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"Thyristor3.ideal_switch.n.v" , "PowerElecCurriculumDesign/Thyristor3" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Thyristor3.ideal_switch.p.v" ,
"PowerElecCurriculumDesign/Thyristor3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor3.ideal_switch.power_dissipated" ,
"PowerElecCurriculumDesign/Thyristor3" , { 1 , "1x1" } , "W" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Thyristor3.ideal_switch.state" , "PowerElecCurriculumDesign/Thyristor3" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Show modes (internal debugging purpose)" , } , { "Thyristor3.ideal_switch.v"
, "PowerElecCurriculumDesign/Thyristor3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"Thyristor3.ideal_switch.zIh" , "PowerElecCurriculumDesign/Thyristor3" , { 1
, "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Capture the current when i<=Ih" , } , {
"Thyristor3.ideal_switch.internal_mode_var_M__" ,
"PowerElecCurriculumDesign/Thyristor3" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "internal_mode_var_M__" , } , {
"Thyristor3.vT" , "PowerElecCurriculumDesign/Thyristor3" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , { "Thyristor3.vak" ,
"PowerElecCurriculumDesign/Thyristor3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Thyristor3.vgk" ,
"PowerElecCurriculumDesign/Thyristor3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-cathode voltage" , } , {
"Thyristor4.A.v" , "PowerElecCurriculumDesign/Thyristor4" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor4.G" , "PowerElecCurriculumDesign/Thyristor4" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , { "Thyristor4.G_elec.v" ,
"PowerElecCurriculumDesign/Thyristor4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor4.K.v" , "PowerElecCurriculumDesign/Thyristor4" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor4.iak" , "PowerElecCurriculumDesign/Thyristor4" , { 1 , "1x1" } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Thyristor4.ideal_switch.G" , "PowerElecCurriculumDesign/Thyristor4" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Thyristor4.ideal_switch.i" , "PowerElecCurriculumDesign/Thyristor4" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"Thyristor4.ideal_switch.n.v" , "PowerElecCurriculumDesign/Thyristor4" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Thyristor4.ideal_switch.p.v" ,
"PowerElecCurriculumDesign/Thyristor4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor4.ideal_switch.power_dissipated" ,
"PowerElecCurriculumDesign/Thyristor4" , { 1 , "1x1" } , "W" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Thyristor4.ideal_switch.state" , "PowerElecCurriculumDesign/Thyristor4" , {
1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Show modes (internal debugging purpose)" , } , { "Thyristor4.ideal_switch.v"
, "PowerElecCurriculumDesign/Thyristor4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"Thyristor4.ideal_switch.zIh" , "PowerElecCurriculumDesign/Thyristor4" , { 1
, "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Capture the current when i<=Ih" , } , {
"Thyristor4.ideal_switch.internal_mode_var_M__" ,
"PowerElecCurriculumDesign/Thyristor4" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "internal_mode_var_M__" , } , {
"Thyristor4.vT" , "PowerElecCurriculumDesign/Thyristor4" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , { "Thyristor4.vak" ,
"PowerElecCurriculumDesign/Thyristor4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Thyristor4.vgk" ,
"PowerElecCurriculumDesign/Thyristor4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-cathode voltage" , } , {
"Voltage_Sensor.V" , "PowerElecCurriculumDesign/Voltage Sensor" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Voltage_Sensor.n.v" , "PowerElecCurriculumDesign/Voltage Sensor" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Voltage_Sensor.p.v" ,
"PowerElecCurriculumDesign/Voltage Sensor" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor1.V" , "PowerElecCurriculumDesign/Voltage Sensor1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Voltage_Sensor1.n.v" , "PowerElecCurriculumDesign/Voltage Sensor1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Voltage_Sensor1.p.v" ,
"PowerElecCurriculumDesign/Voltage Sensor1" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor10.V" , "PowerElecCurriculumDesign/Voltage Sensor10" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Voltage_Sensor10.n.v" , "PowerElecCurriculumDesign/Voltage Sensor10" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Voltage_Sensor10.p.v" ,
"PowerElecCurriculumDesign/Voltage Sensor10" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor10_V0" , "PowerElecCurriculumDesign/PS-Simulink\nConverter6" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage_Sensor10_V0" , } , { "Voltage_Sensor11.V" ,
"PowerElecCurriculumDesign/Voltage Sensor11" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor11.n.v" ,
"PowerElecCurriculumDesign/Voltage Sensor11" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor11.p.v" , "PowerElecCurriculumDesign/Voltage Sensor11" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Voltage_Sensor11_V0" ,
"PowerElecCurriculumDesign/PS-Simulink\nConverter15" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor11_V0" , } , {
"Voltage_Sensor1_V0" , "PowerElecCurriculumDesign/PS-Simulink\nConverter7" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor1_V0"
, } , { "Voltage_Sensor2.V" , "PowerElecCurriculumDesign/Voltage Sensor2" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Voltage_Sensor2.n.v" , "PowerElecCurriculumDesign/Voltage Sensor2" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Voltage_Sensor2.p.v" ,
"PowerElecCurriculumDesign/Voltage Sensor2" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor2_V0" , "PowerElecCurriculumDesign/PS-Simulink\nConverter14" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor2_V0"
, } , { "Voltage_Sensor3.V" , "PowerElecCurriculumDesign/Voltage Sensor3" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Voltage_Sensor3.n.v" , "PowerElecCurriculumDesign/Voltage Sensor3" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Voltage_Sensor3.p.v" ,
"PowerElecCurriculumDesign/Voltage Sensor3" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor3_V0" , "PowerElecCurriculumDesign/PS-Simulink\nConverter12" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor3_V0"
, } , { "Voltage_Sensor4.V" , "PowerElecCurriculumDesign/Voltage Sensor4" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Voltage_Sensor4.n.v" , "PowerElecCurriculumDesign/Voltage Sensor4" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Voltage_Sensor4.p.v" ,
"PowerElecCurriculumDesign/Voltage Sensor4" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor4_V0" , "PowerElecCurriculumDesign/PS-Simulink\nConverter13" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor4_V0"
, } , { "Voltage_Sensor5.V" , "PowerElecCurriculumDesign/Voltage Sensor5" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Voltage_Sensor5.n.v" , "PowerElecCurriculumDesign/Voltage Sensor5" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Voltage_Sensor5.p.v" ,
"PowerElecCurriculumDesign/Voltage Sensor5" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor5_V0" , "PowerElecCurriculumDesign/PS-Simulink\nConverter9" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor5_V0"
, } , { "Voltage_Sensor6.V" , "PowerElecCurriculumDesign/Voltage Sensor6" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Voltage_Sensor6.n.v" , "PowerElecCurriculumDesign/Voltage Sensor6" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Voltage_Sensor6.p.v" ,
"PowerElecCurriculumDesign/Voltage Sensor6" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor6_V0" , "PowerElecCurriculumDesign/PS-Simulink\nConverter8" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor6_V0"
, } , { "Voltage_Sensor7.V" , "PowerElecCurriculumDesign/Voltage Sensor7" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Voltage_Sensor7.n.v" , "PowerElecCurriculumDesign/Voltage Sensor7" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Voltage_Sensor7.p.v" ,
"PowerElecCurriculumDesign/Voltage Sensor7" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor7_V0" , "PowerElecCurriculumDesign/PS-Simulink\nConverter10" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor7_V0"
, } , { "Voltage_Sensor8.V" , "PowerElecCurriculumDesign/Voltage Sensor8" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Voltage_Sensor8.n.v" , "PowerElecCurriculumDesign/Voltage Sensor8" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Voltage_Sensor8.p.v" ,
"PowerElecCurriculumDesign/Voltage Sensor8" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor8_V0" , "PowerElecCurriculumDesign/PS-Simulink\nConverter1" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor8_V0"
, } , { "Voltage_Sensor9.V" , "PowerElecCurriculumDesign/Voltage Sensor9" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , {
"Voltage_Sensor9.n.v" , "PowerElecCurriculumDesign/Voltage Sensor9" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Voltage_Sensor9.p.v" ,
"PowerElecCurriculumDesign/Voltage Sensor9" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor9_V0" , "PowerElecCurriculumDesign/PS-Simulink\nConverter5" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor9_V0"
, } , { "Voltage_Sensor_V0" ,
"PowerElecCurriculumDesign/PS-Simulink\nConverter11" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor_V0" , } } ; static
NeModeData s_major_mode_data [ 5 ] = { {
"Thyristor1.ideal_switch.internal_mode_var_M__" , 0U ,
"PowerElecCurriculumDesign/Thyristor1" , 0 , { 1 , "1x1" } ,
"internal_mode_var_M__" , } , {
"Thyristor2.ideal_switch.internal_mode_var_M__" , 0U ,
"PowerElecCurriculumDesign/Thyristor2" , 0 , { 1 , "1x1" } ,
"internal_mode_var_M__" , } , {
"Thyristor3.ideal_switch.internal_mode_var_M__" , 0U ,
"PowerElecCurriculumDesign/Thyristor3" , 0 , { 1 , "1x1" } ,
"internal_mode_var_M__" , } , {
"Thyristor4.ideal_switch.internal_mode_var_M__" , 0U ,
"PowerElecCurriculumDesign/Thyristor4" , 0 , { 1 , "1x1" } ,
"internal_mode_var_M__" , } , { "ie0" , 0U , "" , 0 , { 1 , "1x1" } , "" , }
} ; static NeZCData s_zc_data [ 84 ] = { { "PowerElecCurriculumDesign/Diode"
, 1U , 0U , "Diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Diode3" , 1U , 1U ,
"Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Diode3" , 1U , 2U ,
"Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Diode4" , 1U , 3U ,
"Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Diode4" , 1U , 4U ,
"Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Diode5" , 1U , 5U ,
"Diode5.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Diode6" , 1U , 6U ,
"Diode6.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Diode7" , 1U , 7U ,
"Diode7.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Diode8" , 1U , 8U ,
"Diode8.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Diode9" , 1U , 9U ,
"Diode9.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Diode1" , 1U , 10U ,
"Diode1.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Diode2" , 1U , 11U ,
"Diode2.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Finite-Gain Op-Amp1" ,
1U , 12U , "Finite_Gain_Op_Amp1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Finite-Gain Op-Amp1" ,
1U , 13U , "Finite_Gain_Op_Amp1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Finite-Gain Op-Amp2" ,
1U , 14U , "Finite_Gain_Op_Amp2" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Finite-Gain Op-Amp2" ,
1U , 15U , "Finite_Gain_Op_Amp2" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Potentiometer" , 1U ,
16U , "Potentiometer" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Potentiometer" , 1U ,
17U , "Potentiometer" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Comparator" , 1U , 18U
, "Comparator.comparator1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/comparator_eqn.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/Comparator" , 1U , 19U ,
"Comparator.comparator1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/comparator_eqn.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Comparator1" , 1U , 20U
, "Comparator1.comparator1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/comparator_eqn.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/Comparator1" , 1U , 21U
, "Comparator1.comparator1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/comparator_eqn.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/IGBT" , 1U , 22U ,
"IGBT.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/IGBT" , 1U , 23U ,
"IGBT.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/IGBT1" , 1U , 24U ,
"IGBT1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/IGBT1" , 1U , 25U ,
"IGBT1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/IGBT2" , 1U , 26U ,
"IGBT2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/IGBT2" , 1U , 27U ,
"IGBT2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/IGBT3" , 1U , 28U ,
"IGBT3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/IGBT3" , 1U , 29U ,
"IGBT3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/IGBT4" , 1U , 30U ,
"IGBT4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/IGBT4" , 1U , 31U ,
"IGBT4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/Thyristor1" , 1U , 32U ,
"Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/Thyristor1" , 1U , 33U ,
"Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/Thyristor1" , 1U , 34U ,
"Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor1" , 1U , 35U
, "Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor1" , 1U , 36U
, "Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor1" , 1U , 37U
, "Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor1" , 1U , 38U
, "Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor1" , 1U , 39U
, "Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor1" , 1U , 40U
, "Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor1" , 1U , 41U
, "Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor1" , 1U , 42U
, "Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor2" , 1U , 43U
, "Thyristor2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/Thyristor2" , 1U , 44U ,
"Thyristor2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/Thyristor2" , 1U , 45U ,
"Thyristor2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor2" , 1U , 46U
, "Thyristor2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor2" , 1U , 47U
, "Thyristor2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor2" , 1U , 48U
, "Thyristor2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor2" , 1U , 49U
, "Thyristor2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor2" , 1U , 50U
, "Thyristor2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor2" , 1U , 51U
, "Thyristor2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor2" , 1U , 52U
, "Thyristor2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor2" , 1U , 53U
, "Thyristor2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor3" , 1U , 54U
, "Thyristor3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/Thyristor3" , 1U , 55U ,
"Thyristor3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/Thyristor3" , 1U , 56U ,
"Thyristor3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor3" , 1U , 57U
, "Thyristor3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor3" , 1U , 58U
, "Thyristor3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor3" , 1U , 59U
, "Thyristor3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor3" , 1U , 60U
, "Thyristor3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor3" , 1U , 61U
, "Thyristor3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor3" , 1U , 62U
, "Thyristor3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor3" , 1U , 63U
, "Thyristor3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor3" , 1U , 64U
, "Thyristor3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor4" , 1U , 65U
, "Thyristor4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/Thyristor4" , 1U , 66U ,
"Thyristor4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "PowerElecCurriculumDesign/Thyristor4" , 1U , 67U ,
"Thyristor4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor4" , 1U , 68U
, "Thyristor4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor4" , 1U , 69U
, "Thyristor4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor4" , 1U , 70U
, "Thyristor4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor4" , 1U , 71U
, "Thyristor4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor4" , 1U , 72U
, "Thyristor4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor4" , 1U , 73U
, "Thyristor4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor4" , 1U , 74U
, "Thyristor4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/Thyristor4" , 1U , 75U
, "Thyristor4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/PNP Bipolar Transistor"
, 1U , 76U , "PNP_Bipolar_Transistor.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/PNP Bipolar Transistor"
, 1U , 77U , "PNP_Bipolar_Transistor.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/PNP Bipolar Transistor"
, 1U , 78U , "PNP_Bipolar_Transistor.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, NE_ZC_TYPE_FALSE , } , { "PowerElecCurriculumDesign/PNP Bipolar Transistor"
, 1U , 79U , "PNP_Bipolar_Transistor.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, NE_ZC_TYPE_FALSE , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 80U ,
"PNP_Bipolar_Transistor1.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, NE_ZC_TYPE_FALSE , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 81U ,
"PNP_Bipolar_Transistor1.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, NE_ZC_TYPE_FALSE , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 82U ,
"PNP_Bipolar_Transistor1.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, NE_ZC_TYPE_FALSE , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 83U ,
"PNP_Bipolar_Transistor1.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, NE_ZC_TYPE_FALSE , } } ; static NeRange s_range [ 84 ] = { {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/comparator_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/comparator_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/comparator_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/comparator_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData
s_assert_data [ 173 ] = { { "PowerElecCurriculumDesign/Thyristor1" , 2U , 0U
, "Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor.sscp"
, FALSE ,
 "\346\250\241\345\274\217\345\200\274\350\266\205\345\207\272 'internal_mode_var_M__' \347\232\204\350\214\203\345\233\264\343\200\202\346\250\241\345\274\217\345\277\205\351\241\273\344\273\213\344\272\216 1 \345\222\214 5 \344\271\213\351\227\264\343\200\202"
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"PowerElecCurriculumDesign/Thyristor2" , 2U , 2U , "Thyristor2.ideal_switch"
,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor.sscp"
, FALSE ,
 "\346\250\241\345\274\217\345\200\274\350\266\205\345\207\272 'internal_mode_var_M__' \347\232\204\350\214\203\345\233\264\343\200\202\346\250\241\345\274\217\345\277\205\351\241\273\344\273\213\344\272\216 1 \345\222\214 5 \344\271\213\351\227\264\343\200\202"
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"PowerElecCurriculumDesign/Thyristor3" , 2U , 4U , "Thyristor3.ideal_switch"
,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor.sscp"
, FALSE ,
 "\346\250\241\345\274\217\345\200\274\350\266\205\345\207\272 'internal_mode_var_M__' \347\232\204\350\214\203\345\233\264\343\200\202\346\250\241\345\274\217\345\277\205\351\241\273\344\273\213\344\272\216 1 \345\222\214 5 \344\271\213\351\227\264\343\200\202"
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"PowerElecCurriculumDesign/Thyristor4" , 2U , 6U , "Thyristor4.ideal_switch"
,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor.sscp"
, FALSE ,
 "\346\250\241\345\274\217\345\200\274\350\266\205\345\207\272 'internal_mode_var_M__' \347\232\204\350\214\203\345\233\264\343\200\202\346\250\241\345\274\217\345\277\205\351\241\273\344\273\213\344\272\216 1 \345\222\214 5 \344\271\213\351\227\264\343\200\202"
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"PowerElecCurriculumDesign/Capacitor" , 1U , 8U ,
"Capacitor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Capacitor" , 1U , 9U ,
"Capacitor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Capacitor" , 1U , 10U ,
"Capacitor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Capacitor" , 1U , 11U ,
"Capacitor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Capacitor1" , 1U , 12U ,
"Capacitor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Capacitor1" , 1U , 13U ,
"Capacitor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Capacitor1" , 1U , 14U ,
"Capacitor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Capacitor1" , 1U , 15U ,
"Capacitor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Capacitor2" , 1U , 16U , "Capacitor2" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Capacitor2" , 1U , 17U , "Capacitor2" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Capacitor2" , 1U , 18U , "Capacitor2" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Capacitor2" , 1U , 19U , "Capacitor2" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Capacitor3" , 1U , 20U ,
"Capacitor3.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Capacitor3" , 1U , 21U ,
"Capacitor3.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Capacitor3" , 1U , 22U ,
"Capacitor3.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Capacitor3" , 1U , 23U ,
"Capacitor3.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Capacitor4" , 1U , 24U ,
"Capacitor4.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Capacitor4" , 1U , 25U ,
"Capacitor4.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Capacitor4" , 1U , 26U ,
"Capacitor4.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Capacitor4" , 1U , 27U ,
"Capacitor4.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Comparator" , 1U , 28U ,
"Comparator.rOUT.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Comparator" , 1U , 29U ,
"Comparator.rOUT.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Comparator1" , 1U , 30U ,
"Comparator1.rOUT.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Comparator1" , 1U , 31U ,
"Comparator1.rOUT.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Diode1" , 1U , 32U ,
"Diode1.private.ohmicResistance.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Diode1" , 1U , 33U ,
"Diode1.private.ohmicResistance.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Diode2" , 1U , 34U ,
"Diode2.private.ohmicResistance.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Diode2" , 1U , 35U ,
"Diode2.private.ohmicResistance.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Inductor" , 1U , 36U , "Inductor.power_dissipated"
,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Inductor" , 1U , 37U , "Inductor.power_dissipated"
,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Inductor" , 1U , 38U , "Inductor.power_dissipated"
,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Inductor" , 1U , 39U , "Inductor.power_dissipated"
,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Inductor1" , 1U , 40U ,
"Inductor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Inductor1" , 1U , 41U ,
"Inductor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Inductor1" , 1U , 42U ,
"Inductor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Inductor1" , 1U , 43U ,
"Inductor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Inductor2" , 1U , 44U ,
"Inductor2.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Inductor2" , 1U , 45U ,
"Inductor2.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Inductor2" , 1U , 46U ,
"Inductor2.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Inductor2" , 1U , 47U ,
"Inductor2.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 48U ,
"PNP_Bipolar_Transistor.base_resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 49U ,
"PNP_Bipolar_Transistor.base_resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 50U ,
"PNP_Bipolar_Transistor.capacitor_bc.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 51U ,
"PNP_Bipolar_Transistor.capacitor_bc.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 52U ,
"PNP_Bipolar_Transistor.capacitor_bc.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 53U ,
"PNP_Bipolar_Transistor.capacitor_bc.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 54U ,
"PNP_Bipolar_Transistor.capacitor_be.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 55U ,
"PNP_Bipolar_Transistor.capacitor_be.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 56U ,
"PNP_Bipolar_Transistor.capacitor_be.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 57U ,
"PNP_Bipolar_Transistor.capacitor_be.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 58U ,
"PNP_Bipolar_Transistor.collector_resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 59U ,
"PNP_Bipolar_Transistor.collector_resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 60U ,
"PNP_Bipolar_Transistor.emitter_resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 61U ,
"PNP_Bipolar_Transistor.emitter_resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 62U ,
"PNP_Bipolar_Transistor.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 63U ,
"PNP_Bipolar_Transistor.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 64U ,
"PNP_Bipolar_Transistor.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 65U ,
"PNP_Bipolar_Transistor.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 66U ,
"PNP_Bipolar_Transistor.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor" , 1U , 67U ,
"PNP_Bipolar_Transistor.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 68U ,
"PNP_Bipolar_Transistor1.base_resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 69U ,
"PNP_Bipolar_Transistor1.base_resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 70U ,
"PNP_Bipolar_Transistor1.capacitor_bc.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 71U ,
"PNP_Bipolar_Transistor1.capacitor_bc.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 72U ,
"PNP_Bipolar_Transistor1.capacitor_bc.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 73U ,
"PNP_Bipolar_Transistor1.capacitor_bc.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 74U ,
"PNP_Bipolar_Transistor1.capacitor_be.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 75U ,
"PNP_Bipolar_Transistor1.capacitor_be.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 76U ,
"PNP_Bipolar_Transistor1.capacitor_be.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 77U ,
"PNP_Bipolar_Transistor1.capacitor_be.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 78U ,
"PNP_Bipolar_Transistor1.collector_resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 79U ,
"PNP_Bipolar_Transistor1.collector_resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 80U ,
"PNP_Bipolar_Transistor1.emitter_resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 81U ,
"PNP_Bipolar_Transistor1.emitter_resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 82U ,
"PNP_Bipolar_Transistor1.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 83U ,
"PNP_Bipolar_Transistor1.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 84U ,
"PNP_Bipolar_Transistor1.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 85U ,
"PNP_Bipolar_Transistor1.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 86U ,
"PNP_Bipolar_Transistor1.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/PNP Bipolar Transistor1" , 1U , 87U ,
"PNP_Bipolar_Transistor1.transistor" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/Resistor" , 1U , 88U ,
"Resistor.Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Resistor" , 1U , 89U ,
"Resistor.Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Resistor1" , 1U , 90U ,
"Resistor1.Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Resistor1" , 1U , 91U ,
"Resistor1.Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Resistor2" , 1U , 92U ,
"Resistor2.Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Resistor2" , 1U , 93U ,
"Resistor2.Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Resistor3" , 1U , 94U ,
"Resistor3.Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Resistor3" , 1U , 95U ,
"Resistor3.Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Resistor4" , 1U , 96U ,
"Resistor4.Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"PowerElecCurriculumDesign/Resistor4" , 1U , 97U ,
"Resistor4.Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"PowerElecCurriculumDesign/Diode" , 1U , 98U , "Diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode" , 1U , 99U , "Diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode" , 1U , 100U , "Diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode" , 1U , 101U , "Diode.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode1" , 1U , 102U , "Diode1.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/Diode1" , 1U , 103U , "Diode1.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/Diode1" , 1U , 104U , "Diode1.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/Diode2" , 1U , 105U , "Diode2.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/Diode2" , 1U , 106U , "Diode2.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/Diode2" , 1U , 107U , "Diode2.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, TRUE ,
 "exp \345\206\205\351\203\250\347\232\204\345\200\274\350\277\207\345\244\247\357\274\214\350\257\267\351\231\220\345\210\266\346\214\207\346\225\260\344\273\245\351\201\277\345\205\215\351\235\236\346\234\211\351\231\220\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 108U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 109U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 110U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 111U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 112U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 113U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 114U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 115U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 116U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 117U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 118U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 119U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 120U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 121U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode3" , 1U , 122U , "Diode3.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 123U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 124U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 125U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 126U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 127U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 128U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 129U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 130U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 131U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 132U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 133U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 134U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 135U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 136U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode4" , 1U , 137U , "Diode4.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode5" , 1U , 138U , "Diode5.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode5" , 1U , 139U , "Diode5.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode5" , 1U , 140U , "Diode5.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode5" , 1U , 141U , "Diode5.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode6" , 1U , 142U , "Diode6.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode6" , 1U , 143U , "Diode6.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode6" , 1U , 144U , "Diode6.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode6" , 1U , 145U , "Diode6.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode7" , 1U , 146U , "Diode7.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode7" , 1U , 147U , "Diode7.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode7" , 1U , 148U , "Diode7.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode7" , 1U , 149U , "Diode7.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode8" , 1U , 150U , "Diode8.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode8" , 1U , 151U , "Diode8.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode8" , 1U , 152U , "Diode8.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode8" , 1U , 153U , "Diode8.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode9" , 1U , 154U , "Diode9.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode9" , 1U , 155U , "Diode9.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode9" , 1U , 156U , "Diode9.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Diode9" , 1U , 157U , "Diode9.private.Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/IGBT" , 1U , 158U , "IGBT.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/IGBT1" , 1U , 159U , "IGBT1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/IGBT2" , 1U , 160U , "IGBT2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/IGBT3" , 1U , 161U , "IGBT3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/IGBT4" , 1U , 162U , "IGBT4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Potentiometer" , 1U , 163U , "Potentiometer" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Potentiometer" , 1U , 164U , "Potentiometer" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Thyristor1" , 1U , 165U ,
"Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Thyristor1" , 1U , 166U ,
"Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Thyristor1" , 1U , 167U ,
"Thyristor1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Thyristor2" , 1U , 168U ,
"Thyristor2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Thyristor2" , 1U , 169U ,
"Thyristor2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Thyristor2" , 1U , 170U ,
"Thyristor2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Thyristor3" , 1U , 171U ,
"Thyristor3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Thyristor3" , 1U , 172U ,
"Thyristor3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Thyristor3" , 1U , 173U ,
"Thyristor3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Thyristor4" , 1U , 174U ,
"Thyristor4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Thyristor4" , 1U , 175U ,
"Thyristor4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"PowerElecCurriculumDesign/Thyristor4" , 1U , 176U ,
"Thyristor4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } } ; static
NeRange s_assert_range [ 177 ] = { {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 31U , 25U , 32U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 27U , 25U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 39U , 25U , 40U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 37U , 25U , 38U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 31U , 25U , 32U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 27U , 25U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 39U , 25U , 40U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 37U , 25U , 38U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 31U , 25U , 32U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 27U , 25U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 39U , 25U , 40U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 37U , 25U , 38U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 29U , 20U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, 20U , 27U , 20U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData *
s_param_assert_data = NULL ; static NeRange * s_param_assert_range = NULL ;
static NeAssertData * s_initial_assert_data = NULL ; static NeRange *
s_initial_assert_range = NULL ; static NeRange s_equation_range [ 189 ] = { {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 5U , 34U , 23U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 20U , 34U , 27U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 5U , 34U , 23U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 20U , 34U , 27U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 5U , 34U , 23U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 20U , 34U , 27U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+sources/ac_voltage.ssc"
, 19U , 5U , 19U , 53U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 35U , 5U , 35U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 35U , 5U , 35U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/comparator_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/comparator_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodePiecewiseLinear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc"
, 23U , 5U , 23U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc"
, 23U , 5U , 23U , 19U , NE_RANGE_TYPE_NORMAL , } , { "" , 1U , 1U , 1U , 1U
, NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , { "" , 1U , 1U , 1U , 1U
, NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , { "" , 1U , 1U , 1U , 1U
, NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , { "" , 1U , 1U , 1U , 1U
, NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , { "" , 1U , 1U , 1U , 1U
, NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc"
, 19U , 5U , 19U , 6U , NE_RANGE_TYPE_NORMAL , } , { "" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diodeExponential.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc"
, 19U , 5U , 19U , 6U , NE_RANGE_TYPE_NORMAL , } } ; static NeRange *
s_cer_range = NULL ; static NeRange s_icr_range [ 14 ] = { {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt_pnp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt_pnp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt_pnp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/bjt_pnp.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeParameterData
* s_logical_parameter_data = NULL ; static NeParameterData *
s_integer_parameter_data = NULL ; static NeParameterData *
s_index_parameter_data = NULL ; static NeParameterData *
s_real_parameter_data = NULL ; static NeDsMethodOutput * ds_output_m_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM_P . mNumCol = 62 ;
out -> mM_P . mNumRow = 62 ; out -> mM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 63 ) ; out -> mM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 15 ) ;
return out ; } static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mM . mN = 15 ; out -> mM . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 15 ) ; return out
; } static NeDsMethodOutput * ds_output_vmm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMM . mN = 15 ; out -> mVMM . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 15
) ; return out ; } static NeDsMethodOutput * ds_output_dxm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM_P . mNumCol = 62 ; out ->
mDXM_P . mNumRow = 15 ; out -> mDXM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 63 ) ; out -> mDXM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM . mN = 0 ; out -> mDXM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM_P . mNumCol = 14 ; out ->
mDDM_P . mNumRow = 15 ; out -> mDDM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 15 ) ; out -> mDDM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM . mN = 0 ; out -> mDDM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM_P . mNumCol = 4 ; out ->
mDUM_P . mNumRow = 15 ; out -> mDUM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mDUM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dum ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM . mN = 0 ; out -> mDUM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM_P . mNumCol = 1 ; out ->
mDTM_P . mNumRow = 15 ; out -> mDTM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM . mN = 0 ; out -> mDTM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dpm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPM_P . mNumCol = 0 ; out ->
mDPM_P . mNumRow = 15 ; out -> mDPM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDPM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dpm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPM . mN = 0 ; out -> mDPM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA_P . mNumCol = 62 ; out ->
mA_P . mNumRow = 62 ; out -> mA_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 63 ) ; out -> mA_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 103 )
; return out ; } static NeDsMethodOutput * ds_output_a ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA . mN = 103 ; out -> mA . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 103 )
; return out ; } static NeDsMethodOutput * ds_output_b_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mB_P . mNumCol = 4 ; out -> mB_P
. mNumRow = 62 ; out -> mB_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 5 ) ; out -> mB_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mB . mN = 0 ; out -> mB . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_c_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mC_P . mNumCol = 1 ; out -> mC_P . mNumRow
= 62 ; out -> mC_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( int32_T ) , 2 ) ; out -> mC_P . mIr = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_c ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mC . mN = 0 ; out -> mC . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_f ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mF .
mN = 62 ; out -> mF . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 62 ) ; return out ; } static NeDsMethodOutput *
ds_output_vmf ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVMF .
mN = 62 ; out -> mVMF . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 62 ) ; return out ; } static
NeDsMethodOutput * ds_output_vpf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mVPF . mN = 62 ; out -> mVPF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 62 ) ; return out ; } static
NeDsMethodOutput * ds_output_vsf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mVSF . mN = 62 ; out -> mVSF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 62 ) ; return out ; } static
NeDsMethodOutput * ds_output_slf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSLF . mN = 62 ; out -> mSLF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 62 ) ; return out ; } static
NeDsMethodOutput * ds_output_slf0 ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mSLF0 . mN = 62 ; out -> mSLF0 . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 62
) ; return out ; } static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF_P . mNumCol = 62 ; out ->
mDXF_P . mNumRow = 62 ; out -> mDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 63 ) ; out -> mDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 147 )
; return out ; } static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF . mN = 147 ; out -> mDXF .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
147 ) ; return out ; } static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF_P . mNumCol = 4 ; out ->
mDUF_P . mNumRow = 62 ; out -> mDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ;
return out ; } static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF . mN = 2 ; out -> mDUF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 2 )
; return out ; } static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF_P . mNumCol = 1 ; out ->
mDTF_P . mNumRow = 62 ; out -> mDTF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF . mN = 1 ; out -> mDTF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 1 )
; return out ; } static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF_P . mNumCol = 14 ; out ->
mDDF_P . mNumRow = 62 ; out -> mDDF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 15 ) ; out -> mDDF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 4 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF . mN = 4 ; out -> mDDF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 4 )
; return out ; } static NeDsMethodOutput * ds_output_dpdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF_P . mNumCol = 0 ; out ->
mDPDXF_P . mNumRow = 147 ; out -> mDPDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDPDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dpdxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF . mN = 0 ; out -> mDPDXF
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dwf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF_P . mNumCol = 0 ; out ->
mDWF_P . mNumRow = 62 ; out -> mDWF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDWF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dwf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF . mN = 0 ; out -> mDWF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUF_P . mNumCol = 4 ; out ->
mTDUF_P . mNumRow = 62 ; out -> mTDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mTDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXF_P . mNumCol = 62 ; out ->
mTDXF_P . mNumRow = 62 ; out -> mTDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 63 ) ; out -> mTDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 255 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_P . mNumCol = 59 ; out ->
mDNF_P . mNumRow = 62 ; out -> mDNF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 60 ) ; out -> mDNF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 4 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF . mN = 4 ; out -> mDNF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 4 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_v_x ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_V_X . mN = 62 ; out ->
mDNF_V_X . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 62 ) ; return out ; } static NeDsMethodOutput * ds_output_cer
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCER . mN = 0 ; out ->
mCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxcer (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER . mN = 0 ; out
-> mDXCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxcer_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER_P . mNumCol =
62 ; out -> mDXCER_P . mNumRow = 0 ; out -> mDXCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 63 ) ; out ->
mDXCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddcer (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDCER . mN = 0 ; out
-> mDDCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddcer_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDCER_P . mNumCol =
14 ; out -> mDDCER_P . mNumRow = 0 ; out -> mDDCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 15 ) ; out ->
mDDCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ic (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIC . mN = 62 ; out ->
mIC . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 62 ) ; return out ; } static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR . mN = 14 ; out -> mICR .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
14 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_im ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_IM . mN = 14 ; out ->
mICR_IM . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 14 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_id
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_ID . mN = 14 ;
out -> mICR_ID . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( boolean_T ) , 14 ) ; return out ; } static NeDsMethodOutput *
ds_output_icr_il ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mICR_IL . mN = 14 ; out -> mICR_IL . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 14 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXICR . mN = 4 ; out -> mDXICR . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 4 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICR_P . mNumCol = 62 ; out ->
mDXICR_P . mNumRow = 14 ; out -> mDXICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 63 ) ; out -> mDXICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 4 )
; return out ; } static NeDsMethodOutput * ds_output_ddicr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR . mN = 0 ; out -> mDDICR
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR_P . mNumCol = 14 ; out ->
mDDICR_P . mNumRow = 14 ; out -> mDDICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 15 ) ; out -> mDDICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUICR_P . mNumCol = 4 ; out ->
mTDUICR_P . mNumRow = 14 ; out -> mTDUICR_P . mJc = ( int32_T * ) allocator
-> mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mTDUICR_P . mIr
= ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_icrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM_P . mNumCol = 62 ; out ->
mICRM_P . mNumRow = 14 ; out -> mICRM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 63 ) ; out -> mICRM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM . mN = 0 ; out -> mICRM .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM_P . mNumCol = 62 ; out
-> mDXICRM_P . mNumRow = 0 ; out -> mDXICRM_P . mJc = ( int32_T * ) allocator
-> mCallocFcn ( allocator , sizeof ( int32_T ) , 63 ) ; out -> mDXICRM_P .
mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T )
, 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM . mN = 0 ; out ->
mDXICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM_P . mNumCol =
14 ; out -> mDDICRM_P . mNumRow = 0 ; out -> mDDICRM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 15 ) ; out ->
mDDICRM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM . mN = 0 ; out
-> mDDICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_freqs (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mFREQS . mN = 1 ; out
-> mFREQS . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 1 ) ; return out ; } static NeDsMethodOutput *
ds_output_solverhits ( const NeDynamicSystem * ds , PmAllocator * allocator )
{ NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * )
allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out
-> mSOLVERHITS . mN = 0 ; out -> mSOLVERHITS . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_mduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mMDUY_P . mNumCol = 4 ; out -> mMDUY_P .
mNumRow = 15 ; out -> mMDUY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 5 ) ; out -> mMDUY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_mdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mMDXY_P . mNumCol = 62 ; out -> mMDXY_P .
mNumRow = 15 ; out -> mMDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 63 ) ; out -> mMDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_tduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mTDUY_P . mNumCol = 4 ; out -> mTDUY_P .
mNumRow = 15 ; out -> mTDUY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 5 ) ; out -> mTDUY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; return out ;
} static NeDsMethodOutput * ds_output_tdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mTDXY_P . mNumCol = 62 ; out -> mTDXY_P .
mNumRow = 15 ; out -> mTDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 63 ) ; out -> mTDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 29 ) ; return out
; } static NeDsMethodOutput * ds_output_y ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mY . mN = 15 ; out -> mY . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 15 ) ; return out
; } static NeDsMethodOutput * ds_output_dxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY_P . mNumCol = 62 ; out -> mDXY_P .
mNumRow = 15 ; out -> mDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 63 ) ; out -> mDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 29 ) ; return out
; } static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY . mN = 29 ; out -> mDXY . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 29 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY_P . mNumCol = 4 ; out ->
mDUY_P . mNumRow = 15 ; out -> mDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY . mN = 2 ; out -> mDUY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 2 )
; return out ; } static NeDsMethodOutput * ds_output_dty_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY_P . mNumCol = 1 ; out ->
mDTY_P . mNumRow = 15 ; out -> mDTY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY . mN = 0 ; out -> mDTY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMODE . mN = 80 ; out -> mMODE .
mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) ,
80 ) ; return out ; } static NeDsMethodOutput * ds_output_zc ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mZC . mN = 84 ; out -> mZC . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 84 )
; return out ; } static NeDsMethodOutput * ds_output_cache_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_R . mN = 0 ; out ->
mCACHE_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_I . mN = 64 ;
out -> mCACHE_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 64 ) ; return out ; } static NeDsMethodOutput *
ds_output_update_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mUPDATE_R . mN = 14 ; out -> mUPDATE_R . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 14 ) ; return out ; } static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_I . mN = 5 ; out -> mUPDATE_I . mX
= ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 5
) ; return out ; } static NeDsMethodOutput * ds_output_update2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_R . mN = 14 ; out ->
mUPDATE2_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 14 ) ; return out ; } static NeDsMethodOutput *
ds_output_update2_i ( const NeDynamicSystem * ds , PmAllocator * allocator )
{ NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * )
allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out
-> mUPDATE2_I . mN = 5 ; out -> mUPDATE2_I . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; return out ; } static
NeDsMethodOutput * ds_output_lock_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mLOCK_R . mN = 14 ; out -> mLOCK_R . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 14
) ; return out ; } static NeDsMethodOutput * ds_output_lock_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOCK_I . mN = 5 ; out ->
mLOCK_I . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 5 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock2_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK2_R . mN = 14 ; out -> mLOCK2_R . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 14 ) ; return out ; } static
NeDsMethodOutput * ds_output_lock2_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mLOCK2_I . mN = 5 ; out -> mLOCK2_I . mX =
( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) ,
5 ) ; return out ; } static NeDsMethodOutput * ds_output_sfo ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSFO . mN = 0 ; out -> mSFO . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_sfp ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSFP . mN = 0 ; out -> mSFP . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_init_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_R . mN = 14 ; out ->
mINIT_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 14 ) ; return out ; } static NeDsMethodOutput * ds_output_init_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_I . mN = 5 ; out
-> mINIT_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 5 ) ; return out ; } static NeDsMethodOutput * ds_output_log (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOG . mN = 569 ; out
-> mLOG . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 569 ) ; return out ; } static NeDsMethodOutput * ds_output_assert
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mASSERT . mN = 173 ;
out -> mASSERT . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 173 ) ; return out ; } static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mPASSERT . mN = 0 ; out -> mPASSERT . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIASSERT . mN = 0 ; out -> mIASSERT . mX =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_T . mN = 0 ; out -> mDEL_T
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V . mN = 0 ; out -> mDEL_V
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V0 . mN = 0 ; out ->
mDEL_V0 . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_tmax
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_TMAX . mN = 0 ;
out -> mDEL_TMAX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_dxdelt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT_P . mNumCol = 62 ; out -> mDXDELT_P . mNumRow = 0 ; out -> mDXDELT_P
. mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 63 ) ; out -> mDXDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_dxdelt ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT . mN = 0 ; out -> mDXDELT . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUDELT_P . mNumCol = 4 ; out -> mDUDELT_P
. mNumRow = 0 ; out -> mDUDELT_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mDUDELT_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dudelt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUDELT . mN = 0 ; out ->
mDUDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT_P . mNumCol =
1 ; out -> mDTDELT_P . mNumRow = 0 ; out -> mDTDELT_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mDTDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT . mN = 0 ; out
-> mDTDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_EXP . mN = 717 ;
out -> mOBS_EXP . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 717 ) ; return out ; } static NeDsMethodOutput *
ds_output_obs_act ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mOBS_ACT . mN = 717 ; out -> mOBS_ACT . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 717 ) ; return out ; } static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mOBS_ALL . mN = 717 ; out -> mOBS_ALL . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 717
) ; return out ; } static NeDsMethodOutput * ds_output_obs_il ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_IL . mN = 717 ; out ->
mOBS_IL . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 717 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_l
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_L . mN = 0 ; out
-> mDP_L . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_I . mN = 0 ; out
-> mDP_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_j (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_J . mN = 0 ; out
-> mDP_J . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_R . mN = 0 ; out
-> mDP_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qx (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQX . mN = 0 ; out ->
mQX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qu ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQU . mN = 0 ; out -> mQU . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT . mN = 0 ; out -> mQT . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_q1 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1 . mN = 0 ; out -> mQ1 . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQX_P . mNumCol = 62 ; out -> mQX_P .
mNumRow = 62 ; out -> mQX_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 63 ) ; out -> mQX_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQU_P . mNumCol = 4 ; out -> mQU_P .
mNumRow = 62 ; out -> mQU_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 5 ) ; out -> mQU_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT_P . mNumCol = 1 ; out -> mQT_P .
mNumRow = 62 ; out -> mQT_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQT_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1_P . mNumCol = 1 ; out -> mQ1_P .
mNumRow = 62 ; out -> mQ1_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQ1_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVAR_TOL . mN = 62 ; out -> mVAR_TOL . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 62 ) ;
return out ; } static NeDsMethodOutput * ds_output_eq_tol ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mEQ_TOL . mN = 62 ; out ->
mEQ_TOL . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 62 ) ; return out ; } static NeDsMethodOutput * ds_output_lv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLV . mN = 62 ; out ->
mLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 62 ) ; return out ; } static NeDsMethodOutput * ds_output_slv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLV . mN = 62 ; out
-> mSLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 62 ) ; return out ; } static NeDsMethodOutput * ds_output_nldv
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mNLDV . mN = 62 ; out
-> mNLDV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 62 ) ; return out ; } static NeDsMethodOutput *
ds_output_sclv ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSCLV
. mN = 62 ; out -> mSCLV . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 62 ) ; return out ; } static
NeDsMethodOutput * ds_output_imin ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIMIN . mN = 62 ; out -> mIMIN . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 62 ) ;
return out ; } static NeDsMethodOutput * ds_output_imax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIMAX . mN = 62 ; out -> mIMAX .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
62 ) ; return out ; } static NeDsMethodOutput * ds_output_dimin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMIN . mN = 14 ; out -> mDIMIN
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
14 ) ; return out ; } static NeDsMethodOutput * ds_output_dimax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMAX . mN = 14 ; out -> mDIMAX
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
14 ) ; return out ; } static void release_reference ( NeDynamicSystem * ds )
{ _NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem * ) ds ; if ( -- _ds ->
mRefCnt == 0 ) { _ds -> mAlloc . mFreeFcn ( & _ds -> mAlloc , _ds ) ; } }
static void get_reference ( NeDynamicSystem * ds ) { _NeDynamicSystem * _ds ;
_ds = ( _NeDynamicSystem * ) ds ; ++ _ds -> mRefCnt ; } static
NeDynamicSystem * diagnostics ( NeDynamicSystem * ds , boolean_T kp ) {
_NeDynamicSystem * _ds = ( _NeDynamicSystem * ) ds ; ( void ) kp ;
ne_ds_get_reference ( & _ds -> mBase ) ; return & _ds -> mBase ; } static
void expand ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
PmRealVector * out , boolean_T kp ) { ( void ) ds ; ( void ) kp ; memcpy (
out -> mX , in -> mX . mX , sizeof ( real_T ) * out -> mN ) ; } static void
rtpmap ( const NeDynamicSystem * ds , const PmIntVector * inl , const
PmIntVector * ini , const PmIntVector * inj , const PmRealVector * inr ,
PmIntVector * outl , PmIntVector * outi , PmIntVector * outj , PmRealVector *
outr ) { ( void ) ds ; memcpy ( outl -> mX , inl -> mX , sizeof ( int32_T ) *
inl -> mN ) ; memcpy ( outi -> mX , ini -> mX , sizeof ( int32_T ) * ini ->
mN ) ; memcpy ( outj -> mX , inj -> mX , sizeof ( int32_T ) * inj -> mN ) ;
memcpy ( outr -> mX , inr -> mX , sizeof ( real_T ) * inr -> mN ) ; }
NeDynamicSystem * PowerElecCurriculumDesign_dda62cd9_1_dae_ds ( PmAllocator *
allocator ) { NeDynamicSystem * ds ; _NeDynamicSystem * _ds ; static
SscIoInfo input_info [ 4 ] ; static SscIoInfo output_info [ 15 ] ; _ds = (
_NeDynamicSystem * ) allocator -> mCallocFcn ( allocator , sizeof (
_NeDynamicSystem ) , 1 ) ; _ds -> mAlloc = * allocator ; _ds -> mRefCnt = 1 ;
ds = & _ds -> mBase ; ds -> mNumVariables = 62 ; ds ->
mNumDiscreteRealVariables = 14 ; ds -> mNumDifferentialVariables = 15 ; ds ->
mNumEquations = 62 ; ds -> mNumCEResiduals = 0 ; ds -> mNumICResiduals = 14 ;
ds -> mNumFreqs = 1 ; ds -> mNumSolverHits = 0 ; ds -> mNumModes = 80 ; ds ->
mNumMajorModes = 5 ; ds -> mNumRealCache = 0 ; ds -> mNumIntCache = 64 ; ds
-> mNumObservables = 751 ; ds -> mNumObservableElements = 717 ; ds -> mNumZcs
= 84 ; ds -> mNumAsserts = 173 ; ds -> mNumAssertRanges = 177 ; ds ->
mNumParamAsserts = 0 ; ds -> mNumParamAssertRanges = 0 ; ds ->
mNumInitialAsserts = 0 ; ds -> mNumInitialAssertRanges = 0 ; ds -> mNumRanges
= 84 ; ds -> mNumEquationRanges = 189 ; ds -> mNumCERRanges = 0 ; ds ->
mNumICRRanges = 14 ; ds -> mNumFundamentalSamples = 0 ; ds -> mNumDelays = 0
; ds -> mNumLogicalParameters = 0 ; ds -> mNumIntegerParameters = 0 ; ds ->
mNumIndexParameters = 0 ; ds -> mNumRealParameters = 0 ; ds ->
mNumLogicalDerivedParameters = 0 ; ds -> mNumIntegerDerivedParameters = 0 ;
ds -> mNumIndexDerivedParameters = 0 ; ds -> mNumRealDerivedParameters = 0 ;
ds -> mIsOutputLinear = TRUE ; ds -> mIsOutputSwitchedLinear = TRUE ; ds ->
mIsScalable = FALSE ; ds -> mNumIo [ SSC_INPUT_IO_TYPE ] = 4 ; input_info [ 0
] . identifier = "Simulink_PS_Converter1_output0" ; input_info [ 0 ] . size .
numElements = 1 ; input_info [ 0 ] . size . encodedDimensions = "1x1" ;
input_info [ 0 ] . name = "Simulink_PS_Converter1_output0" ; input_info [ 0 ]
. unit = "1" ; input_info [ 1 ] . identifier =
"Simulink_PS_Converter2_output0" ; input_info [ 1 ] . size . numElements = 1
; input_info [ 1 ] . size . encodedDimensions = "1x1" ; input_info [ 1 ] .
name = "Simulink_PS_Converter2_output0" ; input_info [ 1 ] . unit = "1" ;
input_info [ 2 ] . identifier = "Simulink_PS_Converter3_output0" ; input_info
[ 2 ] . size . numElements = 1 ; input_info [ 2 ] . size . encodedDimensions
= "1x1" ; input_info [ 2 ] . name = "Simulink_PS_Converter3_output0" ;
input_info [ 2 ] . unit = "1" ; input_info [ 3 ] . identifier =
"Simulink_PS_Converter_output0" ; input_info [ 3 ] . size . numElements = 1 ;
input_info [ 3 ] . size . encodedDimensions = "1x1" ; input_info [ 3 ] . name
= "Simulink_PS_Converter_output0" ; input_info [ 3 ] . unit = "1" ; ds -> mIo
[ SSC_INPUT_IO_TYPE ] = input_info ; ds -> mNumIo [ SSC_OUTPUT_IO_TYPE ] = 15
; output_info [ 0 ] . identifier = "Current_Sensor_I0" ; output_info [ 0 ] .
size . numElements = 1 ; output_info [ 0 ] . size . encodedDimensions = "1x1"
; output_info [ 0 ] . name = "Current_Sensor_I0" ; output_info [ 0 ] . unit =
"A" ; output_info [ 1 ] . identifier = "PS_Gain1_O0" ; output_info [ 1 ] .
size . numElements = 1 ; output_info [ 1 ] . size . encodedDimensions = "1x1"
; output_info [ 1 ] . name = "PS_Gain1_O0" ; output_info [ 1 ] . unit = "1" ;
output_info [ 2 ] . identifier = "PS_Gain_O0" ; output_info [ 2 ] . size .
numElements = 1 ; output_info [ 2 ] . size . encodedDimensions = "1x1" ;
output_info [ 2 ] . name = "PS_Gain_O0" ; output_info [ 2 ] . unit = "1" ;
output_info [ 3 ] . identifier = "Voltage_Sensor10_V0" ; output_info [ 3 ] .
size . numElements = 1 ; output_info [ 3 ] . size . encodedDimensions = "1x1"
; output_info [ 3 ] . name = "Voltage_Sensor10_V0" ; output_info [ 3 ] . unit
= "V" ; output_info [ 4 ] . identifier = "Voltage_Sensor11_V0" ; output_info
[ 4 ] . size . numElements = 1 ; output_info [ 4 ] . size . encodedDimensions
= "1x1" ; output_info [ 4 ] . name = "Voltage_Sensor11_V0" ; output_info [ 4
] . unit = "V" ; output_info [ 5 ] . identifier = "Voltage_Sensor1_V0" ;
output_info [ 5 ] . size . numElements = 1 ; output_info [ 5 ] . size .
encodedDimensions = "1x1" ; output_info [ 5 ] . name = "Voltage_Sensor1_V0" ;
output_info [ 5 ] . unit = "V" ; output_info [ 6 ] . identifier =
"Voltage_Sensor2_V0" ; output_info [ 6 ] . size . numElements = 1 ;
output_info [ 6 ] . size . encodedDimensions = "1x1" ; output_info [ 6 ] .
name = "Voltage_Sensor2_V0" ; output_info [ 6 ] . unit = "V" ; output_info [
7 ] . identifier = "Voltage_Sensor3_V0" ; output_info [ 7 ] . size .
numElements = 1 ; output_info [ 7 ] . size . encodedDimensions = "1x1" ;
output_info [ 7 ] . name = "Voltage_Sensor3_V0" ; output_info [ 7 ] . unit =
"V" ; output_info [ 8 ] . identifier = "Voltage_Sensor4_V0" ; output_info [ 8
] . size . numElements = 1 ; output_info [ 8 ] . size . encodedDimensions =
"1x1" ; output_info [ 8 ] . name = "Voltage_Sensor4_V0" ; output_info [ 8 ] .
unit = "V" ; output_info [ 9 ] . identifier = "Voltage_Sensor5_V0" ;
output_info [ 9 ] . size . numElements = 1 ; output_info [ 9 ] . size .
encodedDimensions = "1x1" ; output_info [ 9 ] . name = "Voltage_Sensor5_V0" ;
output_info [ 9 ] . unit = "V" ; output_info [ 10 ] . identifier =
"Voltage_Sensor6_V0" ; output_info [ 10 ] . size . numElements = 1 ;
output_info [ 10 ] . size . encodedDimensions = "1x1" ; output_info [ 10 ] .
name = "Voltage_Sensor6_V0" ; output_info [ 10 ] . unit = "V" ; output_info [
11 ] . identifier = "Voltage_Sensor7_V0" ; output_info [ 11 ] . size .
numElements = 1 ; output_info [ 11 ] . size . encodedDimensions = "1x1" ;
output_info [ 11 ] . name = "Voltage_Sensor7_V0" ; output_info [ 11 ] . unit
= "V" ; output_info [ 12 ] . identifier = "Voltage_Sensor8_V0" ; output_info
[ 12 ] . size . numElements = 1 ; output_info [ 12 ] . size .
encodedDimensions = "1x1" ; output_info [ 12 ] . name = "Voltage_Sensor8_V0"
; output_info [ 12 ] . unit = "V" ; output_info [ 13 ] . identifier =
"Voltage_Sensor9_V0" ; output_info [ 13 ] . size . numElements = 1 ;
output_info [ 13 ] . size . encodedDimensions = "1x1" ; output_info [ 13 ] .
name = "Voltage_Sensor9_V0" ; output_info [ 13 ] . unit = "V" ; output_info [
14 ] . identifier = "Voltage_Sensor_V0" ; output_info [ 14 ] . size .
numElements = 1 ; output_info [ 14 ] . size . encodedDimensions = "1x1" ;
output_info [ 14 ] . name = "Voltage_Sensor_V0" ; output_info [ 14 ] . unit =
"V" ; ds -> mIo [ SSC_OUTPUT_IO_TYPE ] = output_info ; ds ->
mReleaseReference = release_reference ; ds -> mGetReference = get_reference ;
ds -> mDiagnosticsDsFcn = diagnostics ; ds -> mExpandFcn = expand ; ds ->
mRtpMapFcn = rtpmap ; ds -> mMethods [ NE_DS_METHOD_M_P ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_m_p ; ds -> mMakeOutput [
NE_DS_METHOD_M_P ] = ds_output_m_p ; ds -> mMethods [ NE_DS_METHOD_M ] = ds_m
; ds -> mMakeOutput [ NE_DS_METHOD_M ] = ds_output_m ; ds -> mMethods [
NE_DS_METHOD_VMM ] = ds_vmm ; ds -> mMakeOutput [ NE_DS_METHOD_VMM ] =
ds_output_vmm ; ds -> mMethods [ NE_DS_METHOD_DXM_P ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_dxm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXM_P ] = ds_output_dxm_p ; ds -> mMethods [ NE_DS_METHOD_DXM ]
= ds_dxm ; ds -> mMakeOutput [ NE_DS_METHOD_DXM ] = ds_output_dxm ; ds ->
mMethods [ NE_DS_METHOD_DDM_P ] = ds_ddm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DDM_P ] = ds_output_ddm_p ; ds -> mMethods [ NE_DS_METHOD_DDM ]
= ds_ddm ; ds -> mMakeOutput [ NE_DS_METHOD_DDM ] = ds_output_ddm ; ds ->
mMethods [ NE_DS_METHOD_DUM_P ] = ds_dum_p ; ds -> mMakeOutput [
NE_DS_METHOD_DUM_P ] = ds_output_dum_p ; ds -> mMethods [ NE_DS_METHOD_DUM ]
= ds_dum ; ds -> mMakeOutput [ NE_DS_METHOD_DUM ] = ds_output_dum ; ds ->
mMethods [ NE_DS_METHOD_DTM_P ] = ds_dtm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTM_P ] = ds_output_dtm_p ; ds -> mMethods [ NE_DS_METHOD_DTM ]
= ds_dtm ; ds -> mMakeOutput [ NE_DS_METHOD_DTM ] = ds_output_dtm ; ds ->
mMethods [ NE_DS_METHOD_DPM_P ] = ds_dpm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DPM_P ] = ds_output_dpm_p ; ds -> mMethods [ NE_DS_METHOD_DPM ]
= ds_dpm ; ds -> mMakeOutput [ NE_DS_METHOD_DPM ] = ds_output_dpm ; ds ->
mMethods [ NE_DS_METHOD_A_P ] = PowerElecCurriculumDesign_dda62cd9_1_ds_a_p ;
ds -> mMakeOutput [ NE_DS_METHOD_A_P ] = ds_output_a_p ; ds -> mMethods [
NE_DS_METHOD_A ] = PowerElecCurriculumDesign_dda62cd9_1_ds_a ; ds ->
mMakeOutput [ NE_DS_METHOD_A ] = ds_output_a ; ds -> mMethods [
NE_DS_METHOD_B_P ] = ds_b_p ; ds -> mMakeOutput [ NE_DS_METHOD_B_P ] =
ds_output_b_p ; ds -> mMethods [ NE_DS_METHOD_B ] = ds_b ; ds -> mMakeOutput
[ NE_DS_METHOD_B ] = ds_output_b ; ds -> mMethods [ NE_DS_METHOD_C_P ] =
ds_c_p ; ds -> mMakeOutput [ NE_DS_METHOD_C_P ] = ds_output_c_p ; ds ->
mMethods [ NE_DS_METHOD_C ] = ds_c ; ds -> mMakeOutput [ NE_DS_METHOD_C ] =
ds_output_c ; ds -> mMethods [ NE_DS_METHOD_F ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_f ; ds -> mMakeOutput [
NE_DS_METHOD_F ] = ds_output_f ; ds -> mMethods [ NE_DS_METHOD_VMF ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_vmf ; ds -> mMakeOutput [
NE_DS_METHOD_VMF ] = ds_output_vmf ; ds -> mMethods [ NE_DS_METHOD_VPF ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_vpf ; ds -> mMakeOutput [
NE_DS_METHOD_VPF ] = ds_output_vpf ; ds -> mMethods [ NE_DS_METHOD_VSF ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_vsf ; ds -> mMakeOutput [
NE_DS_METHOD_VSF ] = ds_output_vsf ; ds -> mMethods [ NE_DS_METHOD_SLF ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_slf ; ds -> mMakeOutput [
NE_DS_METHOD_SLF ] = ds_output_slf ; ds -> mMethods [ NE_DS_METHOD_SLF0 ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_slf0 ; ds -> mMakeOutput [
NE_DS_METHOD_SLF0 ] = ds_output_slf0 ; ds -> mMethods [ NE_DS_METHOD_DXF_P ]
= PowerElecCurriculumDesign_dda62cd9_1_ds_dxf_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXF_P ] = ds_output_dxf_p ; ds -> mMethods [ NE_DS_METHOD_DXF ]
= PowerElecCurriculumDesign_dda62cd9_1_ds_dxf ; ds -> mMakeOutput [
NE_DS_METHOD_DXF ] = ds_output_dxf ; ds -> mMethods [ NE_DS_METHOD_DUF_P ] =
ds_duf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DUF_P ] = ds_output_duf_p ; ds ->
mMethods [ NE_DS_METHOD_DUF ] = ds_duf ; ds -> mMakeOutput [ NE_DS_METHOD_DUF
] = ds_output_duf ; ds -> mMethods [ NE_DS_METHOD_DTF_P ] = ds_dtf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTF_P ] = ds_output_dtf_p ; ds -> mMethods [
NE_DS_METHOD_DTF ] = ds_dtf ; ds -> mMakeOutput [ NE_DS_METHOD_DTF ] =
ds_output_dtf ; ds -> mMethods [ NE_DS_METHOD_DDF_P ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_ddf_p ; ds -> mMakeOutput [
NE_DS_METHOD_DDF_P ] = ds_output_ddf_p ; ds -> mMethods [ NE_DS_METHOD_DDF ]
= PowerElecCurriculumDesign_dda62cd9_1_ds_ddf ; ds -> mMakeOutput [
NE_DS_METHOD_DDF ] = ds_output_ddf ; ds -> mMethods [ NE_DS_METHOD_DPDXF_P ]
= ds_dpdxf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DPDXF_P ] = ds_output_dpdxf_p
; ds -> mMethods [ NE_DS_METHOD_DPDXF ] = ds_dpdxf ; ds -> mMakeOutput [
NE_DS_METHOD_DPDXF ] = ds_output_dpdxf ; ds -> mMethods [ NE_DS_METHOD_DWF_P
] = ds_dwf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DWF_P ] = ds_output_dwf_p ;
ds -> mMethods [ NE_DS_METHOD_DWF ] = ds_dwf ; ds -> mMakeOutput [
NE_DS_METHOD_DWF ] = ds_output_dwf ; ds -> mMethods [ NE_DS_METHOD_TDUF_P ] =
ds_tduf_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDUF_P ] = ds_output_tduf_p ; ds
-> mMethods [ NE_DS_METHOD_TDXF_P ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_tdxf_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDXF_P ] = ds_output_tdxf_p ; ds -> mMethods [
NE_DS_METHOD_DNF_P ] = PowerElecCurriculumDesign_dda62cd9_1_ds_dnf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF_P ] = ds_output_dnf_p ; ds -> mMethods [
NE_DS_METHOD_DNF ] = ds_dnf ; ds -> mMakeOutput [ NE_DS_METHOD_DNF ] =
ds_output_dnf ; ds -> mMethods [ NE_DS_METHOD_DNF_V_X ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_dnf_v_x ; ds -> mMakeOutput [
NE_DS_METHOD_DNF_V_X ] = ds_output_dnf_v_x ; ds -> mMethods [
NE_DS_METHOD_CER ] = ds_cer ; ds -> mMakeOutput [ NE_DS_METHOD_CER ] =
ds_output_cer ; ds -> mMethods [ NE_DS_METHOD_DXCER ] = ds_dxcer ; ds ->
mMakeOutput [ NE_DS_METHOD_DXCER ] = ds_output_dxcer ; ds -> mMethods [
NE_DS_METHOD_DXCER_P ] = PowerElecCurriculumDesign_dda62cd9_1_ds_dxcer_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DXCER_P ] = ds_output_dxcer_p ; ds -> mMethods
[ NE_DS_METHOD_DDCER ] = ds_ddcer ; ds -> mMakeOutput [ NE_DS_METHOD_DDCER ]
= ds_output_ddcer ; ds -> mMethods [ NE_DS_METHOD_DDCER_P ] = ds_ddcer_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDCER_P ] = ds_output_ddcer_p ; ds -> mMethods
[ NE_DS_METHOD_IC ] = PowerElecCurriculumDesign_dda62cd9_1_ds_ic ; ds ->
mMakeOutput [ NE_DS_METHOD_IC ] = ds_output_ic ; ds -> mMethods [
NE_DS_METHOD_ICR ] = ds_icr ; ds -> mMakeOutput [ NE_DS_METHOD_ICR ] =
ds_output_icr ; ds -> mMethods [ NE_DS_METHOD_ICR_IM ] = ds_icr_im ; ds ->
mMakeOutput [ NE_DS_METHOD_ICR_IM ] = ds_output_icr_im ; ds -> mMethods [
NE_DS_METHOD_ICR_ID ] = ds_icr_id ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_ID ]
= ds_output_icr_id ; ds -> mMethods [ NE_DS_METHOD_ICR_IL ] = ds_icr_il ; ds
-> mMakeOutput [ NE_DS_METHOD_ICR_IL ] = ds_output_icr_il ; ds -> mMethods [
NE_DS_METHOD_DXICR ] = ds_dxicr ; ds -> mMakeOutput [ NE_DS_METHOD_DXICR ] =
ds_output_dxicr ; ds -> mMethods [ NE_DS_METHOD_DXICR_P ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_dxicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXICR_P ] = ds_output_dxicr_p ; ds -> mMethods [
NE_DS_METHOD_DDICR ] = ds_ddicr ; ds -> mMakeOutput [ NE_DS_METHOD_DDICR ] =
ds_output_ddicr ; ds -> mMethods [ NE_DS_METHOD_DDICR_P ] = ds_ddicr_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDICR_P ] = ds_output_ddicr_p ; ds -> mMethods
[ NE_DS_METHOD_TDUICR_P ] = ds_tduicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDUICR_P ] = ds_output_tduicr_p ; ds -> mMethods [
NE_DS_METHOD_ICRM_P ] = PowerElecCurriculumDesign_dda62cd9_1_ds_icrm_p ; ds
-> mMakeOutput [ NE_DS_METHOD_ICRM_P ] = ds_output_icrm_p ; ds -> mMethods [
NE_DS_METHOD_ICRM ] = ds_icrm ; ds -> mMakeOutput [ NE_DS_METHOD_ICRM ] =
ds_output_icrm ; ds -> mMethods [ NE_DS_METHOD_DXICRM_P ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_dxicrm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXICRM_P ] = ds_output_dxicrm_p ; ds -> mMethods [
NE_DS_METHOD_DXICRM ] = ds_dxicrm ; ds -> mMakeOutput [ NE_DS_METHOD_DXICRM ]
= ds_output_dxicrm ; ds -> mMethods [ NE_DS_METHOD_DDICRM_P ] = ds_ddicrm_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DDICRM_P ] = ds_output_ddicrm_p ; ds ->
mMethods [ NE_DS_METHOD_DDICRM ] = ds_ddicrm ; ds -> mMakeOutput [
NE_DS_METHOD_DDICRM ] = ds_output_ddicrm ; ds -> mMethods [
NE_DS_METHOD_FREQS ] = ds_freqs ; ds -> mMakeOutput [ NE_DS_METHOD_FREQS ] =
ds_output_freqs ; ds -> mMethods [ NE_DS_METHOD_SOLVERHITS ] = ds_solverhits
; ds -> mMakeOutput [ NE_DS_METHOD_SOLVERHITS ] = ds_output_solverhits ; ds
-> mMethods [ NE_DS_METHOD_MDUY_P ] = ds_mduy_p ; ds -> mMakeOutput [
NE_DS_METHOD_MDUY_P ] = ds_output_mduy_p ; ds -> mMethods [
NE_DS_METHOD_MDXY_P ] = PowerElecCurriculumDesign_dda62cd9_1_ds_mdxy_p ; ds
-> mMakeOutput [ NE_DS_METHOD_MDXY_P ] = ds_output_mdxy_p ; ds -> mMethods [
NE_DS_METHOD_TDUY_P ] = ds_tduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDUY_P ]
= ds_output_tduy_p ; ds -> mMethods [ NE_DS_METHOD_TDXY_P ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_tdxy_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDXY_P ] = ds_output_tdxy_p ; ds -> mMethods [ NE_DS_METHOD_Y ]
= PowerElecCurriculumDesign_dda62cd9_1_ds_y ; ds -> mMakeOutput [
NE_DS_METHOD_Y ] = ds_output_y ; ds -> mMethods [ NE_DS_METHOD_DXY_P ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_dxy_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXY_P ] = ds_output_dxy_p ; ds -> mMethods [ NE_DS_METHOD_DXY ]
= PowerElecCurriculumDesign_dda62cd9_1_ds_dxy ; ds -> mMakeOutput [
NE_DS_METHOD_DXY ] = ds_output_dxy ; ds -> mMethods [ NE_DS_METHOD_DUY_P ] =
ds_duy_p ; ds -> mMakeOutput [ NE_DS_METHOD_DUY_P ] = ds_output_duy_p ; ds ->
mMethods [ NE_DS_METHOD_DUY ] = ds_duy ; ds -> mMakeOutput [ NE_DS_METHOD_DUY
] = ds_output_duy ; ds -> mMethods [ NE_DS_METHOD_DTY_P ] = ds_dty_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTY_P ] = ds_output_dty_p ; ds -> mMethods [
NE_DS_METHOD_DTY ] = ds_dty ; ds -> mMakeOutput [ NE_DS_METHOD_DTY ] =
ds_output_dty ; ds -> mMethods [ NE_DS_METHOD_MODE ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_mode ; ds -> mMakeOutput [
NE_DS_METHOD_MODE ] = ds_output_mode ; ds -> mMethods [ NE_DS_METHOD_ZC ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_zc ; ds -> mMakeOutput [
NE_DS_METHOD_ZC ] = ds_output_zc ; ds -> mMethods [ NE_DS_METHOD_CACHE_R ] =
ds_cache_r ; ds -> mMakeOutput [ NE_DS_METHOD_CACHE_R ] = ds_output_cache_r ;
ds -> mMethods [ NE_DS_METHOD_CACHE_I ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_cache_i ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_I ] = ds_output_cache_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE_R ] = PowerElecCurriculumDesign_dda62cd9_1_ds_update_r ;
ds -> mMakeOutput [ NE_DS_METHOD_UPDATE_R ] = ds_output_update_r ; ds ->
mMethods [ NE_DS_METHOD_UPDATE_I ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_update_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_I ] = ds_output_update_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_R ] = PowerElecCurriculumDesign_dda62cd9_1_ds_update2_r
; ds -> mMakeOutput [ NE_DS_METHOD_UPDATE2_R ] = ds_output_update2_r ; ds ->
mMethods [ NE_DS_METHOD_UPDATE2_I ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_update2_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_I ] = ds_output_update2_i ; ds -> mMethods [
NE_DS_METHOD_LOCK_R ] = PowerElecCurriculumDesign_dda62cd9_1_ds_lock_r ; ds
-> mMakeOutput [ NE_DS_METHOD_LOCK_R ] = ds_output_lock_r ; ds -> mMethods [
NE_DS_METHOD_LOCK_I ] = PowerElecCurriculumDesign_dda62cd9_1_ds_lock_i ; ds
-> mMakeOutput [ NE_DS_METHOD_LOCK_I ] = ds_output_lock_i ; ds -> mMethods [
NE_DS_METHOD_LOCK2_R ] = PowerElecCurriculumDesign_dda62cd9_1_ds_lock2_r ; ds
-> mMakeOutput [ NE_DS_METHOD_LOCK2_R ] = ds_output_lock2_r ; ds -> mMethods
[ NE_DS_METHOD_LOCK2_I ] = PowerElecCurriculumDesign_dda62cd9_1_ds_lock2_i ;
ds -> mMakeOutput [ NE_DS_METHOD_LOCK2_I ] = ds_output_lock2_i ; ds ->
mMethods [ NE_DS_METHOD_SFO ] = ds_sfo ; ds -> mMakeOutput [ NE_DS_METHOD_SFO
] = ds_output_sfo ; ds -> mMethods [ NE_DS_METHOD_SFP ] = ds_sfp ; ds ->
mMakeOutput [ NE_DS_METHOD_SFP ] = ds_output_sfp ; ds -> mMethods [
NE_DS_METHOD_INIT_R ] = ds_init_r ; ds -> mMakeOutput [ NE_DS_METHOD_INIT_R ]
= ds_output_init_r ; ds -> mMethods [ NE_DS_METHOD_INIT_I ] = ds_init_i ; ds
-> mMakeOutput [ NE_DS_METHOD_INIT_I ] = ds_output_init_i ; ds -> mMethods [
NE_DS_METHOD_LOG ] = PowerElecCurriculumDesign_dda62cd9_1_ds_log ; ds ->
mMakeOutput [ NE_DS_METHOD_LOG ] = ds_output_log ; ds -> mMethods [
NE_DS_METHOD_ASSERT ] = PowerElecCurriculumDesign_dda62cd9_1_ds_assert ; ds
-> mMakeOutput [ NE_DS_METHOD_ASSERT ] = ds_output_assert ; ds -> mMethods [
NE_DS_METHOD_PASSERT ] = ds_passert ; ds -> mMakeOutput [
NE_DS_METHOD_PASSERT ] = ds_output_passert ; ds -> mMethods [
NE_DS_METHOD_IASSERT ] = ds_iassert ; ds -> mMakeOutput [
NE_DS_METHOD_IASSERT ] = ds_output_iassert ; ds -> mMethods [
NE_DS_METHOD_DEL_T ] = ds_del_t ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_T ] =
ds_output_del_t ; ds -> mMethods [ NE_DS_METHOD_DEL_V ] = ds_del_v ; ds ->
mMakeOutput [ NE_DS_METHOD_DEL_V ] = ds_output_del_v ; ds -> mMethods [
NE_DS_METHOD_DEL_V0 ] = ds_del_v0 ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_V0 ]
= ds_output_del_v0 ; ds -> mMethods [ NE_DS_METHOD_DEL_TMAX ] = ds_del_tmax ;
ds -> mMakeOutput [ NE_DS_METHOD_DEL_TMAX ] = ds_output_del_tmax ; ds ->
mMethods [ NE_DS_METHOD_DXDELT_P ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_dxdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXDELT_P ] = ds_output_dxdelt_p ; ds -> mMethods [
NE_DS_METHOD_DXDELT ] = ds_dxdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DXDELT ]
= ds_output_dxdelt ; ds -> mMethods [ NE_DS_METHOD_DUDELT_P ] = ds_dudelt_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DUDELT_P ] = ds_output_dudelt_p ; ds ->
mMethods [ NE_DS_METHOD_DUDELT ] = ds_dudelt ; ds -> mMakeOutput [
NE_DS_METHOD_DUDELT ] = ds_output_dudelt ; ds -> mMethods [
NE_DS_METHOD_DTDELT_P ] = ds_dtdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTDELT_P ] = ds_output_dtdelt_p ; ds -> mMethods [
NE_DS_METHOD_DTDELT ] = ds_dtdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DTDELT ]
= ds_output_dtdelt ; ds -> mMethods [ NE_DS_METHOD_OBS_EXP ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_obs_exp ; ds -> mMakeOutput [
NE_DS_METHOD_OBS_EXP ] = ds_output_obs_exp ; ds -> mMethods [
NE_DS_METHOD_OBS_ACT ] = PowerElecCurriculumDesign_dda62cd9_1_ds_obs_act ; ds
-> mMakeOutput [ NE_DS_METHOD_OBS_ACT ] = ds_output_obs_act ; ds -> mMethods
[ NE_DS_METHOD_OBS_ALL ] = PowerElecCurriculumDesign_dda62cd9_1_ds_obs_all ;
ds -> mMakeOutput [ NE_DS_METHOD_OBS_ALL ] = ds_output_obs_all ; ds ->
mMethods [ NE_DS_METHOD_OBS_IL ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_obs_il ; ds -> mMakeOutput [
NE_DS_METHOD_OBS_IL ] = ds_output_obs_il ; ds -> mMethods [ NE_DS_METHOD_DP_L
] = ds_dp_l ; ds -> mMakeOutput [ NE_DS_METHOD_DP_L ] = ds_output_dp_l ; ds
-> mMethods [ NE_DS_METHOD_DP_I ] = ds_dp_i ; ds -> mMakeOutput [
NE_DS_METHOD_DP_I ] = ds_output_dp_i ; ds -> mMethods [ NE_DS_METHOD_DP_J ] =
ds_dp_j ; ds -> mMakeOutput [ NE_DS_METHOD_DP_J ] = ds_output_dp_j ; ds ->
mMethods [ NE_DS_METHOD_DP_R ] = ds_dp_r ; ds -> mMakeOutput [
NE_DS_METHOD_DP_R ] = ds_output_dp_r ; ds -> mMethods [ NE_DS_METHOD_QX ] =
ds_qx ; ds -> mMakeOutput [ NE_DS_METHOD_QX ] = ds_output_qx ; ds -> mMethods
[ NE_DS_METHOD_QU ] = ds_qu ; ds -> mMakeOutput [ NE_DS_METHOD_QU ] =
ds_output_qu ; ds -> mMethods [ NE_DS_METHOD_QT ] = ds_qt ; ds -> mMakeOutput
[ NE_DS_METHOD_QT ] = ds_output_qt ; ds -> mMethods [ NE_DS_METHOD_Q1 ] =
ds_q1 ; ds -> mMakeOutput [ NE_DS_METHOD_Q1 ] = ds_output_q1 ; ds -> mMethods
[ NE_DS_METHOD_QX_P ] = PowerElecCurriculumDesign_dda62cd9_1_ds_qx_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QX_P ] = ds_output_qx_p ; ds -> mMethods [
NE_DS_METHOD_QU_P ] = ds_qu_p ; ds -> mMakeOutput [ NE_DS_METHOD_QU_P ] =
ds_output_qu_p ; ds -> mMethods [ NE_DS_METHOD_QT_P ] = ds_qt_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QT_P ] = ds_output_qt_p ; ds -> mMethods [
NE_DS_METHOD_Q1_P ] = ds_q1_p ; ds -> mMakeOutput [ NE_DS_METHOD_Q1_P ] =
ds_output_q1_p ; ds -> mMethods [ NE_DS_METHOD_VAR_TOL ] =
PowerElecCurriculumDesign_dda62cd9_1_ds_var_tol ; ds -> mMakeOutput [
NE_DS_METHOD_VAR_TOL ] = ds_output_var_tol ; ds -> mMethods [
NE_DS_METHOD_EQ_TOL ] = PowerElecCurriculumDesign_dda62cd9_1_ds_eq_tol ; ds
-> mMakeOutput [ NE_DS_METHOD_EQ_TOL ] = ds_output_eq_tol ; ds -> mMethods [
NE_DS_METHOD_LV ] = PowerElecCurriculumDesign_dda62cd9_1_ds_lv ; ds ->
mMakeOutput [ NE_DS_METHOD_LV ] = ds_output_lv ; ds -> mMethods [
NE_DS_METHOD_SLV ] = PowerElecCurriculumDesign_dda62cd9_1_ds_slv ; ds ->
mMakeOutput [ NE_DS_METHOD_SLV ] = ds_output_slv ; ds -> mMethods [
NE_DS_METHOD_NLDV ] = PowerElecCurriculumDesign_dda62cd9_1_ds_nldv ; ds ->
mMakeOutput [ NE_DS_METHOD_NLDV ] = ds_output_nldv ; ds -> mMethods [
NE_DS_METHOD_SCLV ] = PowerElecCurriculumDesign_dda62cd9_1_ds_sclv ; ds ->
mMakeOutput [ NE_DS_METHOD_SCLV ] = ds_output_sclv ; ds -> mMethods [
NE_DS_METHOD_IMIN ] = PowerElecCurriculumDesign_dda62cd9_1_ds_imin ; ds ->
mMakeOutput [ NE_DS_METHOD_IMIN ] = ds_output_imin ; ds -> mMethods [
NE_DS_METHOD_IMAX ] = PowerElecCurriculumDesign_dda62cd9_1_ds_imax ; ds ->
mMakeOutput [ NE_DS_METHOD_IMAX ] = ds_output_imax ; ds -> mMethods [
NE_DS_METHOD_DIMIN ] = ds_dimin ; ds -> mMakeOutput [ NE_DS_METHOD_DIMIN ] =
ds_output_dimin ; ds -> mMethods [ NE_DS_METHOD_DIMAX ] = ds_dimax ; ds ->
mMakeOutput [ NE_DS_METHOD_DIMAX ] = ds_output_dimax ; ds -> mEquationData =
s_equation_data ; ds -> mCERData = s_cer_data ; ds -> mICRData = s_icr_data ;
ds -> mVariableData = s_variable_data ; ds -> mDiscreteData = s_discrete_data
; ds -> mObservableData = s_observable_data ; ds -> mMajorModeData =
s_major_mode_data ; ds -> mZCData = s_zc_data ; ds -> mRanges = s_range ; ds
-> mAssertData = s_assert_data ; ds -> mAssertRanges = s_assert_range ; ds ->
mParamAssertData = s_param_assert_data ; ds -> mParamAssertRanges =
s_param_assert_range ; ds -> mInitialAssertData = s_initial_assert_data ; ds
-> mInitialAssertRanges = s_initial_assert_range ; ds -> mEquationRanges =
s_equation_range ; ds -> mCERRanges = s_cer_range ; ds -> mICRRanges =
s_icr_range ; ds -> mLogicalParameters = s_logical_parameter_data ; ds ->
mIntegerParameters = s_integer_parameter_data ; ds -> mIndexParameters =
s_index_parameter_data ; ds -> mRealParameters = s_real_parameter_data ; ds
-> mNumLargeArray = 0 ; return ( NeDynamicSystem * ) _ds ; } static int32_T
ds_passert ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_iassert ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_cer ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_dxcer ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_ddcer ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_ddcer_p ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
out -> mDDCER_P . mNumCol = 14ULL ; out -> mDDCER_P . mNumRow = 0ULL ; out ->
mDDCER_P . mJc [ 0 ] = 0 ; out -> mDDCER_P . mJc [ 1 ] = 0 ; out -> mDDCER_P
. mJc [ 2 ] = 0 ; out -> mDDCER_P . mJc [ 3 ] = 0 ; out -> mDDCER_P . mJc [ 4
] = 0 ; out -> mDDCER_P . mJc [ 5 ] = 0 ; out -> mDDCER_P . mJc [ 6 ] = 0 ;
out -> mDDCER_P . mJc [ 7 ] = 0 ; out -> mDDCER_P . mJc [ 8 ] = 0 ; out ->
mDDCER_P . mJc [ 9 ] = 0 ; out -> mDDCER_P . mJc [ 10 ] = 0 ; out -> mDDCER_P
. mJc [ 11 ] = 0 ; out -> mDDCER_P . mJc [ 12 ] = 0 ; out -> mDDCER_P . mJc [
13 ] = 0 ; out -> mDDCER_P . mJc [ 14 ] = 0 ; ( void ) sys ; ( void ) out ;
return 0 ; } static int32_T ds_del_v ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_del_v0 (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_del_tmax ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_del_t ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_dxdelt ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_dudelt ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_dudelt_p ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
out -> mDUDELT_P . mNumCol = 4ULL ; out -> mDUDELT_P . mNumRow = 0ULL ; out
-> mDUDELT_P . mJc [ 0 ] = 0 ; out -> mDUDELT_P . mJc [ 1 ] = 0 ; out ->
mDUDELT_P . mJc [ 2 ] = 0 ; out -> mDUDELT_P . mJc [ 3 ] = 0 ; out ->
mDUDELT_P . mJc [ 4 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; } static
int32_T ds_dtdelt ( const NeDynamicSystem * sys , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ;
( void ) out ; return 0 ; } static int32_T ds_dtdelt_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; out -> mDTDELT_P . mNumCol = 1ULL ; out -> mDTDELT_P .
mNumRow = 0ULL ; out -> mDTDELT_P . mJc [ 0 ] = 0 ; out -> mDTDELT_P . mJc [
1 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_cache_r ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_init_r ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
out -> mINIT_R . mX [ 0 ] = 0.0 ; out -> mINIT_R . mX [ 1 ] = 0.0 ; out ->
mINIT_R . mX [ 2 ] = 0.0 ; out -> mINIT_R . mX [ 3 ] = 0.0 ; out -> mINIT_R .
mX [ 4 ] = 0.0 ; out -> mINIT_R . mX [ 5 ] = 0.0 ; out -> mINIT_R . mX [ 6 ]
= 0.0 ; out -> mINIT_R . mX [ 7 ] = 0.0 ; out -> mINIT_R . mX [ 8 ] = 0.0 ;
out -> mINIT_R . mX [ 9 ] = 0.0 ; out -> mINIT_R . mX [ 10 ] = 0.0 ; out ->
mINIT_R . mX [ 11 ] = 0.0 ; out -> mINIT_R . mX [ 12 ] = 0.0 ; out -> mINIT_R
. mX [ 13 ] = 0.0 ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_init_i ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mINIT_I . mX [ 0 ] = 1 ; out
-> mINIT_I . mX [ 1 ] = 1 ; out -> mINIT_I . mX [ 2 ] = 1 ; out -> mINIT_I .
mX [ 3 ] = 1 ; out -> mINIT_I . mX [ 4 ] = 1 ; ( void ) sys ; ( void ) out ;
return 0 ; } static int32_T ds_sfp ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_sfo (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_duf ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t5 , NeDsMethodOutput * out ) { real_T
intermediate_der378 ; real_T t2 ; real_T t3 ; if ( t5 -> mM . mX [ 70ULL ] !=
0 ) { t3 = 1.0 ; } else { t3 = t5 -> mM . mX [ 71ULL ] != 0 ? 999.0 : t5 ->
mU . mX [ 3ULL ] * 998.0 + 1.0 ; } if ( t5 -> mM . mX [ 70ULL ] != 0 ) {
intermediate_der378 = 0.0 ; } else { intermediate_der378 = t5 -> mM . mX [
71ULL ] != 0 ? 0.0 : 998.0 ; } t2 = t3 * t3 ; out -> mDUF . mX [ 0ULL ] = - (
t5 -> mX . mX [ 27ULL ] / ( t2 == 0.0 ? 1.0E-16 : t2 ) * intermediate_der378
) ; t3 = ( 1000.0 - t3 ) * ( 1000.0 - t3 ) ; out -> mDUF . mX [ 1ULL ] = - (
- ( 10.0 - t5 -> mX . mX [ 27ULL ] ) / ( t3 == 0.0 ? 1.0E-16 : t3 ) * -
intermediate_der378 ) ; ( void ) sys ; ( void ) out ; return 0 ; } static
int32_T ds_duf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { static int32_T _cg_const_1 [ 5 ] = { 0 , 0 ,
0 , 0 , 2 } ; ( void ) t1 ; out -> mDUF_P . mNumCol = 4ULL ; out -> mDUF_P .
mNumRow = 62ULL ; out -> mDUF_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out ->
mDUF_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mDUF_P . mJc [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mDUF_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mDUF_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mDUF_P . mIr [ 0 ] = 52 ; out
-> mDUF_P . mIr [ 1 ] = 53 ; ( void ) sys ; ( void ) out ; return 0 ; }
static int32_T ds_dtf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { out -> mDTF . mX [
0ULL ] = - ( cos ( t1 -> mT . mX [ 0ULL ] * 314.15926535897933 ) *
97703.531526642575 ) ; ( void ) sys ; ( void ) out ; return 0 ; } static
int32_T ds_dtf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDTF_P . mNumCol = 1ULL
; out -> mDTF_P . mNumRow = 62ULL ; out -> mDTF_P . mJc [ 0 ] = 0 ; out ->
mDTF_P . mJc [ 1 ] = 1 ; out -> mDTF_P . mIr [ 0 ] = 15 ; ( void ) sys ; (
void ) out ; return 0 ; } static int32_T ds_b ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_b_p
( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mB_P . mNumCol = 4ULL ; out
-> mB_P . mNumRow = 62ULL ; out -> mB_P . mJc [ 0 ] = 0 ; out -> mB_P . mJc [
1 ] = 0 ; out -> mB_P . mJc [ 2 ] = 0 ; out -> mB_P . mJc [ 3 ] = 0 ; out ->
mB_P . mJc [ 4 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; } static
int32_T ds_c ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1
, NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; (
void ) out ; return 0 ; } static int32_T ds_c_p ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
out -> mC_P . mNumCol = 1ULL ; out -> mC_P . mNumRow = 62ULL ; out -> mC_P .
mJc [ 0 ] = 0 ; out -> mC_P . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) out ;
return 0 ; } static int32_T ds_tduf_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_2 [ 7 ] = { 43 , 44 , 47 , 45 , 46 , 52 , 53 } ; static int32_T
_cg_const_1 [ 5 ] = { 0 , 1 , 3 , 5 , 7 } ; ( void ) t1 ; out -> mTDUF_P .
mNumCol = 4ULL ; out -> mTDUF_P . mNumRow = 62ULL ; out -> mTDUF_P . mJc [ 0
] = _cg_const_1 [ 0 ] ; out -> mTDUF_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out
-> mTDUF_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mTDUF_P . mJc [ 3 ] =
_cg_const_1 [ 3 ] ; out -> mTDUF_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out ->
mTDUF_P . mIr [ 0 ] = _cg_const_2 [ 0 ] ; out -> mTDUF_P . mIr [ 1 ] =
_cg_const_2 [ 1 ] ; out -> mTDUF_P . mIr [ 2 ] = _cg_const_2 [ 2 ] ; out ->
mTDUF_P . mIr [ 3 ] = _cg_const_2 [ 3 ] ; out -> mTDUF_P . mIr [ 4 ] =
_cg_const_2 [ 4 ] ; out -> mTDUF_P . mIr [ 5 ] = _cg_const_2 [ 5 ] ; out ->
mTDUF_P . mIr [ 6 ] = _cg_const_2 [ 6 ] ; ( void ) sys ; ( void ) out ;
return 0 ; } static int32_T ds_dwf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_dwf_p (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDWF_P . mNumCol = 0ULL ; out
-> mDWF_P . mNumRow = 62ULL ; out -> mDWF_P . mJc [ 0 ] = 0 ; ( void ) sys ;
( void ) out ; return 0 ; } static int32_T ds_dpdxf ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void )
t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_dpdxf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDPDXF_P . mNumCol = 0ULL ;
out -> mDPDXF_P . mNumRow = 147ULL ; out -> mDPDXF_P . mJc [ 0 ] = 0 ; ( void
) sys ; ( void ) out ; return 0 ; } static int32_T ds_dnf ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static real_T _cg_const_1 [ 4 ] = { - 2.5739080686533654E-13 , -
1.9907674850572683E-11 , - 2.5739080686533654E-13 , - 1.9907674850572683E-11
} ; ( void ) t1 ; out -> mDNF . mX [ 0 ] = _cg_const_1 [ 0 ] ; out -> mDNF .
mX [ 1 ] = _cg_const_1 [ 1 ] ; out -> mDNF . mX [ 2 ] = _cg_const_1 [ 2 ] ;
out -> mDNF . mX [ 3 ] = _cg_const_1 [ 3 ] ; ( void ) sys ; ( void ) out ;
return 0 ; } static int32_T ds_freqs ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out ->
mFREQS . mX [ 0 ] = 314.15926535897933 ; ( void ) sys ; ( void ) out ; return
0 ; } static int32_T ds_icr ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { out -> mICR . mX [
10ULL ] = t1 -> mX . mX [ 12ULL ] * 4.9999999999999996E-6 ; out -> mICR . mX
[ 11ULL ] = t1 -> mX . mX [ 13ULL ] * 4.9999999999999996E-6 ; out -> mICR .
mX [ 12ULL ] = t1 -> mX . mX [ 11ULL ] * 4.9999999999999996E-6 ; out -> mICR
. mX [ 13ULL ] = t1 -> mX . mX [ 14ULL ] * 4.9999999999999996E-6 ; out ->
mICR . mX [ 0ULL ] = 0.0 ; out -> mICR . mX [ 1ULL ] = 0.0 ; out -> mICR . mX
[ 2ULL ] = 0.0 ; out -> mICR . mX [ 3ULL ] = 0.0 ; out -> mICR . mX [ 4ULL ]
= 0.0 ; out -> mICR . mX [ 5ULL ] = 0.0 ; out -> mICR . mX [ 6ULL ] = 0.0 ;
out -> mICR . mX [ 7ULL ] = 0.0 ; out -> mICR . mX [ 8ULL ] = 0.0 ; out ->
mICR . mX [ 9ULL ] = 0.0 ; ( void ) sys ; ( void ) out ; return 0 ; } static
int32_T ds_icr_im ( const NeDynamicSystem * sys , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out -> mICR_IM . mX [ 0 ] = 3
; out -> mICR_IM . mX [ 1 ] = 3 ; out -> mICR_IM . mX [ 2 ] = 3 ; out ->
mICR_IM . mX [ 3 ] = 3 ; out -> mICR_IM . mX [ 4 ] = 3 ; out -> mICR_IM . mX
[ 5 ] = 3 ; out -> mICR_IM . mX [ 6 ] = 3 ; out -> mICR_IM . mX [ 7 ] = 3 ;
out -> mICR_IM . mX [ 8 ] = 3 ; out -> mICR_IM . mX [ 9 ] = 3 ; out ->
mICR_IM . mX [ 10 ] = 3 ; out -> mICR_IM . mX [ 11 ] = 3 ; out -> mICR_IM .
mX [ 12 ] = 3 ; out -> mICR_IM . mX [ 13 ] = 3 ; ( void ) sys ; ( void ) out
; return 0 ; } static int32_T ds_icr_id ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out ->
mICR_ID . mX [ 0 ] = false ; out -> mICR_ID . mX [ 1 ] = false ; out ->
mICR_ID . mX [ 2 ] = false ; out -> mICR_ID . mX [ 3 ] = false ; out ->
mICR_ID . mX [ 4 ] = false ; out -> mICR_ID . mX [ 5 ] = false ; out ->
mICR_ID . mX [ 6 ] = false ; out -> mICR_ID . mX [ 7 ] = false ; out ->
mICR_ID . mX [ 8 ] = false ; out -> mICR_ID . mX [ 9 ] = false ; out ->
mICR_ID . mX [ 10 ] = false ; out -> mICR_ID . mX [ 11 ] = false ; out ->
mICR_ID . mX [ 12 ] = false ; out -> mICR_ID . mX [ 13 ] = false ; ( void )
sys ; ( void ) out ; return 0 ; } static int32_T ds_icr_il ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; out -> mICR_IL . mX [ 0 ] = true ; out -> mICR_IL . mX
[ 1 ] = true ; out -> mICR_IL . mX [ 2 ] = true ; out -> mICR_IL . mX [ 3 ] =
true ; out -> mICR_IL . mX [ 4 ] = true ; out -> mICR_IL . mX [ 5 ] = true ;
out -> mICR_IL . mX [ 6 ] = true ; out -> mICR_IL . mX [ 7 ] = true ; out ->
mICR_IL . mX [ 8 ] = true ; out -> mICR_IL . mX [ 9 ] = true ; out -> mICR_IL
. mX [ 10 ] = true ; out -> mICR_IL . mX [ 11 ] = true ; out -> mICR_IL . mX
[ 12 ] = true ; out -> mICR_IL . mX [ 13 ] = true ; ( void ) sys ; ( void )
out ; return 0 ; } static int32_T ds_dxicr ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
out -> mDXICR . mX [ 0ULL ] = 4.9999999999999996E-6 ; out -> mDXICR . mX [
1ULL ] = 4.9999999999999996E-6 ; out -> mDXICR . mX [ 2ULL ] =
4.9999999999999996E-6 ; out -> mDXICR . mX [ 3ULL ] = 4.9999999999999996E-6 ;
( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_ddicr ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ;
} static int32_T ds_ddicr_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out ->
mDDICR_P . mNumCol = 14ULL ; out -> mDDICR_P . mNumRow = 14ULL ; out ->
mDDICR_P . mJc [ 0 ] = 0 ; out -> mDDICR_P . mJc [ 1 ] = 0 ; out -> mDDICR_P
. mJc [ 2 ] = 0 ; out -> mDDICR_P . mJc [ 3 ] = 0 ; out -> mDDICR_P . mJc [ 4
] = 0 ; out -> mDDICR_P . mJc [ 5 ] = 0 ; out -> mDDICR_P . mJc [ 6 ] = 0 ;
out -> mDDICR_P . mJc [ 7 ] = 0 ; out -> mDDICR_P . mJc [ 8 ] = 0 ; out ->
mDDICR_P . mJc [ 9 ] = 0 ; out -> mDDICR_P . mJc [ 10 ] = 0 ; out -> mDDICR_P
. mJc [ 11 ] = 0 ; out -> mDDICR_P . mJc [ 12 ] = 0 ; out -> mDDICR_P . mJc [
13 ] = 0 ; out -> mDDICR_P . mJc [ 14 ] = 0 ; ( void ) sys ; ( void ) out ;
return 0 ; } static int32_T ds_tduicr_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out ->
mTDUICR_P . mNumCol = 4ULL ; out -> mTDUICR_P . mNumRow = 14ULL ; out ->
mTDUICR_P . mJc [ 0 ] = 0 ; out -> mTDUICR_P . mJc [ 1 ] = 0 ; out ->
mTDUICR_P . mJc [ 2 ] = 0 ; out -> mTDUICR_P . mJc [ 3 ] = 0 ; out ->
mTDUICR_P . mJc [ 4 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; } static
int32_T ds_icrm ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; (
void ) out ; return 0 ; } static int32_T ds_dxicrm ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void )
t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_ddicrm ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_ddicrm_p ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
out -> mDDICRM_P . mNumCol = 14ULL ; out -> mDDICRM_P . mNumRow = 0ULL ; out
-> mDDICRM_P . mJc [ 0 ] = 0 ; out -> mDDICRM_P . mJc [ 1 ] = 0 ; out ->
mDDICRM_P . mJc [ 2 ] = 0 ; out -> mDDICRM_P . mJc [ 3 ] = 0 ; out ->
mDDICRM_P . mJc [ 4 ] = 0 ; out -> mDDICRM_P . mJc [ 5 ] = 0 ; out ->
mDDICRM_P . mJc [ 6 ] = 0 ; out -> mDDICRM_P . mJc [ 7 ] = 0 ; out ->
mDDICRM_P . mJc [ 8 ] = 0 ; out -> mDDICRM_P . mJc [ 9 ] = 0 ; out ->
mDDICRM_P . mJc [ 10 ] = 0 ; out -> mDDICRM_P . mJc [ 11 ] = 0 ; out ->
mDDICRM_P . mJc [ 12 ] = 0 ; out -> mDDICRM_P . mJc [ 13 ] = 0 ; out ->
mDDICRM_P . mJc [ 14 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; }
static int32_T ds_dimin ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out ->
mDIMIN . mX [ 0 ] = - pmf_get_inf ( ) ; out -> mDIMIN . mX [ 1 ] = -
pmf_get_inf ( ) ; out -> mDIMIN . mX [ 2 ] = - pmf_get_inf ( ) ; out ->
mDIMIN . mX [ 3 ] = - pmf_get_inf ( ) ; out -> mDIMIN . mX [ 4 ] = -
pmf_get_inf ( ) ; out -> mDIMIN . mX [ 5 ] = - pmf_get_inf ( ) ; out ->
mDIMIN . mX [ 6 ] = - pmf_get_inf ( ) ; out -> mDIMIN . mX [ 7 ] = -
pmf_get_inf ( ) ; out -> mDIMIN . mX [ 8 ] = - pmf_get_inf ( ) ; out ->
mDIMIN . mX [ 9 ] = - pmf_get_inf ( ) ; out -> mDIMIN . mX [ 10 ] = -
pmf_get_inf ( ) ; out -> mDIMIN . mX [ 11 ] = - pmf_get_inf ( ) ; out ->
mDIMIN . mX [ 12 ] = - pmf_get_inf ( ) ; out -> mDIMIN . mX [ 13 ] = -
pmf_get_inf ( ) ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_dimax ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDIMAX . mX [ 0 ] =
pmf_get_inf ( ) ; out -> mDIMAX . mX [ 1 ] = pmf_get_inf ( ) ; out -> mDIMAX
. mX [ 2 ] = pmf_get_inf ( ) ; out -> mDIMAX . mX [ 3 ] = pmf_get_inf ( ) ;
out -> mDIMAX . mX [ 4 ] = pmf_get_inf ( ) ; out -> mDIMAX . mX [ 5 ] =
pmf_get_inf ( ) ; out -> mDIMAX . mX [ 6 ] = pmf_get_inf ( ) ; out -> mDIMAX
. mX [ 7 ] = pmf_get_inf ( ) ; out -> mDIMAX . mX [ 8 ] = pmf_get_inf ( ) ;
out -> mDIMAX . mX [ 9 ] = pmf_get_inf ( ) ; out -> mDIMAX . mX [ 10 ] =
pmf_get_inf ( ) ; out -> mDIMAX . mX [ 11 ] = pmf_get_inf ( ) ; out -> mDIMAX
. mX [ 12 ] = pmf_get_inf ( ) ; out -> mDIMAX . mX [ 13 ] = pmf_get_inf ( ) ;
( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_m ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { static real_T _cg_const_1 [ 15 ] = { - 0.01 , - 0.004 , - 0.004 , -
0.001 , - 9.9999999999999991E-5 , - 1.0E-6 , - 1.0E-6 , - 5.0E-12 , - 5.0E-12
, - 5.0E-12 , - 0.001 , - 5.0E-12 , - 5.0E-12 , - 5.0E-12 , - 5.0E-12 } ; (
void ) t1 ; out -> mM . mX [ 0 ] = _cg_const_1 [ 0 ] ; out -> mM . mX [ 1 ] =
_cg_const_1 [ 1 ] ; out -> mM . mX [ 2 ] = _cg_const_1 [ 2 ] ; out -> mM . mX
[ 3 ] = _cg_const_1 [ 3 ] ; out -> mM . mX [ 4 ] = _cg_const_1 [ 4 ] ; out ->
mM . mX [ 5 ] = _cg_const_1 [ 5 ] ; out -> mM . mX [ 6 ] = _cg_const_1 [ 6 ]
; out -> mM . mX [ 7 ] = _cg_const_1 [ 7 ] ; out -> mM . mX [ 8 ] =
_cg_const_1 [ 8 ] ; out -> mM . mX [ 9 ] = _cg_const_1 [ 9 ] ; out -> mM . mX
[ 10 ] = _cg_const_1 [ 10 ] ; out -> mM . mX [ 11 ] = _cg_const_1 [ 11 ] ;
out -> mM . mX [ 12 ] = _cg_const_1 [ 12 ] ; out -> mM . mX [ 13 ] =
_cg_const_1 [ 13 ] ; out -> mM . mX [ 14 ] = _cg_const_1 [ 14 ] ; ( void )
sys ; ( void ) out ; return 0 ; } static int32_T ds_dxm ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ;
} static int32_T ds_ddm ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_ddm_p (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDDM_P . mNumCol = 14ULL ;
out -> mDDM_P . mNumRow = 15ULL ; out -> mDDM_P . mJc [ 0 ] = 0 ; out ->
mDDM_P . mJc [ 1 ] = 0 ; out -> mDDM_P . mJc [ 2 ] = 0 ; out -> mDDM_P . mJc
[ 3 ] = 0 ; out -> mDDM_P . mJc [ 4 ] = 0 ; out -> mDDM_P . mJc [ 5 ] = 0 ;
out -> mDDM_P . mJc [ 6 ] = 0 ; out -> mDDM_P . mJc [ 7 ] = 0 ; out -> mDDM_P
. mJc [ 8 ] = 0 ; out -> mDDM_P . mJc [ 9 ] = 0 ; out -> mDDM_P . mJc [ 10 ]
= 0 ; out -> mDDM_P . mJc [ 11 ] = 0 ; out -> mDDM_P . mJc [ 12 ] = 0 ; out
-> mDDM_P . mJc [ 13 ] = 0 ; out -> mDDM_P . mJc [ 14 ] = 0 ; ( void ) sys ;
( void ) out ; return 0 ; } static int32_T ds_dum ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void )
t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_dum_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDUM_P . mNumCol = 4ULL ; out
-> mDUM_P . mNumRow = 15ULL ; out -> mDUM_P . mJc [ 0 ] = 0 ; out -> mDUM_P .
mJc [ 1 ] = 0 ; out -> mDUM_P . mJc [ 2 ] = 0 ; out -> mDUM_P . mJc [ 3 ] = 0
; out -> mDUM_P . mJc [ 4 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; }
static int32_T ds_dtm ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_dtm_p (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDTM_P . mNumCol = 1ULL ; out
-> mDTM_P . mNumRow = 15ULL ; out -> mDTM_P . mJc [ 0 ] = 0 ; out -> mDTM_P .
mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_dpm ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_dpm_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
out -> mDPM_P . mNumCol = 0ULL ; out -> mDPM_P . mNumRow = 15ULL ; out ->
mDPM_P . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; } static
int32_T ds_vmm ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out -> mVMM . mX [ 0 ] = false
; out -> mVMM . mX [ 1 ] = false ; out -> mVMM . mX [ 2 ] = false ; out ->
mVMM . mX [ 3 ] = false ; out -> mVMM . mX [ 4 ] = false ; out -> mVMM . mX [
5 ] = false ; out -> mVMM . mX [ 6 ] = false ; out -> mVMM . mX [ 7 ] = false
; out -> mVMM . mX [ 8 ] = false ; out -> mVMM . mX [ 9 ] = false ; out ->
mVMM . mX [ 10 ] = false ; out -> mVMM . mX [ 11 ] = false ; out -> mVMM . mX
[ 12 ] = false ; out -> mVMM . mX [ 13 ] = false ; out -> mVMM . mX [ 14 ] =
false ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_dp_l (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_dp_i ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_dp_j ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_dp_r ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_qx
( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_qu ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_qt
( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_q1 ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_qu_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mQU_P . mNumCol = 4ULL ; out
-> mQU_P . mNumRow = 62ULL ; out -> mQU_P . mJc [ 0 ] = 0 ; out -> mQU_P .
mJc [ 1 ] = 0 ; out -> mQU_P . mJc [ 2 ] = 0 ; out -> mQU_P . mJc [ 3 ] = 0 ;
out -> mQU_P . mJc [ 4 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; }
static int32_T ds_qt_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out ->
mQT_P . mNumCol = 1ULL ; out -> mQT_P . mNumRow = 62ULL ; out -> mQT_P . mJc
[ 0 ] = 0 ; out -> mQT_P . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) out ;
return 0 ; } static int32_T ds_q1_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out ->
mQ1_P . mNumCol = 1ULL ; out -> mQ1_P . mNumRow = 62ULL ; out -> mQ1_P . mJc
[ 0 ] = 0 ; out -> mQ1_P . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) out ;
return 0 ; } static int32_T ds_solverhits ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_duy
( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDUY . mX [ 0ULL ] = 10.0 ;
out -> mDUY . mX [ 1ULL ] = 10.0 ; ( void ) sys ; ( void ) out ; return 0 ; }
static int32_T ds_duy_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_1 [ 5 ] = { 0 , 0 , 1 , 2 , 2 } ; ( void ) t1 ; out -> mDUY_P .
mNumCol = 4ULL ; out -> mDUY_P . mNumRow = 15ULL ; out -> mDUY_P . mJc [ 0 ]
= _cg_const_1 [ 0 ] ; out -> mDUY_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out ->
mDUY_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mDUY_P . mJc [ 3 ] =
_cg_const_1 [ 3 ] ; out -> mDUY_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out ->
mDUY_P . mIr [ 0 ] = 2 ; out -> mDUY_P . mIr [ 1 ] = 1 ; ( void ) sys ; (
void ) out ; return 0 ; } static int32_T ds_mduy_p ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void )
t1 ; out -> mMDUY_P . mNumCol = 4ULL ; out -> mMDUY_P . mNumRow = 15ULL ; out
-> mMDUY_P . mJc [ 0 ] = 0 ; out -> mMDUY_P . mJc [ 1 ] = 0 ; out -> mMDUY_P
. mJc [ 2 ] = 0 ; out -> mMDUY_P . mJc [ 3 ] = 0 ; out -> mMDUY_P . mJc [ 4 ]
= 0 ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_tduy_p (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { static int32_T _cg_const_1 [ 5 ] = { 0 , 0 , 1 , 2
, 2 } ; ( void ) t1 ; out -> mTDUY_P . mNumCol = 4ULL ; out -> mTDUY_P .
mNumRow = 15ULL ; out -> mTDUY_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out ->
mTDUY_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mTDUY_P . mJc [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mTDUY_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mTDUY_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mTDUY_P . mIr [ 0 ] = 2 ;
out -> mTDUY_P . mIr [ 1 ] = 1 ; ( void ) sys ; ( void ) out ; return 0 ; }
static int32_T ds_dty ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_dty_p (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDTY_P . mNumCol = 1ULL ; out
-> mDTY_P . mNumRow = 15ULL ; out -> mDTY_P . mJc [ 0 ] = 0 ; out -> mDTY_P .
mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; }
