/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceSaveData.native", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceSaveDataBackup\n"
    ".type sceSaveDataBackup @function\n"
    "sceSaveDataBackup:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataBackup]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataBackup\n"
    ".type __load_and_call_sceSaveDataBackup @function\n"
    "__load_and_call_sceSaveDataBackup:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataBackup\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataBackup]\n");

void __load_and_call_sceSaveDataBackup();
static __attribute__ ((used)) void* __ptr_sceSaveDataBackup = &__load_and_call_sceSaveDataBackup;

static __attribute__ ((used)) void
__load_sceSaveDataBackup(void) {
  sprx_dlsym(__handle, "sceSaveDataBackup", &__ptr_sceSaveDataBackup);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataCheckIpmiIfSize\n"
    ".type sceSaveDataCheckIpmiIfSize @function\n"
    "sceSaveDataCheckIpmiIfSize:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataCheckIpmiIfSize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataCheckIpmiIfSize\n"
    ".type __load_and_call_sceSaveDataCheckIpmiIfSize @function\n"
    "__load_and_call_sceSaveDataCheckIpmiIfSize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataCheckIpmiIfSize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataCheckIpmiIfSize]\n");

void __load_and_call_sceSaveDataCheckIpmiIfSize();
static __attribute__ ((used)) void* __ptr_sceSaveDataCheckIpmiIfSize = &__load_and_call_sceSaveDataCheckIpmiIfSize;

static __attribute__ ((used)) void
__load_sceSaveDataCheckIpmiIfSize(void) {
  sprx_dlsym(__handle, "sceSaveDataCheckIpmiIfSize", &__ptr_sceSaveDataCheckIpmiIfSize);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataCommit\n"
    ".type sceSaveDataCommit @function\n"
    "sceSaveDataCommit:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataCommit]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataCommit\n"
    ".type __load_and_call_sceSaveDataCommit @function\n"
    "__load_and_call_sceSaveDataCommit:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataCommit\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataCommit]\n");

void __load_and_call_sceSaveDataCommit();
static __attribute__ ((used)) void* __ptr_sceSaveDataCommit = &__load_and_call_sceSaveDataCommit;

static __attribute__ ((used)) void
__load_sceSaveDataCommit(void) {
  sprx_dlsym(__handle, "sceSaveDataCommit", &__ptr_sceSaveDataCommit);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataCreateTransactionResource\n"
    ".type sceSaveDataCreateTransactionResource @function\n"
    "sceSaveDataCreateTransactionResource:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataCreateTransactionResource]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataCreateTransactionResource\n"
    ".type __load_and_call_sceSaveDataCreateTransactionResource @function\n"
    "__load_and_call_sceSaveDataCreateTransactionResource:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataCreateTransactionResource\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataCreateTransactionResource]\n");

void __load_and_call_sceSaveDataCreateTransactionResource();
static __attribute__ ((used)) void* __ptr_sceSaveDataCreateTransactionResource = &__load_and_call_sceSaveDataCreateTransactionResource;

static __attribute__ ((used)) void
__load_sceSaveDataCreateTransactionResource(void) {
  sprx_dlsym(__handle, "sceSaveDataCreateTransactionResource", &__ptr_sceSaveDataCreateTransactionResource);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataDebug\n"
    ".type sceSaveDataDebug @function\n"
    "sceSaveDataDebug:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebug]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataDebug\n"
    ".type __load_and_call_sceSaveDataDebug @function\n"
    "__load_and_call_sceSaveDataDebug:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataDebug\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebug]\n");

void __load_and_call_sceSaveDataDebug();
static __attribute__ ((used)) void* __ptr_sceSaveDataDebug = &__load_and_call_sceSaveDataDebug;

static __attribute__ ((used)) void
__load_sceSaveDataDebug(void) {
  sprx_dlsym(__handle, "sceSaveDataDebug", &__ptr_sceSaveDataDebug);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataDebugCheckBackupData\n"
    ".type sceSaveDataDebugCheckBackupData @function\n"
    "sceSaveDataDebugCheckBackupData:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebugCheckBackupData]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataDebugCheckBackupData\n"
    ".type __load_and_call_sceSaveDataDebugCheckBackupData @function\n"
    "__load_and_call_sceSaveDataDebugCheckBackupData:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataDebugCheckBackupData\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebugCheckBackupData]\n");

void __load_and_call_sceSaveDataDebugCheckBackupData();
static __attribute__ ((used)) void* __ptr_sceSaveDataDebugCheckBackupData = &__load_and_call_sceSaveDataDebugCheckBackupData;

static __attribute__ ((used)) void
__load_sceSaveDataDebugCheckBackupData(void) {
  sprx_dlsym(__handle, "sceSaveDataDebugCheckBackupData", &__ptr_sceSaveDataDebugCheckBackupData);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataDebugCleanMount\n"
    ".type sceSaveDataDebugCleanMount @function\n"
    "sceSaveDataDebugCleanMount:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebugCleanMount]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataDebugCleanMount\n"
    ".type __load_and_call_sceSaveDataDebugCleanMount @function\n"
    "__load_and_call_sceSaveDataDebugCleanMount:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataDebugCleanMount\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebugCleanMount]\n");

void __load_and_call_sceSaveDataDebugCleanMount();
static __attribute__ ((used)) void* __ptr_sceSaveDataDebugCleanMount = &__load_and_call_sceSaveDataDebugCleanMount;

static __attribute__ ((used)) void
__load_sceSaveDataDebugCleanMount(void) {
  sprx_dlsym(__handle, "sceSaveDataDebugCleanMount", &__ptr_sceSaveDataDebugCleanMount);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataDebugCompiledSdkVersion\n"
    ".type sceSaveDataDebugCompiledSdkVersion @function\n"
    "sceSaveDataDebugCompiledSdkVersion:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebugCompiledSdkVersion]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataDebugCompiledSdkVersion\n"
    ".type __load_and_call_sceSaveDataDebugCompiledSdkVersion @function\n"
    "__load_and_call_sceSaveDataDebugCompiledSdkVersion:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataDebugCompiledSdkVersion\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebugCompiledSdkVersion]\n");

void __load_and_call_sceSaveDataDebugCompiledSdkVersion();
static __attribute__ ((used)) void* __ptr_sceSaveDataDebugCompiledSdkVersion = &__load_and_call_sceSaveDataDebugCompiledSdkVersion;

static __attribute__ ((used)) void
__load_sceSaveDataDebugCompiledSdkVersion(void) {
  sprx_dlsym(__handle, "sceSaveDataDebugCompiledSdkVersion", &__ptr_sceSaveDataDebugCompiledSdkVersion);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataDebugCreateSaveDataRoot\n"
    ".type sceSaveDataDebugCreateSaveDataRoot @function\n"
    "sceSaveDataDebugCreateSaveDataRoot:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebugCreateSaveDataRoot]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataDebugCreateSaveDataRoot\n"
    ".type __load_and_call_sceSaveDataDebugCreateSaveDataRoot @function\n"
    "__load_and_call_sceSaveDataDebugCreateSaveDataRoot:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataDebugCreateSaveDataRoot\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebugCreateSaveDataRoot]\n");

void __load_and_call_sceSaveDataDebugCreateSaveDataRoot();
static __attribute__ ((used)) void* __ptr_sceSaveDataDebugCreateSaveDataRoot = &__load_and_call_sceSaveDataDebugCreateSaveDataRoot;

static __attribute__ ((used)) void
__load_sceSaveDataDebugCreateSaveDataRoot(void) {
  sprx_dlsym(__handle, "sceSaveDataDebugCreateSaveDataRoot", &__ptr_sceSaveDataDebugCreateSaveDataRoot);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataDebugProspero\n"
    ".type sceSaveDataDebugProspero @function\n"
    "sceSaveDataDebugProspero:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebugProspero]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataDebugProspero\n"
    ".type __load_and_call_sceSaveDataDebugProspero @function\n"
    "__load_and_call_sceSaveDataDebugProspero:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataDebugProspero\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebugProspero]\n");

void __load_and_call_sceSaveDataDebugProspero();
static __attribute__ ((used)) void* __ptr_sceSaveDataDebugProspero = &__load_and_call_sceSaveDataDebugProspero;

static __attribute__ ((used)) void
__load_sceSaveDataDebugProspero(void) {
  sprx_dlsym(__handle, "sceSaveDataDebugProspero", &__ptr_sceSaveDataDebugProspero);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataDebugRemoveSaveDataRoot\n"
    ".type sceSaveDataDebugRemoveSaveDataRoot @function\n"
    "sceSaveDataDebugRemoveSaveDataRoot:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebugRemoveSaveDataRoot]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataDebugRemoveSaveDataRoot\n"
    ".type __load_and_call_sceSaveDataDebugRemoveSaveDataRoot @function\n"
    "__load_and_call_sceSaveDataDebugRemoveSaveDataRoot:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataDebugRemoveSaveDataRoot\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebugRemoveSaveDataRoot]\n");

void __load_and_call_sceSaveDataDebugRemoveSaveDataRoot();
static __attribute__ ((used)) void* __ptr_sceSaveDataDebugRemoveSaveDataRoot = &__load_and_call_sceSaveDataDebugRemoveSaveDataRoot;

static __attribute__ ((used)) void
__load_sceSaveDataDebugRemoveSaveDataRoot(void) {
  sprx_dlsym(__handle, "sceSaveDataDebugRemoveSaveDataRoot", &__ptr_sceSaveDataDebugRemoveSaveDataRoot);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataDebugTarget\n"
    ".type sceSaveDataDebugTarget @function\n"
    "sceSaveDataDebugTarget:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebugTarget]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataDebugTarget\n"
    ".type __load_and_call_sceSaveDataDebugTarget @function\n"
    "__load_and_call_sceSaveDataDebugTarget:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataDebugTarget\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDebugTarget]\n");

void __load_and_call_sceSaveDataDebugTarget();
static __attribute__ ((used)) void* __ptr_sceSaveDataDebugTarget = &__load_and_call_sceSaveDataDebugTarget;

static __attribute__ ((used)) void
__load_sceSaveDataDebugTarget(void) {
  sprx_dlsym(__handle, "sceSaveDataDebugTarget", &__ptr_sceSaveDataDebugTarget);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataDelete\n"
    ".type sceSaveDataDelete @function\n"
    "sceSaveDataDelete:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDelete]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataDelete\n"
    ".type __load_and_call_sceSaveDataDelete @function\n"
    "__load_and_call_sceSaveDataDelete:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataDelete\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDelete]\n");

void __load_and_call_sceSaveDataDelete();
static __attribute__ ((used)) void* __ptr_sceSaveDataDelete = &__load_and_call_sceSaveDataDelete;

static __attribute__ ((used)) void
__load_sceSaveDataDelete(void) {
  sprx_dlsym(__handle, "sceSaveDataDelete", &__ptr_sceSaveDataDelete);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataDeleteTransactionResource\n"
    ".type sceSaveDataDeleteTransactionResource @function\n"
    "sceSaveDataDeleteTransactionResource:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDeleteTransactionResource]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataDeleteTransactionResource\n"
    ".type __load_and_call_sceSaveDataDeleteTransactionResource @function\n"
    "__load_and_call_sceSaveDataDeleteTransactionResource:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataDeleteTransactionResource\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDeleteTransactionResource]\n");

void __load_and_call_sceSaveDataDeleteTransactionResource();
static __attribute__ ((used)) void* __ptr_sceSaveDataDeleteTransactionResource = &__load_and_call_sceSaveDataDeleteTransactionResource;

static __attribute__ ((used)) void
__load_sceSaveDataDeleteTransactionResource(void) {
  sprx_dlsym(__handle, "sceSaveDataDeleteTransactionResource", &__ptr_sceSaveDataDeleteTransactionResource);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataDirNameSearch\n"
    ".type sceSaveDataDirNameSearch @function\n"
    "sceSaveDataDirNameSearch:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDirNameSearch]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataDirNameSearch\n"
    ".type __load_and_call_sceSaveDataDirNameSearch @function\n"
    "__load_and_call_sceSaveDataDirNameSearch:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataDirNameSearch\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDirNameSearch]\n");

void __load_and_call_sceSaveDataDirNameSearch();
static __attribute__ ((used)) void* __ptr_sceSaveDataDirNameSearch = &__load_and_call_sceSaveDataDirNameSearch;

static __attribute__ ((used)) void
__load_sceSaveDataDirNameSearch(void) {
  sprx_dlsym(__handle, "sceSaveDataDirNameSearch", &__ptr_sceSaveDataDirNameSearch);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataDirNameSearchPs4\n"
    ".type sceSaveDataDirNameSearchPs4 @function\n"
    "sceSaveDataDirNameSearchPs4:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDirNameSearchPs4]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataDirNameSearchPs4\n"
    ".type __load_and_call_sceSaveDataDirNameSearchPs4 @function\n"
    "__load_and_call_sceSaveDataDirNameSearchPs4:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataDirNameSearchPs4\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataDirNameSearchPs4]\n");

void __load_and_call_sceSaveDataDirNameSearchPs4();
static __attribute__ ((used)) void* __ptr_sceSaveDataDirNameSearchPs4 = &__load_and_call_sceSaveDataDirNameSearchPs4;

static __attribute__ ((used)) void
__load_sceSaveDataDirNameSearchPs4(void) {
  sprx_dlsym(__handle, "sceSaveDataDirNameSearchPs4", &__ptr_sceSaveDataDirNameSearchPs4);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataGetEventResult\n"
    ".type sceSaveDataGetEventResult @function\n"
    "sceSaveDataGetEventResult:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataGetEventResult]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataGetEventResult\n"
    ".type __load_and_call_sceSaveDataGetEventResult @function\n"
    "__load_and_call_sceSaveDataGetEventResult:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataGetEventResult\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataGetEventResult]\n");

void __load_and_call_sceSaveDataGetEventResult();
static __attribute__ ((used)) void* __ptr_sceSaveDataGetEventResult = &__load_and_call_sceSaveDataGetEventResult;

static __attribute__ ((used)) void
__load_sceSaveDataGetEventResult(void) {
  sprx_dlsym(__handle, "sceSaveDataGetEventResult", &__ptr_sceSaveDataGetEventResult);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataGetMountInfo\n"
    ".type sceSaveDataGetMountInfo @function\n"
    "sceSaveDataGetMountInfo:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataGetMountInfo]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataGetMountInfo\n"
    ".type __load_and_call_sceSaveDataGetMountInfo @function\n"
    "__load_and_call_sceSaveDataGetMountInfo:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataGetMountInfo\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataGetMountInfo]\n");

void __load_and_call_sceSaveDataGetMountInfo();
static __attribute__ ((used)) void* __ptr_sceSaveDataGetMountInfo = &__load_and_call_sceSaveDataGetMountInfo;

static __attribute__ ((used)) void
__load_sceSaveDataGetMountInfo(void) {
  sprx_dlsym(__handle, "sceSaveDataGetMountInfo", &__ptr_sceSaveDataGetMountInfo);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataGetParam\n"
    ".type sceSaveDataGetParam @function\n"
    "sceSaveDataGetParam:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataGetParam]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataGetParam\n"
    ".type __load_and_call_sceSaveDataGetParam @function\n"
    "__load_and_call_sceSaveDataGetParam:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataGetParam\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataGetParam]\n");

void __load_and_call_sceSaveDataGetParam();
static __attribute__ ((used)) void* __ptr_sceSaveDataGetParam = &__load_and_call_sceSaveDataGetParam;

static __attribute__ ((used)) void
__load_sceSaveDataGetParam(void) {
  sprx_dlsym(__handle, "sceSaveDataGetParam", &__ptr_sceSaveDataGetParam);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataGetSaveDataMemory2\n"
    ".type sceSaveDataGetSaveDataMemory2 @function\n"
    "sceSaveDataGetSaveDataMemory2:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataGetSaveDataMemory2]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataGetSaveDataMemory2\n"
    ".type __load_and_call_sceSaveDataGetSaveDataMemory2 @function\n"
    "__load_and_call_sceSaveDataGetSaveDataMemory2:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataGetSaveDataMemory2\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataGetSaveDataMemory2]\n");

void __load_and_call_sceSaveDataGetSaveDataMemory2();
static __attribute__ ((used)) void* __ptr_sceSaveDataGetSaveDataMemory2 = &__load_and_call_sceSaveDataGetSaveDataMemory2;

static __attribute__ ((used)) void
__load_sceSaveDataGetSaveDataMemory2(void) {
  sprx_dlsym(__handle, "sceSaveDataGetSaveDataMemory2", &__ptr_sceSaveDataGetSaveDataMemory2);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataInitialize3\n"
    ".type sceSaveDataInitialize3 @function\n"
    "sceSaveDataInitialize3:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataInitialize3]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataInitialize3\n"
    ".type __load_and_call_sceSaveDataInitialize3 @function\n"
    "__load_and_call_sceSaveDataInitialize3:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataInitialize3\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataInitialize3]\n");

void __load_and_call_sceSaveDataInitialize3();
static __attribute__ ((used)) void* __ptr_sceSaveDataInitialize3 = &__load_and_call_sceSaveDataInitialize3;

static __attribute__ ((used)) void
__load_sceSaveDataInitialize3(void) {
  sprx_dlsym(__handle, "sceSaveDataInitialize3", &__ptr_sceSaveDataInitialize3);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataLoadIcon\n"
    ".type sceSaveDataLoadIcon @function\n"
    "sceSaveDataLoadIcon:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataLoadIcon]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataLoadIcon\n"
    ".type __load_and_call_sceSaveDataLoadIcon @function\n"
    "__load_and_call_sceSaveDataLoadIcon:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataLoadIcon\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataLoadIcon]\n");

void __load_and_call_sceSaveDataLoadIcon();
static __attribute__ ((used)) void* __ptr_sceSaveDataLoadIcon = &__load_and_call_sceSaveDataLoadIcon;

static __attribute__ ((used)) void
__load_sceSaveDataLoadIcon(void) {
  sprx_dlsym(__handle, "sceSaveDataLoadIcon", &__ptr_sceSaveDataLoadIcon);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataMount3\n"
    ".type sceSaveDataMount3 @function\n"
    "sceSaveDataMount3:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataMount3]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataMount3\n"
    ".type __load_and_call_sceSaveDataMount3 @function\n"
    "__load_and_call_sceSaveDataMount3:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataMount3\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataMount3]\n");

void __load_and_call_sceSaveDataMount3();
static __attribute__ ((used)) void* __ptr_sceSaveDataMount3 = &__load_and_call_sceSaveDataMount3;

static __attribute__ ((used)) void
__load_sceSaveDataMount3(void) {
  sprx_dlsym(__handle, "sceSaveDataMount3", &__ptr_sceSaveDataMount3);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataPrepare\n"
    ".type sceSaveDataPrepare @function\n"
    "sceSaveDataPrepare:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataPrepare]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataPrepare\n"
    ".type __load_and_call_sceSaveDataPrepare @function\n"
    "__load_and_call_sceSaveDataPrepare:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataPrepare\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataPrepare]\n");

void __load_and_call_sceSaveDataPrepare();
static __attribute__ ((used)) void* __ptr_sceSaveDataPrepare = &__load_and_call_sceSaveDataPrepare;

static __attribute__ ((used)) void
__load_sceSaveDataPrepare(void) {
  sprx_dlsym(__handle, "sceSaveDataPrepare", &__ptr_sceSaveDataPrepare);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataSaveIcon\n"
    ".type sceSaveDataSaveIcon @function\n"
    "sceSaveDataSaveIcon:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataSaveIcon]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataSaveIcon\n"
    ".type __load_and_call_sceSaveDataSaveIcon @function\n"
    "__load_and_call_sceSaveDataSaveIcon:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataSaveIcon\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataSaveIcon]\n");

void __load_and_call_sceSaveDataSaveIcon();
static __attribute__ ((used)) void* __ptr_sceSaveDataSaveIcon = &__load_and_call_sceSaveDataSaveIcon;

static __attribute__ ((used)) void
__load_sceSaveDataSaveIcon(void) {
  sprx_dlsym(__handle, "sceSaveDataSaveIcon", &__ptr_sceSaveDataSaveIcon);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataSaveIconByPath\n"
    ".type sceSaveDataSaveIconByPath @function\n"
    "sceSaveDataSaveIconByPath:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataSaveIconByPath]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataSaveIconByPath\n"
    ".type __load_and_call_sceSaveDataSaveIconByPath @function\n"
    "__load_and_call_sceSaveDataSaveIconByPath:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataSaveIconByPath\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataSaveIconByPath]\n");

void __load_and_call_sceSaveDataSaveIconByPath();
static __attribute__ ((used)) void* __ptr_sceSaveDataSaveIconByPath = &__load_and_call_sceSaveDataSaveIconByPath;

static __attribute__ ((used)) void
__load_sceSaveDataSaveIconByPath(void) {
  sprx_dlsym(__handle, "sceSaveDataSaveIconByPath", &__ptr_sceSaveDataSaveIconByPath);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataSetParam\n"
    ".type sceSaveDataSetParam @function\n"
    "sceSaveDataSetParam:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataSetParam]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataSetParam\n"
    ".type __load_and_call_sceSaveDataSetParam @function\n"
    "__load_and_call_sceSaveDataSetParam:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataSetParam\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataSetParam]\n");

void __load_and_call_sceSaveDataSetParam();
static __attribute__ ((used)) void* __ptr_sceSaveDataSetParam = &__load_and_call_sceSaveDataSetParam;

static __attribute__ ((used)) void
__load_sceSaveDataSetParam(void) {
  sprx_dlsym(__handle, "sceSaveDataSetParam", &__ptr_sceSaveDataSetParam);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataSetSaveDataMemory2\n"
    ".type sceSaveDataSetSaveDataMemory2 @function\n"
    "sceSaveDataSetSaveDataMemory2:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataSetSaveDataMemory2]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataSetSaveDataMemory2\n"
    ".type __load_and_call_sceSaveDataSetSaveDataMemory2 @function\n"
    "__load_and_call_sceSaveDataSetSaveDataMemory2:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataSetSaveDataMemory2\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataSetSaveDataMemory2]\n");

void __load_and_call_sceSaveDataSetSaveDataMemory2();
static __attribute__ ((used)) void* __ptr_sceSaveDataSetSaveDataMemory2 = &__load_and_call_sceSaveDataSetSaveDataMemory2;

static __attribute__ ((used)) void
__load_sceSaveDataSetSaveDataMemory2(void) {
  sprx_dlsym(__handle, "sceSaveDataSetSaveDataMemory2", &__ptr_sceSaveDataSetSaveDataMemory2);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataSetupSaveDataMemory2\n"
    ".type sceSaveDataSetupSaveDataMemory2 @function\n"
    "sceSaveDataSetupSaveDataMemory2:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataSetupSaveDataMemory2]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataSetupSaveDataMemory2\n"
    ".type __load_and_call_sceSaveDataSetupSaveDataMemory2 @function\n"
    "__load_and_call_sceSaveDataSetupSaveDataMemory2:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataSetupSaveDataMemory2\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataSetupSaveDataMemory2]\n");

void __load_and_call_sceSaveDataSetupSaveDataMemory2();
static __attribute__ ((used)) void* __ptr_sceSaveDataSetupSaveDataMemory2 = &__load_and_call_sceSaveDataSetupSaveDataMemory2;

static __attribute__ ((used)) void
__load_sceSaveDataSetupSaveDataMemory2(void) {
  sprx_dlsym(__handle, "sceSaveDataSetupSaveDataMemory2", &__ptr_sceSaveDataSetupSaveDataMemory2);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataSyncSaveDataMemory\n"
    ".type sceSaveDataSyncSaveDataMemory @function\n"
    "sceSaveDataSyncSaveDataMemory:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataSyncSaveDataMemory]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataSyncSaveDataMemory\n"
    ".type __load_and_call_sceSaveDataSyncSaveDataMemory @function\n"
    "__load_and_call_sceSaveDataSyncSaveDataMemory:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataSyncSaveDataMemory\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataSyncSaveDataMemory]\n");

void __load_and_call_sceSaveDataSyncSaveDataMemory();
static __attribute__ ((used)) void* __ptr_sceSaveDataSyncSaveDataMemory = &__load_and_call_sceSaveDataSyncSaveDataMemory;

static __attribute__ ((used)) void
__load_sceSaveDataSyncSaveDataMemory(void) {
  sprx_dlsym(__handle, "sceSaveDataSyncSaveDataMemory", &__ptr_sceSaveDataSyncSaveDataMemory);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataTerminate\n"
    ".type sceSaveDataTerminate @function\n"
    "sceSaveDataTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataTerminate\n"
    ".type __load_and_call_sceSaveDataTerminate @function\n"
    "__load_and_call_sceSaveDataTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataTerminate]\n");

void __load_and_call_sceSaveDataTerminate();
static __attribute__ ((used)) void* __ptr_sceSaveDataTerminate = &__load_and_call_sceSaveDataTerminate;

static __attribute__ ((used)) void
__load_sceSaveDataTerminate(void) {
  sprx_dlsym(__handle, "sceSaveDataTerminate", &__ptr_sceSaveDataTerminate);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataTransferringMount\n"
    ".type sceSaveDataTransferringMount @function\n"
    "sceSaveDataTransferringMount:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataTransferringMount]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataTransferringMount\n"
    ".type __load_and_call_sceSaveDataTransferringMount @function\n"
    "__load_and_call_sceSaveDataTransferringMount:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataTransferringMount\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataTransferringMount]\n");

void __load_and_call_sceSaveDataTransferringMount();
static __attribute__ ((used)) void* __ptr_sceSaveDataTransferringMount = &__load_and_call_sceSaveDataTransferringMount;

static __attribute__ ((used)) void
__load_sceSaveDataTransferringMount(void) {
  sprx_dlsym(__handle, "sceSaveDataTransferringMount", &__ptr_sceSaveDataTransferringMount);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataTransferringMountPs4\n"
    ".type sceSaveDataTransferringMountPs4 @function\n"
    "sceSaveDataTransferringMountPs4:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataTransferringMountPs4]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataTransferringMountPs4\n"
    ".type __load_and_call_sceSaveDataTransferringMountPs4 @function\n"
    "__load_and_call_sceSaveDataTransferringMountPs4:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataTransferringMountPs4\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataTransferringMountPs4]\n");

void __load_and_call_sceSaveDataTransferringMountPs4();
static __attribute__ ((used)) void* __ptr_sceSaveDataTransferringMountPs4 = &__load_and_call_sceSaveDataTransferringMountPs4;

static __attribute__ ((used)) void
__load_sceSaveDataTransferringMountPs4(void) {
  sprx_dlsym(__handle, "sceSaveDataTransferringMountPs4", &__ptr_sceSaveDataTransferringMountPs4);
}

asm(".intel_syntax noprefix\n"
    ".global sceSaveDataUmount2\n"
    ".type sceSaveDataUmount2 @function\n"
    "sceSaveDataUmount2:\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataUmount2]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSaveDataUmount2\n"
    ".type __load_and_call_sceSaveDataUmount2 @function\n"
    "__load_and_call_sceSaveDataUmount2:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSaveDataUmount2\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSaveDataUmount2]\n");

void __load_and_call_sceSaveDataUmount2();
static __attribute__ ((used)) void* __ptr_sceSaveDataUmount2 = &__load_and_call_sceSaveDataUmount2;

static __attribute__ ((used)) void
__load_sceSaveDataUmount2(void) {
  sprx_dlsym(__handle, "sceSaveDataUmount2", &__ptr_sceSaveDataUmount2);
}