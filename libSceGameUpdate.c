/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceGameUpdate", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceGameUpdateAbortRequest\n"
    ".type sceGameUpdateAbortRequest @function\n"
    "sceGameUpdateAbortRequest:\n"
    "jmp qword ptr [rip + __ptr_sceGameUpdateAbortRequest]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameUpdateAbortRequest\n"
    ".type __load_and_call_sceGameUpdateAbortRequest @function\n"
    "__load_and_call_sceGameUpdateAbortRequest:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameUpdateAbortRequest\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameUpdateAbortRequest]\n");

void __load_and_call_sceGameUpdateAbortRequest();
static __attribute__ ((used)) void* __ptr_sceGameUpdateAbortRequest = &__load_and_call_sceGameUpdateAbortRequest;

static __attribute__ ((used)) void
__load_sceGameUpdateAbortRequest(void) {
  sprx_dlsym(__handle, "sceGameUpdateAbortRequest", &__ptr_sceGameUpdateAbortRequest);
}

asm(".intel_syntax noprefix\n"
    ".global sceGameUpdateCheck\n"
    ".type sceGameUpdateCheck @function\n"
    "sceGameUpdateCheck:\n"
    "jmp qword ptr [rip + __ptr_sceGameUpdateCheck]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameUpdateCheck\n"
    ".type __load_and_call_sceGameUpdateCheck @function\n"
    "__load_and_call_sceGameUpdateCheck:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameUpdateCheck\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameUpdateCheck]\n");

void __load_and_call_sceGameUpdateCheck();
static __attribute__ ((used)) void* __ptr_sceGameUpdateCheck = &__load_and_call_sceGameUpdateCheck;

static __attribute__ ((used)) void
__load_sceGameUpdateCheck(void) {
  sprx_dlsym(__handle, "sceGameUpdateCheck", &__ptr_sceGameUpdateCheck);
}

asm(".intel_syntax noprefix\n"
    ".global sceGameUpdateCreateRequest\n"
    ".type sceGameUpdateCreateRequest @function\n"
    "sceGameUpdateCreateRequest:\n"
    "jmp qword ptr [rip + __ptr_sceGameUpdateCreateRequest]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameUpdateCreateRequest\n"
    ".type __load_and_call_sceGameUpdateCreateRequest @function\n"
    "__load_and_call_sceGameUpdateCreateRequest:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameUpdateCreateRequest\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameUpdateCreateRequest]\n");

void __load_and_call_sceGameUpdateCreateRequest();
static __attribute__ ((used)) void* __ptr_sceGameUpdateCreateRequest = &__load_and_call_sceGameUpdateCreateRequest;

static __attribute__ ((used)) void
__load_sceGameUpdateCreateRequest(void) {
  sprx_dlsym(__handle, "sceGameUpdateCreateRequest", &__ptr_sceGameUpdateCreateRequest);
}

asm(".intel_syntax noprefix\n"
    ".global sceGameUpdateDeleteRequest\n"
    ".type sceGameUpdateDeleteRequest @function\n"
    "sceGameUpdateDeleteRequest:\n"
    "jmp qword ptr [rip + __ptr_sceGameUpdateDeleteRequest]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameUpdateDeleteRequest\n"
    ".type __load_and_call_sceGameUpdateDeleteRequest @function\n"
    "__load_and_call_sceGameUpdateDeleteRequest:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameUpdateDeleteRequest\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameUpdateDeleteRequest]\n");

void __load_and_call_sceGameUpdateDeleteRequest();
static __attribute__ ((used)) void* __ptr_sceGameUpdateDeleteRequest = &__load_and_call_sceGameUpdateDeleteRequest;

static __attribute__ ((used)) void
__load_sceGameUpdateDeleteRequest(void) {
  sprx_dlsym(__handle, "sceGameUpdateDeleteRequest", &__ptr_sceGameUpdateDeleteRequest);
}

asm(".intel_syntax noprefix\n"
    ".global sceGameUpdateGetAddcontLatestVersion\n"
    ".type sceGameUpdateGetAddcontLatestVersion @function\n"
    "sceGameUpdateGetAddcontLatestVersion:\n"
    "jmp qword ptr [rip + __ptr_sceGameUpdateGetAddcontLatestVersion]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameUpdateGetAddcontLatestVersion\n"
    ".type __load_and_call_sceGameUpdateGetAddcontLatestVersion @function\n"
    "__load_and_call_sceGameUpdateGetAddcontLatestVersion:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameUpdateGetAddcontLatestVersion\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameUpdateGetAddcontLatestVersion]\n");

void __load_and_call_sceGameUpdateGetAddcontLatestVersion();
static __attribute__ ((used)) void* __ptr_sceGameUpdateGetAddcontLatestVersion = &__load_and_call_sceGameUpdateGetAddcontLatestVersion;

static __attribute__ ((used)) void
__load_sceGameUpdateGetAddcontLatestVersion(void) {
  sprx_dlsym(__handle, "sceGameUpdateGetAddcontLatestVersion", &__ptr_sceGameUpdateGetAddcontLatestVersion);
}

asm(".intel_syntax noprefix\n"
    ".global sceGameUpdateInitialize\n"
    ".type sceGameUpdateInitialize @function\n"
    "sceGameUpdateInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceGameUpdateInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameUpdateInitialize\n"
    ".type __load_and_call_sceGameUpdateInitialize @function\n"
    "__load_and_call_sceGameUpdateInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameUpdateInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameUpdateInitialize]\n");

void __load_and_call_sceGameUpdateInitialize();
static __attribute__ ((used)) void* __ptr_sceGameUpdateInitialize = &__load_and_call_sceGameUpdateInitialize;

static __attribute__ ((used)) void
__load_sceGameUpdateInitialize(void) {
  sprx_dlsym(__handle, "sceGameUpdateInitialize", &__ptr_sceGameUpdateInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceGameUpdateTerminate\n"
    ".type sceGameUpdateTerminate @function\n"
    "sceGameUpdateTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceGameUpdateTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceGameUpdateTerminate\n"
    ".type __load_and_call_sceGameUpdateTerminate @function\n"
    "__load_and_call_sceGameUpdateTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceGameUpdateTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceGameUpdateTerminate]\n");

void __load_and_call_sceGameUpdateTerminate();
static __attribute__ ((used)) void* __ptr_sceGameUpdateTerminate = &__load_and_call_sceGameUpdateTerminate;

static __attribute__ ((used)) void
__load_sceGameUpdateTerminate(void) {
  sprx_dlsym(__handle, "sceGameUpdateTerminate", &__ptr_sceGameUpdateTerminate);
}
