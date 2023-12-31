/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceErrorDialog", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceErrorDialogClose\n"
    ".type sceErrorDialogClose @function\n"
    "sceErrorDialogClose:\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogClose]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceErrorDialogClose\n"
    ".type __load_and_call_sceErrorDialogClose @function\n"
    "__load_and_call_sceErrorDialogClose:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceErrorDialogClose\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogClose]\n");

void __load_and_call_sceErrorDialogClose();
static __attribute__ ((used)) void* __ptr_sceErrorDialogClose = &__load_and_call_sceErrorDialogClose;

static __attribute__ ((used)) void
__load_sceErrorDialogClose(void) {
  sprx_dlsym(__handle, "sceErrorDialogClose", &__ptr_sceErrorDialogClose);
}

asm(".intel_syntax noprefix\n"
    ".global sceErrorDialogGetStatus\n"
    ".type sceErrorDialogGetStatus @function\n"
    "sceErrorDialogGetStatus:\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogGetStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceErrorDialogGetStatus\n"
    ".type __load_and_call_sceErrorDialogGetStatus @function\n"
    "__load_and_call_sceErrorDialogGetStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceErrorDialogGetStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogGetStatus]\n");

void __load_and_call_sceErrorDialogGetStatus();
static __attribute__ ((used)) void* __ptr_sceErrorDialogGetStatus = &__load_and_call_sceErrorDialogGetStatus;

static __attribute__ ((used)) void
__load_sceErrorDialogGetStatus(void) {
  sprx_dlsym(__handle, "sceErrorDialogGetStatus", &__ptr_sceErrorDialogGetStatus);
}

asm(".intel_syntax noprefix\n"
    ".global sceErrorDialogInitialize\n"
    ".type sceErrorDialogInitialize @function\n"
    "sceErrorDialogInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceErrorDialogInitialize\n"
    ".type __load_and_call_sceErrorDialogInitialize @function\n"
    "__load_and_call_sceErrorDialogInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceErrorDialogInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogInitialize]\n");

void __load_and_call_sceErrorDialogInitialize();
static __attribute__ ((used)) void* __ptr_sceErrorDialogInitialize = &__load_and_call_sceErrorDialogInitialize;

static __attribute__ ((used)) void
__load_sceErrorDialogInitialize(void) {
  sprx_dlsym(__handle, "sceErrorDialogInitialize", &__ptr_sceErrorDialogInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceErrorDialogOpen\n"
    ".type sceErrorDialogOpen @function\n"
    "sceErrorDialogOpen:\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogOpen]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceErrorDialogOpen\n"
    ".type __load_and_call_sceErrorDialogOpen @function\n"
    "__load_and_call_sceErrorDialogOpen:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceErrorDialogOpen\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogOpen]\n");

void __load_and_call_sceErrorDialogOpen();
static __attribute__ ((used)) void* __ptr_sceErrorDialogOpen = &__load_and_call_sceErrorDialogOpen;

static __attribute__ ((used)) void
__load_sceErrorDialogOpen(void) {
  sprx_dlsym(__handle, "sceErrorDialogOpen", &__ptr_sceErrorDialogOpen);
}

asm(".intel_syntax noprefix\n"
    ".global sceErrorDialogOpenDetail\n"
    ".type sceErrorDialogOpenDetail @function\n"
    "sceErrorDialogOpenDetail:\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogOpenDetail]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceErrorDialogOpenDetail\n"
    ".type __load_and_call_sceErrorDialogOpenDetail @function\n"
    "__load_and_call_sceErrorDialogOpenDetail:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceErrorDialogOpenDetail\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogOpenDetail]\n");

void __load_and_call_sceErrorDialogOpenDetail();
static __attribute__ ((used)) void* __ptr_sceErrorDialogOpenDetail = &__load_and_call_sceErrorDialogOpenDetail;

static __attribute__ ((used)) void
__load_sceErrorDialogOpenDetail(void) {
  sprx_dlsym(__handle, "sceErrorDialogOpenDetail", &__ptr_sceErrorDialogOpenDetail);
}

asm(".intel_syntax noprefix\n"
    ".global sceErrorDialogOpenWithReport\n"
    ".type sceErrorDialogOpenWithReport @function\n"
    "sceErrorDialogOpenWithReport:\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogOpenWithReport]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceErrorDialogOpenWithReport\n"
    ".type __load_and_call_sceErrorDialogOpenWithReport @function\n"
    "__load_and_call_sceErrorDialogOpenWithReport:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceErrorDialogOpenWithReport\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogOpenWithReport]\n");

void __load_and_call_sceErrorDialogOpenWithReport();
static __attribute__ ((used)) void* __ptr_sceErrorDialogOpenWithReport = &__load_and_call_sceErrorDialogOpenWithReport;

static __attribute__ ((used)) void
__load_sceErrorDialogOpenWithReport(void) {
  sprx_dlsym(__handle, "sceErrorDialogOpenWithReport", &__ptr_sceErrorDialogOpenWithReport);
}

asm(".intel_syntax noprefix\n"
    ".global sceErrorDialogTerminate\n"
    ".type sceErrorDialogTerminate @function\n"
    "sceErrorDialogTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceErrorDialogTerminate\n"
    ".type __load_and_call_sceErrorDialogTerminate @function\n"
    "__load_and_call_sceErrorDialogTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceErrorDialogTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogTerminate]\n");

void __load_and_call_sceErrorDialogTerminate();
static __attribute__ ((used)) void* __ptr_sceErrorDialogTerminate = &__load_and_call_sceErrorDialogTerminate;

static __attribute__ ((used)) void
__load_sceErrorDialogTerminate(void) {
  sprx_dlsym(__handle, "sceErrorDialogTerminate", &__ptr_sceErrorDialogTerminate);
}

asm(".intel_syntax noprefix\n"
    ".global sceErrorDialogUpdateStatus\n"
    ".type sceErrorDialogUpdateStatus @function\n"
    "sceErrorDialogUpdateStatus:\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogUpdateStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceErrorDialogUpdateStatus\n"
    ".type __load_and_call_sceErrorDialogUpdateStatus @function\n"
    "__load_and_call_sceErrorDialogUpdateStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceErrorDialogUpdateStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceErrorDialogUpdateStatus]\n");

void __load_and_call_sceErrorDialogUpdateStatus();
static __attribute__ ((used)) void* __ptr_sceErrorDialogUpdateStatus = &__load_and_call_sceErrorDialogUpdateStatus;

static __attribute__ ((used)) void
__load_sceErrorDialogUpdateStatus(void) {
  sprx_dlsym(__handle, "sceErrorDialogUpdateStatus", &__ptr_sceErrorDialogUpdateStatus);
}
