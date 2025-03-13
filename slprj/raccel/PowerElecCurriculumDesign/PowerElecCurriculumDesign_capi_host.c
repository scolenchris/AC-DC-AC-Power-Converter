#include "PowerElecCurriculumDesign_capi_host.h"
static PowerElecCurriculumDesign_host_DataMapInfo_T root;
static int initialized = 0;
__declspec( dllexport ) rtwCAPI_ModelMappingInfo *getRootMappingInfo()
{
    if (initialized == 0) {
        initialized = 1;
        PowerElecCurriculumDesign_host_InitializeDataMapInfo(&(root), "PowerElecCurriculumDesign");
    }
    return &root.mmi;
}

rtwCAPI_ModelMappingInfo *mexFunction(){return(getRootMappingInfo());}
