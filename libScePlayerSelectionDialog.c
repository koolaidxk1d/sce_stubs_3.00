/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libScePlayerSelectionDialog", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global scePlayerSelectionDialogClose\n"
    ".type scePlayerSelectionDialogClose @function\n"
    "scePlayerSelectionDialogClose:\n"
    "jmp qword ptr [rip + __ptr_scePlayerSelectionDialogClose]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePlayerSelectionDialogClose\n"
    ".type __load_and_call_scePlayerSelectionDialogClose @function\n"
    "__load_and_call_scePlayerSelectionDialogClose:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePlayerSelectionDialogClose\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePlayerSelectionDialogClose]\n");

void __load_and_call_scePlayerSelectionDialogClose();
static __attribute__ ((used)) void* __ptr_scePlayerSelectionDialogClose = &__load_and_call_scePlayerSelectionDialogClose;

static __attribute__ ((used)) void
__load_scePlayerSelectionDialogClose(void) {
  sprx_dlsym(__handle, "scePlayerSelectionDialogClose", &__ptr_scePlayerSelectionDialogClose);
}

asm(".intel_syntax noprefix\n"
    ".global scePlayerSelectionDialogGetResult\n"
    ".type scePlayerSelectionDialogGetResult @function\n"
    "scePlayerSelectionDialogGetResult:\n"
    "jmp qword ptr [rip + __ptr_scePlayerSelectionDialogGetResult]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePlayerSelectionDialogGetResult\n"
    ".type __load_and_call_scePlayerSelectionDialogGetResult @function\n"
    "__load_and_call_scePlayerSelectionDialogGetResult:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePlayerSelectionDialogGetResult\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePlayerSelectionDialogGetResult]\n");

void __load_and_call_scePlayerSelectionDialogGetResult();
static __attribute__ ((used)) void* __ptr_scePlayerSelectionDialogGetResult = &__load_and_call_scePlayerSelectionDialogGetResult;

static __attribute__ ((used)) void
__load_scePlayerSelectionDialogGetResult(void) {
  sprx_dlsym(__handle, "scePlayerSelectionDialogGetResult", &__ptr_scePlayerSelectionDialogGetResult);
}

asm(".intel_syntax noprefix\n"
    ".global scePlayerSelectionDialogGetStatus\n"
    ".type scePlayerSelectionDialogGetStatus @function\n"
    "scePlayerSelectionDialogGetStatus:\n"
    "jmp qword ptr [rip + __ptr_scePlayerSelectionDialogGetStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePlayerSelectionDialogGetStatus\n"
    ".type __load_and_call_scePlayerSelectionDialogGetStatus @function\n"
    "__load_and_call_scePlayerSelectionDialogGetStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePlayerSelectionDialogGetStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePlayerSelectionDialogGetStatus]\n");

void __load_and_call_scePlayerSelectionDialogGetStatus();
static __attribute__ ((used)) void* __ptr_scePlayerSelectionDialogGetStatus = &__load_and_call_scePlayerSelectionDialogGetStatus;

static __attribute__ ((used)) void
__load_scePlayerSelectionDialogGetStatus(void) {
  sprx_dlsym(__handle, "scePlayerSelectionDialogGetStatus", &__ptr_scePlayerSelectionDialogGetStatus);
}

asm(".intel_syntax noprefix\n"
    ".global scePlayerSelectionDialogInitialize\n"
    ".type scePlayerSelectionDialogInitialize @function\n"
    "scePlayerSelectionDialogInitialize:\n"
    "jmp qword ptr [rip + __ptr_scePlayerSelectionDialogInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePlayerSelectionDialogInitialize\n"
    ".type __load_and_call_scePlayerSelectionDialogInitialize @function\n"
    "__load_and_call_scePlayerSelectionDialogInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePlayerSelectionDialogInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePlayerSelectionDialogInitialize]\n");

void __load_and_call_scePlayerSelectionDialogInitialize();
static __attribute__ ((used)) void* __ptr_scePlayerSelectionDialogInitialize = &__load_and_call_scePlayerSelectionDialogInitialize;

static __attribute__ ((used)) void
__load_scePlayerSelectionDialogInitialize(void) {
  sprx_dlsym(__handle, "scePlayerSelectionDialogInitialize", &__ptr_scePlayerSelectionDialogInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global scePlayerSelectionDialogOpen\n"
    ".type scePlayerSelectionDialogOpen @function\n"
    "scePlayerSelectionDialogOpen:\n"
    "jmp qword ptr [rip + __ptr_scePlayerSelectionDialogOpen]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePlayerSelectionDialogOpen\n"
    ".type __load_and_call_scePlayerSelectionDialogOpen @function\n"
    "__load_and_call_scePlayerSelectionDialogOpen:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePlayerSelectionDialogOpen\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePlayerSelectionDialogOpen]\n");

void __load_and_call_scePlayerSelectionDialogOpen();
static __attribute__ ((used)) void* __ptr_scePlayerSelectionDialogOpen = &__load_and_call_scePlayerSelectionDialogOpen;

static __attribute__ ((used)) void
__load_scePlayerSelectionDialogOpen(void) {
  sprx_dlsym(__handle, "scePlayerSelectionDialogOpen", &__ptr_scePlayerSelectionDialogOpen);
}

asm(".intel_syntax noprefix\n"
    ".global scePlayerSelectionDialogTerminate\n"
    ".type scePlayerSelectionDialogTerminate @function\n"
    "scePlayerSelectionDialogTerminate:\n"
    "jmp qword ptr [rip + __ptr_scePlayerSelectionDialogTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePlayerSelectionDialogTerminate\n"
    ".type __load_and_call_scePlayerSelectionDialogTerminate @function\n"
    "__load_and_call_scePlayerSelectionDialogTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePlayerSelectionDialogTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePlayerSelectionDialogTerminate]\n");

void __load_and_call_scePlayerSelectionDialogTerminate();
static __attribute__ ((used)) void* __ptr_scePlayerSelectionDialogTerminate = &__load_and_call_scePlayerSelectionDialogTerminate;

static __attribute__ ((used)) void
__load_scePlayerSelectionDialogTerminate(void) {
  sprx_dlsym(__handle, "scePlayerSelectionDialogTerminate", &__ptr_scePlayerSelectionDialogTerminate);
}

asm(".intel_syntax noprefix\n"
    ".global scePlayerSelectionDialogUpdateStatus\n"
    ".type scePlayerSelectionDialogUpdateStatus @function\n"
    "scePlayerSelectionDialogUpdateStatus:\n"
    "jmp qword ptr [rip + __ptr_scePlayerSelectionDialogUpdateStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePlayerSelectionDialogUpdateStatus\n"
    ".type __load_and_call_scePlayerSelectionDialogUpdateStatus @function\n"
    "__load_and_call_scePlayerSelectionDialogUpdateStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePlayerSelectionDialogUpdateStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePlayerSelectionDialogUpdateStatus]\n");

void __load_and_call_scePlayerSelectionDialogUpdateStatus();
static __attribute__ ((used)) void* __ptr_scePlayerSelectionDialogUpdateStatus = &__load_and_call_scePlayerSelectionDialogUpdateStatus;

static __attribute__ ((used)) void
__load_scePlayerSelectionDialogUpdateStatus(void) {
  sprx_dlsym(__handle, "scePlayerSelectionDialogUpdateStatus", &__ptr_scePlayerSelectionDialogUpdateStatus);
}