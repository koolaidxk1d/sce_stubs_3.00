/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceCommonDialog", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global _ZN3sce16CommonDialogUtil12getSelfAppIdEv\n"
    ".type _ZN3sce16CommonDialogUtil12getSelfAppIdEv @function\n"
    "_ZN3sce16CommonDialogUtil12getSelfAppIdEv:\n"
    "jmp qword ptr [rip + __ptr__ZN3sce16CommonDialogUtil12getSelfAppIdEv]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__ZN3sce16CommonDialogUtil12getSelfAppIdEv\n"
    ".type __load_and_call__ZN3sce16CommonDialogUtil12getSelfAppIdEv @function\n"
    "__load_and_call__ZN3sce16CommonDialogUtil12getSelfAppIdEv:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__ZN3sce16CommonDialogUtil12getSelfAppIdEv\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__ZN3sce16CommonDialogUtil12getSelfAppIdEv]\n");

void __load_and_call__ZN3sce16CommonDialogUtil12getSelfAppIdEv();
static __attribute__ ((used)) void* __ptr__ZN3sce16CommonDialogUtil12getSelfAppIdEv = &__load_and_call__ZN3sce16CommonDialogUtil12getSelfAppIdEv;

static __attribute__ ((used)) void
__load__ZN3sce16CommonDialogUtil12getSelfAppIdEv(void) {
  sprx_dlsym(__handle, "_ZN3sce16CommonDialogUtil12getSelfAppIdEv", &__ptr__ZN3sce16CommonDialogUtil12getSelfAppIdEv);
}

asm(".intel_syntax noprefix\n"
    ".global _ZN3sce16CommonDialogUtil6Client11closeModuleEv\n"
    ".type _ZN3sce16CommonDialogUtil6Client11closeModuleEv @function\n"
    "_ZN3sce16CommonDialogUtil6Client11closeModuleEv:\n"
    "jmp qword ptr [rip + __ptr__ZN3sce16CommonDialogUtil6Client11closeModuleEv]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__ZN3sce16CommonDialogUtil6Client11closeModuleEv\n"
    ".type __load_and_call__ZN3sce16CommonDialogUtil6Client11closeModuleEv @function\n"
    "__load_and_call__ZN3sce16CommonDialogUtil6Client11closeModuleEv:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__ZN3sce16CommonDialogUtil6Client11closeModuleEv\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__ZN3sce16CommonDialogUtil6Client11closeModuleEv]\n");

void __load_and_call__ZN3sce16CommonDialogUtil6Client11closeModuleEv();
static __attribute__ ((used)) void* __ptr__ZN3sce16CommonDialogUtil6Client11closeModuleEv = &__load_and_call__ZN3sce16CommonDialogUtil6Client11closeModuleEv;

static __attribute__ ((used)) void
__load__ZN3sce16CommonDialogUtil6Client11closeModuleEv(void) {
  sprx_dlsym(__handle, "_ZN3sce16CommonDialogUtil6Client11closeModuleEv", &__ptr__ZN3sce16CommonDialogUtil6Client11closeModuleEv);
}

asm(".intel_syntax noprefix\n"
    ".global _ZN3sce16CommonDialogUtil6Client11updateStateEv\n"
    ".type _ZN3sce16CommonDialogUtil6Client11updateStateEv @function\n"
    "_ZN3sce16CommonDialogUtil6Client11updateStateEv:\n"
    "jmp qword ptr [rip + __ptr__ZN3sce16CommonDialogUtil6Client11updateStateEv]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__ZN3sce16CommonDialogUtil6Client11updateStateEv\n"
    ".type __load_and_call__ZN3sce16CommonDialogUtil6Client11updateStateEv @function\n"
    "__load_and_call__ZN3sce16CommonDialogUtil6Client11updateStateEv:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__ZN3sce16CommonDialogUtil6Client11updateStateEv\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__ZN3sce16CommonDialogUtil6Client11updateStateEv]\n");

void __load_and_call__ZN3sce16CommonDialogUtil6Client11updateStateEv();
static __attribute__ ((used)) void* __ptr__ZN3sce16CommonDialogUtil6Client11updateStateEv = &__load_and_call__ZN3sce16CommonDialogUtil6Client11updateStateEv;

static __attribute__ ((used)) void
__load__ZN3sce16CommonDialogUtil6Client11updateStateEv(void) {
  sprx_dlsym(__handle, "_ZN3sce16CommonDialogUtil6Client11updateStateEv", &__ptr__ZN3sce16CommonDialogUtil6Client11updateStateEv);
}

asm(".intel_syntax noprefix\n"
    ".global _ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv\n"
    ".type _ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv @function\n"
    "_ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv:\n"
    "jmp qword ptr [rip + __ptr__ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv\n"
    ".type __load_and_call__ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv @function\n"
    "__load_and_call__ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv]\n");

void __load_and_call__ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv();
static __attribute__ ((used)) void* __ptr__ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv = &__load_and_call__ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv;

static __attribute__ ((used)) void
__load__ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv(void) {
  sprx_dlsym(__handle, "_ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv", &__ptr__ZN3sce16CommonDialogUtil6Client15launchCmnDialogEv);
}

asm(".intel_syntax noprefix\n"
    ".global _ZN3sce16CommonDialogUtil6ClientD0Ev\n"
    ".type _ZN3sce16CommonDialogUtil6ClientD0Ev @function\n"
    "_ZN3sce16CommonDialogUtil6ClientD0Ev:\n"
    "jmp qword ptr [rip + __ptr__ZN3sce16CommonDialogUtil6ClientD0Ev]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__ZN3sce16CommonDialogUtil6ClientD0Ev\n"
    ".type __load_and_call__ZN3sce16CommonDialogUtil6ClientD0Ev @function\n"
    "__load_and_call__ZN3sce16CommonDialogUtil6ClientD0Ev:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__ZN3sce16CommonDialogUtil6ClientD0Ev\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__ZN3sce16CommonDialogUtil6ClientD0Ev]\n");

void __load_and_call__ZN3sce16CommonDialogUtil6ClientD0Ev();
static __attribute__ ((used)) void* __ptr__ZN3sce16CommonDialogUtil6ClientD0Ev = &__load_and_call__ZN3sce16CommonDialogUtil6ClientD0Ev;

static __attribute__ ((used)) void
__load__ZN3sce16CommonDialogUtil6ClientD0Ev(void) {
  sprx_dlsym(__handle, "_ZN3sce16CommonDialogUtil6ClientD0Ev", &__ptr__ZN3sce16CommonDialogUtil6ClientD0Ev);
}

asm(".intel_syntax noprefix\n"
    ".global _ZN3sce16CommonDialogUtil6ClientD1Ev\n"
    ".type _ZN3sce16CommonDialogUtil6ClientD1Ev @function\n"
    "_ZN3sce16CommonDialogUtil6ClientD1Ev:\n"
    "jmp qword ptr [rip + __ptr__ZN3sce16CommonDialogUtil6ClientD1Ev]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__ZN3sce16CommonDialogUtil6ClientD1Ev\n"
    ".type __load_and_call__ZN3sce16CommonDialogUtil6ClientD1Ev @function\n"
    "__load_and_call__ZN3sce16CommonDialogUtil6ClientD1Ev:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__ZN3sce16CommonDialogUtil6ClientD1Ev\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__ZN3sce16CommonDialogUtil6ClientD1Ev]\n");

void __load_and_call__ZN3sce16CommonDialogUtil6ClientD1Ev();
static __attribute__ ((used)) void* __ptr__ZN3sce16CommonDialogUtil6ClientD1Ev = &__load_and_call__ZN3sce16CommonDialogUtil6ClientD1Ev;

static __attribute__ ((used)) void
__load__ZN3sce16CommonDialogUtil6ClientD1Ev(void) {
  sprx_dlsym(__handle, "_ZN3sce16CommonDialogUtil6ClientD1Ev", &__ptr__ZN3sce16CommonDialogUtil6ClientD1Ev);
}

asm(".intel_syntax noprefix\n"
    ".global _ZN3sce16CommonDialogUtil6ClientD2Ev\n"
    ".type _ZN3sce16CommonDialogUtil6ClientD2Ev @function\n"
    "_ZN3sce16CommonDialogUtil6ClientD2Ev:\n"
    "jmp qword ptr [rip + __ptr__ZN3sce16CommonDialogUtil6ClientD2Ev]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__ZN3sce16CommonDialogUtil6ClientD2Ev\n"
    ".type __load_and_call__ZN3sce16CommonDialogUtil6ClientD2Ev @function\n"
    "__load_and_call__ZN3sce16CommonDialogUtil6ClientD2Ev:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__ZN3sce16CommonDialogUtil6ClientD2Ev\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__ZN3sce16CommonDialogUtil6ClientD2Ev]\n");

void __load_and_call__ZN3sce16CommonDialogUtil6ClientD2Ev();
static __attribute__ ((used)) void* __ptr__ZN3sce16CommonDialogUtil6ClientD2Ev = &__load_and_call__ZN3sce16CommonDialogUtil6ClientD2Ev;

static __attribute__ ((used)) void
__load__ZN3sce16CommonDialogUtil6ClientD2Ev(void) {
  sprx_dlsym(__handle, "_ZN3sce16CommonDialogUtil6ClientD2Ev", &__ptr__ZN3sce16CommonDialogUtil6ClientD2Ev);
}

asm(".intel_syntax noprefix\n"
    ".global _ZNK3sce16CommonDialogUtil6Client10isCloseReqEv\n"
    ".type _ZNK3sce16CommonDialogUtil6Client10isCloseReqEv @function\n"
    "_ZNK3sce16CommonDialogUtil6Client10isCloseReqEv:\n"
    "jmp qword ptr [rip + __ptr__ZNK3sce16CommonDialogUtil6Client10isCloseReqEv]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__ZNK3sce16CommonDialogUtil6Client10isCloseReqEv\n"
    ".type __load_and_call__ZNK3sce16CommonDialogUtil6Client10isCloseReqEv @function\n"
    "__load_and_call__ZNK3sce16CommonDialogUtil6Client10isCloseReqEv:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__ZNK3sce16CommonDialogUtil6Client10isCloseReqEv\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__ZNK3sce16CommonDialogUtil6Client10isCloseReqEv]\n");

void __load_and_call__ZNK3sce16CommonDialogUtil6Client10isCloseReqEv();
static __attribute__ ((used)) void* __ptr__ZNK3sce16CommonDialogUtil6Client10isCloseReqEv = &__load_and_call__ZNK3sce16CommonDialogUtil6Client10isCloseReqEv;

static __attribute__ ((used)) void
__load__ZNK3sce16CommonDialogUtil6Client10isCloseReqEv(void) {
  sprx_dlsym(__handle, "_ZNK3sce16CommonDialogUtil6Client10isCloseReqEv", &__ptr__ZNK3sce16CommonDialogUtil6Client10isCloseReqEv);
}

asm(".intel_syntax noprefix\n"
    ".global _ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm\n"
    ".type _ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm @function\n"
    "_ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm:\n"
    "jmp qword ptr [rip + __ptr__ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm\n"
    ".type __load_and_call__ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm @function\n"
    "__load_and_call__ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm]\n");

void __load_and_call__ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm();
static __attribute__ ((used)) void* __ptr__ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm = &__load_and_call__ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm;

static __attribute__ ((used)) void
__load__ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm(void) {
  sprx_dlsym(__handle, "_ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm", &__ptr__ZNK3sce16CommonDialogUtil6Client13getFinishDataEPvm);
}

asm(".intel_syntax noprefix\n"
    ".global _ZNK3sce16CommonDialogUtil6Client14getClientStateEv\n"
    ".type _ZNK3sce16CommonDialogUtil6Client14getClientStateEv @function\n"
    "_ZNK3sce16CommonDialogUtil6Client14getClientStateEv:\n"
    "jmp qword ptr [rip + __ptr__ZNK3sce16CommonDialogUtil6Client14getClientStateEv]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__ZNK3sce16CommonDialogUtil6Client14getClientStateEv\n"
    ".type __load_and_call__ZNK3sce16CommonDialogUtil6Client14getClientStateEv @function\n"
    "__load_and_call__ZNK3sce16CommonDialogUtil6Client14getClientStateEv:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__ZNK3sce16CommonDialogUtil6Client14getClientStateEv\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__ZNK3sce16CommonDialogUtil6Client14getClientStateEv]\n");

void __load_and_call__ZNK3sce16CommonDialogUtil6Client14getClientStateEv();
static __attribute__ ((used)) void* __ptr__ZNK3sce16CommonDialogUtil6Client14getClientStateEv = &__load_and_call__ZNK3sce16CommonDialogUtil6Client14getClientStateEv;

static __attribute__ ((used)) void
__load__ZNK3sce16CommonDialogUtil6Client14getClientStateEv(void) {
  sprx_dlsym(__handle, "_ZNK3sce16CommonDialogUtil6Client14getClientStateEv", &__ptr__ZNK3sce16CommonDialogUtil6Client14getClientStateEv);
}

asm(".intel_syntax noprefix\n"
    ".global _ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv\n"
    ".type _ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv @function\n"
    "_ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv:\n"
    "jmp qword ptr [rip + __ptr__ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv\n"
    ".type __load_and_call__ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv @function\n"
    "__load_and_call__ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv]\n");

void __load_and_call__ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv();
static __attribute__ ((used)) void* __ptr__ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv = &__load_and_call__ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv;

static __attribute__ ((used)) void
__load__ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv(void) {
  sprx_dlsym(__handle, "_ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv", &__ptr__ZNK3sce16CommonDialogUtil6Client19isInitializedStatusEv);
}

asm(".intel_syntax noprefix\n"
    ".global _ZNK3sce16CommonDialogUtil6Client8getAppIdEv\n"
    ".type _ZNK3sce16CommonDialogUtil6Client8getAppIdEv @function\n"
    "_ZNK3sce16CommonDialogUtil6Client8getAppIdEv:\n"
    "jmp qword ptr [rip + __ptr__ZNK3sce16CommonDialogUtil6Client8getAppIdEv]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__ZNK3sce16CommonDialogUtil6Client8getAppIdEv\n"
    ".type __load_and_call__ZNK3sce16CommonDialogUtil6Client8getAppIdEv @function\n"
    "__load_and_call__ZNK3sce16CommonDialogUtil6Client8getAppIdEv:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__ZNK3sce16CommonDialogUtil6Client8getAppIdEv\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__ZNK3sce16CommonDialogUtil6Client8getAppIdEv]\n");

void __load_and_call__ZNK3sce16CommonDialogUtil6Client8getAppIdEv();
static __attribute__ ((used)) void* __ptr__ZNK3sce16CommonDialogUtil6Client8getAppIdEv = &__load_and_call__ZNK3sce16CommonDialogUtil6Client8getAppIdEv;

static __attribute__ ((used)) void
__load__ZNK3sce16CommonDialogUtil6Client8getAppIdEv(void) {
  sprx_dlsym(__handle, "_ZNK3sce16CommonDialogUtil6Client8getAppIdEv", &__ptr__ZNK3sce16CommonDialogUtil6Client8getAppIdEv);
}

asm(".intel_syntax noprefix\n"
    ".global _ZNK3sce16CommonDialogUtil6Client8isFinishEv\n"
    ".type _ZNK3sce16CommonDialogUtil6Client8isFinishEv @function\n"
    "_ZNK3sce16CommonDialogUtil6Client8isFinishEv:\n"
    "jmp qword ptr [rip + __ptr__ZNK3sce16CommonDialogUtil6Client8isFinishEv]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__ZNK3sce16CommonDialogUtil6Client8isFinishEv\n"
    ".type __load_and_call__ZNK3sce16CommonDialogUtil6Client8isFinishEv @function\n"
    "__load_and_call__ZNK3sce16CommonDialogUtil6Client8isFinishEv:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__ZNK3sce16CommonDialogUtil6Client8isFinishEv\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__ZNK3sce16CommonDialogUtil6Client8isFinishEv]\n");

void __load_and_call__ZNK3sce16CommonDialogUtil6Client8isFinishEv();
static __attribute__ ((used)) void* __ptr__ZNK3sce16CommonDialogUtil6Client8isFinishEv = &__load_and_call__ZNK3sce16CommonDialogUtil6Client8isFinishEv;

static __attribute__ ((used)) void
__load__ZNK3sce16CommonDialogUtil6Client8isFinishEv(void) {
  sprx_dlsym(__handle, "_ZNK3sce16CommonDialogUtil6Client8isFinishEv", &__ptr__ZNK3sce16CommonDialogUtil6Client8isFinishEv);
}

asm(".intel_syntax noprefix\n"
    ".global _ZNK3sce16CommonDialogUtil6Client9getResultEv\n"
    ".type _ZNK3sce16CommonDialogUtil6Client9getResultEv @function\n"
    "_ZNK3sce16CommonDialogUtil6Client9getResultEv:\n"
    "jmp qword ptr [rip + __ptr__ZNK3sce16CommonDialogUtil6Client9getResultEv]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__ZNK3sce16CommonDialogUtil6Client9getResultEv\n"
    ".type __load_and_call__ZNK3sce16CommonDialogUtil6Client9getResultEv @function\n"
    "__load_and_call__ZNK3sce16CommonDialogUtil6Client9getResultEv:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__ZNK3sce16CommonDialogUtil6Client9getResultEv\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__ZNK3sce16CommonDialogUtil6Client9getResultEv]\n");

void __load_and_call__ZNK3sce16CommonDialogUtil6Client9getResultEv();
static __attribute__ ((used)) void* __ptr__ZNK3sce16CommonDialogUtil6Client9getResultEv = &__load_and_call__ZNK3sce16CommonDialogUtil6Client9getResultEv;

static __attribute__ ((used)) void
__load__ZNK3sce16CommonDialogUtil6Client9getResultEv(void) {
  sprx_dlsym(__handle, "_ZNK3sce16CommonDialogUtil6Client9getResultEv", &__ptr__ZNK3sce16CommonDialogUtil6Client9getResultEv);
}

asm(".intel_syntax noprefix\n"
    ".global sceCommonDialogInitialize\n"
    ".type sceCommonDialogInitialize @function\n"
    "sceCommonDialogInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceCommonDialogInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCommonDialogInitialize\n"
    ".type __load_and_call_sceCommonDialogInitialize @function\n"
    "__load_and_call_sceCommonDialogInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCommonDialogInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCommonDialogInitialize]\n");

void __load_and_call_sceCommonDialogInitialize();
static __attribute__ ((used)) void* __ptr_sceCommonDialogInitialize = &__load_and_call_sceCommonDialogInitialize;

static __attribute__ ((used)) void
__load_sceCommonDialogInitialize(void) {
  sprx_dlsym(__handle, "sceCommonDialogInitialize", &__ptr_sceCommonDialogInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceCommonDialogIsUsed\n"
    ".type sceCommonDialogIsUsed @function\n"
    "sceCommonDialogIsUsed:\n"
    "jmp qword ptr [rip + __ptr_sceCommonDialogIsUsed]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCommonDialogIsUsed\n"
    ".type __load_and_call_sceCommonDialogIsUsed @function\n"
    "__load_and_call_sceCommonDialogIsUsed:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCommonDialogIsUsed\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCommonDialogIsUsed]\n");

void __load_and_call_sceCommonDialogIsUsed();
static __attribute__ ((used)) void* __ptr_sceCommonDialogIsUsed = &__load_and_call_sceCommonDialogIsUsed;

static __attribute__ ((used)) void
__load_sceCommonDialogIsUsed(void) {
  sprx_dlsym(__handle, "sceCommonDialogIsUsed", &__ptr_sceCommonDialogIsUsed);
}