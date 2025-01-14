#ifndef _SCE_REG_MGR_H_
#define _SCE_REG_MGR_H_

#include <stdint.h>

#ifdef __cplusplus 
extern "C" {
#endif

// Empty Comment
void sceRegMgrBackupNeedMem();
// Empty Comment
void sceRegMgrBackupPullData();
// Empty Comment
void sceRegMgrBackupPushData();
// Empty Comment
void sceRegMgrCheckError();
// Empty Comment
void sceRegMgrDrvDataCheckGet();
// Empty Comment
void sceRegMgrDrvDataClose();
// Empty Comment
void sceRegMgrDrvDataOpen();
// Empty Comment
void sceRegMgrDrvGetEntCnt();
// Empty Comment
void sceRegMgrDrvGetUpdateCnt();
// Empty Comment
void sceRegMgrEvtGetCnt();
// Empty Comment
void sceRegMgrEvtGetRegId();
// Empty Comment
int sceRegMgrGetBin(int optionId, void* outData, size_t dataLength);
// Empty Comment
void sceRegMgrGetBinInitVal();
// Empty Comment
int sceRegMgrGetInt(int optionId, int* outInt);
// Empty Comment
void sceRegMgrGetIntInitVal();
// Empty Comment
int sceRegMgrGetStr(int optionId, char* outString, size_t stringLength);
// Empty Comment
void sceRegMgrGetStrInitVal();
// Empty Comment
void sceRegMgrGetVersion();
// Empty Comment
void sceRegMgrIsChange();
// Empty Comment
void sceRegMgrIsInitOK();
// Empty Comment
void sceRegMgrLogPull();
// Empty Comment
void sceRegMgrLogStart();
// Empty Comment
void sceRegMgrNonSysCheckError();
// Empty Comment
void sceRegMgrNonSysGetBin();
// Empty Comment
void sceRegMgrNonSysGetInt();
// Empty Comment
void sceRegMgrNonSysGetStr();
// Empty Comment
void sceRegMgrNonSysSetBin();
// Empty Comment
void sceRegMgrNonSysSetInt();
// Empty Comment
void sceRegMgrNonSysSetStr();
// Empty Comment
void sceRegMgrResetVal();
// Empty Comment
int sceRegMgrSetBin(int optionId, const void* inData, size_t dataLength);
// Empty Comment
void sceRegMgrSetInitLevel();
// Empty Comment
int sceRegMgrSetInt(int optionId, int inInt);
// Empty Comment
int sceRegMgrSetStr(int optionId, const char* inStirng, size_t stringLength);
// Empty Comment
void sceRegMgrSrvCnvRegionInt();
// Empty Comment
void sceRegMgrSrvCnvRegionStr();
// Empty Comment
void sceRegMgrSrvGetMachineType();
// Empty Comment
void sceRegMgrSrvGetQAFforReg();
// Empty Comment
void sceRegMgrSrvGetRealMachineType();
// Empty Comment
void sceRegMgrSrvGetRegion();
// Empty Comment
void sceRegMgrSrvGetRegionStr();
// Empty Comment
void sceRegMgrToolDataCheckGet();
// Empty Comment
void sceRegMgrToolGetEntryCnt();
// Empty Comment
void sceRegMgrToolGetUpdateCnt();

#endif

#ifdef __cplusplus
}
#endif