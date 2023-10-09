/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceCompanionUtil", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceCompanionUtilGetEvent\n"
    ".type sceCompanionUtilGetEvent @function\n"
    "sceCompanionUtilGetEvent:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilGetEvent]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionUtilGetEvent\n"
    ".type __load_and_call_sceCompanionUtilGetEvent @function\n"
    "__load_and_call_sceCompanionUtilGetEvent:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionUtilGetEvent\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilGetEvent]\n");

void __load_and_call_sceCompanionUtilGetEvent();
static __attribute__ ((used)) void* __ptr_sceCompanionUtilGetEvent = &__load_and_call_sceCompanionUtilGetEvent;

static __attribute__ ((used)) void
__load_sceCompanionUtilGetEvent(void) {
  sprx_dlsym(__handle, "sceCompanionUtilGetEvent", &__ptr_sceCompanionUtilGetEvent);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionUtilGetRemoteOskEvent\n"
    ".type sceCompanionUtilGetRemoteOskEvent @function\n"
    "sceCompanionUtilGetRemoteOskEvent:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilGetRemoteOskEvent]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionUtilGetRemoteOskEvent\n"
    ".type __load_and_call_sceCompanionUtilGetRemoteOskEvent @function\n"
    "__load_and_call_sceCompanionUtilGetRemoteOskEvent:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionUtilGetRemoteOskEvent\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilGetRemoteOskEvent]\n");

void __load_and_call_sceCompanionUtilGetRemoteOskEvent();
static __attribute__ ((used)) void* __ptr_sceCompanionUtilGetRemoteOskEvent = &__load_and_call_sceCompanionUtilGetRemoteOskEvent;

static __attribute__ ((used)) void
__load_sceCompanionUtilGetRemoteOskEvent(void) {
  sprx_dlsym(__handle, "sceCompanionUtilGetRemoteOskEvent", &__ptr_sceCompanionUtilGetRemoteOskEvent);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionUtilInitialize\n"
    ".type sceCompanionUtilInitialize @function\n"
    "sceCompanionUtilInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionUtilInitialize\n"
    ".type __load_and_call_sceCompanionUtilInitialize @function\n"
    "__load_and_call_sceCompanionUtilInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionUtilInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilInitialize]\n");

void __load_and_call_sceCompanionUtilInitialize();
static __attribute__ ((used)) void* __ptr_sceCompanionUtilInitialize = &__load_and_call_sceCompanionUtilInitialize;

static __attribute__ ((used)) void
__load_sceCompanionUtilInitialize(void) {
  sprx_dlsym(__handle, "sceCompanionUtilInitialize", &__ptr_sceCompanionUtilInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionUtilOptParamInitialize\n"
    ".type sceCompanionUtilOptParamInitialize @function\n"
    "sceCompanionUtilOptParamInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilOptParamInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionUtilOptParamInitialize\n"
    ".type __load_and_call_sceCompanionUtilOptParamInitialize @function\n"
    "__load_and_call_sceCompanionUtilOptParamInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionUtilOptParamInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilOptParamInitialize]\n");

void __load_and_call_sceCompanionUtilOptParamInitialize();
static __attribute__ ((used)) void* __ptr_sceCompanionUtilOptParamInitialize = &__load_and_call_sceCompanionUtilOptParamInitialize;

static __attribute__ ((used)) void
__load_sceCompanionUtilOptParamInitialize(void) {
  sprx_dlsym(__handle, "sceCompanionUtilOptParamInitialize", &__ptr_sceCompanionUtilOptParamInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionUtilTerminate\n"
    ".type sceCompanionUtilTerminate @function\n"
    "sceCompanionUtilTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionUtilTerminate\n"
    ".type __load_and_call_sceCompanionUtilTerminate @function\n"
    "__load_and_call_sceCompanionUtilTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionUtilTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionUtilTerminate]\n");

void __load_and_call_sceCompanionUtilTerminate();
static __attribute__ ((used)) void* __ptr_sceCompanionUtilTerminate = &__load_and_call_sceCompanionUtilTerminate;

static __attribute__ ((used)) void
__load_sceCompanionUtilTerminate(void) {
  sprx_dlsym(__handle, "sceCompanionUtilTerminate", &__ptr_sceCompanionUtilTerminate);
}
