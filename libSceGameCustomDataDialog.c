/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceGameCustomDataDialog", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogClose\n"
    ".type sceGameCustomDataDialogClose @function\n"
    "sceGameCustomDataDialogClose:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogClose]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameCustomDataDialogClose\n"
    ".type __load_and_call_sceGameCustomDataDialogClose @function\n"
    "__load_and_call_sceGameCustomDataDialogClose:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameCustomDataDialogClose\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogClose]\n");

void __load_and_call_sceGameCustomDataDialogClose();
static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogClose = &__load_and_call_sceGameCustomDataDialogClose;

static __attribute__ ((used)) void
__load_sceGameCustomDataDialogClose(void) {
  sprx_dlsym(__handle, "sceGameCustomDataDialogClose", &__ptr_sceGameCustomDataDialogClose);
}

asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogGetResult\n"
    ".type sceGameCustomDataDialogGetResult @function\n"
    "sceGameCustomDataDialogGetResult:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogGetResult]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameCustomDataDialogGetResult\n"
    ".type __load_and_call_sceGameCustomDataDialogGetResult @function\n"
    "__load_and_call_sceGameCustomDataDialogGetResult:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameCustomDataDialogGetResult\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogGetResult]\n");

void __load_and_call_sceGameCustomDataDialogGetResult();
static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogGetResult = &__load_and_call_sceGameCustomDataDialogGetResult;

static __attribute__ ((used)) void
__load_sceGameCustomDataDialogGetResult(void) {
  sprx_dlsym(__handle, "sceGameCustomDataDialogGetResult", &__ptr_sceGameCustomDataDialogGetResult);
}

asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogGetResultA\n"
    ".type sceGameCustomDataDialogGetResultA @function\n"
    "sceGameCustomDataDialogGetResultA:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogGetResultA]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameCustomDataDialogGetResultA\n"
    ".type __load_and_call_sceGameCustomDataDialogGetResultA @function\n"
    "__load_and_call_sceGameCustomDataDialogGetResultA:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameCustomDataDialogGetResultA\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogGetResultA]\n");

void __load_and_call_sceGameCustomDataDialogGetResultA();
static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogGetResultA = &__load_and_call_sceGameCustomDataDialogGetResultA;

static __attribute__ ((used)) void
__load_sceGameCustomDataDialogGetResultA(void) {
  sprx_dlsym(__handle, "sceGameCustomDataDialogGetResultA", &__ptr_sceGameCustomDataDialogGetResultA);
}

asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogGetStatus\n"
    ".type sceGameCustomDataDialogGetStatus @function\n"
    "sceGameCustomDataDialogGetStatus:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogGetStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameCustomDataDialogGetStatus\n"
    ".type __load_and_call_sceGameCustomDataDialogGetStatus @function\n"
    "__load_and_call_sceGameCustomDataDialogGetStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameCustomDataDialogGetStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogGetStatus]\n");

void __load_and_call_sceGameCustomDataDialogGetStatus();
static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogGetStatus = &__load_and_call_sceGameCustomDataDialogGetStatus;

static __attribute__ ((used)) void
__load_sceGameCustomDataDialogGetStatus(void) {
  sprx_dlsym(__handle, "sceGameCustomDataDialogGetStatus", &__ptr_sceGameCustomDataDialogGetStatus);
}

asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogInitialize\n"
    ".type sceGameCustomDataDialogInitialize @function\n"
    "sceGameCustomDataDialogInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameCustomDataDialogInitialize\n"
    ".type __load_and_call_sceGameCustomDataDialogInitialize @function\n"
    "__load_and_call_sceGameCustomDataDialogInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameCustomDataDialogInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogInitialize]\n");

void __load_and_call_sceGameCustomDataDialogInitialize();
static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogInitialize = &__load_and_call_sceGameCustomDataDialogInitialize;

static __attribute__ ((used)) void
__load_sceGameCustomDataDialogInitialize(void) {
  sprx_dlsym(__handle, "sceGameCustomDataDialogInitialize", &__ptr_sceGameCustomDataDialogInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogOpen\n"
    ".type sceGameCustomDataDialogOpen @function\n"
    "sceGameCustomDataDialogOpen:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogOpen]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameCustomDataDialogOpen\n"
    ".type __load_and_call_sceGameCustomDataDialogOpen @function\n"
    "__load_and_call_sceGameCustomDataDialogOpen:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameCustomDataDialogOpen\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogOpen]\n");

void __load_and_call_sceGameCustomDataDialogOpen();
static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogOpen = &__load_and_call_sceGameCustomDataDialogOpen;

static __attribute__ ((used)) void
__load_sceGameCustomDataDialogOpen(void) {
  sprx_dlsym(__handle, "sceGameCustomDataDialogOpen", &__ptr_sceGameCustomDataDialogOpen);
}

asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogOpenA\n"
    ".type sceGameCustomDataDialogOpenA @function\n"
    "sceGameCustomDataDialogOpenA:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogOpenA]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameCustomDataDialogOpenA\n"
    ".type __load_and_call_sceGameCustomDataDialogOpenA @function\n"
    "__load_and_call_sceGameCustomDataDialogOpenA:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameCustomDataDialogOpenA\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogOpenA]\n");

void __load_and_call_sceGameCustomDataDialogOpenA();
static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogOpenA = &__load_and_call_sceGameCustomDataDialogOpenA;

static __attribute__ ((used)) void
__load_sceGameCustomDataDialogOpenA(void) {
  sprx_dlsym(__handle, "sceGameCustomDataDialogOpenA", &__ptr_sceGameCustomDataDialogOpenA);
}

asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogTerminate\n"
    ".type sceGameCustomDataDialogTerminate @function\n"
    "sceGameCustomDataDialogTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameCustomDataDialogTerminate\n"
    ".type __load_and_call_sceGameCustomDataDialogTerminate @function\n"
    "__load_and_call_sceGameCustomDataDialogTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameCustomDataDialogTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogTerminate]\n");

void __load_and_call_sceGameCustomDataDialogTerminate();
static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogTerminate = &__load_and_call_sceGameCustomDataDialogTerminate;

static __attribute__ ((used)) void
__load_sceGameCustomDataDialogTerminate(void) {
  sprx_dlsym(__handle, "sceGameCustomDataDialogTerminate", &__ptr_sceGameCustomDataDialogTerminate);
}

asm(".intel_syntax noprefix\n"
    ".global sceGameCustomDataDialogUpdateStatus\n"
    ".type sceGameCustomDataDialogUpdateStatus @function\n"
    "sceGameCustomDataDialogUpdateStatus:\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogUpdateStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameCustomDataDialogUpdateStatus\n"
    ".type __load_and_call_sceGameCustomDataDialogUpdateStatus @function\n"
    "__load_and_call_sceGameCustomDataDialogUpdateStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameCustomDataDialogUpdateStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameCustomDataDialogUpdateStatus]\n");

void __load_and_call_sceGameCustomDataDialogUpdateStatus();
static __attribute__ ((used)) void* __ptr_sceGameCustomDataDialogUpdateStatus = &__load_and_call_sceGameCustomDataDialogUpdateStatus;

static __attribute__ ((used)) void
__load_sceGameCustomDataDialogUpdateStatus(void) {
  sprx_dlsym(__handle, "sceGameCustomDataDialogUpdateStatus", &__ptr_sceGameCustomDataDialogUpdateStatus);
}