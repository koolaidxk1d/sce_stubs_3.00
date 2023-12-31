/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceVideoArbitration", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceVideoArbitrationAcceptEvent\n"
    ".type sceVideoArbitrationAcceptEvent @function\n"
    "sceVideoArbitrationAcceptEvent:\n"
    "jmp qword ptr [rip + __ptr_sceVideoArbitrationAcceptEvent]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVideoArbitrationAcceptEvent\n"
    ".type __load_and_call_sceVideoArbitrationAcceptEvent @function\n"
    "__load_and_call_sceVideoArbitrationAcceptEvent:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVideoArbitrationAcceptEvent\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVideoArbitrationAcceptEvent]\n");

void __load_and_call_sceVideoArbitrationAcceptEvent();
static __attribute__ ((used)) void* __ptr_sceVideoArbitrationAcceptEvent = &__load_and_call_sceVideoArbitrationAcceptEvent;

static __attribute__ ((used)) void
__load_sceVideoArbitrationAcceptEvent(void) {
  sprx_dlsym(__handle, "sceVideoArbitrationAcceptEvent", &__ptr_sceVideoArbitrationAcceptEvent);
}

asm(".intel_syntax noprefix\n"
    ".global sceVideoArbitrationEnable\n"
    ".type sceVideoArbitrationEnable @function\n"
    "sceVideoArbitrationEnable:\n"
    "jmp qword ptr [rip + __ptr_sceVideoArbitrationEnable]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVideoArbitrationEnable\n"
    ".type __load_and_call_sceVideoArbitrationEnable @function\n"
    "__load_and_call_sceVideoArbitrationEnable:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVideoArbitrationEnable\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVideoArbitrationEnable]\n");

void __load_and_call_sceVideoArbitrationEnable();
static __attribute__ ((used)) void* __ptr_sceVideoArbitrationEnable = &__load_and_call_sceVideoArbitrationEnable;

static __attribute__ ((used)) void
__load_sceVideoArbitrationEnable(void) {
  sprx_dlsym(__handle, "sceVideoArbitrationEnable", &__ptr_sceVideoArbitrationEnable);
}

asm(".intel_syntax noprefix\n"
    ".global sceVideoArbitrationInitialize\n"
    ".type sceVideoArbitrationInitialize @function\n"
    "sceVideoArbitrationInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceVideoArbitrationInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVideoArbitrationInitialize\n"
    ".type __load_and_call_sceVideoArbitrationInitialize @function\n"
    "__load_and_call_sceVideoArbitrationInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVideoArbitrationInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVideoArbitrationInitialize]\n");

void __load_and_call_sceVideoArbitrationInitialize();
static __attribute__ ((used)) void* __ptr_sceVideoArbitrationInitialize = &__load_and_call_sceVideoArbitrationInitialize;

static __attribute__ ((used)) void
__load_sceVideoArbitrationInitialize(void) {
  sprx_dlsym(__handle, "sceVideoArbitrationInitialize", &__ptr_sceVideoArbitrationInitialize);
}
