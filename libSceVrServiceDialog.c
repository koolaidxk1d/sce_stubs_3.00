/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceVrServiceDialog", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceVrServiceDialogClose\n"
    ".type sceVrServiceDialogClose @function\n"
    "sceVrServiceDialogClose:\n"
    "jmp qword ptr [rip + __ptr_sceVrServiceDialogClose]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrServiceDialogClose\n"
    ".type __load_and_call_sceVrServiceDialogClose @function\n"
    "__load_and_call_sceVrServiceDialogClose:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrServiceDialogClose\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrServiceDialogClose]\n");

void __load_and_call_sceVrServiceDialogClose();
static __attribute__ ((used)) void* __ptr_sceVrServiceDialogClose = &__load_and_call_sceVrServiceDialogClose;

static __attribute__ ((used)) void
__load_sceVrServiceDialogClose(void) {
  sprx_dlsym(__handle, "sceVrServiceDialogClose", &__ptr_sceVrServiceDialogClose);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrServiceDialogGetResult\n"
    ".type sceVrServiceDialogGetResult @function\n"
    "sceVrServiceDialogGetResult:\n"
    "jmp qword ptr [rip + __ptr_sceVrServiceDialogGetResult]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrServiceDialogGetResult\n"
    ".type __load_and_call_sceVrServiceDialogGetResult @function\n"
    "__load_and_call_sceVrServiceDialogGetResult:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrServiceDialogGetResult\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrServiceDialogGetResult]\n");

void __load_and_call_sceVrServiceDialogGetResult();
static __attribute__ ((used)) void* __ptr_sceVrServiceDialogGetResult = &__load_and_call_sceVrServiceDialogGetResult;

static __attribute__ ((used)) void
__load_sceVrServiceDialogGetResult(void) {
  sprx_dlsym(__handle, "sceVrServiceDialogGetResult", &__ptr_sceVrServiceDialogGetResult);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrServiceDialogGetStatus\n"
    ".type sceVrServiceDialogGetStatus @function\n"
    "sceVrServiceDialogGetStatus:\n"
    "jmp qword ptr [rip + __ptr_sceVrServiceDialogGetStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrServiceDialogGetStatus\n"
    ".type __load_and_call_sceVrServiceDialogGetStatus @function\n"
    "__load_and_call_sceVrServiceDialogGetStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrServiceDialogGetStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrServiceDialogGetStatus]\n");

void __load_and_call_sceVrServiceDialogGetStatus();
static __attribute__ ((used)) void* __ptr_sceVrServiceDialogGetStatus = &__load_and_call_sceVrServiceDialogGetStatus;

static __attribute__ ((used)) void
__load_sceVrServiceDialogGetStatus(void) {
  sprx_dlsym(__handle, "sceVrServiceDialogGetStatus", &__ptr_sceVrServiceDialogGetStatus);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrServiceDialogInitialize\n"
    ".type sceVrServiceDialogInitialize @function\n"
    "sceVrServiceDialogInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceVrServiceDialogInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrServiceDialogInitialize\n"
    ".type __load_and_call_sceVrServiceDialogInitialize @function\n"
    "__load_and_call_sceVrServiceDialogInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrServiceDialogInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrServiceDialogInitialize]\n");

void __load_and_call_sceVrServiceDialogInitialize();
static __attribute__ ((used)) void* __ptr_sceVrServiceDialogInitialize = &__load_and_call_sceVrServiceDialogInitialize;

static __attribute__ ((used)) void
__load_sceVrServiceDialogInitialize(void) {
  sprx_dlsym(__handle, "sceVrServiceDialogInitialize", &__ptr_sceVrServiceDialogInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrServiceDialogOpen\n"
    ".type sceVrServiceDialogOpen @function\n"
    "sceVrServiceDialogOpen:\n"
    "jmp qword ptr [rip + __ptr_sceVrServiceDialogOpen]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrServiceDialogOpen\n"
    ".type __load_and_call_sceVrServiceDialogOpen @function\n"
    "__load_and_call_sceVrServiceDialogOpen:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrServiceDialogOpen\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrServiceDialogOpen]\n");

void __load_and_call_sceVrServiceDialogOpen();
static __attribute__ ((used)) void* __ptr_sceVrServiceDialogOpen = &__load_and_call_sceVrServiceDialogOpen;

static __attribute__ ((used)) void
__load_sceVrServiceDialogOpen(void) {
  sprx_dlsym(__handle, "sceVrServiceDialogOpen", &__ptr_sceVrServiceDialogOpen);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrServiceDialogTerminate\n"
    ".type sceVrServiceDialogTerminate @function\n"
    "sceVrServiceDialogTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceVrServiceDialogTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrServiceDialogTerminate\n"
    ".type __load_and_call_sceVrServiceDialogTerminate @function\n"
    "__load_and_call_sceVrServiceDialogTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrServiceDialogTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrServiceDialogTerminate]\n");

void __load_and_call_sceVrServiceDialogTerminate();
static __attribute__ ((used)) void* __ptr_sceVrServiceDialogTerminate = &__load_and_call_sceVrServiceDialogTerminate;

static __attribute__ ((used)) void
__load_sceVrServiceDialogTerminate(void) {
  sprx_dlsym(__handle, "sceVrServiceDialogTerminate", &__ptr_sceVrServiceDialogTerminate);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrServiceDialogUpdateStatus\n"
    ".type sceVrServiceDialogUpdateStatus @function\n"
    "sceVrServiceDialogUpdateStatus:\n"
    "jmp qword ptr [rip + __ptr_sceVrServiceDialogUpdateStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrServiceDialogUpdateStatus\n"
    ".type __load_and_call_sceVrServiceDialogUpdateStatus @function\n"
    "__load_and_call_sceVrServiceDialogUpdateStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrServiceDialogUpdateStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrServiceDialogUpdateStatus]\n");

void __load_and_call_sceVrServiceDialogUpdateStatus();
static __attribute__ ((used)) void* __ptr_sceVrServiceDialogUpdateStatus = &__load_and_call_sceVrServiceDialogUpdateStatus;

static __attribute__ ((used)) void
__load_sceVrServiceDialogUpdateStatus(void) {
  sprx_dlsym(__handle, "sceVrServiceDialogUpdateStatus", &__ptr_sceVrServiceDialogUpdateStatus);
}
