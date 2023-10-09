/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceSystemLogger", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceSystemLoggerInitialize\n"
    ".type sceSystemLoggerInitialize @function\n"
    "sceSystemLoggerInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceSystemLoggerInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemLoggerInitialize\n"
    ".type __load_and_call_sceSystemLoggerInitialize @function\n"
    "__load_and_call_sceSystemLoggerInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemLoggerInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemLoggerInitialize]\n");

void __load_and_call_sceSystemLoggerInitialize();
static __attribute__ ((used)) void* __ptr_sceSystemLoggerInitialize = &__load_and_call_sceSystemLoggerInitialize;

static __attribute__ ((used)) void
__load_sceSystemLoggerInitialize(void) {
  sprx_dlsym(__handle, "sceSystemLoggerInitialize", &__ptr_sceSystemLoggerInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemLoggerSetLogData\n"
    ".type sceSystemLoggerSetLogData @function\n"
    "sceSystemLoggerSetLogData:\n"
    "jmp qword ptr [rip + __ptr_sceSystemLoggerSetLogData]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemLoggerSetLogData\n"
    ".type __load_and_call_sceSystemLoggerSetLogData @function\n"
    "__load_and_call_sceSystemLoggerSetLogData:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemLoggerSetLogData\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemLoggerSetLogData]\n");

void __load_and_call_sceSystemLoggerSetLogData();
static __attribute__ ((used)) void* __ptr_sceSystemLoggerSetLogData = &__load_and_call_sceSystemLoggerSetLogData;

static __attribute__ ((used)) void
__load_sceSystemLoggerSetLogData(void) {
  sprx_dlsym(__handle, "sceSystemLoggerSetLogData", &__ptr_sceSystemLoggerSetLogData);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemLoggerTerminate\n"
    ".type sceSystemLoggerTerminate @function\n"
    "sceSystemLoggerTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceSystemLoggerTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemLoggerTerminate\n"
    ".type __load_and_call_sceSystemLoggerTerminate @function\n"
    "__load_and_call_sceSystemLoggerTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemLoggerTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemLoggerTerminate]\n");

void __load_and_call_sceSystemLoggerTerminate();
static __attribute__ ((used)) void* __ptr_sceSystemLoggerTerminate = &__load_and_call_sceSystemLoggerTerminate;

static __attribute__ ((used)) void
__load_sceSystemLoggerTerminate(void) {
  sprx_dlsym(__handle, "sceSystemLoggerTerminate", &__ptr_sceSystemLoggerTerminate);
}
