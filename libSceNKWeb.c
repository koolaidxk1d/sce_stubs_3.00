/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceNKWeb", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global _Z5dummyv\n"
    ".type _Z5dummyv @function\n"
    "_Z5dummyv:\n"
    "jmp qword ptr [rip + __ptr__Z5dummyv]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__Z5dummyv\n"
    ".type __load_and_call__Z5dummyv @function\n"
    "__load_and_call__Z5dummyv:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__Z5dummyv\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__Z5dummyv]\n");

void __load_and_call__Z5dummyv();
static __attribute__ ((used)) void* __ptr__Z5dummyv = &__load_and_call__Z5dummyv;

static __attribute__ ((used)) void
__load__Z5dummyv(void) {
  sprx_dlsym(__handle, "_Z5dummyv", &__ptr__Z5dummyv);
}

asm(".intel_syntax noprefix\n"
    ".global sceNKWebInitialize\n"
    ".type sceNKWebInitialize @function\n"
    "sceNKWebInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceNKWebInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNKWebInitialize\n"
    ".type __load_and_call_sceNKWebInitialize @function\n"
    "__load_and_call_sceNKWebInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNKWebInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNKWebInitialize]\n");

void __load_and_call_sceNKWebInitialize();
static __attribute__ ((used)) void* __ptr_sceNKWebInitialize = &__load_and_call_sceNKWebInitialize;

static __attribute__ ((used)) void
__load_sceNKWebInitialize(void) {
  sprx_dlsym(__handle, "sceNKWebInitialize", &__ptr_sceNKWebInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceNKWebTerminate\n"
    ".type sceNKWebTerminate @function\n"
    "sceNKWebTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceNKWebTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNKWebTerminate\n"
    ".type __load_and_call_sceNKWebTerminate @function\n"
    "__load_and_call_sceNKWebTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNKWebTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNKWebTerminate]\n");

void __load_and_call_sceNKWebTerminate();
static __attribute__ ((used)) void* __ptr_sceNKWebTerminate = &__load_and_call_sceNKWebTerminate;

static __attribute__ ((used)) void
__load_sceNKWebTerminate(void) {
  sprx_dlsym(__handle, "sceNKWebTerminate", &__ptr_sceNKWebTerminate);
}
