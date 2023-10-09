/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceOpusCeltDec", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceOpusCeltDecCreate\n"
    ".type sceOpusCeltDecCreate @function\n"
    "sceOpusCeltDecCreate:\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecCreate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceOpusCeltDecCreate\n"
    ".type __load_and_call_sceOpusCeltDecCreate @function\n"
    "__load_and_call_sceOpusCeltDecCreate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceOpusCeltDecCreate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecCreate]\n");

void __load_and_call_sceOpusCeltDecCreate();
static __attribute__ ((used)) void* __ptr_sceOpusCeltDecCreate = &__load_and_call_sceOpusCeltDecCreate;

static __attribute__ ((used)) void
__load_sceOpusCeltDecCreate(void) {
  sprx_dlsym(__handle, "sceOpusCeltDecCreate", &__ptr_sceOpusCeltDecCreate);
}

asm(".intel_syntax noprefix\n"
    ".global sceOpusCeltDecCreateEx\n"
    ".type sceOpusCeltDecCreateEx @function\n"
    "sceOpusCeltDecCreateEx:\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecCreateEx]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceOpusCeltDecCreateEx\n"
    ".type __load_and_call_sceOpusCeltDecCreateEx @function\n"
    "__load_and_call_sceOpusCeltDecCreateEx:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceOpusCeltDecCreateEx\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecCreateEx]\n");

void __load_and_call_sceOpusCeltDecCreateEx();
static __attribute__ ((used)) void* __ptr_sceOpusCeltDecCreateEx = &__load_and_call_sceOpusCeltDecCreateEx;

static __attribute__ ((used)) void
__load_sceOpusCeltDecCreateEx(void) {
  sprx_dlsym(__handle, "sceOpusCeltDecCreateEx", &__ptr_sceOpusCeltDecCreateEx);
}

asm(".intel_syntax noprefix\n"
    ".global sceOpusCeltDecCtl\n"
    ".type sceOpusCeltDecCtl @function\n"
    "sceOpusCeltDecCtl:\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecCtl]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceOpusCeltDecCtl\n"
    ".type __load_and_call_sceOpusCeltDecCtl @function\n"
    "__load_and_call_sceOpusCeltDecCtl:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceOpusCeltDecCtl\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecCtl]\n");

void __load_and_call_sceOpusCeltDecCtl();
static __attribute__ ((used)) void* __ptr_sceOpusCeltDecCtl = &__load_and_call_sceOpusCeltDecCtl;

static __attribute__ ((used)) void
__load_sceOpusCeltDecCtl(void) {
  sprx_dlsym(__handle, "sceOpusCeltDecCtl", &__ptr_sceOpusCeltDecCtl);
}

asm(".intel_syntax noprefix\n"
    ".global sceOpusCeltDecDecode\n"
    ".type sceOpusCeltDecDecode @function\n"
    "sceOpusCeltDecDecode:\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecDecode]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceOpusCeltDecDecode\n"
    ".type __load_and_call_sceOpusCeltDecDecode @function\n"
    "__load_and_call_sceOpusCeltDecDecode:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceOpusCeltDecDecode\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecDecode]\n");

void __load_and_call_sceOpusCeltDecDecode();
static __attribute__ ((used)) void* __ptr_sceOpusCeltDecDecode = &__load_and_call_sceOpusCeltDecDecode;

static __attribute__ ((used)) void
__load_sceOpusCeltDecDecode(void) {
  sprx_dlsym(__handle, "sceOpusCeltDecDecode", &__ptr_sceOpusCeltDecDecode);
}

asm(".intel_syntax noprefix\n"
    ".global sceOpusCeltDecDecodeFloat\n"
    ".type sceOpusCeltDecDecodeFloat @function\n"
    "sceOpusCeltDecDecodeFloat:\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecDecodeFloat]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceOpusCeltDecDecodeFloat\n"
    ".type __load_and_call_sceOpusCeltDecDecodeFloat @function\n"
    "__load_and_call_sceOpusCeltDecDecodeFloat:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceOpusCeltDecDecodeFloat\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecDecodeFloat]\n");

void __load_and_call_sceOpusCeltDecDecodeFloat();
static __attribute__ ((used)) void* __ptr_sceOpusCeltDecDecodeFloat = &__load_and_call_sceOpusCeltDecDecodeFloat;

static __attribute__ ((used)) void
__load_sceOpusCeltDecDecodeFloat(void) {
  sprx_dlsym(__handle, "sceOpusCeltDecDecodeFloat", &__ptr_sceOpusCeltDecDecodeFloat);
}

asm(".intel_syntax noprefix\n"
    ".global sceOpusCeltDecDecodeFloatWithPriority\n"
    ".type sceOpusCeltDecDecodeFloatWithPriority @function\n"
    "sceOpusCeltDecDecodeFloatWithPriority:\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecDecodeFloatWithPriority]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceOpusCeltDecDecodeFloatWithPriority\n"
    ".type __load_and_call_sceOpusCeltDecDecodeFloatWithPriority @function\n"
    "__load_and_call_sceOpusCeltDecDecodeFloatWithPriority:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceOpusCeltDecDecodeFloatWithPriority\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecDecodeFloatWithPriority]\n");

void __load_and_call_sceOpusCeltDecDecodeFloatWithPriority();
static __attribute__ ((used)) void* __ptr_sceOpusCeltDecDecodeFloatWithPriority = &__load_and_call_sceOpusCeltDecDecodeFloatWithPriority;

static __attribute__ ((used)) void
__load_sceOpusCeltDecDecodeFloatWithPriority(void) {
  sprx_dlsym(__handle, "sceOpusCeltDecDecodeFloatWithPriority", &__ptr_sceOpusCeltDecDecodeFloatWithPriority);
}

asm(".intel_syntax noprefix\n"
    ".global sceOpusCeltDecDecodeWithPriority\n"
    ".type sceOpusCeltDecDecodeWithPriority @function\n"
    "sceOpusCeltDecDecodeWithPriority:\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecDecodeWithPriority]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceOpusCeltDecDecodeWithPriority\n"
    ".type __load_and_call_sceOpusCeltDecDecodeWithPriority @function\n"
    "__load_and_call_sceOpusCeltDecDecodeWithPriority:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceOpusCeltDecDecodeWithPriority\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecDecodeWithPriority]\n");

void __load_and_call_sceOpusCeltDecDecodeWithPriority();
static __attribute__ ((used)) void* __ptr_sceOpusCeltDecDecodeWithPriority = &__load_and_call_sceOpusCeltDecDecodeWithPriority;

static __attribute__ ((used)) void
__load_sceOpusCeltDecDecodeWithPriority(void) {
  sprx_dlsym(__handle, "sceOpusCeltDecDecodeWithPriority", &__ptr_sceOpusCeltDecDecodeWithPriority);
}

asm(".intel_syntax noprefix\n"
    ".global sceOpusCeltDecDestroy\n"
    ".type sceOpusCeltDecDestroy @function\n"
    "sceOpusCeltDecDestroy:\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecDestroy]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceOpusCeltDecDestroy\n"
    ".type __load_and_call_sceOpusCeltDecDestroy @function\n"
    "__load_and_call_sceOpusCeltDecDestroy:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceOpusCeltDecDestroy\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecDestroy]\n");

void __load_and_call_sceOpusCeltDecDestroy();
static __attribute__ ((used)) void* __ptr_sceOpusCeltDecDestroy = &__load_and_call_sceOpusCeltDecDestroy;

static __attribute__ ((used)) void
__load_sceOpusCeltDecDestroy(void) {
  sprx_dlsym(__handle, "sceOpusCeltDecDestroy", &__ptr_sceOpusCeltDecDestroy);
}

asm(".intel_syntax noprefix\n"
    ".global sceOpusCeltDecGetSize\n"
    ".type sceOpusCeltDecGetSize @function\n"
    "sceOpusCeltDecGetSize:\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecGetSize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceOpusCeltDecGetSize\n"
    ".type __load_and_call_sceOpusCeltDecGetSize @function\n"
    "__load_and_call_sceOpusCeltDecGetSize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceOpusCeltDecGetSize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecGetSize]\n");

void __load_and_call_sceOpusCeltDecGetSize();
static __attribute__ ((used)) void* __ptr_sceOpusCeltDecGetSize = &__load_and_call_sceOpusCeltDecGetSize;

static __attribute__ ((used)) void
__load_sceOpusCeltDecGetSize(void) {
  sprx_dlsym(__handle, "sceOpusCeltDecGetSize", &__ptr_sceOpusCeltDecGetSize);
}

asm(".intel_syntax noprefix\n"
    ".global sceOpusCeltDecInitialize\n"
    ".type sceOpusCeltDecInitialize @function\n"
    "sceOpusCeltDecInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceOpusCeltDecInitialize\n"
    ".type __load_and_call_sceOpusCeltDecInitialize @function\n"
    "__load_and_call_sceOpusCeltDecInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceOpusCeltDecInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecInitialize]\n");

void __load_and_call_sceOpusCeltDecInitialize();
static __attribute__ ((used)) void* __ptr_sceOpusCeltDecInitialize = &__load_and_call_sceOpusCeltDecInitialize;

static __attribute__ ((used)) void
__load_sceOpusCeltDecInitialize(void) {
  sprx_dlsym(__handle, "sceOpusCeltDecInitialize", &__ptr_sceOpusCeltDecInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceOpusCeltDecTerminate\n"
    ".type sceOpusCeltDecTerminate @function\n"
    "sceOpusCeltDecTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceOpusCeltDecTerminate\n"
    ".type __load_and_call_sceOpusCeltDecTerminate @function\n"
    "__load_and_call_sceOpusCeltDecTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceOpusCeltDecTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceOpusCeltDecTerminate]\n");

void __load_and_call_sceOpusCeltDecTerminate();
static __attribute__ ((used)) void* __ptr_sceOpusCeltDecTerminate = &__load_and_call_sceOpusCeltDecTerminate;

static __attribute__ ((used)) void
__load_sceOpusCeltDecTerminate(void) {
  sprx_dlsym(__handle, "sceOpusCeltDecTerminate", &__ptr_sceOpusCeltDecTerminate);
}