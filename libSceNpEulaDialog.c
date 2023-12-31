/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceNpEulaDialog", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceNpEulaDialogCheckVersion\n"
    ".type sceNpEulaDialogCheckVersion @function\n"
    "sceNpEulaDialogCheckVersion:\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogCheckVersion]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpEulaDialogCheckVersion\n"
    ".type __load_and_call_sceNpEulaDialogCheckVersion @function\n"
    "__load_and_call_sceNpEulaDialogCheckVersion:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpEulaDialogCheckVersion\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogCheckVersion]\n");

void __load_and_call_sceNpEulaDialogCheckVersion();
static __attribute__ ((used)) void* __ptr_sceNpEulaDialogCheckVersion = &__load_and_call_sceNpEulaDialogCheckVersion;

static __attribute__ ((used)) void
__load_sceNpEulaDialogCheckVersion(void) {
  sprx_dlsym(__handle, "sceNpEulaDialogCheckVersion", &__ptr_sceNpEulaDialogCheckVersion);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpEulaDialogCheckVersionAbort\n"
    ".type sceNpEulaDialogCheckVersionAbort @function\n"
    "sceNpEulaDialogCheckVersionAbort:\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogCheckVersionAbort]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpEulaDialogCheckVersionAbort\n"
    ".type __load_and_call_sceNpEulaDialogCheckVersionAbort @function\n"
    "__load_and_call_sceNpEulaDialogCheckVersionAbort:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpEulaDialogCheckVersionAbort\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogCheckVersionAbort]\n");

void __load_and_call_sceNpEulaDialogCheckVersionAbort();
static __attribute__ ((used)) void* __ptr_sceNpEulaDialogCheckVersionAbort = &__load_and_call_sceNpEulaDialogCheckVersionAbort;

static __attribute__ ((used)) void
__load_sceNpEulaDialogCheckVersionAbort(void) {
  sprx_dlsym(__handle, "sceNpEulaDialogCheckVersionAbort", &__ptr_sceNpEulaDialogCheckVersionAbort);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpEulaDialogClose\n"
    ".type sceNpEulaDialogClose @function\n"
    "sceNpEulaDialogClose:\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogClose]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpEulaDialogClose\n"
    ".type __load_and_call_sceNpEulaDialogClose @function\n"
    "__load_and_call_sceNpEulaDialogClose:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpEulaDialogClose\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogClose]\n");

void __load_and_call_sceNpEulaDialogClose();
static __attribute__ ((used)) void* __ptr_sceNpEulaDialogClose = &__load_and_call_sceNpEulaDialogClose;

static __attribute__ ((used)) void
__load_sceNpEulaDialogClose(void) {
  sprx_dlsym(__handle, "sceNpEulaDialogClose", &__ptr_sceNpEulaDialogClose);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpEulaDialogGetResult\n"
    ".type sceNpEulaDialogGetResult @function\n"
    "sceNpEulaDialogGetResult:\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogGetResult]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpEulaDialogGetResult\n"
    ".type __load_and_call_sceNpEulaDialogGetResult @function\n"
    "__load_and_call_sceNpEulaDialogGetResult:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpEulaDialogGetResult\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogGetResult]\n");

void __load_and_call_sceNpEulaDialogGetResult();
static __attribute__ ((used)) void* __ptr_sceNpEulaDialogGetResult = &__load_and_call_sceNpEulaDialogGetResult;

static __attribute__ ((used)) void
__load_sceNpEulaDialogGetResult(void) {
  sprx_dlsym(__handle, "sceNpEulaDialogGetResult", &__ptr_sceNpEulaDialogGetResult);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpEulaDialogGetStatus\n"
    ".type sceNpEulaDialogGetStatus @function\n"
    "sceNpEulaDialogGetStatus:\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogGetStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpEulaDialogGetStatus\n"
    ".type __load_and_call_sceNpEulaDialogGetStatus @function\n"
    "__load_and_call_sceNpEulaDialogGetStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpEulaDialogGetStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogGetStatus]\n");

void __load_and_call_sceNpEulaDialogGetStatus();
static __attribute__ ((used)) void* __ptr_sceNpEulaDialogGetStatus = &__load_and_call_sceNpEulaDialogGetStatus;

static __attribute__ ((used)) void
__load_sceNpEulaDialogGetStatus(void) {
  sprx_dlsym(__handle, "sceNpEulaDialogGetStatus", &__ptr_sceNpEulaDialogGetStatus);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpEulaDialogInitialize\n"
    ".type sceNpEulaDialogInitialize @function\n"
    "sceNpEulaDialogInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpEulaDialogInitialize\n"
    ".type __load_and_call_sceNpEulaDialogInitialize @function\n"
    "__load_and_call_sceNpEulaDialogInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpEulaDialogInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogInitialize]\n");

void __load_and_call_sceNpEulaDialogInitialize();
static __attribute__ ((used)) void* __ptr_sceNpEulaDialogInitialize = &__load_and_call_sceNpEulaDialogInitialize;

static __attribute__ ((used)) void
__load_sceNpEulaDialogInitialize(void) {
  sprx_dlsym(__handle, "sceNpEulaDialogInitialize", &__ptr_sceNpEulaDialogInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpEulaDialogOpen\n"
    ".type sceNpEulaDialogOpen @function\n"
    "sceNpEulaDialogOpen:\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogOpen]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpEulaDialogOpen\n"
    ".type __load_and_call_sceNpEulaDialogOpen @function\n"
    "__load_and_call_sceNpEulaDialogOpen:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpEulaDialogOpen\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogOpen]\n");

void __load_and_call_sceNpEulaDialogOpen();
static __attribute__ ((used)) void* __ptr_sceNpEulaDialogOpen = &__load_and_call_sceNpEulaDialogOpen;

static __attribute__ ((used)) void
__load_sceNpEulaDialogOpen(void) {
  sprx_dlsym(__handle, "sceNpEulaDialogOpen", &__ptr_sceNpEulaDialogOpen);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpEulaDialogTerminate\n"
    ".type sceNpEulaDialogTerminate @function\n"
    "sceNpEulaDialogTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpEulaDialogTerminate\n"
    ".type __load_and_call_sceNpEulaDialogTerminate @function\n"
    "__load_and_call_sceNpEulaDialogTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpEulaDialogTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogTerminate]\n");

void __load_and_call_sceNpEulaDialogTerminate();
static __attribute__ ((used)) void* __ptr_sceNpEulaDialogTerminate = &__load_and_call_sceNpEulaDialogTerminate;

static __attribute__ ((used)) void
__load_sceNpEulaDialogTerminate(void) {
  sprx_dlsym(__handle, "sceNpEulaDialogTerminate", &__ptr_sceNpEulaDialogTerminate);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpEulaDialogUpdateStatus\n"
    ".type sceNpEulaDialogUpdateStatus @function\n"
    "sceNpEulaDialogUpdateStatus:\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogUpdateStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpEulaDialogUpdateStatus\n"
    ".type __load_and_call_sceNpEulaDialogUpdateStatus @function\n"
    "__load_and_call_sceNpEulaDialogUpdateStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpEulaDialogUpdateStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpEulaDialogUpdateStatus]\n");

void __load_and_call_sceNpEulaDialogUpdateStatus();
static __attribute__ ((used)) void* __ptr_sceNpEulaDialogUpdateStatus = &__load_and_call_sceNpEulaDialogUpdateStatus;

static __attribute__ ((used)) void
__load_sceNpEulaDialogUpdateStatus(void) {
  sprx_dlsym(__handle, "sceNpEulaDialogUpdateStatus", &__ptr_sceNpEulaDialogUpdateStatus);
}
