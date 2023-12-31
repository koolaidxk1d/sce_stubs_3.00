/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceSystemLogger2", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceSystemLogger2GetTimestamp\n"
    ".type sceSystemLogger2GetTimestamp @function\n"
    "sceSystemLogger2GetTimestamp:\n"
    "jmp qword ptr [rip + __ptr_sceSystemLogger2GetTimestamp]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemLogger2GetTimestamp\n"
    ".type __load_and_call_sceSystemLogger2GetTimestamp @function\n"
    "__load_and_call_sceSystemLogger2GetTimestamp:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemLogger2GetTimestamp\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemLogger2GetTimestamp]\n");

void __load_and_call_sceSystemLogger2GetTimestamp();
static __attribute__ ((used)) void* __ptr_sceSystemLogger2GetTimestamp = &__load_and_call_sceSystemLogger2GetTimestamp;

static __attribute__ ((used)) void
__load_sceSystemLogger2GetTimestamp(void) {
  sprx_dlsym(__handle, "sceSystemLogger2GetTimestamp", &__ptr_sceSystemLogger2GetTimestamp);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemLogger2Initialize\n"
    ".type sceSystemLogger2Initialize @function\n"
    "sceSystemLogger2Initialize:\n"
    "jmp qword ptr [rip + __ptr_sceSystemLogger2Initialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemLogger2Initialize\n"
    ".type __load_and_call_sceSystemLogger2Initialize @function\n"
    "__load_and_call_sceSystemLogger2Initialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemLogger2Initialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemLogger2Initialize]\n");

void __load_and_call_sceSystemLogger2Initialize();
static __attribute__ ((used)) void* __ptr_sceSystemLogger2Initialize = &__load_and_call_sceSystemLogger2Initialize;

static __attribute__ ((used)) void
__load_sceSystemLogger2Initialize(void) {
  sprx_dlsym(__handle, "sceSystemLogger2Initialize", &__ptr_sceSystemLogger2Initialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemLogger2SetEventAsync\n"
    ".type sceSystemLogger2SetEventAsync @function\n"
    "sceSystemLogger2SetEventAsync:\n"
    "jmp qword ptr [rip + __ptr_sceSystemLogger2SetEventAsync]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemLogger2SetEventAsync\n"
    ".type __load_and_call_sceSystemLogger2SetEventAsync @function\n"
    "__load_and_call_sceSystemLogger2SetEventAsync:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemLogger2SetEventAsync\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemLogger2SetEventAsync]\n");

void __load_and_call_sceSystemLogger2SetEventAsync();
static __attribute__ ((used)) void* __ptr_sceSystemLogger2SetEventAsync = &__load_and_call_sceSystemLogger2SetEventAsync;

static __attribute__ ((used)) void
__load_sceSystemLogger2SetEventAsync(void) {
  sprx_dlsym(__handle, "sceSystemLogger2SetEventAsync", &__ptr_sceSystemLogger2SetEventAsync);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemLogger2SetEventAsyncEx\n"
    ".type sceSystemLogger2SetEventAsyncEx @function\n"
    "sceSystemLogger2SetEventAsyncEx:\n"
    "jmp qword ptr [rip + __ptr_sceSystemLogger2SetEventAsyncEx]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemLogger2SetEventAsyncEx\n"
    ".type __load_and_call_sceSystemLogger2SetEventAsyncEx @function\n"
    "__load_and_call_sceSystemLogger2SetEventAsyncEx:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemLogger2SetEventAsyncEx\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemLogger2SetEventAsyncEx]\n");

void __load_and_call_sceSystemLogger2SetEventAsyncEx();
static __attribute__ ((used)) void* __ptr_sceSystemLogger2SetEventAsyncEx = &__load_and_call_sceSystemLogger2SetEventAsyncEx;

static __attribute__ ((used)) void
__load_sceSystemLogger2SetEventAsyncEx(void) {
  sprx_dlsym(__handle, "sceSystemLogger2SetEventAsyncEx", &__ptr_sceSystemLogger2SetEventAsyncEx);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemLogger2Terminate\n"
    ".type sceSystemLogger2Terminate @function\n"
    "sceSystemLogger2Terminate:\n"
    "jmp qword ptr [rip + __ptr_sceSystemLogger2Terminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemLogger2Terminate\n"
    ".type __load_and_call_sceSystemLogger2Terminate @function\n"
    "__load_and_call_sceSystemLogger2Terminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemLogger2Terminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemLogger2Terminate]\n");

void __load_and_call_sceSystemLogger2Terminate();
static __attribute__ ((used)) void* __ptr_sceSystemLogger2Terminate = &__load_and_call_sceSystemLogger2Terminate;

static __attribute__ ((used)) void
__load_sceSystemLogger2Terminate(void) {
  sprx_dlsym(__handle, "sceSystemLogger2Terminate", &__ptr_sceSystemLogger2Terminate);
}
