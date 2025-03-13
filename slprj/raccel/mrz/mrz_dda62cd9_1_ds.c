#include "ne_ds.h"
#include "mrz_dda62cd9_1_ds_tdxy_p.h"
#include "mrz_dda62cd9_1_ds_y.h"
#include "mrz_dda62cd9_1_ds_nldv.h"
#include "mrz_dda62cd9_1_ds_eq_tol.h"
#include "mrz_dda62cd9_1_ds_q1_p.h"
#include "mrz_dda62cd9_1_ds_q1.h"
#include "mrz_dda62cd9_1_ds_qx.h"
#include "mrz_dda62cd9_1_ds_sclv.h"
#include "mrz_dda62cd9_1_ds_obs_all.h"
#include "mrz_dda62cd9_1_ds_obs_exp.h"
#include "mrz_dda62cd9_1_ds_var_tol.h"
#include "mrz_dda62cd9_1_ds_mode.h"
#include "mrz_dda62cd9_1_ds_dxm_p.h"
#include "mrz_dda62cd9_1_ds_m.h"
#include "mrz_dda62cd9_1_ds_log.h"
#include "mrz_dda62cd9_1_ds_obs_act.h"
#include "mrz_dda62cd9_1_ds_imax.h"
#include "mrz_dda62cd9_1_ds_imin.h"
#include "mrz_dda62cd9_1_ds_dxicrm_p.h"
#include "mrz_dda62cd9_1_ds_obs_il.h"
#include "mrz_dda62cd9_1_ds_dxicr_p.h"
#include "mrz_dda62cd9_1_ds_m_p.h"
#include "mrz_dda62cd9_1_ds_vpf.h"
#include "mrz_dda62cd9_1_ds_slf0.h"
#include "mrz_dda62cd9_1_ds_lv.h"
#include "mrz_dda62cd9_1_ds_dnf_p.h"
#include "mrz_dda62cd9_1_ds_dnf_v_x.h"
#include "mrz_dda62cd9_1_ds_slf.h"
#include "mrz_dda62cd9_1_ds_tdxf_p.h"
#include "mrz_dda62cd9_1_ds_a_p.h"
#include "mrz_dda62cd9_1_ds_ic.h"
#include "mrz_dda62cd9_1_ds_slv.h"
#include "mrz_dda62cd9_1_ds_dxf_p.h"
#include "mrz_dda62cd9_1_ds_vmf.h"
#include "mrz_dda62cd9_1_ds_dxf.h"
#include "mrz_dda62cd9_1_ds_qx_p.h"
#include "mrz_dda62cd9_1_ds_lock2_i.h"
#include "mrz_dda62cd9_1_ds_zc.h"
#include "mrz_dda62cd9_1_ds_lock2_r.h"
#include "mrz_dda62cd9_1_ds_update_i.h"
#include "mrz_dda62cd9_1_ds_f.h"
#include "mrz_dda62cd9_1_ds_cache_i.h"
#include "mrz_dda62cd9_1_ds_update2_i.h"
#include "mrz_dda62cd9_1_ds_update2_r.h"
#include "mrz_dda62cd9_1_ds_lock_i.h"
#include "mrz_dda62cd9_1_ds_update_r.h"
#include "mrz_dda62cd9_1_ds_lock_r.h"
#include "mrz_dda62cd9_1_ds_vsf.h"
#include "mrz_dda62cd9_1_ds_dxdelt_p.h"
#include "mrz_dda62cd9_1_ds_a.h"
#include "mrz_dda62cd9_1_ds_mdxy_p.h"
#include "mrz_dda62cd9_1_ds_dxy_p.h"
#include "mrz_dda62cd9_1_ds_dxcer_p.h"
#include "mrz_dda62cd9_1_ds_icrm_p.h"
#include "mrz_dda62cd9_1_ds_ddf.h"
#include "mrz_dda62cd9_1_ds_assert.h"
#include "mrz_dda62cd9_1_ds.h"
#include "ssc_ml_fun.h"
#include "mrz_dda62cd9_1_ds_external_struct.h"
#include "mrz_dda62cd9_1_ds_externals.h"
#include "mrz_dda62cd9_1_ds_sys_struct.h"
static int32_T ds_vmm ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dxm
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddm_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dum_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dum ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dtm_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dpm_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dpm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_b_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_b ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_c_p ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_c ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_duf_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_duf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dtf_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_ddf_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dpdxf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dpdxf ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dwf_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dwf
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_tduf_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dnf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_cer ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dxcer ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddcer ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_ddcer_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_icr
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_icr_im ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_icr_id ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_icr_il ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxicr ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddicr ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddicr_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_tduicr_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_icrm ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxicrm ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddicrm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddicrm ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_freqs ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_solverhits ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_mduy_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_tduy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxy ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_duy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_duy ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dty_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dty ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_cache_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_sfo ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_sfp ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_init_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_init_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_passert ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_iassert ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_del_t ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_del_v ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_del_v0 ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_del_tmax ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxdelt ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dudelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dudelt ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtdelt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dtdelt ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dp_l ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dp_i
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dp_j ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dp_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_qu ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_qu_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qt_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dimin ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dimax ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
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
outj , PmRealVector * outr ) ; static NeEquationData s_equation_data [ 53 ] =
{ { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/CMOS AND" , 1U , 0U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/CMOS AND" , 1U
, 1U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"mrz/CMOS AND" , 1U , 2U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "mrz/CMOS AND1" , 1U , 3U , TRUE , 1.0 , "1" , } ,
{ "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/CMOS AND1" , 1U , 4U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/CMOS AND1" ,
1U , 5U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"mrz/CMOS NOT" , 1U , 6U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "mrz/CMOS NOT" , 1U , 7U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/Capacitor" , 1U , 8U , TRUE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/Capacitor1" ,
1U , 9U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"mrz/Capacitor2" , 1U , 10U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "mrz/Capacitor4" , 1U , 11U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/Inductor1" , 2U , 12U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/Inductor2" ,
2U , 14U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"mrz/Inductor3" , 2U , 16U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "mrz/Schmitt Trigger" , 1U , 18U , TRUE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/Schmitt Trigger" , 1U ,
19U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"mrz/AC Voltage Source1" , 1U , 20U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "mrz/CMOS AND" , 1U , 21U , TRUE , 1.0 , "1" , } ,
{ "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/CMOS AND" , 1U , 22U , FALSE ,
1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/CMOS AND" , 1U
, 23U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"mrz/CMOS AND1" , 1U , 24U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "mrz/CMOS AND1" , 1U , 25U , FALSE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/CMOS AND1" , 1U , 26U , TRUE
, 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/CMOS NOT" ,
1U , 27U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"mrz/Capacitor" , 1U , 28U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "mrz/Capacitor2" , 1U , 29U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/Capacitor4" , 1U , 30U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/Diode"
, 3U , 31U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"mrz/Diode1" , 3U , 34U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "mrz/Diode2" , 3U , 37U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/Diode3" , 3U , 40U , TRUE , 1.0
, "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/Diode4" , 3U , 43U
, TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"mrz/Finite-Gain Op-Amp" , 5U , 46U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "mrz/Finite-Gain Op-Amp1" , 5U , 51U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/IGBT" , 3U , 56U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/IGBT1"
, 3U , 59U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"mrz/IGBT2" , 3U , 62U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "mrz/IGBT3" , 3U , 65U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/IGBT4" , 3U , 68U , TRUE , 1.0 ,
"1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/Potentiometer" , 1U
, 71U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"mrz/Potentiometer" , 1U , 72U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "mrz/Resistor10" , 1U , 73U , TRUE , 1.0 , "1" , }
, { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/Resistor14" , 1U , 74U ,
TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"mrz/Resistor3" , 1U , 75U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 ,
NE_EQUATION_DOMAIN_TIME , "mrz/Schmitt Trigger" , 1U , 76U , TRUE , 1.0 , "1"
, } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/Schmitt Trigger" , 6U ,
77U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"mrz/Thyristor (Piecewise Linear)" , 12U , 83U , TRUE , 1.0 , "1" , } , { ""
, 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/Thyristor (Piecewise Linear)1" ,
12U , 95U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
"mrz/Thyristor (Piecewise Linear)2" , 12U , 107U , TRUE , 1.0 , "1" , } , {
"" , 0U , 8 , NE_EQUATION_DOMAIN_TIME , "mrz/Thyristor (Piecewise Linear)3" ,
12U , 119U , TRUE , 1.0 , "1" , } , { "" , 0U , 1 , NE_EQUATION_DOMAIN_TIME ,
"" , 3U , 131U , TRUE , 1.0 , "1" , } , { "" , 0U , 1 ,
NE_EQUATION_DOMAIN_TIME , "" , 3U , 134U , TRUE , 1.0 , "1" , } } ; static
NeCERData * s_cer_data = NULL ; static NeICRData * s_icr_data = NULL ; static
NeVariableData s_variable_data [ 53 ] = { { "CMOS_NOT.cA.vc" , 0U , 0 ,
"mrz/CMOS NOT" , 1.0 , "1" , 0.0 , TRUE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_AND.cB.vc" , 0U , 0 , "mrz/CMOS AND" , 1.0 , "1" , 0.0 , TRUE , FALSE ,
{ 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_AND.cJ.vc" , 0U , 0 , "mrz/CMOS AND" , 1.0 , "1" , 0.0 , TRUE , FALSE ,
{ 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_AND.cA.vc" , 0U , 0 , "mrz/CMOS AND" , 1.0 , "1" , 0.0 , TRUE , FALSE ,
{ 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_NOT.cJ.vc" , 0U , 0 , "mrz/CMOS NOT" , 1.0 , "1" , 0.0 , TRUE , FALSE ,
{ 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_AND1.cB.vc" , 0U , 0 , "mrz/CMOS AND1" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_AND1.cJ.vc" , 0U , 0 , "mrz/CMOS AND1" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_AND1.cA.vc" , 0U , 0 , "mrz/CMOS AND1" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Inductor2.i_L" , 0U , 0 , "mrz/Inductor2" , 1.0 , "1" , 0.0 , TRUE , FALSE ,
{ 1 , "1x1" } , NE_INIT_MODE_MANDATORY , "Inductor current" , } , {
"Capacitor.vc" , 0U , 0 , "mrz/Capacitor" , 1.0 , "1" , 0.0 , TRUE , FALSE ,
{ 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Capacitor1.vc" , 0U , 0 , "mrz/Capacitor1" , 1.0 , "1" , 0.0 , TRUE , FALSE
, { 1 , "1x1" } , NE_INIT_MODE_MANDATORY , "Capacitor voltage" , } , {
"Inductor1.i_L" , 0U , 0 , "mrz/Inductor1" , 1.0 , "1" , 0.0 , TRUE , FALSE ,
{ 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\346\204\237\347\224\265\346\265\201" , } , { "Capacitor2.vc" ,
0U , 0 , "mrz/Capacitor2" , 1.0 , "1" , 0.0 , TRUE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Inductor3.i_L" , 0U , 0 , "mrz/Inductor3" , 1.0 , "1" , 0.0 , TRUE , FALSE ,
{ 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\346\204\237\347\224\265\346\265\201" , } , { "Capacitor4.vc" ,
0U , 0 , "mrz/Capacitor4" , 1.0 , "1" , 0.0 , TRUE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.cA.vc" , 0U , 0 , "mrz/Schmitt Trigger" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.cJ.vc" , 0U , 0 , "mrz/Schmitt Trigger" , 1.0 , "1" , 0.0 ,
TRUE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_MANDATORY ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Ideal_Transformer1.n2.v" , 0U , 1 , "mrz/Ideal Transformer1" , 1.0 , "1" ,
0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\216\213" , } , { "Ideal_Transformer1.p2.v" , 0U , 1 ,
"mrz/Ideal Transformer1" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear2.iak" , 0U , 0 ,
"mrz/Thyristor (Piecewise Linear)2" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Current" , } , {
"Thyristor_Piecewise_Linear3.iak" , 0U , 0 ,
"mrz/Thyristor (Piecewise Linear)3" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Current" , } , { "CMOS_NOT.cA.i" , 0U , 0 ,
"mrz/CMOS NOT" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\346\265\201" , } , { "CMOS_AND.cB.i" , 0U ,
0 , "mrz/CMOS AND" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\346\265\201" , } , { "CMOS_AND.cJ.i" , 0U ,
0 , "mrz/CMOS AND" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\346\265\201" , } , { "Schmitt_Trigger.cJ.i"
, 0U , 0 , "mrz/Schmitt Trigger" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "\347\224\265\346\265\201" , } , {
"Schmitt_Trigger.rOUT.p.v" , 0U , 1 , "mrz/Schmitt Trigger" , 1.0 , "1" , 0.0
, FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\216\213" , } , { "CMOS_AND.rOUT.p.v" , 0U , 1 ,
"mrz/CMOS AND" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } , { "CMOS_NOT.cJ.i" , 0U ,
0 , "mrz/CMOS NOT" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\346\265\201" , } , { "CMOS_AND1.cB.i" , 0U
, 0 , "mrz/CMOS AND1" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\346\265\201" , } , { "CMOS_AND1.cJ.i" , 0U
, 0 , "mrz/CMOS AND1" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\346\265\201" , } , { "CMOS_NOT.rOUT.p.v" ,
0U , 1 , "mrz/CMOS NOT" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } , { "CMOS_AND1.rOUT.p.v" ,
0U , 1 , "mrz/CMOS AND1" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } , { "Capacitor.p.v" , 0U ,
1 , "mrz/Capacitor" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } , { "Inductor2.v" , 0U , 0
, "mrz/Inductor2" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "Voltage" , } , { "Diode2.n.v" , 0U , 1 , "mrz/Diode2" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\216\213" , } , { "Inductor1.v" , 0U , 0 , "mrz/Inductor1" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\216\213" , } , { "Capacitor4.n.v" , 0U , 1 ,
"mrz/Capacitor4" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } , { "Diode1.n.v" , 0U , 1
, "mrz/Diode1" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } , { "Inductor3.v" , 0U , 0
, "mrz/Inductor3" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } , {
"Finite_Gain_Op_Amp.n.v" , 0U , 1 , "mrz/Finite-Gain Op-Amp" , 1.0 , "1" ,
0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\216\213" , } , { "Finite_Gain_Op_Amp.p.v" , 0U , 1 ,
"mrz/Finite-Gain Op-Amp" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\345\216\213" , } , {
"Finite_Gain_Op_Amp1.p.v" , 0U , 1 , "mrz/Finite-Gain Op-Amp1" , 1.0 , "1" ,
0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\216\213" , } , { "Op_Amp2.n.v" , 0U , 1 , "mrz/Op-Amp2" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\216\213" , } , { "Op_Amp3.p.v" , 0U , 1 , "mrz/Op-Amp3" ,
1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\345\216\213" , } , { "Potentiometer.iR" , 0U , 0 ,
"mrz/Potentiometer" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "Current (R -> *)" , } , { "IGBT.ice" , 0U , 0 ,
"mrz/IGBT" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "Collector-emitter current" , } , { "Diode2.i" , 0U , 0 ,
"mrz/Diode2" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\346\265\201" , } , { "IGBT1.ice" , 0U , 0 ,
"mrz/IGBT1" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "Collector-emitter current" , } , { "IGBT2.ice" , 0U , 0
, "mrz/IGBT2" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "Collector-emitter current" , } , { "Diode4.i" , 0U , 0 ,
"mrz/Diode4" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "\347\224\265\346\265\201" , } , { "IGBT3.ice" , 0U , 0 ,
"mrz/IGBT3" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "Collector-emitter current" , } , { "IGBT4.ice" , 0U , 0
, "mrz/IGBT4" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" } ,
NE_INIT_MODE_NONE , "Collector-emitter current" , } , {
"Schmitt_Trigger.cA.i" , 0U , 0 , "mrz/Schmitt Trigger" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"\347\224\265\346\265\201" , } } ; static NeVariableData s_discrete_data [ 10
] = { { "Capacitor1.faulted" , 0U , 0 , "mrz/Capacitor1" , 1.0 , "1" , 0.0 ,
FALSE , FALSE , { 1 , "1x1" } , NE_INIT_MODE_NONE ,
"Faulted/not-faulted flag for behavioral trigger" , } , { "Inductor2.faulted"
, 0U , 0 , "mrz/Inductor2" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 , "1x1" }
, NE_INIT_MODE_NONE , "Fault flag" , } , {
"Thyristor_Piecewise_Linear.ideal_switch.state" , 0U , 0 ,
"mrz/Thyristor (Piecewise Linear)" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Show modes (internal debugging purpose)" , } ,
{ "Thyristor_Piecewise_Linear.ideal_switch.zIh" , 0U , 0 ,
"mrz/Thyristor (Piecewise Linear)" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Capture the current when i<=Ih" , } , {
"Thyristor_Piecewise_Linear1.ideal_switch.state" , 0U , 0 ,
"mrz/Thyristor (Piecewise Linear)1" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Show modes (internal debugging purpose)" , } ,
{ "Thyristor_Piecewise_Linear1.ideal_switch.zIh" , 0U , 0 ,
"mrz/Thyristor (Piecewise Linear)1" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Capture the current when i<=Ih" , } , {
"Thyristor_Piecewise_Linear2.ideal_switch.state" , 0U , 0 ,
"mrz/Thyristor (Piecewise Linear)2" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Show modes (internal debugging purpose)" , } ,
{ "Thyristor_Piecewise_Linear2.ideal_switch.zIh" , 0U , 0 ,
"mrz/Thyristor (Piecewise Linear)2" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Capture the current when i<=Ih" , } , {
"Thyristor_Piecewise_Linear3.ideal_switch.state" , 0U , 0 ,
"mrz/Thyristor (Piecewise Linear)3" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Show modes (internal debugging purpose)" , } ,
{ "Thyristor_Piecewise_Linear3.ideal_switch.zIh" , 0U , 0 ,
"mrz/Thyristor (Piecewise Linear)3" , 1.0 , "1" , 0.0 , FALSE , FALSE , { 1 ,
"1x1" } , NE_INIT_MODE_NONE , "Capture the current when i<=Ih" , } } ; static
NeObservableData s_observable_data [ 602 ] = { { "AC_Voltage_Source1.i" ,
"mrz/AC Voltage Source1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"AC_Voltage_Source1.n.v" , "mrz/AC Voltage Source1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"AC_Voltage_Source1.p.v" , "mrz/AC Voltage Source1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"AC_Voltage_Source1.v" , "mrz/AC Voltage Source1" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.A.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.B.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.J.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.cA.i" , "mrz/CMOS AND" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"CMOS_AND.cA.n.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.cA.p.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.cA.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.cA.vc" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_AND.cA.power_dissipated" , "mrz/CMOS AND" , { 1 , "1x1" } , "kW" , 1.0
, "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "CMOS_AND.cB.i" ,
"mrz/CMOS AND" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "CMOS_AND.cB.n.v" , "mrz/CMOS AND" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_AND.cB.p.v" , "mrz/CMOS AND" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_AND.cB.v" , "mrz/CMOS AND" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_AND.cB.vc" , "mrz/CMOS AND" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_AND.cB.power_dissipated" , "mrz/CMOS AND" , { 1 , "1x1" } , "kW" , 1.0
, "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "CMOS_AND.cJ.i" ,
"mrz/CMOS AND" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "CMOS_AND.cJ.n.v" , "mrz/CMOS AND" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_AND.cJ.p.v" , "mrz/CMOS AND" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_AND.cJ.v" , "mrz/CMOS AND" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_AND.cJ.vc" , "mrz/CMOS AND" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_AND.cJ.power_dissipated" , "mrz/CMOS AND" , { 1 , "1x1" } , "kW" , 1.0
, "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"CMOS_AND.cmos1.A.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.cmos1.B.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.cmos1.J" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "J" , } , { "CMOS_AND.cmos1.J_logic" ,
"mrz/CMOS AND" , { 1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"J_logic" , } , { "CMOS_AND.cmos1.iA" , "mrz/CMOS AND" , { 1 , "1x1" } , "A"
, 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current into port A" , } , {
"CMOS_AND.cmos1.iB" , "mrz/CMOS AND" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current into port B" , } , {
"CMOS_AND.elec_ref1.V.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.rOUT.i" , "mrz/CMOS AND" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"CMOS_AND.rOUT.n.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.rOUT.p.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.rOUT.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.rOUT.power_dissipated" , "mrz/CMOS AND" , { 1 , "1x1" } , "A^2*Ohm"
, 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "CMOS_AND.vSrc.i"
, "mrz/CMOS AND" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"i" , } , { "CMOS_AND.vSrc.n.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.vSrc.p.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND.vSrc.v" , "mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "CMOS_AND.vSrc.vT" ,
"mrz/CMOS AND" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"vT" , } , { "CMOS_AND1.A.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND1.B.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND1.J.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND1.cA.i" , "mrz/CMOS AND1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"CMOS_AND1.cA.n.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND1.cA.p.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND1.cA.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND1.cA.vc" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_AND1.cA.power_dissipated" , "mrz/CMOS AND1" , { 1 , "1x1" } , "kW" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "CMOS_AND1.cB.i" ,
"mrz/CMOS AND1" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "CMOS_AND1.cB.n.v" , "mrz/CMOS AND1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_AND1.cB.p.v" , "mrz/CMOS AND1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_AND1.cB.v" , "mrz/CMOS AND1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_AND1.cB.vc" , "mrz/CMOS AND1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_AND1.cB.power_dissipated" , "mrz/CMOS AND1" , { 1 , "1x1" } , "kW" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "CMOS_AND1.cJ.i" ,
"mrz/CMOS AND1" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "CMOS_AND1.cJ.n.v" , "mrz/CMOS AND1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_AND1.cJ.p.v" , "mrz/CMOS AND1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_AND1.cJ.v" , "mrz/CMOS AND1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_AND1.cJ.vc" , "mrz/CMOS AND1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_AND1.cJ.power_dissipated" , "mrz/CMOS AND1" , { 1 , "1x1" } , "kW" ,
1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"CMOS_AND1.cmos1.A.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND1.cmos1.B.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND1.cmos1.J" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "J" , } , { "CMOS_AND1.cmos1.J_logic" ,
"mrz/CMOS AND1" , { 1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"J_logic" , } , { "CMOS_AND1.cmos1.iA" , "mrz/CMOS AND1" , { 1 , "1x1" } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current into port A" , } , {
"CMOS_AND1.cmos1.iB" , "mrz/CMOS AND1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current into port B" , } , {
"CMOS_AND1.elec_ref1.V.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND1.rOUT.i" , "mrz/CMOS AND1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"CMOS_AND1.rOUT.n.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND1.rOUT.p.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND1.rOUT.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND1.rOUT.power_dissipated" , "mrz/CMOS AND1" , { 1 , "1x1" } ,
"A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "CMOS_AND1.vSrc.i"
, "mrz/CMOS AND1" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"i" , } , { "CMOS_AND1.vSrc.n.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND1.vSrc.p.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_AND1.vSrc.v" , "mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "CMOS_AND1.vSrc.vT" ,
"mrz/CMOS AND1" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"vT" , } , { "CMOS_NOT.A.v" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_NOT.J.v" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_NOT.cA.i" , "mrz/CMOS NOT" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"CMOS_NOT.cA.n.v" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_NOT.cA.p.v" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_NOT.cA.v" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_NOT.cA.vc" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_NOT.cA.power_dissipated" , "mrz/CMOS NOT" , { 1 , "1x1" } , "kW" , 1.0
, "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "CMOS_NOT.cJ.i" ,
"mrz/CMOS NOT" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "CMOS_NOT.cJ.n.v" , "mrz/CMOS NOT" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_NOT.cJ.p.v" , "mrz/CMOS NOT" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_NOT.cJ.v" , "mrz/CMOS NOT" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "CMOS_NOT.cJ.vc" , "mrz/CMOS NOT" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"CMOS_NOT.cJ.power_dissipated" , "mrz/CMOS NOT" , { 1 , "1x1" } , "kW" , 1.0
, "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"CMOS_NOT.cmos1.A.v" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_NOT.cmos1.J" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "J" , } , { "CMOS_NOT.cmos1.J_logic" ,
"mrz/CMOS NOT" , { 1 , "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"J_logic" , } , { "CMOS_NOT.cmos1.iA" , "mrz/CMOS NOT" , { 1 , "1x1" } , "A"
, 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Input current" , } , {
"CMOS_NOT.elec_ref1.V.v" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_NOT.rOUT.i" , "mrz/CMOS NOT" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"CMOS_NOT.rOUT.n.v" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_NOT.rOUT.p.v" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_NOT.rOUT.v" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_NOT.rOUT.power_dissipated" , "mrz/CMOS NOT" , { 1 , "1x1" } , "A^2*Ohm"
, 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "CMOS_NOT.vSrc.i"
, "mrz/CMOS NOT" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"i" , } , { "CMOS_NOT.vSrc.n.v" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_NOT.vSrc.p.v" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"CMOS_NOT.vSrc.v" , "mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "CMOS_NOT.vSrc.vT" ,
"mrz/CMOS NOT" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"vT" , } , { "Capacitor.i" , "mrz/Capacitor" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"Capacitor.n.v" , "mrz/Capacitor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor.p.v" , "mrz/Capacitor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor.v" , "mrz/Capacitor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor.vc" , "mrz/Capacitor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Capacitor.power_dissipated" , "mrz/Capacitor" , { 1 , "1x1" } , "kW" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Capacitor1.H.T" ,
"mrz/Capacitor1" , { 1 , "1x1" } , "K" , 1.0 , "K" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "\346\270\251\345\272\246" , } , {
"Capacitor1.T" , "mrz/Capacitor1" , { 1 , "1x1" } , "K" , 1.0 , "K" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Temperature" , } , {
"Capacitor1.faultExtTrigger" , "mrz/Capacitor1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "External fault trigger" , } , {
"Capacitor1.faulted" , "mrz/Capacitor1" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Faulted/not-faulted flag for behavioral trigger" , } , { "Capacitor1.i" ,
"mrz/Capacitor1" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , { "Capacitor1.n.v" , "mrz/Capacitor1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor1.p.v" , "mrz/Capacitor1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor1.v" , "mrz/Capacitor1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Capacitor1.vc" ,
"mrz/Capacitor1" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE
, "Capacitor voltage" , } , { "Capacitor1.power_dissipated" ,
"mrz/Capacitor1" , { 1 , "1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"power_dissipated" , } , { "Capacitor2.i" , "mrz/Capacitor2" , { 1 , "1x1" }
, "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , }
, { "Capacitor2.n.v" , "mrz/Capacitor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor2.p.v" , "mrz/Capacitor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor2.v" , "mrz/Capacitor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Capacitor2.vc" , "mrz/Capacitor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Capacitor2.power_dissipated" , "mrz/Capacitor2" , { 1 , "1x1" } , "kW" , 1.0
, "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Capacitor4.i" ,
"mrz/Capacitor4" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Capacitor4.n.v" , "mrz/Capacitor4" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Capacitor4.p.v" , "mrz/Capacitor4" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Capacitor4.v" , "mrz/Capacitor4" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Capacitor4.vc" , "mrz/Capacitor4" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Capacitor4.power_dissipated" , "mrz/Capacitor4" , { 1 , "1x1" } , "kW" , 1.0
, "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"DC_Voltage_Source.i" , "mrz/DC Voltage Source" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"DC_Voltage_Source.n.v" , "mrz/DC Voltage Source" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"DC_Voltage_Source.p.v" , "mrz/DC Voltage Source" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"DC_Voltage_Source.v" , "mrz/DC Voltage Source" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode.i" , "mrz/Diode" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"Diode.n.v" , "mrz/Diode" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode.p.v" , "mrz/Diode" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode.v" , "mrz/Diode" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode.power_dissipated" , "mrz/Diode" , { 1 , "1x1" } , "A*V" , 1.0 , "A*V"
, NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Diode1.i" ,
"mrz/Diode1" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Diode1.n.v" , "mrz/Diode1" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode1.p.v" , "mrz/Diode1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode1.v" , "mrz/Diode1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode1.power_dissipated" , "mrz/Diode1" , { 1 , "1x1" } , "A*V" , 1.0 ,
"A*V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Diode2.i" ,
"mrz/Diode2" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Diode2.n.v" , "mrz/Diode2" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode2.p.v" , "mrz/Diode2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode2.v" , "mrz/Diode2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode2.power_dissipated" , "mrz/Diode2" , { 1 , "1x1" } , "A*V" , 1.0 ,
"A*V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Diode3.i" ,
"mrz/Diode3" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Diode3.n.v" , "mrz/Diode3" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode3.p.v" , "mrz/Diode3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode3.v" , "mrz/Diode3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode3.power_dissipated" , "mrz/Diode3" , { 1 , "1x1" } , "A*V" , 1.0 ,
"A*V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Diode4.i" ,
"mrz/Diode4" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Diode4.n.v" , "mrz/Diode4" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , }
, { "Diode4.p.v" , "mrz/Diode4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode4.v" , "mrz/Diode4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Diode4.power_dissipated" , "mrz/Diode4" , { 1 , "1x1" } , "A*V" , 1.0 ,
"A*V" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"Electrical_Reference1.V.v" , "mrz/Electrical Reference1" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Electrical_Reference10.V.v" , "mrz/Electrical Reference10" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Electrical_Reference2.V.v" , "mrz/Electrical Reference2" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Electrical_Reference3.V.v" , "mrz/Electrical Reference3" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Electrical_Reference4.V.v" , "mrz/Electrical Reference4" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Electrical_Reference5.V.v" , "mrz/Electrical Reference5" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Electrical_Reference6.V.v" , "mrz/Electrical Reference6" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Electrical_Reference7.V.v" , "mrz/Electrical Reference7" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Electrical_Reference8.V.v" , "mrz/Electrical Reference8" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Electrical_Reference9.V.v" , "mrz/Electrical Reference9" , { 1 , "1x1" } ,
"V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Finite_Gain_Op_Amp.i1" , "mrz/Finite-Gain Op-Amp" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Input current" , } , {
"Finite_Gain_Op_Amp.i2" , "mrz/Finite-Gain Op-Amp" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current into output node" , } , {
"Finite_Gain_Op_Amp.n.v" , "mrz/Finite-Gain Op-Amp" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Finite_Gain_Op_Amp.out.v" , "mrz/Finite-Gain Op-Amp" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Finite_Gain_Op_Amp.p.v" , "mrz/Finite-Gain Op-Amp" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Finite_Gain_Op_Amp.v1" , "mrz/Finite-Gain Op-Amp" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage across the input" , } , {
"Finite_Gain_Op_Amp1.i1" , "mrz/Finite-Gain Op-Amp1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Input current" , } , {
"Finite_Gain_Op_Amp1.i2" , "mrz/Finite-Gain Op-Amp1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current into output node" , } , {
"Finite_Gain_Op_Amp1.n.v" , "mrz/Finite-Gain Op-Amp1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Finite_Gain_Op_Amp1.out.v" , "mrz/Finite-Gain Op-Amp1" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Finite_Gain_Op_Amp1.p.v" , "mrz/Finite-Gain Op-Amp1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Finite_Gain_Op_Amp1.v1" , "mrz/Finite-Gain Op-Amp1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage across the input" , } , {
"IGBT.C.v" , "mrz/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT.E.v" , "mrz/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT.G" , "mrz/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , { "IGBT.G_elec.v" ,
"mrz/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT.ice" , "mrz/IGBT" , { 1 , "1x1" } ,
"A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE
, NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter current" , } , {
"IGBT.ideal_switch.G" , "mrz/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , { "IGBT.ideal_switch.i" ,
"mrz/IGBT" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i"
, } , { "IGBT.ideal_switch.isOn" , "mrz/IGBT" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "isOn" , } , { "IGBT.ideal_switch.n.v"
, "mrz/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT.ideal_switch.p.v" , "mrz/IGBT" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT.ideal_switch.power_dissipated" ,
"mrz/IGBT" , { 1 , "1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , { "IGBT.ideal_switch.v" , "mrz/IGBT" , { 1 , "1x1" }
, "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "IGBT.vT" ,
"mrz/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"vT" , } , { "IGBT.vce" , "mrz/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter voltage" , } , {
"IGBT.vge" , "mrz/IGBT" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-emitter voltage" , } , {
"IGBT1.C.v" , "mrz/IGBT1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT1.E.v" , "mrz/IGBT1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT1.G" , "mrz/IGBT1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , { "IGBT1.G_elec.v" ,
"mrz/IGBT1" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT1.ice" , "mrz/IGBT1" , { 1 , "1x1" }
, "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter current" , }
, { "IGBT1.ideal_switch.G" , "mrz/IGBT1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , { "IGBT1.ideal_switch.i" ,
"mrz/IGBT1" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i"
, } , { "IGBT1.ideal_switch.isOn" , "mrz/IGBT1" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "isOn" , } , { "IGBT1.ideal_switch.n.v"
, "mrz/IGBT1" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT1.ideal_switch.p.v" , "mrz/IGBT1" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT1.ideal_switch.power_dissipated" ,
"mrz/IGBT1" , { 1 , "1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , { "IGBT1.ideal_switch.v" , "mrz/IGBT1" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "IGBT1.vT" ,
"mrz/IGBT1" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"vT" , } , { "IGBT1.vce" , "mrz/IGBT1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter voltage" , } , {
"IGBT1.vge" , "mrz/IGBT1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-emitter voltage" , } , {
"IGBT2.C.v" , "mrz/IGBT2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT2.E.v" , "mrz/IGBT2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT2.G" , "mrz/IGBT2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , { "IGBT2.G_elec.v" ,
"mrz/IGBT2" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT2.ice" , "mrz/IGBT2" , { 1 , "1x1" }
, "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter current" , }
, { "IGBT2.ideal_switch.G" , "mrz/IGBT2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , { "IGBT2.ideal_switch.i" ,
"mrz/IGBT2" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i"
, } , { "IGBT2.ideal_switch.isOn" , "mrz/IGBT2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "isOn" , } , { "IGBT2.ideal_switch.n.v"
, "mrz/IGBT2" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT2.ideal_switch.p.v" , "mrz/IGBT2" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT2.ideal_switch.power_dissipated" ,
"mrz/IGBT2" , { 1 , "1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , { "IGBT2.ideal_switch.v" , "mrz/IGBT2" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "IGBT2.vT" ,
"mrz/IGBT2" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"vT" , } , { "IGBT2.vce" , "mrz/IGBT2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter voltage" , } , {
"IGBT2.vge" , "mrz/IGBT2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-emitter voltage" , } , {
"IGBT3.C.v" , "mrz/IGBT3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT3.E.v" , "mrz/IGBT3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT3.G" , "mrz/IGBT3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , { "IGBT3.G_elec.v" ,
"mrz/IGBT3" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT3.ice" , "mrz/IGBT3" , { 1 , "1x1" }
, "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter current" , }
, { "IGBT3.ideal_switch.G" , "mrz/IGBT3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , { "IGBT3.ideal_switch.i" ,
"mrz/IGBT3" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i"
, } , { "IGBT3.ideal_switch.isOn" , "mrz/IGBT3" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "isOn" , } , { "IGBT3.ideal_switch.n.v"
, "mrz/IGBT3" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT3.ideal_switch.p.v" , "mrz/IGBT3" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT3.ideal_switch.power_dissipated" ,
"mrz/IGBT3" , { 1 , "1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , { "IGBT3.ideal_switch.v" , "mrz/IGBT3" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "IGBT3.vT" ,
"mrz/IGBT3" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"vT" , } , { "IGBT3.vce" , "mrz/IGBT3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter voltage" , } , {
"IGBT3.vge" , "mrz/IGBT3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-emitter voltage" , } , {
"IGBT4.C.v" , "mrz/IGBT4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT4.E.v" , "mrz/IGBT4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"IGBT4.G" , "mrz/IGBT4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , { "IGBT4.G_elec.v" ,
"mrz/IGBT4" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT4.ice" , "mrz/IGBT4" , { 1 , "1x1" }
, "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter current" , }
, { "IGBT4.ideal_switch.G" , "mrz/IGBT4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , { "IGBT4.ideal_switch.i" ,
"mrz/IGBT4" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i"
, } , { "IGBT4.ideal_switch.isOn" , "mrz/IGBT4" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "isOn" , } , { "IGBT4.ideal_switch.n.v"
, "mrz/IGBT4" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT4.ideal_switch.p.v" , "mrz/IGBT4" , {
1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "IGBT4.ideal_switch.power_dissipated" ,
"mrz/IGBT4" , { 1 , "1x1" } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , { "IGBT4.ideal_switch.v" , "mrz/IGBT4" , { 1 , "1x1"
} , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "IGBT4.vT" ,
"mrz/IGBT4" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"vT" , } , { "IGBT4.vce" , "mrz/IGBT4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Collector-emitter voltage" , } , {
"IGBT4.vge" , "mrz/IGBT4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-emitter voltage" , } , {
"Ideal_Transformer.i1" , "mrz/Ideal Transformer" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\345\210\235\347\272\247\347\224\265\346\265\201" , } , {
"Ideal_Transformer.i2" , "mrz/Ideal Transformer" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\346\254\241\347\272\247\347\224\265\346\265\201" , } , {
"Ideal_Transformer.n1.v" , "mrz/Ideal Transformer" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Ideal_Transformer.n2.v" , "mrz/Ideal Transformer" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Ideal_Transformer.p1.v" , "mrz/Ideal Transformer" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Ideal_Transformer.p2.v" , "mrz/Ideal Transformer" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Ideal_Transformer.v1" , "mrz/Ideal Transformer" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\345\210\235\347\272\247\347\224\265\345\216\213" , } , {
"Ideal_Transformer.v2" , "mrz/Ideal Transformer" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\346\254\241\347\272\247\347\224\265\345\216\213" , } , {
"Ideal_Transformer1.i1" , "mrz/Ideal Transformer1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\345\210\235\347\272\247\347\224\265\346\265\201" , } , {
"Ideal_Transformer1.i2" , "mrz/Ideal Transformer1" , { 1 , "1x1" } , "A" ,
1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\346\254\241\347\272\247\347\224\265\346\265\201" , } , {
"Ideal_Transformer1.n1.v" , "mrz/Ideal Transformer1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Ideal_Transformer1.n2.v" , "mrz/Ideal Transformer1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Ideal_Transformer1.p1.v" , "mrz/Ideal Transformer1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Ideal_Transformer1.p2.v" , "mrz/Ideal Transformer1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Ideal_Transformer1.v1" , "mrz/Ideal Transformer1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\345\210\235\347\272\247\347\224\265\345\216\213" , } , {
"Ideal_Transformer1.v2" , "mrz/Ideal Transformer1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\346\254\241\347\272\247\347\224\265\345\216\213" , } , { "Inductor1.i" ,
"mrz/Inductor1" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Inductor1.n.v" , "mrz/Inductor1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Inductor1.p.v" , "mrz/Inductor1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Inductor1.v" , "mrz/Inductor1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Inductor1.i_L" , "mrz/Inductor1" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\204\237\347\224\265\346\265\201" , } , {
"Inductor1.power_dissipated" , "mrz/Inductor1" , { 1 , "1x1" } , "kW" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"Inductor2.faultExtTrigger" , "mrz/Inductor2" , { 1 , "1x1" } , "1" , 1.0 ,
"1" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "External fault trigger" , } , {
"Inductor2.faulted" , "mrz/Inductor2" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Fault flag" , } , { "Inductor2.n.v" ,
"mrz/Inductor2" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Inductor2.p.v" , "mrz/Inductor2" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Inductor2.i" , "mrz/Inductor2" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Inductor2.i_L" , "mrz/Inductor2" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Inductor current" , } , {
"Inductor2.power_dissipated" , "mrz/Inductor2" , { 1 , "1x1" } , "W" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Inductor2.v" , "mrz/Inductor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , { "Inductor3.i" ,
"mrz/Inductor3" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Inductor3.n.v" , "mrz/Inductor3" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Inductor3.p.v" , "mrz/Inductor3" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Inductor3.v" , "mrz/Inductor3" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Inductor3.i_L" , "mrz/Inductor3" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY
, FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\204\237\347\224\265\346\265\201" , } , {
"Inductor3.power_dissipated" , "mrz/Inductor3" , { 1 , "1x1" } , "kW" , 1.0 ,
"kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Op_Amp.i1" ,
"mrz/Op-Amp" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\350\276\223\345\205\245\347\224\265\346\265\201" , } , { "Op_Amp.n.v" ,
"mrz/Op-Amp" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Op_Amp.out.v" , "mrz/Op-Amp" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Op_Amp.outI" , "mrz/Op-Amp" , { 1 , "1x1"
} , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
 "\346\265\201\345\205\245\350\276\223\345\207\272\350\212\202\347\202\271\347\232\204\347\224\265\346\265\201"
, } , { "Op_Amp.p.v" , "mrz/Op-Amp" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Op_Amp.v1" , "mrz/Op-Amp" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\350\276\223\345\205\245\347\224\265\345\216\213" , } , { "Op_Amp1.i1" ,
"mrz/Op-Amp1" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\350\276\223\345\205\245\347\224\265\346\265\201" , } , { "Op_Amp1.n.v" ,
"mrz/Op-Amp1" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Op_Amp1.out.v" , "mrz/Op-Amp1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Op_Amp1.outI" , "mrz/Op-Amp1" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
 "\346\265\201\345\205\245\350\276\223\345\207\272\350\212\202\347\202\271\347\232\204\347\224\265\346\265\201"
, } , { "Op_Amp1.p.v" , "mrz/Op-Amp1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Op_Amp1.v1" , "mrz/Op-Amp1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\350\276\223\345\205\245\347\224\265\345\216\213" , } , { "Op_Amp2.i1" ,
"mrz/Op-Amp2" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\350\276\223\345\205\245\347\224\265\346\265\201" , } , { "Op_Amp2.n.v" ,
"mrz/Op-Amp2" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Op_Amp2.out.v" , "mrz/Op-Amp2" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Op_Amp2.outI" , "mrz/Op-Amp2" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
 "\346\265\201\345\205\245\350\276\223\345\207\272\350\212\202\347\202\271\347\232\204\347\224\265\346\265\201"
, } , { "Op_Amp2.p.v" , "mrz/Op-Amp2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Op_Amp2.v1" , "mrz/Op-Amp2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\350\276\223\345\205\245\347\224\265\345\216\213" , } , { "Op_Amp3.i1" ,
"mrz/Op-Amp3" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\350\276\223\345\205\245\347\224\265\346\265\201" , } , { "Op_Amp3.n.v" ,
"mrz/Op-Amp3" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Op_Amp3.out.v" , "mrz/Op-Amp3" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Op_Amp3.outI" , "mrz/Op-Amp3" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
 "\346\265\201\345\205\245\350\276\223\345\207\272\350\212\202\347\202\271\347\232\204\347\224\265\346\265\201"
, } , { "Op_Amp3.p.v" , "mrz/Op-Amp3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Op_Amp3.v1" , "mrz/Op-Amp3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\350\276\223\345\205\245\347\224\265\345\216\213" , } , { "Op_Amp4.i1" ,
"mrz/Op-Amp4" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\350\276\223\345\205\245\347\224\265\346\265\201" , } , { "Op_Amp4.n.v" ,
"mrz/Op-Amp4" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Op_Amp4.out.v" , "mrz/Op-Amp4" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Op_Amp4.outI" , "mrz/Op-Amp4" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
 "\346\265\201\345\205\245\350\276\223\345\207\272\350\212\202\347\202\271\347\232\204\347\224\265\346\265\201"
, } , { "Op_Amp4.p.v" , "mrz/Op-Amp4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Op_Amp4.v1" , "mrz/Op-Amp4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\350\276\223\345\205\245\347\224\265\345\216\213" , } , { "Op_Amp5.i1" ,
"mrz/Op-Amp5" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\350\276\223\345\205\245\347\224\265\346\265\201" , } , { "Op_Amp5.n.v" ,
"mrz/Op-Amp5" , { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Op_Amp5.out.v" , "mrz/Op-Amp5" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Op_Amp5.outI" , "mrz/Op-Amp5" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
 "\346\265\201\345\205\245\350\276\223\345\207\272\350\212\202\347\202\271\347\232\204\347\224\265\346\265\201"
, } , { "Op_Amp5.p.v" , "mrz/Op-Amp5" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Op_Amp5.v1" , "mrz/Op-Amp5" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\350\276\223\345\205\245\347\224\265\345\216\213" , } , {
"Potentiometer.W.v" , "mrz/Potentiometer" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Potentiometer.iL" , "mrz/Potentiometer" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (L -> *)" , } , {
"Potentiometer.iR" , "mrz/Potentiometer" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (R -> *)" , } , {
"Potentiometer.iW" , "mrz/Potentiometer" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current (W -> *)" , } , {
"Potentiometer.pinL.v" , "mrz/Potentiometer" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Potentiometer.pinR.v" , "mrz/Potentiometer" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Potentiometer.x" , "mrz/Potentiometer" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "x" , } , { "Resistor.i" ,
"mrz/Resistor" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor.n.v" , "mrz/Resistor" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor.p.v" , "mrz/Resistor" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor.v" , "mrz/Resistor" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor.power_dissipated" ,
"mrz/Resistor" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor1.i" ,
"mrz/Resistor1" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor1.n.v" , "mrz/Resistor1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor1.p.v" , "mrz/Resistor1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor1.v" , "mrz/Resistor1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor1.power_dissipated" ,
"mrz/Resistor1" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor10.i" ,
"mrz/Resistor10" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor10.n.v" , "mrz/Resistor10" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor10.p.v" , "mrz/Resistor10" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor10.v" , "mrz/Resistor10" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor10.power_dissipated" ,
"mrz/Resistor10" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor11.i" ,
"mrz/Resistor11" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor11.n.v" , "mrz/Resistor11" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor11.p.v" , "mrz/Resistor11" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor11.v" , "mrz/Resistor11" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor11.power_dissipated" ,
"mrz/Resistor11" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor12.i" ,
"mrz/Resistor12" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor12.n.v" , "mrz/Resistor12" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor12.p.v" , "mrz/Resistor12" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor12.v" , "mrz/Resistor12" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor12.power_dissipated" ,
"mrz/Resistor12" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor13.i" ,
"mrz/Resistor13" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor13.n.v" , "mrz/Resistor13" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor13.p.v" , "mrz/Resistor13" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor13.v" , "mrz/Resistor13" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor13.power_dissipated" ,
"mrz/Resistor13" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor14.i" ,
"mrz/Resistor14" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor14.n.v" , "mrz/Resistor14" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor14.p.v" , "mrz/Resistor14" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor14.v" , "mrz/Resistor14" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor14.power_dissipated" ,
"mrz/Resistor14" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor15.i" ,
"mrz/Resistor15" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor15.n.v" , "mrz/Resistor15" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor15.p.v" , "mrz/Resistor15" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor15.v" , "mrz/Resistor15" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor15.power_dissipated" ,
"mrz/Resistor15" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor16.i" ,
"mrz/Resistor16" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor16.n.v" , "mrz/Resistor16" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor16.p.v" , "mrz/Resistor16" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor16.v" , "mrz/Resistor16" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor16.power_dissipated" ,
"mrz/Resistor16" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor17.i" ,
"mrz/Resistor17" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor17.n.v" , "mrz/Resistor17" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor17.p.v" , "mrz/Resistor17" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor17.v" , "mrz/Resistor17" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor17.power_dissipated" ,
"mrz/Resistor17" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor2.i" ,
"mrz/Resistor2" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor2.n.v" , "mrz/Resistor2" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor2.p.v" , "mrz/Resistor2" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor2.v" , "mrz/Resistor2" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor2.power_dissipated" ,
"mrz/Resistor2" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor3.i" ,
"mrz/Resistor3" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor3.n.v" , "mrz/Resistor3" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor3.p.v" , "mrz/Resistor3" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor3.v" , "mrz/Resistor3" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor3.power_dissipated" ,
"mrz/Resistor3" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor4.i" ,
"mrz/Resistor4" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor4.n.v" , "mrz/Resistor4" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor4.p.v" , "mrz/Resistor4" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor4.v" , "mrz/Resistor4" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor4.power_dissipated" ,
"mrz/Resistor4" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor5.i" ,
"mrz/Resistor5" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor5.n.v" , "mrz/Resistor5" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor5.p.v" , "mrz/Resistor5" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor5.v" , "mrz/Resistor5" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor5.power_dissipated" ,
"mrz/Resistor5" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor6.i" ,
"mrz/Resistor6" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor6.n.v" , "mrz/Resistor6" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor6.p.v" , "mrz/Resistor6" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor6.v" , "mrz/Resistor6" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor6.power_dissipated" ,
"mrz/Resistor6" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor7.i" ,
"mrz/Resistor7" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor7.n.v" , "mrz/Resistor7" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor7.p.v" , "mrz/Resistor7" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor7.v" , "mrz/Resistor7" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor7.power_dissipated" ,
"mrz/Resistor7" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor8.i" ,
"mrz/Resistor8" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor8.n.v" , "mrz/Resistor8" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor8.p.v" , "mrz/Resistor8" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor8.v" , "mrz/Resistor8" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor8.power_dissipated" ,
"mrz/Resistor8" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , { "Resistor9.i" ,
"mrz/Resistor9" , { 1 , "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\346\265\201" , } , { "Resistor9.n.v" , "mrz/Resistor9" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor9.p.v" , "mrz/Resistor9" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor9.v" , "mrz/Resistor9" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Resistor9.power_dissipated" ,
"mrz/Resistor9" , { 1 , "1x1" } , "A^2*Ohm" , 1.0 , "A^2*Ohm" ,
NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"Schmitt_Trigger.A.v" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.J.v" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.cA.i" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"Schmitt_Trigger.cA.n.v" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.cA.p.v" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.cA.v" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.cA.vc" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.cA.power_dissipated" , "mrz/Schmitt Trigger" , { 1 , "1x1" }
, "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"Schmitt_Trigger.cJ.i" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "A" , 1.0 ,
"A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"Schmitt_Trigger.cJ.n.v" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.cJ.p.v" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.cJ.v" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.cJ.vc" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_MANDATORY , FALSE , TRUE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\256\271\345\231\250\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.cJ.power_dissipated" , "mrz/Schmitt Trigger" , { 1 , "1x1" }
, "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE , FALSE ,
FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"Schmitt_Trigger.cmos1.A.v" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.cmos1.J" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "J" , } , {
"Schmitt_Trigger.cmos1.internal_mode_var_mc1__" , "mrz/Schmitt Trigger" , { 1
, "1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "internal_mode_var_mc1__" , } , { "Schmitt_Trigger.elec_ref1.V.v" ,
"mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.rOUT.i" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\346\265\201" , } , {
"Schmitt_Trigger.rOUT.n.v" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.rOUT.p.v" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.rOUT.v" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.rOUT.power_dissipated" , "mrz/Schmitt Trigger" , { 1 , "1x1"
} , "A^2*Ohm" , 1.0 , "A^2*Ohm" , NE_NOMINAL_SOURCE_NONE , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"\350\200\227\346\225\243\345\212\237\347\216\207" , } , {
"Schmitt_Trigger.vSrc.i" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "A" , 1.0
, "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , { "Schmitt_Trigger.vSrc.n.v"
, "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.vSrc.p.v" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Schmitt_Trigger.vSrc.v" , "mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , { "Schmitt_Trigger.vSrc.vT" ,
"mrz/Schmitt Trigger" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "vT" , } , {
"Simulink_PS_Converter2_output0" , "mrz/Simulink-PS\nConverter2" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter2_output0" , } , { "Simulink_PS_Converter3_output0" ,
"mrz/Simulink-PS\nConverter3" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter3_output0" , } ,
{ "Simulink_PS_Converter4_output0" , "mrz/Simulink-PS\nConverter4" , { 1 ,
"1x1" } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter4_output0" , } , { "Simulink_PS_Converter_output0" ,
"mrz/Simulink-PS\nConverter" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Simulink_PS_Converter_output0" , } ,
{ "Thyristor_Piecewise_Linear.A.v" , "mrz/Thyristor (Piecewise Linear)" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"\347\224\265\345\216\213" , } , { "Thyristor_Piecewise_Linear.G" ,
"mrz/Thyristor (Piecewise Linear)" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Thyristor_Piecewise_Linear.G_elec.v" , "mrz/Thyristor (Piecewise Linear)" ,
{ 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE
, TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\216\213" , } , { "Thyristor_Piecewise_Linear.K.v" ,
"mrz/Thyristor (Piecewise Linear)" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear.iak" , "mrz/Thyristor (Piecewise Linear)" , { 1 ,
"1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Thyristor_Piecewise_Linear.ideal_switch.G" ,
"mrz/Thyristor (Piecewise Linear)" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Thyristor_Piecewise_Linear.ideal_switch.i" ,
"mrz/Thyristor (Piecewise Linear)" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"Thyristor_Piecewise_Linear.ideal_switch.n.v" ,
"mrz/Thyristor (Piecewise Linear)" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear.ideal_switch.p.v" ,
"mrz/Thyristor (Piecewise Linear)" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear.ideal_switch.power_dissipated" ,
"mrz/Thyristor (Piecewise Linear)" , { 1 , "1x1" } , "W" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Thyristor_Piecewise_Linear.ideal_switch.state" ,
"mrz/Thyristor (Piecewise Linear)" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Show modes (internal debugging purpose)" , } , {
"Thyristor_Piecewise_Linear.ideal_switch.v" ,
"mrz/Thyristor (Piecewise Linear)" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"Thyristor_Piecewise_Linear.ideal_switch.zIh" ,
"mrz/Thyristor (Piecewise Linear)" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Capture the current when i<=Ih" , } ,
{ "Thyristor_Piecewise_Linear.ideal_switch.internal_mode_var_M__" ,
"mrz/Thyristor (Piecewise Linear)" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "internal_mode_var_M__" , } , {
"Thyristor_Piecewise_Linear.vT" , "mrz/Thyristor (Piecewise Linear)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Thyristor_Piecewise_Linear.vak" , "mrz/Thyristor (Piecewise Linear)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Thyristor_Piecewise_Linear.vgk" , "mrz/Thyristor (Piecewise Linear)" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-cathode voltage"
, } , { "Thyristor_Piecewise_Linear1.A.v" ,
"mrz/Thyristor (Piecewise Linear)1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear1.G" , "mrz/Thyristor (Piecewise Linear)1" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Thyristor_Piecewise_Linear1.G_elec.v" , "mrz/Thyristor (Piecewise Linear)1"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\216\213" , } , { "Thyristor_Piecewise_Linear1.K.v" ,
"mrz/Thyristor (Piecewise Linear)1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear1.iak" , "mrz/Thyristor (Piecewise Linear)1" , { 1
, "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Thyristor_Piecewise_Linear1.ideal_switch.G" ,
"mrz/Thyristor (Piecewise Linear)1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Thyristor_Piecewise_Linear1.ideal_switch.i" ,
"mrz/Thyristor (Piecewise Linear)1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"Thyristor_Piecewise_Linear1.ideal_switch.n.v" ,
"mrz/Thyristor (Piecewise Linear)1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear1.ideal_switch.p.v" ,
"mrz/Thyristor (Piecewise Linear)1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear1.ideal_switch.power_dissipated" ,
"mrz/Thyristor (Piecewise Linear)1" , { 1 , "1x1" } , "W" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Thyristor_Piecewise_Linear1.ideal_switch.state" ,
"mrz/Thyristor (Piecewise Linear)1" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Show modes (internal debugging purpose)" , } , {
"Thyristor_Piecewise_Linear1.ideal_switch.v" ,
"mrz/Thyristor (Piecewise Linear)1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"Thyristor_Piecewise_Linear1.ideal_switch.zIh" ,
"mrz/Thyristor (Piecewise Linear)1" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Capture the current when i<=Ih" , } ,
{ "Thyristor_Piecewise_Linear1.ideal_switch.internal_mode_var_M__" ,
"mrz/Thyristor (Piecewise Linear)1" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "internal_mode_var_M__" , } , {
"Thyristor_Piecewise_Linear1.vT" , "mrz/Thyristor (Piecewise Linear)1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Thyristor_Piecewise_Linear1.vak" , "mrz/Thyristor (Piecewise Linear)1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Thyristor_Piecewise_Linear1.vgk" , "mrz/Thyristor (Piecewise Linear)1" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-cathode voltage"
, } , { "Thyristor_Piecewise_Linear2.A.v" ,
"mrz/Thyristor (Piecewise Linear)2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear2.G" , "mrz/Thyristor (Piecewise Linear)2" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Thyristor_Piecewise_Linear2.G_elec.v" , "mrz/Thyristor (Piecewise Linear)2"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\216\213" , } , { "Thyristor_Piecewise_Linear2.K.v" ,
"mrz/Thyristor (Piecewise Linear)2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear2.iak" , "mrz/Thyristor (Piecewise Linear)2" , { 1
, "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Thyristor_Piecewise_Linear2.ideal_switch.G" ,
"mrz/Thyristor (Piecewise Linear)2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Thyristor_Piecewise_Linear2.ideal_switch.i" ,
"mrz/Thyristor (Piecewise Linear)2" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"Thyristor_Piecewise_Linear2.ideal_switch.n.v" ,
"mrz/Thyristor (Piecewise Linear)2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear2.ideal_switch.p.v" ,
"mrz/Thyristor (Piecewise Linear)2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear2.ideal_switch.power_dissipated" ,
"mrz/Thyristor (Piecewise Linear)2" , { 1 , "1x1" } , "W" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Thyristor_Piecewise_Linear2.ideal_switch.state" ,
"mrz/Thyristor (Piecewise Linear)2" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Show modes (internal debugging purpose)" , } , {
"Thyristor_Piecewise_Linear2.ideal_switch.v" ,
"mrz/Thyristor (Piecewise Linear)2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"Thyristor_Piecewise_Linear2.ideal_switch.zIh" ,
"mrz/Thyristor (Piecewise Linear)2" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Capture the current when i<=Ih" , } ,
{ "Thyristor_Piecewise_Linear2.ideal_switch.internal_mode_var_M__" ,
"mrz/Thyristor (Piecewise Linear)2" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "internal_mode_var_M__" , } , {
"Thyristor_Piecewise_Linear2.vT" , "mrz/Thyristor (Piecewise Linear)2" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Thyristor_Piecewise_Linear2.vak" , "mrz/Thyristor (Piecewise Linear)2" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Thyristor_Piecewise_Linear2.vgk" , "mrz/Thyristor (Piecewise Linear)2" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-cathode voltage"
, } , { "Thyristor_Piecewise_Linear3.A.v" ,
"mrz/Thyristor (Piecewise Linear)3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear3.G" , "mrz/Thyristor (Piecewise Linear)3" , { 1 ,
"1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "G" , } , {
"Thyristor_Piecewise_Linear3.G_elec.v" , "mrz/Thyristor (Piecewise Linear)3"
, { 1 , "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\347\224\265\345\216\213" , } , { "Thyristor_Piecewise_Linear3.K.v" ,
"mrz/Thyristor (Piecewise Linear)3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear3.iak" , "mrz/Thyristor (Piecewise Linear)3" , { 1
, "1x1" } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Current" , } , {
"Thyristor_Piecewise_Linear3.ideal_switch.G" ,
"mrz/Thyristor (Piecewise Linear)3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "PS" , } , {
"Thyristor_Piecewise_Linear3.ideal_switch.i" ,
"mrz/Thyristor (Piecewise Linear)3" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i" , } , {
"Thyristor_Piecewise_Linear3.ideal_switch.n.v" ,
"mrz/Thyristor (Piecewise Linear)3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear3.ideal_switch.p.v" ,
"mrz/Thyristor (Piecewise Linear)3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Thyristor_Piecewise_Linear3.ideal_switch.power_dissipated" ,
"mrz/Thyristor (Piecewise Linear)3" , { 1 , "1x1" } , "W" , 1.0 , "kW" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Power dissipated" , } , {
"Thyristor_Piecewise_Linear3.ideal_switch.state" ,
"mrz/Thyristor (Piecewise Linear)3" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Show modes (internal debugging purpose)" , } , {
"Thyristor_Piecewise_Linear3.ideal_switch.v" ,
"mrz/Thyristor (Piecewise Linear)3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v" , } , {
"Thyristor_Piecewise_Linear3.ideal_switch.zIh" ,
"mrz/Thyristor (Piecewise Linear)3" , { 1 , "1x1" } , "A" , 1.0 , "A" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Capture the current when i<=Ih" , } ,
{ "Thyristor_Piecewise_Linear3.ideal_switch.internal_mode_var_M__" ,
"mrz/Thyristor (Piecewise Linear)3" , { 1 , "1x1" } , "1" , 1.0 , "1" ,
NE_NOMINAL_SOURCE_FIXED , NE_INIT_MODE_MANDATORY , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "internal_mode_var_M__" , } , {
"Thyristor_Piecewise_Linear3.vT" , "mrz/Thyristor (Piecewise Linear)3" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "vT" , } , {
"Thyristor_Piecewise_Linear3.vak" , "mrz/Thyristor (Piecewise Linear)3" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "Voltage" , } , {
"Thyristor_Piecewise_Linear3.vgk" , "mrz/Thyristor (Piecewise Linear)3" , { 1
, "1x1" } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE ,
TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Gate-cathode voltage"
, } , { "Voltage_Sensor.V" , "mrz/Voltage Sensor" , { 1 , "1x1" } , "V" , 1.0
, "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor.n.v" ,
"mrz/Voltage Sensor" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor.p.v" , "mrz/Voltage Sensor" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor1.V" , "mrz/Voltage Sensor1" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor1.n.v" ,
"mrz/Voltage Sensor1" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor1.p.v" , "mrz/Voltage Sensor1" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor10.V" , "mrz/Voltage Sensor10" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor10.n.v" ,
"mrz/Voltage Sensor10" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor10.p.v" , "mrz/Voltage Sensor10" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor10_V0" , "mrz/PS-Simulink\nConverter9" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor10_V0" , } , {
"Voltage_Sensor11.V" , "mrz/Voltage Sensor11" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor11.n.v" ,
"mrz/Voltage Sensor11" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor11.p.v" , "mrz/Voltage Sensor11" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor11_V0" , "mrz/PS-Simulink\nConverter10" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor11_V0" , } , {
"Voltage_Sensor12.V" , "mrz/Voltage Sensor12" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor12.n.v" ,
"mrz/Voltage Sensor12" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor12.p.v" , "mrz/Voltage Sensor12" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor12_V0" , "mrz/PS-Simulink\nConverter11" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor12_V0" , } , {
"Voltage_Sensor13.V" , "mrz/Voltage Sensor13" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor13.n.v" ,
"mrz/Voltage Sensor13" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor13.p.v" , "mrz/Voltage Sensor13" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor13_V0" , "mrz/PS-Simulink\nConverter12" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor13_V0" , } , {
"Voltage_Sensor14.V" , "mrz/Voltage Sensor14" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor14.n.v" ,
"mrz/Voltage Sensor14" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor14.p.v" , "mrz/Voltage Sensor14" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor14_V0" , "mrz/PS-Simulink\nConverter13" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor14_V0" , } , {
"Voltage_Sensor15.V" , "mrz/Voltage Sensor15" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor15.n.v" ,
"mrz/Voltage Sensor15" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor15.p.v" , "mrz/Voltage Sensor15" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor15_V0" , "mrz/PS-Simulink\nConverter14" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor15_V0" , } , {
"Voltage_Sensor16.V" , "mrz/Voltage Sensor16" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor16.n.v" ,
"mrz/Voltage Sensor16" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor16.p.v" , "mrz/Voltage Sensor16" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor16_V0" , "mrz/PS-Simulink\nConverter15" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor16_V0" , } , {
"Voltage_Sensor17.V" , "mrz/Voltage Sensor17" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor17.n.v" ,
"mrz/Voltage Sensor17" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor17.p.v" , "mrz/Voltage Sensor17" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor17_V0" , "mrz/PS-Simulink\nConverter16" , { 1 , "1x1" } , "V"
, 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor17_V0" , } , {
"Voltage_Sensor2.V" , "mrz/Voltage Sensor2" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor2.n.v" ,
"mrz/Voltage Sensor2" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor2.p.v" , "mrz/Voltage Sensor2" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor2_V0" , "mrz/PS-Simulink\nConverter1" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor2_V0" , } , {
"Voltage_Sensor3.V" , "mrz/Voltage Sensor3" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor3.n.v" ,
"mrz/Voltage Sensor3" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor3.p.v" , "mrz/Voltage Sensor3" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor3_V0" , "mrz/PS-Simulink\nConverter2" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor3_V0" , } , {
"Voltage_Sensor4.V" , "mrz/Voltage Sensor4" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor4.n.v" ,
"mrz/Voltage Sensor4" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor4.p.v" , "mrz/Voltage Sensor4" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor4_V0" , "mrz/PS-Simulink\nConverter3" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor4_V0" , } , {
"Voltage_Sensor5.V" , "mrz/Voltage Sensor5" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor5.n.v" ,
"mrz/Voltage Sensor5" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor5.p.v" , "mrz/Voltage Sensor5" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor5_V0" , "mrz/PS-Simulink\nConverter4" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor5_V0" , } , {
"Voltage_Sensor6.V" , "mrz/Voltage Sensor6" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor6.n.v" ,
"mrz/Voltage Sensor6" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor6.p.v" , "mrz/Voltage Sensor6" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor6_V0" , "mrz/PS-Simulink\nConverter5" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor6_V0" , } , {
"Voltage_Sensor7.V" , "mrz/Voltage Sensor7" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor7.n.v" ,
"mrz/Voltage Sensor7" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor7.p.v" , "mrz/Voltage Sensor7" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor7_V0" , "mrz/PS-Simulink\nConverter6" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor7_V0" , } , {
"Voltage_Sensor8.V" , "mrz/Voltage Sensor8" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor8.n.v" ,
"mrz/Voltage Sensor8" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor8.p.v" , "mrz/Voltage Sensor8" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor8_V0" , "mrz/PS-Simulink\nConverter7" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor8_V0" , } , {
"Voltage_Sensor9.V" , "mrz/Voltage Sensor9" , { 1 , "1x1" } , "V" , 1.0 , "V"
, NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V" , } , { "Voltage_Sensor9.n.v" ,
"mrz/Voltage Sensor9" , { 1 , "1x1" } , "V" , 1.0 , "V" ,
NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor9.p.v" , "mrz/Voltage Sensor9" , { 1 , "1x1" } , "V" , 1.0 ,
"V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "\347\224\265\345\216\213" , } , {
"Voltage_Sensor9_V0" , "mrz/PS-Simulink\nConverter8" , { 1 , "1x1" } , "V" ,
1.0 , "V" , NE_NOMINAL_SOURCE_MODEL , NE_INIT_MODE_NONE , FALSE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Voltage_Sensor9_V0" , } } ; static
NeModeData s_major_mode_data [ 6 ] = { {
"Schmitt_Trigger.cmos1.internal_mode_var_mc1__" , 0U , "mrz/Schmitt Trigger"
, 0 , { 1 , "1x1" } , "internal_mode_var_mc1__" , } , {
"Thyristor_Piecewise_Linear.ideal_switch.internal_mode_var_M__" , 0U ,
"mrz/Thyristor (Piecewise Linear)" , 0 , { 1 , "1x1" } ,
"internal_mode_var_M__" , } , {
"Thyristor_Piecewise_Linear1.ideal_switch.internal_mode_var_M__" , 0U ,
"mrz/Thyristor (Piecewise Linear)1" , 0 , { 1 , "1x1" } ,
"internal_mode_var_M__" , } , {
"Thyristor_Piecewise_Linear2.ideal_switch.internal_mode_var_M__" , 0U ,
"mrz/Thyristor (Piecewise Linear)2" , 0 , { 1 , "1x1" } ,
"internal_mode_var_M__" , } , {
"Thyristor_Piecewise_Linear3.ideal_switch.internal_mode_var_M__" , 0U ,
"mrz/Thyristor (Piecewise Linear)3" , 0 , { 1 , "1x1" } ,
"internal_mode_var_M__" , } , { "ie0" , 0U , "" , 0 , { 1 , "1x1" } , "" , }
} ; static NeZCData s_zc_data [ 78 ] = { { "mrz/Diode" , 1U , 0U , "Diode" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , { "mrz/Diode1" , 1U , 1U , "Diode1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , { "mrz/Diode2" , 1U , 2U , "Diode2" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , { "mrz/Diode3" , 1U , 3U , "Diode3" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , { "mrz/Diode4" , 1U , 4U , "Diode4" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, NE_ZC_TYPE_FALSE , } , { "mrz/Finite-Gain Op-Amp" , 1U , 5U ,
"Finite_Gain_Op_Amp" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Finite-Gain Op-Amp" , 1U , 6U ,
"Finite_Gain_Op_Amp" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Finite-Gain Op-Amp1" , 1U , 7U ,
"Finite_Gain_Op_Amp1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Finite-Gain Op-Amp1" , 1U , 8U ,
"Finite_Gain_Op_Amp1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/finitegain_opamp.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Potentiometer" , 1U , 9U , "Potentiometer" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Potentiometer" , 1U , 10U , "Potentiometer" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/CMOS AND" , 1U , 11U , "CMOS_AND.cmos1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/CMOS AND" , 1U , 12U , "CMOS_AND.cmos1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/CMOS AND" , 1U , 13U , "CMOS_AND.cmos1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/CMOS AND" , 1U , 14U , "CMOS_AND.cmos1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/CMOS AND1" , 1U , 15U , "CMOS_AND1.cmos1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/CMOS AND1" , 1U , 16U , "CMOS_AND1.cmos1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/CMOS AND1" , 1U , 17U , "CMOS_AND1.cmos1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/CMOS AND1" , 1U , 18U , "CMOS_AND1.cmos1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/CMOS NOT" , 1U , 19U , "CMOS_NOT.cmos1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_1ip_eqn.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/IGBT" , 1U , 20U , "IGBT.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/IGBT" , 1U , 21U , "IGBT.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "mrz/IGBT1" , 1U , 22U , "IGBT1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/IGBT1" , 1U , 23U , "IGBT1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "mrz/IGBT2" , 1U , 24U , "IGBT2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/IGBT2" , 1U , 25U , "IGBT2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "mrz/IGBT3" , 1U , 26U , "IGBT3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/IGBT3" , 1U , 27U , "IGBT3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "mrz/IGBT4" , 1U , 28U , "IGBT4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/IGBT4" , 1U , 29U , "IGBT4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "mrz/Schmitt Trigger" , 1U , 30U ,
"Schmitt_Trigger.cmos1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger_logic.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Schmitt Trigger" , 1U , 31U ,
"Schmitt_Trigger.cmos1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger_logic.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Schmitt Trigger" , 1U , 32U ,
"Schmitt_Trigger.cmos1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger_logic.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Schmitt Trigger" , 1U , 33U ,
"Schmitt_Trigger.cmos1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger_logic.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)" , 1U , 34U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "mrz/Thyristor (Piecewise Linear)" , 1U , 35U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "mrz/Thyristor (Piecewise Linear)" , 1U , 36U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)" , 1U , 37U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)" , 1U , 38U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)" , 1U , 39U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)" , 1U , 40U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)" , 1U , 41U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)" , 1U , 42U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)" , 1U , 43U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)" , 1U , 44U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)1" , 1U , 45U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "mrz/Thyristor (Piecewise Linear)1" , 1U , 46U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "mrz/Thyristor (Piecewise Linear)1" , 1U , 47U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)1" , 1U , 48U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)1" , 1U , 49U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)1" , 1U , 50U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)1" , 1U , 51U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)1" , 1U , 52U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)1" , 1U , 53U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)1" , 1U , 54U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)1" , 1U , 55U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)2" , 1U , 56U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "mrz/Thyristor (Piecewise Linear)2" , 1U , 57U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "mrz/Thyristor (Piecewise Linear)2" , 1U , 58U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)2" , 1U , 59U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)2" , 1U , 60U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)2" , 1U , 61U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)2" , 1U , 62U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)2" , 1U , 63U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)2" , 1U , 64U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)2" , 1U , 65U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)2" , 1U , 66U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)3" , 1U , 67U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "mrz/Thyristor (Piecewise Linear)3" , 1U , 68U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_TRUE , } , { "mrz/Thyristor (Piecewise Linear)3" , 1U , 69U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)3" , 1U , 70U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)3" , 1U , 71U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)3" , 1U , 72U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)3" , 1U , 73U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)3" , 1U , 74U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)3" , 1U , 75U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)3" , 1U , 76U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } , { "mrz/Thyristor (Piecewise Linear)3" , 1U , 77U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, NE_ZC_TYPE_FALSE , } } ; static NeRange s_range [ 78 ] = { {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 34U , 8U , 34U , 36U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 34U , 8U , 34U , 36U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 34U , 8U , 34U , 36U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 34U , 8U , 34U , 36U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 34U , 8U , 34U , 36U , NE_RANGE_TYPE_NORMAL , } , {
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
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_1ip_eqn.sscp"
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
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger_logic.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger_logic.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger_logic.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger_logic.sscp"
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
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData
s_assert_data [ 132 ] = { { "mrz/Schmitt Trigger" , 2U , 0U ,
"Schmitt_Trigger.cmos1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger.sscp"
, FALSE ,
 "\346\250\241\345\274\217\345\200\274\350\266\205\345\207\272 'internal_mode_var_mc1__' \347\232\204\350\214\203\345\233\264\343\200\202\346\250\241\345\274\217\345\277\205\351\241\273\344\273\213\344\272\216 1 \345\222\214 4 \344\271\213\351\227\264\343\200\202"
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"mrz/Thyristor (Piecewise Linear)" , 2U , 2U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor.sscp"
, FALSE ,
 "\346\250\241\345\274\217\345\200\274\350\266\205\345\207\272 'internal_mode_var_M__' \347\232\204\350\214\203\345\233\264\343\200\202\346\250\241\345\274\217\345\277\205\351\241\273\344\273\213\344\272\216 1 \345\222\214 5 \344\271\213\351\227\264\343\200\202"
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"mrz/Thyristor (Piecewise Linear)1" , 2U , 4U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor.sscp"
, FALSE ,
 "\346\250\241\345\274\217\345\200\274\350\266\205\345\207\272 'internal_mode_var_M__' \347\232\204\350\214\203\345\233\264\343\200\202\346\250\241\345\274\217\345\277\205\351\241\273\344\273\213\344\272\216 1 \345\222\214 5 \344\271\213\351\227\264\343\200\202"
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"mrz/Thyristor (Piecewise Linear)2" , 2U , 6U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor.sscp"
, FALSE ,
 "\346\250\241\345\274\217\345\200\274\350\266\205\345\207\272 'internal_mode_var_M__' \347\232\204\350\214\203\345\233\264\343\200\202\346\250\241\345\274\217\345\277\205\351\241\273\344\273\213\344\272\216 1 \345\222\214 5 \344\271\213\351\227\264\343\200\202"
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"mrz/Thyristor (Piecewise Linear)3" , 2U , 8U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor.sscp"
, FALSE ,
 "\346\250\241\345\274\217\345\200\274\350\266\205\345\207\272 'internal_mode_var_M__' \347\232\204\350\214\203\345\233\264\343\200\202\346\250\241\345\274\217\345\277\205\351\241\273\344\273\213\344\272\216 1 \345\222\214 5 \344\271\213\351\227\264\343\200\202"
, "physmod:simscape:compiler:core:sf_xform:ModeValueOutOfRange" , } , {
"mrz/CMOS AND" , 1U , 10U , "CMOS_AND.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS AND" , 1U , 11U , "CMOS_AND.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS AND" , 1U , 12U , "CMOS_AND.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS AND" , 1U , 13U , "CMOS_AND.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS AND" , 1U , 14U , "CMOS_AND.cB.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS AND" , 1U , 15U , "CMOS_AND.cB.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS AND" , 1U , 16U , "CMOS_AND.cB.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS AND" , 1U , 17U , "CMOS_AND.cB.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS AND" , 1U , 18U , "CMOS_AND.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS AND" , 1U , 19U , "CMOS_AND.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS AND" , 1U , 20U , "CMOS_AND.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS AND" , 1U , 21U , "CMOS_AND.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS AND" , 1U , 22U , "CMOS_AND.rOUT.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS AND" , 1U , 23U , "CMOS_AND.rOUT.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS AND1" , 1U , 24U , "CMOS_AND1.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS AND1" , 1U , 25U , "CMOS_AND1.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS AND1" , 1U , 26U , "CMOS_AND1.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS AND1" , 1U , 27U , "CMOS_AND1.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS AND1" , 1U , 28U , "CMOS_AND1.cB.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS AND1" , 1U , 29U , "CMOS_AND1.cB.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS AND1" , 1U , 30U , "CMOS_AND1.cB.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS AND1" , 1U , 31U , "CMOS_AND1.cB.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS AND1" , 1U , 32U , "CMOS_AND1.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS AND1" , 1U , 33U , "CMOS_AND1.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS AND1" , 1U , 34U , "CMOS_AND1.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS AND1" , 1U , 35U , "CMOS_AND1.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS AND1" , 1U , 36U , "CMOS_AND1.rOUT.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS AND1" , 1U , 37U , "CMOS_AND1.rOUT.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS NOT" , 1U , 38U , "CMOS_NOT.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS NOT" , 1U , 39U , "CMOS_NOT.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS NOT" , 1U , 40U , "CMOS_NOT.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS NOT" , 1U , 41U , "CMOS_NOT.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS NOT" , 1U , 42U , "CMOS_NOT.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS NOT" , 1U , 43U , "CMOS_NOT.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS NOT" , 1U , 44U , "CMOS_NOT.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS NOT" , 1U , 45U , "CMOS_NOT.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/CMOS NOT" , 1U , 46U , "CMOS_NOT.rOUT.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/CMOS NOT" , 1U , 47U , "CMOS_NOT.rOUT.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Capacitor" , 1U , 48U , "Capacitor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Capacitor" , 1U , 49U , "Capacitor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Capacitor" , 1U , 50U , "Capacitor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Capacitor" , 1U , 51U , "Capacitor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Capacitor1" , 1U , 52U , "Capacitor1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Capacitor1" , 1U , 53U , "Capacitor1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Capacitor1" , 1U , 54U , "Capacitor1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Capacitor1" , 1U , 55U , "Capacitor1" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/capacitor.sscp"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Capacitor2" , 1U , 56U , "Capacitor2.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Capacitor2" , 1U , 57U , "Capacitor2.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Capacitor2" , 1U , 58U , "Capacitor2.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Capacitor2" , 1U , 59U , "Capacitor2.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Capacitor4" , 1U , 60U , "Capacitor4.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Capacitor4" , 1U , 61U , "Capacitor4.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Capacitor4" , 1U , 62U , "Capacitor4.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Capacitor4" , 1U , 63U , "Capacitor4.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Inductor1" , 1U , 64U , "Inductor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Inductor1" , 1U , 65U , "Inductor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Inductor1" , 1U , 66U , "Inductor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Inductor1" , 1U , 67U , "Inductor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Inductor2" , 1U , 68U , "Inductor2" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/inductor.sscp"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Inductor2" , 1U , 69U , "Inductor2" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/inductor.sscp"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Inductor2" , 1U , 70U , "Inductor2" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/inductor.sscp"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Inductor2" , 1U , 71U , "Inductor2" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/inductor.sscp"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Inductor3" , 1U , 72U , "Inductor3.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Inductor3" , 1U , 73U , "Inductor3.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Inductor3" , 1U , 74U , "Inductor3.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Inductor3" , 1U , 75U , "Inductor3.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor" , 1U , 76U , "Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor" , 1U , 77U , "Resistor.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor1" , 1U , 78U , "Resistor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor1" , 1U , 79U , "Resistor1.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor10" , 1U , 80U , "Resistor10.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor10" , 1U , 81U , "Resistor10.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor11" , 1U , 82U , "Resistor11.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor11" , 1U , 83U , "Resistor11.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor12" , 1U , 84U , "Resistor12.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor12" , 1U , 85U , "Resistor12.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor13" , 1U , 86U , "Resistor13.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor13" , 1U , 87U , "Resistor13.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor14" , 1U , 88U , "Resistor14.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor14" , 1U , 89U , "Resistor14.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor15" , 1U , 90U , "Resistor15.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor15" , 1U , 91U , "Resistor15.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor16" , 1U , 92U , "Resistor16.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor16" , 1U , 93U , "Resistor16.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor17" , 1U , 94U , "Resistor17.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor17" , 1U , 95U , "Resistor17.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor3" , 1U , 96U , "Resistor3.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor3" , 1U , 97U , "Resistor3.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor4" , 1U , 98U , "Resistor4.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor4" , 1U , 99U , "Resistor4.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor5" , 1U , 100U , "Resistor5.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor5" , 1U , 101U , "Resistor5.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor7" , 1U , 102U , "Resistor7.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor7" , 1U , 103U , "Resistor7.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor8" , 1U , 104U , "Resistor8.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor8" , 1U , 105U , "Resistor8.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Resistor9" , 1U , 106U , "Resistor9.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Resistor9" , 1U , 107U , "Resistor9.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Schmitt Trigger" , 1U , 108U , "Schmitt_Trigger.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Schmitt Trigger" , 1U , 109U , "Schmitt_Trigger.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Schmitt Trigger" , 1U , 110U , "Schmitt_Trigger.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Schmitt Trigger" , 1U , 111U , "Schmitt_Trigger.cA.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Schmitt Trigger" , 1U , 112U , "Schmitt_Trigger.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Schmitt Trigger" , 1U , 113U , "Schmitt_Trigger.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Schmitt Trigger" , 1U , 114U , "Schmitt_Trigger.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Schmitt Trigger" , 1U , 115U , "Schmitt_Trigger.cJ.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
"mrz/Schmitt Trigger" , 1U , 116U , "Schmitt_Trigger.rOUT.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\345\272\225\344\270\272\351\233\266\346\227\266\357\274\214\346\214\207\346\225\260\345\277\205\351\241\273\344\270\272\346\255\243\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
"mrz/Schmitt Trigger" , 1U , 117U , "Schmitt_Trigger.rOUT.power_dissipated" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc"
, FALSE ,
 "\345\234\250 power \344\270\255\357\274\214\345\275\223\346\214\207\346\225\260\344\270\215\346\230\257\346\225\264\346\225\260\346\227\266\357\274\214\345\272\225\345\277\205\351\241\273\344\270\272\351\235\236\350\264\237\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , { "mrz/IGBT"
, 1U , 118U , "IGBT.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/IGBT1" , 1U , 119U , "IGBT1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/IGBT2" , 1U , 120U , "IGBT2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/IGBT3" , 1U , 121U , "IGBT3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/IGBT4" , 1U , 122U , "IGBT4.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/igbt_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/Potentiometer" , 1U , 123U , "Potentiometer" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/Potentiometer" , 1U , 124U , "Potentiometer" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/Thyristor (Piecewise Linear)" , 1U , 125U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/Thyristor (Piecewise Linear)" , 1U , 126U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/Thyristor (Piecewise Linear)" , 1U , 127U ,
"Thyristor_Piecewise_Linear.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/Thyristor (Piecewise Linear)1" , 1U , 128U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/Thyristor (Piecewise Linear)1" , 1U , 129U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/Thyristor (Piecewise Linear)1" , 1U , 130U ,
"Thyristor_Piecewise_Linear1.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/Thyristor (Piecewise Linear)2" , 1U , 131U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/Thyristor (Piecewise Linear)2" , 1U , 132U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/Thyristor (Piecewise Linear)2" , 1U , 133U ,
"Thyristor_Piecewise_Linear2.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/Thyristor (Piecewise Linear)3" , 1U , 134U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/Thyristor (Piecewise Linear)3" , 1U , 135U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
"mrz/Thyristor (Piecewise Linear)3" , 1U , 136U ,
"Thyristor_Piecewise_Linear3.ideal_switch" ,
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+semiconductors/+ideal/thyristor_equation.sscp"
, FALSE ,
 "\345\234\250 divide \344\270\255\357\274\214\345\210\206\346\257\215\345\277\205\351\241\273\344\270\272\351\235\236\351\233\266\345\200\274\343\200\202"
, "physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } } ; static
NeRange s_assert_range [ 137 ] = { {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger_logic.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger.sscp"
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
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 31U , 25U , 32U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 27U , 25U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 39U , 25U , 40U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 25U , 37U , 25U , 38U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/inductor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/inductor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/inductor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/inductor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
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
s_initial_assert_range = NULL ; static NeRange s_equation_range [ 137 ] = { {
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
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
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
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 5U , 34U , 23U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 20U , 34U , 27U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/inductor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/inductor.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 5U , 34U , 23U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc"
, 34U , 20U , 34U , 27U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+sources/ac_voltage.ssc"
, 19U , 5U , 19U , 53U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 35U , 5U , 35U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc"
, 23U , 5U , 23U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 35U , 5U , 35U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_2ip_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc"
, 23U , 5U , 23U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/logic_1ip_eqn.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 35U , 5U , 35U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 35U , 5U , 35U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 35U , 5U , 35U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 34U , 8U , 34U , 36U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 39U , 9U , 39U , 20U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 44U , 9U , 44U , 36U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 34U , 8U , 34U , 36U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 39U , 9U , 39U , 20U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 44U , 9U , 44U , 36U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 34U , 8U , 34U , 36U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 39U , 9U , 39U , 20U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 44U , 9U , 44U , 36U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 34U , 8U , 34U , 36U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 39U , 9U , 39U , 20U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 44U , 9U , 44U , 36U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 34U , 8U , 34U , 36U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 39U , 9U , 39U , 20U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/pwl_diode.ssc"
, 44U , 9U , 44U , 36U , NE_RANGE_TYPE_NORMAL , } , {
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
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+passive/potentiometer.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc"
, 23U , 5U , 23U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc"
, 23U , 5U , 23U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc"
, 23U , 5U , 23U , 19U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 35U , 5U , 35U , 18U , NE_RANGE_TYPE_NORMAL , } , { "" , 1U , 1U , 1U , 1U
, NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger_logic.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger_logic.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger_logic.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger_logic.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/elec/library/m/+ee/+ic/+logic/schmitt_trigger_logic.sscp"
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
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc"
, 19U , 5U , 19U , 6U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/op_amp.ssc"
, 27U , 5U , 27U , 7U , NE_RANGE_TYPE_NORMAL , } , { "" , 1U , 1U , 1U , 1U ,
NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc"
, 19U , 5U , 19U , 6U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2024a/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/op_amp.ssc"
, 27U , 5U , 27U , 7U , NE_RANGE_TYPE_NORMAL , } } ; static NeRange *
s_cer_range = NULL ; static NeRange * s_icr_range = NULL ; static
NeParameterData * s_logical_parameter_data = NULL ; static NeParameterData *
s_integer_parameter_data = NULL ; static NeParameterData *
s_index_parameter_data = NULL ; static NeParameterData *
s_real_parameter_data = NULL ; static NeDsMethodOutput * ds_output_m_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM_P . mNumCol = 53 ;
out -> mM_P . mNumRow = 53 ; out -> mM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 54 ) ; out -> mM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 17 ) ;
return out ; } static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mM . mN = 17 ; out -> mM . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 17 ) ; return out
; } static NeDsMethodOutput * ds_output_vmm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVMM . mN = 17 ; out -> mVMM . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 17
) ; return out ; } static NeDsMethodOutput * ds_output_dxm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM_P . mNumCol = 53 ; out ->
mDXM_P . mNumRow = 17 ; out -> mDXM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 54 ) ; out -> mDXM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM . mN = 0 ; out -> mDXM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM_P . mNumCol = 10 ; out ->
mDDM_P . mNumRow = 17 ; out -> mDDM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out -> mDDM_P . mIr = (
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
mDUM_P . mNumRow = 17 ; out -> mDUM_P . mJc = ( int32_T * ) allocator ->
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
mDTM_P . mNumRow = 17 ; out -> mDTM_P . mJc = ( int32_T * ) allocator ->
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
mDPM_P . mNumRow = 17 ; out -> mDPM_P . mJc = ( int32_T * ) allocator ->
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
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA_P . mNumCol = 53 ; out ->
mA_P . mNumRow = 53 ; out -> mA_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 54 ) ; out -> mA_P . mIr = (
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
. mNumRow = 53 ; out -> mB_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
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
= 53 ; out -> mC_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator
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
mN = 53 ; out -> mF . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 53 ) ; return out ; } static NeDsMethodOutput *
ds_output_vmf ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVMF .
mN = 53 ; out -> mVMF . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 53 ) ; return out ; } static
NeDsMethodOutput * ds_output_vpf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mVPF . mN = 53 ; out -> mVPF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 53 ) ; return out ; } static
NeDsMethodOutput * ds_output_vsf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mVSF . mN = 53 ; out -> mVSF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 53 ) ; return out ; } static
NeDsMethodOutput * ds_output_slf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSLF . mN = 53 ; out -> mSLF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 53 ) ; return out ; } static
NeDsMethodOutput * ds_output_slf0 ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mSLF0 . mN = 53 ; out -> mSLF0 . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 53
) ; return out ; } static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF_P . mNumCol = 53 ; out ->
mDXF_P . mNumRow = 53 ; out -> mDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 54 ) ; out -> mDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 70 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF . mN = 70 ; out -> mDXF .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
70 ) ; return out ; } static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF_P . mNumCol = 4 ; out ->
mDUF_P . mNumRow = 53 ; out -> mDUF_P . mJc = ( int32_T * ) allocator ->
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
mDTF_P . mNumRow = 53 ; out -> mDTF_P . mJc = ( int32_T * ) allocator ->
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
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF_P . mNumCol = 10 ; out ->
mDDF_P . mNumRow = 53 ; out -> mDDF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out -> mDDF_P . mIr = (
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
mDPDXF_P . mNumRow = 70 ; out -> mDPDXF_P . mJc = ( int32_T * ) allocator ->
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
mDWF_P . mNumRow = 53 ; out -> mDWF_P . mJc = ( int32_T * ) allocator ->
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
mTDUF_P . mNumRow = 53 ; out -> mTDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mTDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 7 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXF_P . mNumCol = 53 ; out ->
mTDXF_P . mNumRow = 53 ; out -> mTDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 54 ) ; out -> mTDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 174 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_P . mNumCol = 62 ; out ->
mDNF_P . mNumRow = 53 ; out -> mDNF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 63 ) ; out -> mDNF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 3 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF . mN = 3 ; out -> mDNF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 3 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_v_x ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_V_X . mN = 53 ; out ->
mDNF_V_X . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 53 ) ; return out ; } static NeDsMethodOutput * ds_output_cer
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
53 ; out -> mDXCER_P . mNumRow = 0 ; out -> mDXCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 54 ) ; out ->
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
10 ; out -> mDDCER_P . mNumRow = 0 ; out -> mDDCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out ->
mDDCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ic (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIC . mN = 53 ; out ->
mIC . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 53 ) ; return out ; } static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR . mN = 0 ; out -> mICR . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_icr_im ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_IM . mN = 0 ; out ->
mICR_IM . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_id (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_ID . mN = 0 ; out
-> mICR_ID . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( boolean_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_icr_il ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mICR_IL . mN = 0 ; out -> mICR_IL . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXICR . mN = 0 ; out -> mDXICR . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICR_P . mNumCol = 53 ; out ->
mDXICR_P . mNumRow = 0 ; out -> mDXICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 54 ) ; out -> mDXICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddicr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR . mN = 0 ; out -> mDDICR
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR_P . mNumCol = 10 ; out ->
mDDICR_P . mNumRow = 0 ; out -> mDDICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out -> mDDICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUICR_P . mNumCol = 4 ; out ->
mTDUICR_P . mNumRow = 0 ; out -> mTDUICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mTDUICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_icrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM_P . mNumCol = 53 ; out ->
mICRM_P . mNumRow = 0 ; out -> mICRM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 54 ) ; out -> mICRM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM . mN = 0 ; out -> mICRM .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM_P . mNumCol = 53 ; out
-> mDXICRM_P . mNumRow = 0 ; out -> mDXICRM_P . mJc = ( int32_T * ) allocator
-> mCallocFcn ( allocator , sizeof ( int32_T ) , 54 ) ; out -> mDXICRM_P .
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
10 ; out -> mDDICRM_P . mNumRow = 0 ; out -> mDDICRM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 11 ) ; out ->
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
mNumRow = 16 ; out -> mMDUY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 5 ) ; out -> mMDUY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_mdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mMDXY_P . mNumCol = 53 ; out -> mMDXY_P .
mNumRow = 16 ; out -> mMDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 54 ) ; out -> mMDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_tduy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mTDUY_P . mNumCol = 4 ; out -> mTDUY_P .
mNumRow = 16 ; out -> mTDUY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 5 ) ; out -> mTDUY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_tdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mTDXY_P . mNumCol = 53 ; out -> mTDXY_P .
mNumRow = 16 ; out -> mTDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 54 ) ; out -> mTDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 26 ) ; return out
; } static NeDsMethodOutput * ds_output_y ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mY . mN = 16 ; out -> mY . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 16 ) ; return out
; } static NeDsMethodOutput * ds_output_dxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY_P . mNumCol = 53 ; out -> mDXY_P .
mNumRow = 16 ; out -> mDXY_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 54 ) ; out -> mDXY_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 26 ) ; return out
; } static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXY . mN = 26 ; out -> mDXY . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 26 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY_P . mNumCol = 4 ; out ->
mDUY_P . mNumRow = 16 ; out -> mDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY . mN = 0 ; out -> mDUY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dty_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY_P . mNumCol = 1 ; out ->
mDTY_P . mNumRow = 16 ; out -> mDTY_P . mJc = ( int32_T * ) allocator ->
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
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMODE . mN = 74 ; out -> mMODE .
mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) ,
74 ) ; return out ; } static NeDsMethodOutput * ds_output_zc ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mZC . mN = 78 ; out -> mZC . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 78 )
; return out ; } static NeDsMethodOutput * ds_output_cache_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_R . mN = 0 ; out ->
mCACHE_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_I . mN = 72 ;
out -> mCACHE_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 72 ) ; return out ; } static NeDsMethodOutput *
ds_output_update_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mUPDATE_R . mN = 10 ; out -> mUPDATE_R . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 10 ) ; return out ; } static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_I . mN = 6 ; out -> mUPDATE_I . mX
= ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 6
) ; return out ; } static NeDsMethodOutput * ds_output_update2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_R . mN = 10 ; out ->
mUPDATE2_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 10 ) ; return out ; } static NeDsMethodOutput *
ds_output_update2_i ( const NeDynamicSystem * ds , PmAllocator * allocator )
{ NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * )
allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out
-> mUPDATE2_I . mN = 6 ; out -> mUPDATE2_I . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 6 ) ; return out ; } static
NeDsMethodOutput * ds_output_lock_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mLOCK_R . mN = 10 ; out -> mLOCK_R . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 10
) ; return out ; } static NeDsMethodOutput * ds_output_lock_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOCK_I . mN = 6 ; out ->
mLOCK_I . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 6 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock2_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK2_R . mN = 10 ; out -> mLOCK2_R . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 10 ) ; return out ; } static
NeDsMethodOutput * ds_output_lock2_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mLOCK2_I . mN = 6 ; out -> mLOCK2_I . mX =
( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) ,
6 ) ; return out ; } static NeDsMethodOutput * ds_output_sfo ( const
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
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_R . mN = 10 ; out ->
mINIT_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 10 ) ; return out ; } static NeDsMethodOutput * ds_output_init_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_I . mN = 6 ; out
-> mINIT_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 6 ) ; return out ; } static NeDsMethodOutput * ds_output_log (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOG . mN = 471 ; out
-> mLOG . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 471 ) ; return out ; } static NeDsMethodOutput * ds_output_assert
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mASSERT . mN = 132 ;
out -> mASSERT . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 132 ) ; return out ; } static NeDsMethodOutput *
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
mDXDELT_P . mNumCol = 53 ; out -> mDXDELT_P . mNumRow = 0 ; out -> mDXDELT_P
. mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 54 ) ; out -> mDXDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
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
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_EXP . mN = 560 ;
out -> mOBS_EXP . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 560 ) ; return out ; } static NeDsMethodOutput *
ds_output_obs_act ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mOBS_ACT . mN = 560 ; out -> mOBS_ACT . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 560 ) ; return out ; } static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mOBS_ALL . mN = 560 ; out -> mOBS_ALL . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 560
) ; return out ; } static NeDsMethodOutput * ds_output_obs_il ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_IL . mN = 560 ; out ->
mOBS_IL . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 560 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_l
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
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQX . mN = 191 ; out
-> mQX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 191 ) ; return out ; } static NeDsMethodOutput * ds_output_qu (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQU . mN = 0 ; out ->
mQU . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQT . mN = 0 ; out -> mQT . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_q1 ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1 . mN = 39 ; out -> mQ1 . mX = ( real_T
* ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 39 ) ; return
out ; } static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds
, PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQX_P . mNumCol = 53 ; out -> mQX_P .
mNumRow = 53 ; out -> mQX_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 54 ) ; out -> mQX_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 191 ) ; return out
; } static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQU_P . mNumCol = 4 ; out -> mQU_P .
mNumRow = 53 ; out -> mQU_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 5 ) ; out -> mQU_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT_P . mNumCol = 1 ; out -> mQT_P .
mNumRow = 53 ; out -> mQT_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQT_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1_P . mNumCol = 1 ; out -> mQ1_P .
mNumRow = 53 ; out -> mQ1_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQ1_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 39 ) ; return out
; } static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds
, PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVAR_TOL . mN = 53 ; out -> mVAR_TOL . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 53 ) ;
return out ; } static NeDsMethodOutput * ds_output_eq_tol ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mEQ_TOL . mN = 53 ; out ->
mEQ_TOL . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 53 ) ; return out ; } static NeDsMethodOutput * ds_output_lv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLV . mN = 53 ; out ->
mLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 53 ) ; return out ; } static NeDsMethodOutput * ds_output_slv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLV . mN = 53 ; out
-> mSLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 53 ) ; return out ; } static NeDsMethodOutput * ds_output_nldv
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mNLDV . mN = 53 ; out
-> mNLDV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 53 ) ; return out ; } static NeDsMethodOutput *
ds_output_sclv ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSCLV
. mN = 53 ; out -> mSCLV . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 53 ) ; return out ; } static
NeDsMethodOutput * ds_output_imin ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIMIN . mN = 53 ; out -> mIMIN . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 53 ) ;
return out ; } static NeDsMethodOutput * ds_output_imax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIMAX . mN = 53 ; out -> mIMAX .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
53 ) ; return out ; } static NeDsMethodOutput * ds_output_dimin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMIN . mN = 10 ; out -> mDIMIN
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
10 ) ; return out ; } static NeDsMethodOutput * ds_output_dimax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMAX . mN = 10 ; out -> mDIMAX
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
10 ) ; return out ; } static void release_reference ( NeDynamicSystem * ds )
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
NeDynamicSystem * mrz_dda62cd9_1_dae_ds ( PmAllocator * allocator ) {
NeDynamicSystem * ds ; _NeDynamicSystem * _ds ; static SscIoInfo input_info [
4 ] ; static SscIoInfo output_info [ 16 ] ; _ds = ( _NeDynamicSystem * )
allocator -> mCallocFcn ( allocator , sizeof ( _NeDynamicSystem ) , 1 ) ; _ds
-> mAlloc = * allocator ; _ds -> mRefCnt = 1 ; ds = & _ds -> mBase ; ds ->
mNumVariables = 53 ; ds -> mNumDiscreteRealVariables = 10 ; ds ->
mNumDifferentialVariables = 17 ; ds -> mNumEquations = 53 ; ds ->
mNumCEResiduals = 0 ; ds -> mNumICResiduals = 0 ; ds -> mNumFreqs = 1 ; ds ->
mNumSolverHits = 0 ; ds -> mNumModes = 74 ; ds -> mNumMajorModes = 6 ; ds ->
mNumRealCache = 0 ; ds -> mNumIntCache = 72 ; ds -> mNumObservables = 602 ;
ds -> mNumObservableElements = 560 ; ds -> mNumZcs = 78 ; ds -> mNumAsserts =
132 ; ds -> mNumAssertRanges = 137 ; ds -> mNumParamAsserts = 0 ; ds ->
mNumParamAssertRanges = 0 ; ds -> mNumInitialAsserts = 0 ; ds ->
mNumInitialAssertRanges = 0 ; ds -> mNumRanges = 78 ; ds ->
mNumEquationRanges = 137 ; ds -> mNumCERRanges = 0 ; ds -> mNumICRRanges = 0
; ds -> mNumFundamentalSamples = 0 ; ds -> mNumDelays = 0 ; ds ->
mNumLogicalParameters = 0 ; ds -> mNumIntegerParameters = 0 ; ds ->
mNumIndexParameters = 0 ; ds -> mNumRealParameters = 0 ; ds ->
mNumLogicalDerivedParameters = 0 ; ds -> mNumIntegerDerivedParameters = 0 ;
ds -> mNumIndexDerivedParameters = 0 ; ds -> mNumRealDerivedParameters = 0 ;
ds -> mIsOutputLinear = TRUE ; ds -> mIsOutputSwitchedLinear = TRUE ; ds ->
mIsScalable = FALSE ; ds -> mNumIo [ SSC_INPUT_IO_TYPE ] = 4 ; input_info [ 0
] . identifier = "Simulink_PS_Converter2_output0" ; input_info [ 0 ] . size .
numElements = 1 ; input_info [ 0 ] . size . encodedDimensions = "1x1" ;
input_info [ 0 ] . name = "Simulink_PS_Converter2_output0" ; input_info [ 0 ]
. unit = "1" ; input_info [ 1 ] . identifier =
"Simulink_PS_Converter3_output0" ; input_info [ 1 ] . size . numElements = 1
; input_info [ 1 ] . size . encodedDimensions = "1x1" ; input_info [ 1 ] .
name = "Simulink_PS_Converter3_output0" ; input_info [ 1 ] . unit = "1" ;
input_info [ 2 ] . identifier = "Simulink_PS_Converter4_output0" ; input_info
[ 2 ] . size . numElements = 1 ; input_info [ 2 ] . size . encodedDimensions
= "1x1" ; input_info [ 2 ] . name = "Simulink_PS_Converter4_output0" ;
input_info [ 2 ] . unit = "1" ; input_info [ 3 ] . identifier =
"Simulink_PS_Converter_output0" ; input_info [ 3 ] . size . numElements = 1 ;
input_info [ 3 ] . size . encodedDimensions = "1x1" ; input_info [ 3 ] . name
= "Simulink_PS_Converter_output0" ; input_info [ 3 ] . unit = "1" ; ds -> mIo
[ SSC_INPUT_IO_TYPE ] = input_info ; ds -> mNumIo [ SSC_OUTPUT_IO_TYPE ] = 16
; output_info [ 0 ] . identifier = "Voltage_Sensor10_V0" ; output_info [ 0 ]
. size . numElements = 1 ; output_info [ 0 ] . size . encodedDimensions =
"1x1" ; output_info [ 0 ] . name = "Voltage_Sensor10_V0" ; output_info [ 0 ]
. unit = "V" ; output_info [ 1 ] . identifier = "Voltage_Sensor11_V0" ;
output_info [ 1 ] . size . numElements = 1 ; output_info [ 1 ] . size .
encodedDimensions = "1x1" ; output_info [ 1 ] . name = "Voltage_Sensor11_V0"
; output_info [ 1 ] . unit = "V" ; output_info [ 2 ] . identifier =
"Voltage_Sensor12_V0" ; output_info [ 2 ] . size . numElements = 1 ;
output_info [ 2 ] . size . encodedDimensions = "1x1" ; output_info [ 2 ] .
name = "Voltage_Sensor12_V0" ; output_info [ 2 ] . unit = "V" ; output_info [
3 ] . identifier = "Voltage_Sensor13_V0" ; output_info [ 3 ] . size .
numElements = 1 ; output_info [ 3 ] . size . encodedDimensions = "1x1" ;
output_info [ 3 ] . name = "Voltage_Sensor13_V0" ; output_info [ 3 ] . unit =
"V" ; output_info [ 4 ] . identifier = "Voltage_Sensor14_V0" ; output_info [
4 ] . size . numElements = 1 ; output_info [ 4 ] . size . encodedDimensions =
"1x1" ; output_info [ 4 ] . name = "Voltage_Sensor14_V0" ; output_info [ 4 ]
. unit = "V" ; output_info [ 5 ] . identifier = "Voltage_Sensor15_V0" ;
output_info [ 5 ] . size . numElements = 1 ; output_info [ 5 ] . size .
encodedDimensions = "1x1" ; output_info [ 5 ] . name = "Voltage_Sensor15_V0"
; output_info [ 5 ] . unit = "V" ; output_info [ 6 ] . identifier =
"Voltage_Sensor16_V0" ; output_info [ 6 ] . size . numElements = 1 ;
output_info [ 6 ] . size . encodedDimensions = "1x1" ; output_info [ 6 ] .
name = "Voltage_Sensor16_V0" ; output_info [ 6 ] . unit = "V" ; output_info [
7 ] . identifier = "Voltage_Sensor17_V0" ; output_info [ 7 ] . size .
numElements = 1 ; output_info [ 7 ] . size . encodedDimensions = "1x1" ;
output_info [ 7 ] . name = "Voltage_Sensor17_V0" ; output_info [ 7 ] . unit =
"V" ; output_info [ 8 ] . identifier = "Voltage_Sensor2_V0" ; output_info [ 8
] . size . numElements = 1 ; output_info [ 8 ] . size . encodedDimensions =
"1x1" ; output_info [ 8 ] . name = "Voltage_Sensor2_V0" ; output_info [ 8 ] .
unit = "V" ; output_info [ 9 ] . identifier = "Voltage_Sensor3_V0" ;
output_info [ 9 ] . size . numElements = 1 ; output_info [ 9 ] . size .
encodedDimensions = "1x1" ; output_info [ 9 ] . name = "Voltage_Sensor3_V0" ;
output_info [ 9 ] . unit = "V" ; output_info [ 10 ] . identifier =
"Voltage_Sensor4_V0" ; output_info [ 10 ] . size . numElements = 1 ;
output_info [ 10 ] . size . encodedDimensions = "1x1" ; output_info [ 10 ] .
name = "Voltage_Sensor4_V0" ; output_info [ 10 ] . unit = "V" ; output_info [
11 ] . identifier = "Voltage_Sensor5_V0" ; output_info [ 11 ] . size .
numElements = 1 ; output_info [ 11 ] . size . encodedDimensions = "1x1" ;
output_info [ 11 ] . name = "Voltage_Sensor5_V0" ; output_info [ 11 ] . unit
= "V" ; output_info [ 12 ] . identifier = "Voltage_Sensor6_V0" ; output_info
[ 12 ] . size . numElements = 1 ; output_info [ 12 ] . size .
encodedDimensions = "1x1" ; output_info [ 12 ] . name = "Voltage_Sensor6_V0"
; output_info [ 12 ] . unit = "V" ; output_info [ 13 ] . identifier =
"Voltage_Sensor7_V0" ; output_info [ 13 ] . size . numElements = 1 ;
output_info [ 13 ] . size . encodedDimensions = "1x1" ; output_info [ 13 ] .
name = "Voltage_Sensor7_V0" ; output_info [ 13 ] . unit = "V" ; output_info [
14 ] . identifier = "Voltage_Sensor8_V0" ; output_info [ 14 ] . size .
numElements = 1 ; output_info [ 14 ] . size . encodedDimensions = "1x1" ;
output_info [ 14 ] . name = "Voltage_Sensor8_V0" ; output_info [ 14 ] . unit
= "V" ; output_info [ 15 ] . identifier = "Voltage_Sensor9_V0" ; output_info
[ 15 ] . size . numElements = 1 ; output_info [ 15 ] . size .
encodedDimensions = "1x1" ; output_info [ 15 ] . name = "Voltage_Sensor9_V0"
; output_info [ 15 ] . unit = "V" ; ds -> mIo [ SSC_OUTPUT_IO_TYPE ] =
output_info ; ds -> mReleaseReference = release_reference ; ds ->
mGetReference = get_reference ; ds -> mDiagnosticsDsFcn = diagnostics ; ds ->
mExpandFcn = expand ; ds -> mRtpMapFcn = rtpmap ; ds -> mMethods [
NE_DS_METHOD_M_P ] = mrz_dda62cd9_1_ds_m_p ; ds -> mMakeOutput [
NE_DS_METHOD_M_P ] = ds_output_m_p ; ds -> mMethods [ NE_DS_METHOD_M ] =
mrz_dda62cd9_1_ds_m ; ds -> mMakeOutput [ NE_DS_METHOD_M ] = ds_output_m ; ds
-> mMethods [ NE_DS_METHOD_VMM ] = ds_vmm ; ds -> mMakeOutput [
NE_DS_METHOD_VMM ] = ds_output_vmm ; ds -> mMethods [ NE_DS_METHOD_DXM_P ] =
mrz_dda62cd9_1_ds_dxm_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXM_P ] =
ds_output_dxm_p ; ds -> mMethods [ NE_DS_METHOD_DXM ] = ds_dxm ; ds ->
mMakeOutput [ NE_DS_METHOD_DXM ] = ds_output_dxm ; ds -> mMethods [
NE_DS_METHOD_DDM_P ] = ds_ddm_p ; ds -> mMakeOutput [ NE_DS_METHOD_DDM_P ] =
ds_output_ddm_p ; ds -> mMethods [ NE_DS_METHOD_DDM ] = ds_ddm ; ds ->
mMakeOutput [ NE_DS_METHOD_DDM ] = ds_output_ddm ; ds -> mMethods [
NE_DS_METHOD_DUM_P ] = ds_dum_p ; ds -> mMakeOutput [ NE_DS_METHOD_DUM_P ] =
ds_output_dum_p ; ds -> mMethods [ NE_DS_METHOD_DUM ] = ds_dum ; ds ->
mMakeOutput [ NE_DS_METHOD_DUM ] = ds_output_dum ; ds -> mMethods [
NE_DS_METHOD_DTM_P ] = ds_dtm_p ; ds -> mMakeOutput [ NE_DS_METHOD_DTM_P ] =
ds_output_dtm_p ; ds -> mMethods [ NE_DS_METHOD_DTM ] = ds_dtm ; ds ->
mMakeOutput [ NE_DS_METHOD_DTM ] = ds_output_dtm ; ds -> mMethods [
NE_DS_METHOD_DPM_P ] = ds_dpm_p ; ds -> mMakeOutput [ NE_DS_METHOD_DPM_P ] =
ds_output_dpm_p ; ds -> mMethods [ NE_DS_METHOD_DPM ] = ds_dpm ; ds ->
mMakeOutput [ NE_DS_METHOD_DPM ] = ds_output_dpm ; ds -> mMethods [
NE_DS_METHOD_A_P ] = mrz_dda62cd9_1_ds_a_p ; ds -> mMakeOutput [
NE_DS_METHOD_A_P ] = ds_output_a_p ; ds -> mMethods [ NE_DS_METHOD_A ] =
mrz_dda62cd9_1_ds_a ; ds -> mMakeOutput [ NE_DS_METHOD_A ] = ds_output_a ; ds
-> mMethods [ NE_DS_METHOD_B_P ] = ds_b_p ; ds -> mMakeOutput [
NE_DS_METHOD_B_P ] = ds_output_b_p ; ds -> mMethods [ NE_DS_METHOD_B ] = ds_b
; ds -> mMakeOutput [ NE_DS_METHOD_B ] = ds_output_b ; ds -> mMethods [
NE_DS_METHOD_C_P ] = ds_c_p ; ds -> mMakeOutput [ NE_DS_METHOD_C_P ] =
ds_output_c_p ; ds -> mMethods [ NE_DS_METHOD_C ] = ds_c ; ds -> mMakeOutput
[ NE_DS_METHOD_C ] = ds_output_c ; ds -> mMethods [ NE_DS_METHOD_F ] =
mrz_dda62cd9_1_ds_f ; ds -> mMakeOutput [ NE_DS_METHOD_F ] = ds_output_f ; ds
-> mMethods [ NE_DS_METHOD_VMF ] = mrz_dda62cd9_1_ds_vmf ; ds -> mMakeOutput
[ NE_DS_METHOD_VMF ] = ds_output_vmf ; ds -> mMethods [ NE_DS_METHOD_VPF ] =
mrz_dda62cd9_1_ds_vpf ; ds -> mMakeOutput [ NE_DS_METHOD_VPF ] =
ds_output_vpf ; ds -> mMethods [ NE_DS_METHOD_VSF ] = mrz_dda62cd9_1_ds_vsf ;
ds -> mMakeOutput [ NE_DS_METHOD_VSF ] = ds_output_vsf ; ds -> mMethods [
NE_DS_METHOD_SLF ] = mrz_dda62cd9_1_ds_slf ; ds -> mMakeOutput [
NE_DS_METHOD_SLF ] = ds_output_slf ; ds -> mMethods [ NE_DS_METHOD_SLF0 ] =
mrz_dda62cd9_1_ds_slf0 ; ds -> mMakeOutput [ NE_DS_METHOD_SLF0 ] =
ds_output_slf0 ; ds -> mMethods [ NE_DS_METHOD_DXF_P ] =
mrz_dda62cd9_1_ds_dxf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXF_P ] =
ds_output_dxf_p ; ds -> mMethods [ NE_DS_METHOD_DXF ] = mrz_dda62cd9_1_ds_dxf
; ds -> mMakeOutput [ NE_DS_METHOD_DXF ] = ds_output_dxf ; ds -> mMethods [
NE_DS_METHOD_DUF_P ] = ds_duf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DUF_P ] =
ds_output_duf_p ; ds -> mMethods [ NE_DS_METHOD_DUF ] = ds_duf ; ds ->
mMakeOutput [ NE_DS_METHOD_DUF ] = ds_output_duf ; ds -> mMethods [
NE_DS_METHOD_DTF_P ] = ds_dtf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DTF_P ] =
ds_output_dtf_p ; ds -> mMethods [ NE_DS_METHOD_DTF ] = ds_dtf ; ds ->
mMakeOutput [ NE_DS_METHOD_DTF ] = ds_output_dtf ; ds -> mMethods [
NE_DS_METHOD_DDF_P ] = ds_ddf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DDF_P ] =
ds_output_ddf_p ; ds -> mMethods [ NE_DS_METHOD_DDF ] = mrz_dda62cd9_1_ds_ddf
; ds -> mMakeOutput [ NE_DS_METHOD_DDF ] = ds_output_ddf ; ds -> mMethods [
NE_DS_METHOD_DPDXF_P ] = ds_dpdxf_p ; ds -> mMakeOutput [
NE_DS_METHOD_DPDXF_P ] = ds_output_dpdxf_p ; ds -> mMethods [
NE_DS_METHOD_DPDXF ] = ds_dpdxf ; ds -> mMakeOutput [ NE_DS_METHOD_DPDXF ] =
ds_output_dpdxf ; ds -> mMethods [ NE_DS_METHOD_DWF_P ] = ds_dwf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DWF_P ] = ds_output_dwf_p ; ds -> mMethods [
NE_DS_METHOD_DWF ] = ds_dwf ; ds -> mMakeOutput [ NE_DS_METHOD_DWF ] =
ds_output_dwf ; ds -> mMethods [ NE_DS_METHOD_TDUF_P ] = ds_tduf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDUF_P ] = ds_output_tduf_p ; ds -> mMethods [
NE_DS_METHOD_TDXF_P ] = mrz_dda62cd9_1_ds_tdxf_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDXF_P ] = ds_output_tdxf_p ; ds -> mMethods [
NE_DS_METHOD_DNF_P ] = mrz_dda62cd9_1_ds_dnf_p ; ds -> mMakeOutput [
NE_DS_METHOD_DNF_P ] = ds_output_dnf_p ; ds -> mMethods [ NE_DS_METHOD_DNF ]
= ds_dnf ; ds -> mMakeOutput [ NE_DS_METHOD_DNF ] = ds_output_dnf ; ds ->
mMethods [ NE_DS_METHOD_DNF_V_X ] = mrz_dda62cd9_1_ds_dnf_v_x ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF_V_X ] = ds_output_dnf_v_x ; ds -> mMethods [
NE_DS_METHOD_CER ] = ds_cer ; ds -> mMakeOutput [ NE_DS_METHOD_CER ] =
ds_output_cer ; ds -> mMethods [ NE_DS_METHOD_DXCER ] = ds_dxcer ; ds ->
mMakeOutput [ NE_DS_METHOD_DXCER ] = ds_output_dxcer ; ds -> mMethods [
NE_DS_METHOD_DXCER_P ] = mrz_dda62cd9_1_ds_dxcer_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXCER_P ] = ds_output_dxcer_p ; ds -> mMethods [
NE_DS_METHOD_DDCER ] = ds_ddcer ; ds -> mMakeOutput [ NE_DS_METHOD_DDCER ] =
ds_output_ddcer ; ds -> mMethods [ NE_DS_METHOD_DDCER_P ] = ds_ddcer_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDCER_P ] = ds_output_ddcer_p ; ds -> mMethods
[ NE_DS_METHOD_IC ] = mrz_dda62cd9_1_ds_ic ; ds -> mMakeOutput [
NE_DS_METHOD_IC ] = ds_output_ic ; ds -> mMethods [ NE_DS_METHOD_ICR ] =
ds_icr ; ds -> mMakeOutput [ NE_DS_METHOD_ICR ] = ds_output_icr ; ds ->
mMethods [ NE_DS_METHOD_ICR_IM ] = ds_icr_im ; ds -> mMakeOutput [
NE_DS_METHOD_ICR_IM ] = ds_output_icr_im ; ds -> mMethods [
NE_DS_METHOD_ICR_ID ] = ds_icr_id ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_ID ]
= ds_output_icr_id ; ds -> mMethods [ NE_DS_METHOD_ICR_IL ] = ds_icr_il ; ds
-> mMakeOutput [ NE_DS_METHOD_ICR_IL ] = ds_output_icr_il ; ds -> mMethods [
NE_DS_METHOD_DXICR ] = ds_dxicr ; ds -> mMakeOutput [ NE_DS_METHOD_DXICR ] =
ds_output_dxicr ; ds -> mMethods [ NE_DS_METHOD_DXICR_P ] =
mrz_dda62cd9_1_ds_dxicr_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXICR_P ] =
ds_output_dxicr_p ; ds -> mMethods [ NE_DS_METHOD_DDICR ] = ds_ddicr ; ds ->
mMakeOutput [ NE_DS_METHOD_DDICR ] = ds_output_ddicr ; ds -> mMethods [
NE_DS_METHOD_DDICR_P ] = ds_ddicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_DDICR_P ] = ds_output_ddicr_p ; ds -> mMethods [
NE_DS_METHOD_TDUICR_P ] = ds_tduicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDUICR_P ] = ds_output_tduicr_p ; ds -> mMethods [
NE_DS_METHOD_ICRM_P ] = mrz_dda62cd9_1_ds_icrm_p ; ds -> mMakeOutput [
NE_DS_METHOD_ICRM_P ] = ds_output_icrm_p ; ds -> mMethods [ NE_DS_METHOD_ICRM
] = ds_icrm ; ds -> mMakeOutput [ NE_DS_METHOD_ICRM ] = ds_output_icrm ; ds
-> mMethods [ NE_DS_METHOD_DXICRM_P ] = mrz_dda62cd9_1_ds_dxicrm_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXICRM_P ] = ds_output_dxicrm_p ; ds -> mMethods [
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
NE_DS_METHOD_MDXY_P ] = mrz_dda62cd9_1_ds_mdxy_p ; ds -> mMakeOutput [
NE_DS_METHOD_MDXY_P ] = ds_output_mdxy_p ; ds -> mMethods [
NE_DS_METHOD_TDUY_P ] = ds_tduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDUY_P ]
= ds_output_tduy_p ; ds -> mMethods [ NE_DS_METHOD_TDXY_P ] =
mrz_dda62cd9_1_ds_tdxy_p ; ds -> mMakeOutput [ NE_DS_METHOD_TDXY_P ] =
ds_output_tdxy_p ; ds -> mMethods [ NE_DS_METHOD_Y ] = mrz_dda62cd9_1_ds_y ;
ds -> mMakeOutput [ NE_DS_METHOD_Y ] = ds_output_y ; ds -> mMethods [
NE_DS_METHOD_DXY_P ] = mrz_dda62cd9_1_ds_dxy_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXY_P ] = ds_output_dxy_p ; ds -> mMethods [ NE_DS_METHOD_DXY ]
= ds_dxy ; ds -> mMakeOutput [ NE_DS_METHOD_DXY ] = ds_output_dxy ; ds ->
mMethods [ NE_DS_METHOD_DUY_P ] = ds_duy_p ; ds -> mMakeOutput [
NE_DS_METHOD_DUY_P ] = ds_output_duy_p ; ds -> mMethods [ NE_DS_METHOD_DUY ]
= ds_duy ; ds -> mMakeOutput [ NE_DS_METHOD_DUY ] = ds_output_duy ; ds ->
mMethods [ NE_DS_METHOD_DTY_P ] = ds_dty_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTY_P ] = ds_output_dty_p ; ds -> mMethods [ NE_DS_METHOD_DTY ]
= ds_dty ; ds -> mMakeOutput [ NE_DS_METHOD_DTY ] = ds_output_dty ; ds ->
mMethods [ NE_DS_METHOD_MODE ] = mrz_dda62cd9_1_ds_mode ; ds -> mMakeOutput [
NE_DS_METHOD_MODE ] = ds_output_mode ; ds -> mMethods [ NE_DS_METHOD_ZC ] =
mrz_dda62cd9_1_ds_zc ; ds -> mMakeOutput [ NE_DS_METHOD_ZC ] = ds_output_zc ;
ds -> mMethods [ NE_DS_METHOD_CACHE_R ] = ds_cache_r ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_R ] = ds_output_cache_r ; ds -> mMethods [
NE_DS_METHOD_CACHE_I ] = mrz_dda62cd9_1_ds_cache_i ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_I ] = ds_output_cache_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE_R ] = mrz_dda62cd9_1_ds_update_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_R ] = ds_output_update_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE_I ] = mrz_dda62cd9_1_ds_update_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_I ] = ds_output_update_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_R ] = mrz_dda62cd9_1_ds_update2_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_R ] = ds_output_update2_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_I ] = mrz_dda62cd9_1_ds_update2_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_I ] = ds_output_update2_i ; ds -> mMethods [
NE_DS_METHOD_LOCK_R ] = mrz_dda62cd9_1_ds_lock_r ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK_R ] = ds_output_lock_r ; ds -> mMethods [
NE_DS_METHOD_LOCK_I ] = mrz_dda62cd9_1_ds_lock_i ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK_I ] = ds_output_lock_i ; ds -> mMethods [
NE_DS_METHOD_LOCK2_R ] = mrz_dda62cd9_1_ds_lock2_r ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_R ] = ds_output_lock2_r ; ds -> mMethods [
NE_DS_METHOD_LOCK2_I ] = mrz_dda62cd9_1_ds_lock2_i ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_I ] = ds_output_lock2_i ; ds -> mMethods [
NE_DS_METHOD_SFO ] = ds_sfo ; ds -> mMakeOutput [ NE_DS_METHOD_SFO ] =
ds_output_sfo ; ds -> mMethods [ NE_DS_METHOD_SFP ] = ds_sfp ; ds ->
mMakeOutput [ NE_DS_METHOD_SFP ] = ds_output_sfp ; ds -> mMethods [
NE_DS_METHOD_INIT_R ] = ds_init_r ; ds -> mMakeOutput [ NE_DS_METHOD_INIT_R ]
= ds_output_init_r ; ds -> mMethods [ NE_DS_METHOD_INIT_I ] = ds_init_i ; ds
-> mMakeOutput [ NE_DS_METHOD_INIT_I ] = ds_output_init_i ; ds -> mMethods [
NE_DS_METHOD_LOG ] = mrz_dda62cd9_1_ds_log ; ds -> mMakeOutput [
NE_DS_METHOD_LOG ] = ds_output_log ; ds -> mMethods [ NE_DS_METHOD_ASSERT ] =
mrz_dda62cd9_1_ds_assert ; ds -> mMakeOutput [ NE_DS_METHOD_ASSERT ] =
ds_output_assert ; ds -> mMethods [ NE_DS_METHOD_PASSERT ] = ds_passert ; ds
-> mMakeOutput [ NE_DS_METHOD_PASSERT ] = ds_output_passert ; ds -> mMethods
[ NE_DS_METHOD_IASSERT ] = ds_iassert ; ds -> mMakeOutput [
NE_DS_METHOD_IASSERT ] = ds_output_iassert ; ds -> mMethods [
NE_DS_METHOD_DEL_T ] = ds_del_t ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_T ] =
ds_output_del_t ; ds -> mMethods [ NE_DS_METHOD_DEL_V ] = ds_del_v ; ds ->
mMakeOutput [ NE_DS_METHOD_DEL_V ] = ds_output_del_v ; ds -> mMethods [
NE_DS_METHOD_DEL_V0 ] = ds_del_v0 ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_V0 ]
= ds_output_del_v0 ; ds -> mMethods [ NE_DS_METHOD_DEL_TMAX ] = ds_del_tmax ;
ds -> mMakeOutput [ NE_DS_METHOD_DEL_TMAX ] = ds_output_del_tmax ; ds ->
mMethods [ NE_DS_METHOD_DXDELT_P ] = mrz_dda62cd9_1_ds_dxdelt_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXDELT_P ] = ds_output_dxdelt_p ; ds -> mMethods [
NE_DS_METHOD_DXDELT ] = ds_dxdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DXDELT ]
= ds_output_dxdelt ; ds -> mMethods [ NE_DS_METHOD_DUDELT_P ] = ds_dudelt_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DUDELT_P ] = ds_output_dudelt_p ; ds ->
mMethods [ NE_DS_METHOD_DUDELT ] = ds_dudelt ; ds -> mMakeOutput [
NE_DS_METHOD_DUDELT ] = ds_output_dudelt ; ds -> mMethods [
NE_DS_METHOD_DTDELT_P ] = ds_dtdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTDELT_P ] = ds_output_dtdelt_p ; ds -> mMethods [
NE_DS_METHOD_DTDELT ] = ds_dtdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DTDELT ]
= ds_output_dtdelt ; ds -> mMethods [ NE_DS_METHOD_OBS_EXP ] =
mrz_dda62cd9_1_ds_obs_exp ; ds -> mMakeOutput [ NE_DS_METHOD_OBS_EXP ] =
ds_output_obs_exp ; ds -> mMethods [ NE_DS_METHOD_OBS_ACT ] =
mrz_dda62cd9_1_ds_obs_act ; ds -> mMakeOutput [ NE_DS_METHOD_OBS_ACT ] =
ds_output_obs_act ; ds -> mMethods [ NE_DS_METHOD_OBS_ALL ] =
mrz_dda62cd9_1_ds_obs_all ; ds -> mMakeOutput [ NE_DS_METHOD_OBS_ALL ] =
ds_output_obs_all ; ds -> mMethods [ NE_DS_METHOD_OBS_IL ] =
mrz_dda62cd9_1_ds_obs_il ; ds -> mMakeOutput [ NE_DS_METHOD_OBS_IL ] =
ds_output_obs_il ; ds -> mMethods [ NE_DS_METHOD_DP_L ] = ds_dp_l ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_L ] = ds_output_dp_l ; ds -> mMethods [
NE_DS_METHOD_DP_I ] = ds_dp_i ; ds -> mMakeOutput [ NE_DS_METHOD_DP_I ] =
ds_output_dp_i ; ds -> mMethods [ NE_DS_METHOD_DP_J ] = ds_dp_j ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_J ] = ds_output_dp_j ; ds -> mMethods [
NE_DS_METHOD_DP_R ] = ds_dp_r ; ds -> mMakeOutput [ NE_DS_METHOD_DP_R ] =
ds_output_dp_r ; ds -> mMethods [ NE_DS_METHOD_QX ] = mrz_dda62cd9_1_ds_qx ;
ds -> mMakeOutput [ NE_DS_METHOD_QX ] = ds_output_qx ; ds -> mMethods [
NE_DS_METHOD_QU ] = ds_qu ; ds -> mMakeOutput [ NE_DS_METHOD_QU ] =
ds_output_qu ; ds -> mMethods [ NE_DS_METHOD_QT ] = ds_qt ; ds -> mMakeOutput
[ NE_DS_METHOD_QT ] = ds_output_qt ; ds -> mMethods [ NE_DS_METHOD_Q1 ] =
mrz_dda62cd9_1_ds_q1 ; ds -> mMakeOutput [ NE_DS_METHOD_Q1 ] = ds_output_q1 ;
ds -> mMethods [ NE_DS_METHOD_QX_P ] = mrz_dda62cd9_1_ds_qx_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QX_P ] = ds_output_qx_p ; ds -> mMethods [
NE_DS_METHOD_QU_P ] = ds_qu_p ; ds -> mMakeOutput [ NE_DS_METHOD_QU_P ] =
ds_output_qu_p ; ds -> mMethods [ NE_DS_METHOD_QT_P ] = ds_qt_p ; ds ->
mMakeOutput [ NE_DS_METHOD_QT_P ] = ds_output_qt_p ; ds -> mMethods [
NE_DS_METHOD_Q1_P ] = mrz_dda62cd9_1_ds_q1_p ; ds -> mMakeOutput [
NE_DS_METHOD_Q1_P ] = ds_output_q1_p ; ds -> mMethods [ NE_DS_METHOD_VAR_TOL
] = mrz_dda62cd9_1_ds_var_tol ; ds -> mMakeOutput [ NE_DS_METHOD_VAR_TOL ] =
ds_output_var_tol ; ds -> mMethods [ NE_DS_METHOD_EQ_TOL ] =
mrz_dda62cd9_1_ds_eq_tol ; ds -> mMakeOutput [ NE_DS_METHOD_EQ_TOL ] =
ds_output_eq_tol ; ds -> mMethods [ NE_DS_METHOD_LV ] = mrz_dda62cd9_1_ds_lv
; ds -> mMakeOutput [ NE_DS_METHOD_LV ] = ds_output_lv ; ds -> mMethods [
NE_DS_METHOD_SLV ] = mrz_dda62cd9_1_ds_slv ; ds -> mMakeOutput [
NE_DS_METHOD_SLV ] = ds_output_slv ; ds -> mMethods [ NE_DS_METHOD_NLDV ] =
mrz_dda62cd9_1_ds_nldv ; ds -> mMakeOutput [ NE_DS_METHOD_NLDV ] =
ds_output_nldv ; ds -> mMethods [ NE_DS_METHOD_SCLV ] =
mrz_dda62cd9_1_ds_sclv ; ds -> mMakeOutput [ NE_DS_METHOD_SCLV ] =
ds_output_sclv ; ds -> mMethods [ NE_DS_METHOD_IMIN ] =
mrz_dda62cd9_1_ds_imin ; ds -> mMakeOutput [ NE_DS_METHOD_IMIN ] =
ds_output_imin ; ds -> mMethods [ NE_DS_METHOD_IMAX ] =
mrz_dda62cd9_1_ds_imax ; ds -> mMakeOutput [ NE_DS_METHOD_IMAX ] =
ds_output_imax ; ds -> mMethods [ NE_DS_METHOD_DIMIN ] = ds_dimin ; ds ->
mMakeOutput [ NE_DS_METHOD_DIMIN ] = ds_output_dimin ; ds -> mMethods [
NE_DS_METHOD_DIMAX ] = ds_dimax ; ds -> mMakeOutput [ NE_DS_METHOD_DIMAX ] =
ds_output_dimax ; ds -> mEquationData = s_equation_data ; ds -> mCERData =
s_cer_data ; ds -> mICRData = s_icr_data ; ds -> mVariableData =
s_variable_data ; ds -> mDiscreteData = s_discrete_data ; ds ->
mObservableData = s_observable_data ; ds -> mMajorModeData =
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
out -> mDDCER_P . mNumCol = 10ULL ; out -> mDDCER_P . mNumRow = 0ULL ; out ->
mDDCER_P . mJc [ 0 ] = 0 ; out -> mDDCER_P . mJc [ 1 ] = 0 ; out -> mDDCER_P
. mJc [ 2 ] = 0 ; out -> mDDCER_P . mJc [ 3 ] = 0 ; out -> mDDCER_P . mJc [ 4
] = 0 ; out -> mDDCER_P . mJc [ 5 ] = 0 ; out -> mDDCER_P . mJc [ 6 ] = 0 ;
out -> mDDCER_P . mJc [ 7 ] = 0 ; out -> mDDCER_P . mJc [ 8 ] = 0 ; out ->
mDDCER_P . mJc [ 9 ] = 0 ; out -> mDDCER_P . mJc [ 10 ] = 0 ; ( void ) sys ;
( void ) out ; return 0 ; } static int32_T ds_del_v ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void )
t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_del_v0 ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
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
out -> mINIT_R . mX [ 9 ] = 0.0 ; ( void ) sys ; ( void ) out ; return 0 ; }
static int32_T ds_init_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out ->
mINIT_I . mX [ 0 ] = 1 ; out -> mINIT_I . mX [ 1 ] = 1 ; out -> mINIT_I . mX
[ 2 ] = 1 ; out -> mINIT_I . mX [ 3 ] = 1 ; out -> mINIT_I . mX [ 4 ] = 1 ;
out -> mINIT_I . mX [ 5 ] = 1 ; ( void ) sys ; ( void ) out ; return 0 ; }
static int32_T ds_sfp ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_sfo (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_duf ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t5 , NeDsMethodOutput * out ) { real_T
intermediate_der219 ; real_T t3 ; real_T t4 ; if ( t5 -> mM . mX [ 64ULL ] !=
0 ) { t4 = 0.0 ; } else { t4 = t5 -> mM . mX [ 65ULL ] != 0 ? 10000.0 : t5 ->
mU . mX [ 3ULL ] * 10000.0 ; } if ( t5 -> mM . mX [ 64ULL ] != 0 ) {
intermediate_der219 = 0.0 ; } else { intermediate_der219 = t5 -> mM . mX [
65ULL ] != 0 ? 0.0 : 10000.0 ; } t3 = t4 * t4 ; out -> mDUF . mX [ 0ULL ] = -
( - ( 5.0 - t5 -> mX . mX [ 39ULL ] ) / ( t3 == 0.0 ? 1.0E-16 : t3 ) *
intermediate_der219 ) ; t4 = ( 10000.0 - t4 ) * ( 10000.0 - t4 ) ; out ->
mDUF . mX [ 1ULL ] = - ( t5 -> mX . mX [ 39ULL ] / ( t4 == 0.0 ? 1.0E-16 : t4
) * - intermediate_der219 ) ; ( void ) sys ; ( void ) out ; return 0 ; }
static int32_T ds_duf_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static int32_T
_cg_const_1 [ 5 ] = { 0 , 0 , 0 , 0 , 2 } ; ( void ) t1 ; out -> mDUF_P .
mNumCol = 4ULL ; out -> mDUF_P . mNumRow = 53ULL ; out -> mDUF_P . mJc [ 0 ]
= _cg_const_1 [ 0 ] ; out -> mDUF_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out ->
mDUF_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out -> mDUF_P . mJc [ 3 ] =
_cg_const_1 [ 3 ] ; out -> mDUF_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out ->
mDUF_P . mIr [ 0 ] = 40 ; out -> mDUF_P . mIr [ 1 ] = 41 ; ( void ) sys ; (
void ) out ; return 0 ; } static int32_T ds_dtf ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { out -> mDTF .
mX [ 0ULL ] = - ( cos ( t1 -> mT . mX [ 0ULL ] * 314.15926535897933 ) *
97703.531526642575 ) ; ( void ) sys ; ( void ) out ; return 0 ; } static
int32_T ds_dtf_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDTF_P . mNumCol = 1ULL
; out -> mDTF_P . mNumRow = 53ULL ; out -> mDTF_P . mJc [ 0 ] = 0 ; out ->
mDTF_P . mJc [ 1 ] = 1 ; out -> mDTF_P . mIr [ 0 ] = 17 ; ( void ) sys ; (
void ) out ; return 0 ; } static int32_T ds_ddf_p ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static
int32_T _cg_const_1 [ 11 ] = { 0 , 0 , 0 , 0 , 1 , 1 , 2 , 2 , 3 , 3 , 4 } ;
( void ) t1 ; out -> mDDF_P . mNumCol = 10ULL ; out -> mDDF_P . mNumRow =
53ULL ; out -> mDDF_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out -> mDDF_P . mJc [
1 ] = _cg_const_1 [ 1 ] ; out -> mDDF_P . mJc [ 2 ] = _cg_const_1 [ 2 ] ; out
-> mDDF_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out -> mDDF_P . mJc [ 4 ] =
_cg_const_1 [ 4 ] ; out -> mDDF_P . mJc [ 5 ] = _cg_const_1 [ 5 ] ; out ->
mDDF_P . mJc [ 6 ] = _cg_const_1 [ 6 ] ; out -> mDDF_P . mJc [ 7 ] =
_cg_const_1 [ 7 ] ; out -> mDDF_P . mJc [ 8 ] = _cg_const_1 [ 8 ] ; out ->
mDDF_P . mJc [ 9 ] = _cg_const_1 [ 9 ] ; out -> mDDF_P . mJc [ 10 ] =
_cg_const_1 [ 10 ] ; out -> mDDF_P . mIr [ 0 ] = 47 ; out -> mDDF_P . mIr [ 1
] = 48 ; out -> mDDF_P . mIr [ 2 ] = 49 ; out -> mDDF_P . mIr [ 3 ] = 50 ; (
void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_b ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ;
} static int32_T ds_b_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out ->
mB_P . mNumCol = 4ULL ; out -> mB_P . mNumRow = 53ULL ; out -> mB_P . mJc [ 0
] = 0 ; out -> mB_P . mJc [ 1 ] = 0 ; out -> mB_P . mJc [ 2 ] = 0 ; out ->
mB_P . mJc [ 3 ] = 0 ; out -> mB_P . mJc [ 4 ] = 0 ; ( void ) sys ; ( void )
out ; return 0 ; } static int32_T ds_c ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_c_p (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mC_P . mNumCol = 1ULL ; out
-> mC_P . mNumRow = 53ULL ; out -> mC_P . mJc [ 0 ] = 0 ; out -> mC_P . mJc [
1 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_tduf_p
( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { static int32_T _cg_const_2 [ 7 ] = { 35 , 37 , 39
, 36 , 38 , 40 , 41 } ; static int32_T _cg_const_1 [ 5 ] = { 0 , 1 , 3 , 5 ,
7 } ; ( void ) t1 ; out -> mTDUF_P . mNumCol = 4ULL ; out -> mTDUF_P .
mNumRow = 53ULL ; out -> mTDUF_P . mJc [ 0 ] = _cg_const_1 [ 0 ] ; out ->
mTDUF_P . mJc [ 1 ] = _cg_const_1 [ 1 ] ; out -> mTDUF_P . mJc [ 2 ] =
_cg_const_1 [ 2 ] ; out -> mTDUF_P . mJc [ 3 ] = _cg_const_1 [ 3 ] ; out ->
mTDUF_P . mJc [ 4 ] = _cg_const_1 [ 4 ] ; out -> mTDUF_P . mIr [ 0 ] =
_cg_const_2 [ 0 ] ; out -> mTDUF_P . mIr [ 1 ] = _cg_const_2 [ 1 ] ; out ->
mTDUF_P . mIr [ 2 ] = _cg_const_2 [ 2 ] ; out -> mTDUF_P . mIr [ 3 ] =
_cg_const_2 [ 3 ] ; out -> mTDUF_P . mIr [ 4 ] = _cg_const_2 [ 4 ] ; out ->
mTDUF_P . mIr [ 5 ] = _cg_const_2 [ 5 ] ; out -> mTDUF_P . mIr [ 6 ] =
_cg_const_2 [ 6 ] ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_dwf ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_dwf_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
out -> mDWF_P . mNumCol = 0ULL ; out -> mDWF_P . mNumRow = 53ULL ; out ->
mDWF_P . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; } static
int32_T ds_dpdxf ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; (
void ) out ; return 0 ; } static int32_T ds_dpdxf_p ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void )
t1 ; out -> mDPDXF_P . mNumCol = 0ULL ; out -> mDPDXF_P . mNumRow = 70ULL ;
out -> mDPDXF_P . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; }
static int32_T ds_dnf ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { static real_T
_cg_const_1 [ 3 ] = { 5.0 , - 5.0 , - 5.0 } ; ( void ) t1 ; out -> mDNF . mX
[ 0 ] = _cg_const_1 [ 0 ] ; out -> mDNF . mX [ 1 ] = _cg_const_1 [ 1 ] ; out
-> mDNF . mX [ 2 ] = _cg_const_1 [ 2 ] ; ( void ) sys ; ( void ) out ; return
0 ; } static int32_T ds_freqs ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out ->
mFREQS . mX [ 0 ] = 314.15926535897933 ; ( void ) sys ; ( void ) out ; return
0 ; } static int32_T ds_icr ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_icr_im (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_icr_id ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_icr_il ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_dxicr ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_ddicr ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_ddicr_p ( const NeDynamicSystem * sys
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
out -> mDDICR_P . mNumCol = 10ULL ; out -> mDDICR_P . mNumRow = 0ULL ; out ->
mDDICR_P . mJc [ 0 ] = 0 ; out -> mDDICR_P . mJc [ 1 ] = 0 ; out -> mDDICR_P
. mJc [ 2 ] = 0 ; out -> mDDICR_P . mJc [ 3 ] = 0 ; out -> mDDICR_P . mJc [ 4
] = 0 ; out -> mDDICR_P . mJc [ 5 ] = 0 ; out -> mDDICR_P . mJc [ 6 ] = 0 ;
out -> mDDICR_P . mJc [ 7 ] = 0 ; out -> mDDICR_P . mJc [ 8 ] = 0 ; out ->
mDDICR_P . mJc [ 9 ] = 0 ; out -> mDDICR_P . mJc [ 10 ] = 0 ; ( void ) sys ;
( void ) out ; return 0 ; } static int32_T ds_tduicr_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; out -> mTDUICR_P . mNumCol = 4ULL ; out -> mTDUICR_P .
mNumRow = 0ULL ; out -> mTDUICR_P . mJc [ 0 ] = 0 ; out -> mTDUICR_P . mJc [
1 ] = 0 ; out -> mTDUICR_P . mJc [ 2 ] = 0 ; out -> mTDUICR_P . mJc [ 3 ] = 0
; out -> mTDUICR_P . mJc [ 4 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ;
} static int32_T ds_icrm ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_dxicrm (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_ddicrm ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_ddicrm_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDDICRM_P . mNumCol = 10ULL ;
out -> mDDICRM_P . mNumRow = 0ULL ; out -> mDDICRM_P . mJc [ 0 ] = 0 ; out ->
mDDICRM_P . mJc [ 1 ] = 0 ; out -> mDDICRM_P . mJc [ 2 ] = 0 ; out ->
mDDICRM_P . mJc [ 3 ] = 0 ; out -> mDDICRM_P . mJc [ 4 ] = 0 ; out ->
mDDICRM_P . mJc [ 5 ] = 0 ; out -> mDDICRM_P . mJc [ 6 ] = 0 ; out ->
mDDICRM_P . mJc [ 7 ] = 0 ; out -> mDDICRM_P . mJc [ 8 ] = 0 ; out ->
mDDICRM_P . mJc [ 9 ] = 0 ; out -> mDDICRM_P . mJc [ 10 ] = 0 ; ( void ) sys
; ( void ) out ; return 0 ; } static int32_T ds_dimin ( const NeDynamicSystem
* sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void )
t1 ; out -> mDIMIN . mX [ 0 ] = - pmf_get_inf ( ) ; out -> mDIMIN . mX [ 1 ]
= - pmf_get_inf ( ) ; out -> mDIMIN . mX [ 2 ] = - pmf_get_inf ( ) ; out ->
mDIMIN . mX [ 3 ] = - pmf_get_inf ( ) ; out -> mDIMIN . mX [ 4 ] = -
pmf_get_inf ( ) ; out -> mDIMIN . mX [ 5 ] = - pmf_get_inf ( ) ; out ->
mDIMIN . mX [ 6 ] = - pmf_get_inf ( ) ; out -> mDIMIN . mX [ 7 ] = -
pmf_get_inf ( ) ; out -> mDIMIN . mX [ 8 ] = - pmf_get_inf ( ) ; out ->
mDIMIN . mX [ 9 ] = - pmf_get_inf ( ) ; ( void ) sys ; ( void ) out ; return
0 ; } static int32_T ds_dimax ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out ->
mDIMAX . mX [ 0 ] = pmf_get_inf ( ) ; out -> mDIMAX . mX [ 1 ] = pmf_get_inf
( ) ; out -> mDIMAX . mX [ 2 ] = pmf_get_inf ( ) ; out -> mDIMAX . mX [ 3 ] =
pmf_get_inf ( ) ; out -> mDIMAX . mX [ 4 ] = pmf_get_inf ( ) ; out -> mDIMAX
. mX [ 5 ] = pmf_get_inf ( ) ; out -> mDIMAX . mX [ 6 ] = pmf_get_inf ( ) ;
out -> mDIMAX . mX [ 7 ] = pmf_get_inf ( ) ; out -> mDIMAX . mX [ 8 ] =
pmf_get_inf ( ) ; out -> mDIMAX . mX [ 9 ] = pmf_get_inf ( ) ; ( void ) sys ;
( void ) out ; return 0 ; } static int32_T ds_dxm ( const NeDynamicSystem *
sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void )
t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_ddm ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_ddm_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
out -> mDDM_P . mNumCol = 10ULL ; out -> mDDM_P . mNumRow = 17ULL ; out ->
mDDM_P . mJc [ 0 ] = 0 ; out -> mDDM_P . mJc [ 1 ] = 0 ; out -> mDDM_P . mJc
[ 2 ] = 0 ; out -> mDDM_P . mJc [ 3 ] = 0 ; out -> mDDM_P . mJc [ 4 ] = 0 ;
out -> mDDM_P . mJc [ 5 ] = 0 ; out -> mDDM_P . mJc [ 6 ] = 0 ; out -> mDDM_P
. mJc [ 7 ] = 0 ; out -> mDDM_P . mJc [ 8 ] = 0 ; out -> mDDM_P . mJc [ 9 ] =
0 ; out -> mDDM_P . mJc [ 10 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ;
} static int32_T ds_dum ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_dum_p (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDUM_P . mNumCol = 4ULL ; out
-> mDUM_P . mNumRow = 17ULL ; out -> mDUM_P . mJc [ 0 ] = 0 ; out -> mDUM_P .
mJc [ 1 ] = 0 ; out -> mDUM_P . mJc [ 2 ] = 0 ; out -> mDUM_P . mJc [ 3 ] = 0
; out -> mDUM_P . mJc [ 4 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; }
static int32_T ds_dtm ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_dtm_p (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDTM_P . mNumCol = 1ULL ; out
-> mDTM_P . mNumRow = 17ULL ; out -> mDTM_P . mJc [ 0 ] = 0 ; out -> mDTM_P .
mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_dpm ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_dpm_p ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ;
out -> mDPM_P . mNumCol = 0ULL ; out -> mDPM_P . mNumRow = 17ULL ; out ->
mDPM_P . mJc [ 0 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; } static
int32_T ds_vmm ( const NeDynamicSystem * sys , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out -> mVMM . mX [ 0 ] = false
; out -> mVMM . mX [ 1 ] = false ; out -> mVMM . mX [ 2 ] = false ; out ->
mVMM . mX [ 3 ] = false ; out -> mVMM . mX [ 4 ] = false ; out -> mVMM . mX [
5 ] = false ; out -> mVMM . mX [ 6 ] = false ; out -> mVMM . mX [ 7 ] = false
; out -> mVMM . mX [ 8 ] = false ; out -> mVMM . mX [ 9 ] = false ; out ->
mVMM . mX [ 10 ] = false ; out -> mVMM . mX [ 11 ] = false ; out -> mVMM . mX
[ 12 ] = false ; out -> mVMM . mX [ 13 ] = false ; out -> mVMM . mX [ 14 ] =
false ; out -> mVMM . mX [ 15 ] = false ; out -> mVMM . mX [ 16 ] = false ; (
void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_dp_l ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void ) out ; return 0 ;
} static int32_T ds_dp_i ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_dp_j (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_dp_r ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_qu
( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; ( void ) out ; ( void ) sys ; ( void
) out ; return 0 ; } static int32_T ds_qt ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_qu_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mQU_P . mNumCol = 4ULL ; out
-> mQU_P . mNumRow = 53ULL ; out -> mQU_P . mJc [ 0 ] = 0 ; out -> mQU_P .
mJc [ 1 ] = 0 ; out -> mQU_P . mJc [ 2 ] = 0 ; out -> mQU_P . mJc [ 3 ] = 0 ;
out -> mQU_P . mJc [ 4 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; }
static int32_T ds_qt_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out ->
mQT_P . mNumCol = 1ULL ; out -> mQT_P . mNumRow = 53ULL ; out -> mQT_P . mJc
[ 0 ] = 0 ; out -> mQT_P . mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) out ;
return 0 ; } static int32_T ds_solverhits ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_dxy
( const NeDynamicSystem * sys , const NeDynamicSystemInput * t39 ,
NeDsMethodOutput * out ) { ( void ) t39 ; out -> mDXY . mX [ 4ULL ] = 1.0 ;
out -> mDXY . mX [ 13ULL ] = 1.0E-6 ; out -> mDXY . mX [ 5ULL ] = 1.0 ; out
-> mDXY . mX [ 14ULL ] = 1.0E-6 ; out -> mDXY . mX [ 3ULL ] = 1.0 ; out ->
mDXY . mX [ 12ULL ] = 0.01 ; out -> mDXY . mX [ 19ULL ] = - 1.0 ; out -> mDXY
. mX [ 18ULL ] = 1.0 ; out -> mDXY . mX [ 16ULL ] = 1.0 ; out -> mDXY . mX [
7ULL ] = - 1.0 ; out -> mDXY . mX [ 8ULL ] = 1.0 ; out -> mDXY . mX [ 2ULL ]
= - 1.0E-12 ; out -> mDXY . mX [ 6ULL ] = 1.0 ; out -> mDXY . mX [ 11ULL ] =
- 1.0E-14 ; out -> mDXY . mX [ 0ULL ] = 1.0 ; out -> mDXY . mX [ 1ULL ] = 1.0
; out -> mDXY . mX [ 9ULL ] = 0.01 ; out -> mDXY . mX [ 10ULL ] = 0.01 ; out
-> mDXY . mX [ 15ULL ] = 1.0 ; out -> mDXY . mX [ 17ULL ] = - 1.0 ; out ->
mDXY . mX [ 20ULL ] = 1.0 ; out -> mDXY . mX [ 21ULL ] = 1.0 ; out -> mDXY .
mX [ 22ULL ] = 1.0 ; out -> mDXY . mX [ 23ULL ] = 1.0 ; out -> mDXY . mX [
24ULL ] = 1.0 ; out -> mDXY . mX [ 25ULL ] = 1.0 ; ( void ) sys ; ( void )
out ; return 0 ; } static int32_T ds_duy ( const NeDynamicSystem * sys ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; (
void ) out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T
ds_duy_p ( const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDUY_P . mNumCol = 4ULL ; out
-> mDUY_P . mNumRow = 16ULL ; out -> mDUY_P . mJc [ 0 ] = 0 ; out -> mDUY_P .
mJc [ 1 ] = 0 ; out -> mDUY_P . mJc [ 2 ] = 0 ; out -> mDUY_P . mJc [ 3 ] = 0
; out -> mDUY_P . mJc [ 4 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; }
static int32_T ds_mduy_p ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; out ->
mMDUY_P . mNumCol = 4ULL ; out -> mMDUY_P . mNumRow = 16ULL ; out -> mMDUY_P
. mJc [ 0 ] = 0 ; out -> mMDUY_P . mJc [ 1 ] = 0 ; out -> mMDUY_P . mJc [ 2 ]
= 0 ; out -> mMDUY_P . mJc [ 3 ] = 0 ; out -> mMDUY_P . mJc [ 4 ] = 0 ; (
void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_tduy_p ( const
NeDynamicSystem * sys , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
out ) { ( void ) t1 ; out -> mTDUY_P . mNumCol = 4ULL ; out -> mTDUY_P .
mNumRow = 16ULL ; out -> mTDUY_P . mJc [ 0 ] = 0 ; out -> mTDUY_P . mJc [ 1 ]
= 0 ; out -> mTDUY_P . mJc [ 2 ] = 0 ; out -> mTDUY_P . mJc [ 3 ] = 0 ; out
-> mTDUY_P . mJc [ 4 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; }
static int32_T ds_dty ( const NeDynamicSystem * sys , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * out ) { ( void ) t1 ; ( void )
out ; ( void ) sys ; ( void ) out ; return 0 ; } static int32_T ds_dty_p (
const NeDynamicSystem * sys , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * out ) { ( void ) t1 ; out -> mDTY_P . mNumCol = 1ULL ; out
-> mDTY_P . mNumRow = 16ULL ; out -> mDTY_P . mJc [ 0 ] = 0 ; out -> mDTY_P .
mJc [ 1 ] = 0 ; ( void ) sys ; ( void ) out ; return 0 ; }
