/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceBackupRestoreUtil", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilBackupData\n"
    ".type sceBackupRestoreUtilBackupData @function\n"
    "sceBackupRestoreUtilBackupData:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilBackupData]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilBackupData\n"
    ".type __load_and_call_sceBackupRestoreUtilBackupData @function\n"
    "__load_and_call_sceBackupRestoreUtilBackupData:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilBackupData\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilBackupData]\n");

void __load_and_call_sceBackupRestoreUtilBackupData();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilBackupData = &__load_and_call_sceBackupRestoreUtilBackupData;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilBackupData(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilBackupData", &__ptr_sceBackupRestoreUtilBackupData);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilCancelBackupData\n"
    ".type sceBackupRestoreUtilCancelBackupData @function\n"
    "sceBackupRestoreUtilCancelBackupData:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilCancelBackupData]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilCancelBackupData\n"
    ".type __load_and_call_sceBackupRestoreUtilCancelBackupData @function\n"
    "__load_and_call_sceBackupRestoreUtilCancelBackupData:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilCancelBackupData\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilCancelBackupData]\n");

void __load_and_call_sceBackupRestoreUtilCancelBackupData();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilCancelBackupData = &__load_and_call_sceBackupRestoreUtilCancelBackupData;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilCancelBackupData(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilCancelBackupData", &__ptr_sceBackupRestoreUtilCancelBackupData);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilCancelGetRequiredSize\n"
    ".type sceBackupRestoreUtilCancelGetRequiredSize @function\n"
    "sceBackupRestoreUtilCancelGetRequiredSize:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilCancelGetRequiredSize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilCancelGetRequiredSize\n"
    ".type __load_and_call_sceBackupRestoreUtilCancelGetRequiredSize @function\n"
    "__load_and_call_sceBackupRestoreUtilCancelGetRequiredSize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilCancelGetRequiredSize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilCancelGetRequiredSize]\n");

void __load_and_call_sceBackupRestoreUtilCancelGetRequiredSize();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilCancelGetRequiredSize = &__load_and_call_sceBackupRestoreUtilCancelGetRequiredSize;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilCancelGetRequiredSize(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilCancelGetRequiredSize", &__ptr_sceBackupRestoreUtilCancelGetRequiredSize);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilCancelGetTitles\n"
    ".type sceBackupRestoreUtilCancelGetTitles @function\n"
    "sceBackupRestoreUtilCancelGetTitles:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilCancelGetTitles]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilCancelGetTitles\n"
    ".type __load_and_call_sceBackupRestoreUtilCancelGetTitles @function\n"
    "__load_and_call_sceBackupRestoreUtilCancelGetTitles:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilCancelGetTitles\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilCancelGetTitles]\n");

void __load_and_call_sceBackupRestoreUtilCancelGetTitles();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilCancelGetTitles = &__load_and_call_sceBackupRestoreUtilCancelGetTitles;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilCancelGetTitles(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilCancelGetTitles", &__ptr_sceBackupRestoreUtilCancelGetTitles);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilCancelRestoreData\n"
    ".type sceBackupRestoreUtilCancelRestoreData @function\n"
    "sceBackupRestoreUtilCancelRestoreData:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilCancelRestoreData]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilCancelRestoreData\n"
    ".type __load_and_call_sceBackupRestoreUtilCancelRestoreData @function\n"
    "__load_and_call_sceBackupRestoreUtilCancelRestoreData:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilCancelRestoreData\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilCancelRestoreData]\n");

void __load_and_call_sceBackupRestoreUtilCancelRestoreData();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilCancelRestoreData = &__load_and_call_sceBackupRestoreUtilCancelRestoreData;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilCancelRestoreData(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilCancelRestoreData", &__ptr_sceBackupRestoreUtilCancelRestoreData);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilDeleteBackupData\n"
    ".type sceBackupRestoreUtilDeleteBackupData @function\n"
    "sceBackupRestoreUtilDeleteBackupData:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilDeleteBackupData]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilDeleteBackupData\n"
    ".type __load_and_call_sceBackupRestoreUtilDeleteBackupData @function\n"
    "__load_and_call_sceBackupRestoreUtilDeleteBackupData:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilDeleteBackupData\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilDeleteBackupData]\n");

void __load_and_call_sceBackupRestoreUtilDeleteBackupData();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilDeleteBackupData = &__load_and_call_sceBackupRestoreUtilDeleteBackupData;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilDeleteBackupData(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilDeleteBackupData", &__ptr_sceBackupRestoreUtilDeleteBackupData);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilGetBackupDataInfo\n"
    ".type sceBackupRestoreUtilGetBackupDataInfo @function\n"
    "sceBackupRestoreUtilGetBackupDataInfo:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilGetBackupDataInfo]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilGetBackupDataInfo\n"
    ".type __load_and_call_sceBackupRestoreUtilGetBackupDataInfo @function\n"
    "__load_and_call_sceBackupRestoreUtilGetBackupDataInfo:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilGetBackupDataInfo\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilGetBackupDataInfo]\n");

void __load_and_call_sceBackupRestoreUtilGetBackupDataInfo();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilGetBackupDataInfo = &__load_and_call_sceBackupRestoreUtilGetBackupDataInfo;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilGetBackupDataInfo(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilGetBackupDataInfo", &__ptr_sceBackupRestoreUtilGetBackupDataInfo);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilGetBackupParam\n"
    ".type sceBackupRestoreUtilGetBackupParam @function\n"
    "sceBackupRestoreUtilGetBackupParam:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilGetBackupParam]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilGetBackupParam\n"
    ".type __load_and_call_sceBackupRestoreUtilGetBackupParam @function\n"
    "__load_and_call_sceBackupRestoreUtilGetBackupParam:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilGetBackupParam\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilGetBackupParam]\n");

void __load_and_call_sceBackupRestoreUtilGetBackupParam();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilGetBackupParam = &__load_and_call_sceBackupRestoreUtilGetBackupParam;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilGetBackupParam(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilGetBackupParam", &__ptr_sceBackupRestoreUtilGetBackupParam);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilGetBackupProgress\n"
    ".type sceBackupRestoreUtilGetBackupProgress @function\n"
    "sceBackupRestoreUtilGetBackupProgress:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilGetBackupProgress]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilGetBackupProgress\n"
    ".type __load_and_call_sceBackupRestoreUtilGetBackupProgress @function\n"
    "__load_and_call_sceBackupRestoreUtilGetBackupProgress:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilGetBackupProgress\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilGetBackupProgress]\n");

void __load_and_call_sceBackupRestoreUtilGetBackupProgress();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilGetBackupProgress = &__load_and_call_sceBackupRestoreUtilGetBackupProgress;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilGetBackupProgress(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilGetBackupProgress", &__ptr_sceBackupRestoreUtilGetBackupProgress);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilGetRequiredSize\n"
    ".type sceBackupRestoreUtilGetRequiredSize @function\n"
    "sceBackupRestoreUtilGetRequiredSize:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilGetRequiredSize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilGetRequiredSize\n"
    ".type __load_and_call_sceBackupRestoreUtilGetRequiredSize @function\n"
    "__load_and_call_sceBackupRestoreUtilGetRequiredSize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilGetRequiredSize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilGetRequiredSize]\n");

void __load_and_call_sceBackupRestoreUtilGetRequiredSize();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilGetRequiredSize = &__load_and_call_sceBackupRestoreUtilGetRequiredSize;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilGetRequiredSize(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilGetRequiredSize", &__ptr_sceBackupRestoreUtilGetRequiredSize);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilGetRestoreProgress\n"
    ".type sceBackupRestoreUtilGetRestoreProgress @function\n"
    "sceBackupRestoreUtilGetRestoreProgress:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilGetRestoreProgress]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilGetRestoreProgress\n"
    ".type __load_and_call_sceBackupRestoreUtilGetRestoreProgress @function\n"
    "__load_and_call_sceBackupRestoreUtilGetRestoreProgress:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilGetRestoreProgress\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilGetRestoreProgress]\n");

void __load_and_call_sceBackupRestoreUtilGetRestoreProgress();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilGetRestoreProgress = &__load_and_call_sceBackupRestoreUtilGetRestoreProgress;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilGetRestoreProgress(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilGetRestoreProgress", &__ptr_sceBackupRestoreUtilGetRestoreProgress);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilGetTitles\n"
    ".type sceBackupRestoreUtilGetTitles @function\n"
    "sceBackupRestoreUtilGetTitles:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilGetTitles]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilGetTitles\n"
    ".type __load_and_call_sceBackupRestoreUtilGetTitles @function\n"
    "__load_and_call_sceBackupRestoreUtilGetTitles:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilGetTitles\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilGetTitles]\n");

void __load_and_call_sceBackupRestoreUtilGetTitles();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilGetTitles = &__load_and_call_sceBackupRestoreUtilGetTitles;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilGetTitles(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilGetTitles", &__ptr_sceBackupRestoreUtilGetTitles);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilInitialize\n"
    ".type sceBackupRestoreUtilInitialize @function\n"
    "sceBackupRestoreUtilInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilInitialize\n"
    ".type __load_and_call_sceBackupRestoreUtilInitialize @function\n"
    "__load_and_call_sceBackupRestoreUtilInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilInitialize]\n");

void __load_and_call_sceBackupRestoreUtilInitialize();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilInitialize = &__load_and_call_sceBackupRestoreUtilInitialize;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilInitialize(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilInitialize", &__ptr_sceBackupRestoreUtilInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilPrepareBackup\n"
    ".type sceBackupRestoreUtilPrepareBackup @function\n"
    "sceBackupRestoreUtilPrepareBackup:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilPrepareBackup]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilPrepareBackup\n"
    ".type __load_and_call_sceBackupRestoreUtilPrepareBackup @function\n"
    "__load_and_call_sceBackupRestoreUtilPrepareBackup:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilPrepareBackup\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilPrepareBackup]\n");

void __load_and_call_sceBackupRestoreUtilPrepareBackup();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilPrepareBackup = &__load_and_call_sceBackupRestoreUtilPrepareBackup;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilPrepareBackup(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilPrepareBackup", &__ptr_sceBackupRestoreUtilPrepareBackup);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilRestoreData\n"
    ".type sceBackupRestoreUtilRestoreData @function\n"
    "sceBackupRestoreUtilRestoreData:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilRestoreData]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilRestoreData\n"
    ".type __load_and_call_sceBackupRestoreUtilRestoreData @function\n"
    "__load_and_call_sceBackupRestoreUtilRestoreData:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilRestoreData\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilRestoreData]\n");

void __load_and_call_sceBackupRestoreUtilRestoreData();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilRestoreData = &__load_and_call_sceBackupRestoreUtilRestoreData;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilRestoreData(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilRestoreData", &__ptr_sceBackupRestoreUtilRestoreData);
}

asm(".intel_syntax noprefix\n"
    ".global sceBackupRestoreUtilTerminate\n"
    ".type sceBackupRestoreUtilTerminate @function\n"
    "sceBackupRestoreUtilTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceBackupRestoreUtilTerminate\n"
    ".type __load_and_call_sceBackupRestoreUtilTerminate @function\n"
    "__load_and_call_sceBackupRestoreUtilTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceBackupRestoreUtilTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceBackupRestoreUtilTerminate]\n");

void __load_and_call_sceBackupRestoreUtilTerminate();
static __attribute__ ((used)) void* __ptr_sceBackupRestoreUtilTerminate = &__load_and_call_sceBackupRestoreUtilTerminate;

static __attribute__ ((used)) void
__load_sceBackupRestoreUtilTerminate(void) {
  sprx_dlsym(__handle, "sceBackupRestoreUtilTerminate", &__ptr_sceBackupRestoreUtilTerminate);
}