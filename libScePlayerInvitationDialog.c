/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libScePlayerInvitationDialog", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global scePlayerInvitationDialogClose\n"
    ".type scePlayerInvitationDialogClose @function\n"
    "scePlayerInvitationDialogClose:\n"
    "jmp qword ptr [rip + __ptr_scePlayerInvitationDialogClose]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePlayerInvitationDialogClose\n"
    ".type __load_and_call_scePlayerInvitationDialogClose @function\n"
    "__load_and_call_scePlayerInvitationDialogClose:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePlayerInvitationDialogClose\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePlayerInvitationDialogClose]\n");

void __load_and_call_scePlayerInvitationDialogClose();
static __attribute__ ((used)) void* __ptr_scePlayerInvitationDialogClose = &__load_and_call_scePlayerInvitationDialogClose;

static __attribute__ ((used)) void
__load_scePlayerInvitationDialogClose(void) {
  sprx_dlsym(__handle, "scePlayerInvitationDialogClose", &__ptr_scePlayerInvitationDialogClose);
}

asm(".intel_syntax noprefix\n"
    ".global scePlayerInvitationDialogGetResult\n"
    ".type scePlayerInvitationDialogGetResult @function\n"
    "scePlayerInvitationDialogGetResult:\n"
    "jmp qword ptr [rip + __ptr_scePlayerInvitationDialogGetResult]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePlayerInvitationDialogGetResult\n"
    ".type __load_and_call_scePlayerInvitationDialogGetResult @function\n"
    "__load_and_call_scePlayerInvitationDialogGetResult:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePlayerInvitationDialogGetResult\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePlayerInvitationDialogGetResult]\n");

void __load_and_call_scePlayerInvitationDialogGetResult();
static __attribute__ ((used)) void* __ptr_scePlayerInvitationDialogGetResult = &__load_and_call_scePlayerInvitationDialogGetResult;

static __attribute__ ((used)) void
__load_scePlayerInvitationDialogGetResult(void) {
  sprx_dlsym(__handle, "scePlayerInvitationDialogGetResult", &__ptr_scePlayerInvitationDialogGetResult);
}

asm(".intel_syntax noprefix\n"
    ".global scePlayerInvitationDialogGetStatus\n"
    ".type scePlayerInvitationDialogGetStatus @function\n"
    "scePlayerInvitationDialogGetStatus:\n"
    "jmp qword ptr [rip + __ptr_scePlayerInvitationDialogGetStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePlayerInvitationDialogGetStatus\n"
    ".type __load_and_call_scePlayerInvitationDialogGetStatus @function\n"
    "__load_and_call_scePlayerInvitationDialogGetStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePlayerInvitationDialogGetStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePlayerInvitationDialogGetStatus]\n");

void __load_and_call_scePlayerInvitationDialogGetStatus();
static __attribute__ ((used)) void* __ptr_scePlayerInvitationDialogGetStatus = &__load_and_call_scePlayerInvitationDialogGetStatus;

static __attribute__ ((used)) void
__load_scePlayerInvitationDialogGetStatus(void) {
  sprx_dlsym(__handle, "scePlayerInvitationDialogGetStatus", &__ptr_scePlayerInvitationDialogGetStatus);
}

asm(".intel_syntax noprefix\n"
    ".global scePlayerInvitationDialogInitialize\n"
    ".type scePlayerInvitationDialogInitialize @function\n"
    "scePlayerInvitationDialogInitialize:\n"
    "jmp qword ptr [rip + __ptr_scePlayerInvitationDialogInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePlayerInvitationDialogInitialize\n"
    ".type __load_and_call_scePlayerInvitationDialogInitialize @function\n"
    "__load_and_call_scePlayerInvitationDialogInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePlayerInvitationDialogInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePlayerInvitationDialogInitialize]\n");

void __load_and_call_scePlayerInvitationDialogInitialize();
static __attribute__ ((used)) void* __ptr_scePlayerInvitationDialogInitialize = &__load_and_call_scePlayerInvitationDialogInitialize;

static __attribute__ ((used)) void
__load_scePlayerInvitationDialogInitialize(void) {
  sprx_dlsym(__handle, "scePlayerInvitationDialogInitialize", &__ptr_scePlayerInvitationDialogInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global scePlayerInvitationDialogOpen\n"
    ".type scePlayerInvitationDialogOpen @function\n"
    "scePlayerInvitationDialogOpen:\n"
    "jmp qword ptr [rip + __ptr_scePlayerInvitationDialogOpen]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePlayerInvitationDialogOpen\n"
    ".type __load_and_call_scePlayerInvitationDialogOpen @function\n"
    "__load_and_call_scePlayerInvitationDialogOpen:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePlayerInvitationDialogOpen\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePlayerInvitationDialogOpen]\n");

void __load_and_call_scePlayerInvitationDialogOpen();
static __attribute__ ((used)) void* __ptr_scePlayerInvitationDialogOpen = &__load_and_call_scePlayerInvitationDialogOpen;

static __attribute__ ((used)) void
__load_scePlayerInvitationDialogOpen(void) {
  sprx_dlsym(__handle, "scePlayerInvitationDialogOpen", &__ptr_scePlayerInvitationDialogOpen);
}

asm(".intel_syntax noprefix\n"
    ".global scePlayerInvitationDialogTerminate\n"
    ".type scePlayerInvitationDialogTerminate @function\n"
    "scePlayerInvitationDialogTerminate:\n"
    "jmp qword ptr [rip + __ptr_scePlayerInvitationDialogTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePlayerInvitationDialogTerminate\n"
    ".type __load_and_call_scePlayerInvitationDialogTerminate @function\n"
    "__load_and_call_scePlayerInvitationDialogTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePlayerInvitationDialogTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePlayerInvitationDialogTerminate]\n");

void __load_and_call_scePlayerInvitationDialogTerminate();
static __attribute__ ((used)) void* __ptr_scePlayerInvitationDialogTerminate = &__load_and_call_scePlayerInvitationDialogTerminate;

static __attribute__ ((used)) void
__load_scePlayerInvitationDialogTerminate(void) {
  sprx_dlsym(__handle, "scePlayerInvitationDialogTerminate", &__ptr_scePlayerInvitationDialogTerminate);
}

asm(".intel_syntax noprefix\n"
    ".global scePlayerInvitationDialogUpdateStatus\n"
    ".type scePlayerInvitationDialogUpdateStatus @function\n"
    "scePlayerInvitationDialogUpdateStatus:\n"
    "jmp qword ptr [rip + __ptr_scePlayerInvitationDialogUpdateStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePlayerInvitationDialogUpdateStatus\n"
    ".type __load_and_call_scePlayerInvitationDialogUpdateStatus @function\n"
    "__load_and_call_scePlayerInvitationDialogUpdateStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePlayerInvitationDialogUpdateStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePlayerInvitationDialogUpdateStatus]\n");

void __load_and_call_scePlayerInvitationDialogUpdateStatus();
static __attribute__ ((used)) void* __ptr_scePlayerInvitationDialogUpdateStatus = &__load_and_call_scePlayerInvitationDialogUpdateStatus;

static __attribute__ ((used)) void
__load_scePlayerInvitationDialogUpdateStatus(void) {
  sprx_dlsym(__handle, "scePlayerInvitationDialogUpdateStatus", &__ptr_scePlayerInvitationDialogUpdateStatus);
}
