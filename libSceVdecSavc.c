/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceVdecSavc", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceSdecCreateSw\n"
    ".type sceSdecCreateSw @function\n"
    "sceSdecCreateSw:\n"
    "jmp qword ptr [rip + __ptr_sceSdecCreateSw]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdecCreateSw\n"
    ".type __load_and_call_sceSdecCreateSw @function\n"
    "__load_and_call_sceSdecCreateSw:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdecCreateSw\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdecCreateSw]\n");

void __load_and_call_sceSdecCreateSw();
static __attribute__ ((used)) void* __ptr_sceSdecCreateSw = &__load_and_call_sceSdecCreateSw;

static __attribute__ ((used)) void
__load_sceSdecCreateSw(void) {
  sprx_dlsym(__handle, "sceSdecCreateSw", &__ptr_sceSdecCreateSw);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdecDestroySw\n"
    ".type sceSdecDestroySw @function\n"
    "sceSdecDestroySw:\n"
    "jmp qword ptr [rip + __ptr_sceSdecDestroySw]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdecDestroySw\n"
    ".type __load_and_call_sceSdecDestroySw @function\n"
    "__load_and_call_sceSdecDestroySw:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdecDestroySw\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdecDestroySw]\n");

void __load_and_call_sceSdecDestroySw();
static __attribute__ ((used)) void* __ptr_sceSdecDestroySw = &__load_and_call_sceSdecDestroySw;

static __attribute__ ((used)) void
__load_sceSdecDestroySw(void) {
  sprx_dlsym(__handle, "sceSdecDestroySw", &__ptr_sceSdecDestroySw);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdecGetVersionSw\n"
    ".type sceSdecGetVersionSw @function\n"
    "sceSdecGetVersionSw:\n"
    "jmp qword ptr [rip + __ptr_sceSdecGetVersionSw]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdecGetVersionSw\n"
    ".type __load_and_call_sceSdecGetVersionSw @function\n"
    "__load_and_call_sceSdecGetVersionSw:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdecGetVersionSw\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdecGetVersionSw]\n");

void __load_and_call_sceSdecGetVersionSw();
static __attribute__ ((used)) void* __ptr_sceSdecGetVersionSw = &__load_and_call_sceSdecGetVersionSw;

static __attribute__ ((used)) void
__load_sceSdecGetVersionSw(void) {
  sprx_dlsym(__handle, "sceSdecGetVersionSw", &__ptr_sceSdecGetVersionSw);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdecQueryMemorySw\n"
    ".type sceSdecQueryMemorySw @function\n"
    "sceSdecQueryMemorySw:\n"
    "jmp qword ptr [rip + __ptr_sceSdecQueryMemorySw]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdecQueryMemorySw\n"
    ".type __load_and_call_sceSdecQueryMemorySw @function\n"
    "__load_and_call_sceSdecQueryMemorySw:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdecQueryMemorySw\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdecQueryMemorySw]\n");

void __load_and_call_sceSdecQueryMemorySw();
static __attribute__ ((used)) void* __ptr_sceSdecQueryMemorySw = &__load_and_call_sceSdecQueryMemorySw;

static __attribute__ ((used)) void
__load_sceSdecQueryMemorySw(void) {
  sprx_dlsym(__handle, "sceSdecQueryMemorySw", &__ptr_sceSdecQueryMemorySw);
}
