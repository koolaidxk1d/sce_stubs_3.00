/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceSdma", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global _sceSdmaNop\n"
    ".type _sceSdmaNop @function\n"
    "_sceSdmaNop:\n"
    "jmp qword ptr [rip + __ptr__sceSdmaNop]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__sceSdmaNop\n"
    ".type __load_and_call__sceSdmaNop @function\n"
    "__load_and_call__sceSdmaNop:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__sceSdmaNop\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__sceSdmaNop]\n");

void __load_and_call__sceSdmaNop();
static __attribute__ ((used)) void* __ptr__sceSdmaNop = &__load_and_call__sceSdmaNop;

static __attribute__ ((used)) void
__load__sceSdmaNop(void) {
  sprx_dlsym(__handle, "_sceSdmaNop", &__ptr__sceSdmaNop);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaBeginQueueMode\n"
    ".type sceSdmaBeginQueueMode @function\n"
    "sceSdmaBeginQueueMode:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaBeginQueueMode]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaBeginQueueMode\n"
    ".type __load_and_call_sceSdmaBeginQueueMode @function\n"
    "__load_and_call_sceSdmaBeginQueueMode:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaBeginQueueMode\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaBeginQueueMode]\n");

void __load_and_call_sceSdmaBeginQueueMode();
static __attribute__ ((used)) void* __ptr_sceSdmaBeginQueueMode = &__load_and_call_sceSdmaBeginQueueMode;

static __attribute__ ((used)) void
__load_sceSdmaBeginQueueMode(void) {
  sprx_dlsym(__handle, "sceSdmaBeginQueueMode", &__ptr_sceSdmaBeginQueueMode);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaCancelQueue\n"
    ".type sceSdmaCancelQueue @function\n"
    "sceSdmaCancelQueue:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCancelQueue]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaCancelQueue\n"
    ".type __load_and_call_sceSdmaCancelQueue @function\n"
    "__load_and_call_sceSdmaCancelQueue:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaCancelQueue\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCancelQueue]\n");

void __load_and_call_sceSdmaCancelQueue();
static __attribute__ ((used)) void* __ptr_sceSdmaCancelQueue = &__load_and_call_sceSdmaCancelQueue;

static __attribute__ ((used)) void
__load_sceSdmaCancelQueue(void) {
  sprx_dlsym(__handle, "sceSdmaCancelQueue", &__ptr_sceSdmaCancelQueue);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaClose\n"
    ".type sceSdmaClose @function\n"
    "sceSdmaClose:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaClose]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaClose\n"
    ".type __load_and_call_sceSdmaClose @function\n"
    "__load_and_call_sceSdmaClose:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaClose\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaClose]\n");

void __load_and_call_sceSdmaClose();
static __attribute__ ((used)) void* __ptr_sceSdmaClose = &__load_and_call_sceSdmaClose;

static __attribute__ ((used)) void
__load_sceSdmaClose(void) {
  sprx_dlsym(__handle, "sceSdmaClose", &__ptr_sceSdmaClose);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaConstantFill\n"
    ".type sceSdmaConstantFill @function\n"
    "sceSdmaConstantFill:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaConstantFill]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaConstantFill\n"
    ".type __load_and_call_sceSdmaConstantFill @function\n"
    "__load_and_call_sceSdmaConstantFill:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaConstantFill\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaConstantFill]\n");

void __load_and_call_sceSdmaConstantFill();
static __attribute__ ((used)) void* __ptr_sceSdmaConstantFill = &__load_and_call_sceSdmaConstantFill;

static __attribute__ ((used)) void
__load_sceSdmaConstantFill(void) {
  sprx_dlsym(__handle, "sceSdmaConstantFill", &__ptr_sceSdmaConstantFill);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaConstantFillNonBlocking\n"
    ".type sceSdmaConstantFillNonBlocking @function\n"
    "sceSdmaConstantFillNonBlocking:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaConstantFillNonBlocking]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaConstantFillNonBlocking\n"
    ".type __load_and_call_sceSdmaConstantFillNonBlocking @function\n"
    "__load_and_call_sceSdmaConstantFillNonBlocking:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaConstantFillNonBlocking\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaConstantFillNonBlocking]\n");

void __load_and_call_sceSdmaConstantFillNonBlocking();
static __attribute__ ((used)) void* __ptr_sceSdmaConstantFillNonBlocking = &__load_and_call_sceSdmaConstantFillNonBlocking;

static __attribute__ ((used)) void
__load_sceSdmaConstantFillNonBlocking(void) {
  sprx_dlsym(__handle, "sceSdmaConstantFillNonBlocking", &__ptr_sceSdmaConstantFillNonBlocking);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaCopyLinear\n"
    ".type sceSdmaCopyLinear @function\n"
    "sceSdmaCopyLinear:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyLinear]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaCopyLinear\n"
    ".type __load_and_call_sceSdmaCopyLinear @function\n"
    "__load_and_call_sceSdmaCopyLinear:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaCopyLinear\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyLinear]\n");

void __load_and_call_sceSdmaCopyLinear();
static __attribute__ ((used)) void* __ptr_sceSdmaCopyLinear = &__load_and_call_sceSdmaCopyLinear;

static __attribute__ ((used)) void
__load_sceSdmaCopyLinear(void) {
  sprx_dlsym(__handle, "sceSdmaCopyLinear", &__ptr_sceSdmaCopyLinear);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaCopyLinearNonBlocking\n"
    ".type sceSdmaCopyLinearNonBlocking @function\n"
    "sceSdmaCopyLinearNonBlocking:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyLinearNonBlocking]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaCopyLinearNonBlocking\n"
    ".type __load_and_call_sceSdmaCopyLinearNonBlocking @function\n"
    "__load_and_call_sceSdmaCopyLinearNonBlocking:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaCopyLinearNonBlocking\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyLinearNonBlocking]\n");

void __load_and_call_sceSdmaCopyLinearNonBlocking();
static __attribute__ ((used)) void* __ptr_sceSdmaCopyLinearNonBlocking = &__load_and_call_sceSdmaCopyLinearNonBlocking;

static __attribute__ ((used)) void
__load_sceSdmaCopyLinearNonBlocking(void) {
  sprx_dlsym(__handle, "sceSdmaCopyLinearNonBlocking", &__ptr_sceSdmaCopyLinearNonBlocking);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaCopyTiled\n"
    ".type sceSdmaCopyTiled @function\n"
    "sceSdmaCopyTiled:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyTiled]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaCopyTiled\n"
    ".type __load_and_call_sceSdmaCopyTiled @function\n"
    "__load_and_call_sceSdmaCopyTiled:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaCopyTiled\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyTiled]\n");

void __load_and_call_sceSdmaCopyTiled();
static __attribute__ ((used)) void* __ptr_sceSdmaCopyTiled = &__load_and_call_sceSdmaCopyTiled;

static __attribute__ ((used)) void
__load_sceSdmaCopyTiled(void) {
  sprx_dlsym(__handle, "sceSdmaCopyTiled", &__ptr_sceSdmaCopyTiled);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaCopyTiledNonBlocking\n"
    ".type sceSdmaCopyTiledNonBlocking @function\n"
    "sceSdmaCopyTiledNonBlocking:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyTiledNonBlocking]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaCopyTiledNonBlocking\n"
    ".type __load_and_call_sceSdmaCopyTiledNonBlocking @function\n"
    "__load_and_call_sceSdmaCopyTiledNonBlocking:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaCopyTiledNonBlocking\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyTiledNonBlocking]\n");

void __load_and_call_sceSdmaCopyTiledNonBlocking();
static __attribute__ ((used)) void* __ptr_sceSdmaCopyTiledNonBlocking = &__load_and_call_sceSdmaCopyTiledNonBlocking;

static __attribute__ ((used)) void
__load_sceSdmaCopyTiledNonBlocking(void) {
  sprx_dlsym(__handle, "sceSdmaCopyTiledNonBlocking", &__ptr_sceSdmaCopyTiledNonBlocking);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaCopyWindowL2L\n"
    ".type sceSdmaCopyWindowL2L @function\n"
    "sceSdmaCopyWindowL2L:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyWindowL2L]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaCopyWindowL2L\n"
    ".type __load_and_call_sceSdmaCopyWindowL2L @function\n"
    "__load_and_call_sceSdmaCopyWindowL2L:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaCopyWindowL2L\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyWindowL2L]\n");

void __load_and_call_sceSdmaCopyWindowL2L();
static __attribute__ ((used)) void* __ptr_sceSdmaCopyWindowL2L = &__load_and_call_sceSdmaCopyWindowL2L;

static __attribute__ ((used)) void
__load_sceSdmaCopyWindowL2L(void) {
  sprx_dlsym(__handle, "sceSdmaCopyWindowL2L", &__ptr_sceSdmaCopyWindowL2L);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaCopyWindowL2LNonBlocking\n"
    ".type sceSdmaCopyWindowL2LNonBlocking @function\n"
    "sceSdmaCopyWindowL2LNonBlocking:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyWindowL2LNonBlocking]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaCopyWindowL2LNonBlocking\n"
    ".type __load_and_call_sceSdmaCopyWindowL2LNonBlocking @function\n"
    "__load_and_call_sceSdmaCopyWindowL2LNonBlocking:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaCopyWindowL2LNonBlocking\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyWindowL2LNonBlocking]\n");

void __load_and_call_sceSdmaCopyWindowL2LNonBlocking();
static __attribute__ ((used)) void* __ptr_sceSdmaCopyWindowL2LNonBlocking = &__load_and_call_sceSdmaCopyWindowL2LNonBlocking;

static __attribute__ ((used)) void
__load_sceSdmaCopyWindowL2LNonBlocking(void) {
  sprx_dlsym(__handle, "sceSdmaCopyWindowL2LNonBlocking", &__ptr_sceSdmaCopyWindowL2LNonBlocking);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaCopyWindowT2T\n"
    ".type sceSdmaCopyWindowT2T @function\n"
    "sceSdmaCopyWindowT2T:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyWindowT2T]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaCopyWindowT2T\n"
    ".type __load_and_call_sceSdmaCopyWindowT2T @function\n"
    "__load_and_call_sceSdmaCopyWindowT2T:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaCopyWindowT2T\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyWindowT2T]\n");

void __load_and_call_sceSdmaCopyWindowT2T();
static __attribute__ ((used)) void* __ptr_sceSdmaCopyWindowT2T = &__load_and_call_sceSdmaCopyWindowT2T;

static __attribute__ ((used)) void
__load_sceSdmaCopyWindowT2T(void) {
  sprx_dlsym(__handle, "sceSdmaCopyWindowT2T", &__ptr_sceSdmaCopyWindowT2T);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaCopyWindowT2TNonBlocking\n"
    ".type sceSdmaCopyWindowT2TNonBlocking @function\n"
    "sceSdmaCopyWindowT2TNonBlocking:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyWindowT2TNonBlocking]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaCopyWindowT2TNonBlocking\n"
    ".type __load_and_call_sceSdmaCopyWindowT2TNonBlocking @function\n"
    "__load_and_call_sceSdmaCopyWindowT2TNonBlocking:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaCopyWindowT2TNonBlocking\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyWindowT2TNonBlocking]\n");

void __load_and_call_sceSdmaCopyWindowT2TNonBlocking();
static __attribute__ ((used)) void* __ptr_sceSdmaCopyWindowT2TNonBlocking = &__load_and_call_sceSdmaCopyWindowT2TNonBlocking;

static __attribute__ ((used)) void
__load_sceSdmaCopyWindowT2TNonBlocking(void) {
  sprx_dlsym(__handle, "sceSdmaCopyWindowT2TNonBlocking", &__ptr_sceSdmaCopyWindowT2TNonBlocking);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaCopyWindowTiled\n"
    ".type sceSdmaCopyWindowTiled @function\n"
    "sceSdmaCopyWindowTiled:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyWindowTiled]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaCopyWindowTiled\n"
    ".type __load_and_call_sceSdmaCopyWindowTiled @function\n"
    "__load_and_call_sceSdmaCopyWindowTiled:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaCopyWindowTiled\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyWindowTiled]\n");

void __load_and_call_sceSdmaCopyWindowTiled();
static __attribute__ ((used)) void* __ptr_sceSdmaCopyWindowTiled = &__load_and_call_sceSdmaCopyWindowTiled;

static __attribute__ ((used)) void
__load_sceSdmaCopyWindowTiled(void) {
  sprx_dlsym(__handle, "sceSdmaCopyWindowTiled", &__ptr_sceSdmaCopyWindowTiled);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaCopyWindowTiledNonBlocking\n"
    ".type sceSdmaCopyWindowTiledNonBlocking @function\n"
    "sceSdmaCopyWindowTiledNonBlocking:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyWindowTiledNonBlocking]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaCopyWindowTiledNonBlocking\n"
    ".type __load_and_call_sceSdmaCopyWindowTiledNonBlocking @function\n"
    "__load_and_call_sceSdmaCopyWindowTiledNonBlocking:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaCopyWindowTiledNonBlocking\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaCopyWindowTiledNonBlocking]\n");

void __load_and_call_sceSdmaCopyWindowTiledNonBlocking();
static __attribute__ ((used)) void* __ptr_sceSdmaCopyWindowTiledNonBlocking = &__load_and_call_sceSdmaCopyWindowTiledNonBlocking;

static __attribute__ ((used)) void
__load_sceSdmaCopyWindowTiledNonBlocking(void) {
  sprx_dlsym(__handle, "sceSdmaCopyWindowTiledNonBlocking", &__ptr_sceSdmaCopyWindowTiledNonBlocking);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaEndQueueMode\n"
    ".type sceSdmaEndQueueMode @function\n"
    "sceSdmaEndQueueMode:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaEndQueueMode]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaEndQueueMode\n"
    ".type __load_and_call_sceSdmaEndQueueMode @function\n"
    "__load_and_call_sceSdmaEndQueueMode:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaEndQueueMode\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaEndQueueMode]\n");

void __load_and_call_sceSdmaEndQueueMode();
static __attribute__ ((used)) void* __ptr_sceSdmaEndQueueMode = &__load_and_call_sceSdmaEndQueueMode;

static __attribute__ ((used)) void
__load_sceSdmaEndQueueMode(void) {
  sprx_dlsym(__handle, "sceSdmaEndQueueMode", &__ptr_sceSdmaEndQueueMode);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaFenceNonBlocking\n"
    ".type sceSdmaFenceNonBlocking @function\n"
    "sceSdmaFenceNonBlocking:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaFenceNonBlocking]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaFenceNonBlocking\n"
    ".type __load_and_call_sceSdmaFenceNonBlocking @function\n"
    "__load_and_call_sceSdmaFenceNonBlocking:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaFenceNonBlocking\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaFenceNonBlocking]\n");

void __load_and_call_sceSdmaFenceNonBlocking();
static __attribute__ ((used)) void* __ptr_sceSdmaFenceNonBlocking = &__load_and_call_sceSdmaFenceNonBlocking;

static __attribute__ ((used)) void
__load_sceSdmaFenceNonBlocking(void) {
  sprx_dlsym(__handle, "sceSdmaFenceNonBlocking", &__ptr_sceSdmaFenceNonBlocking);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaFinalize\n"
    ".type sceSdmaFinalize @function\n"
    "sceSdmaFinalize:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaFinalize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaFinalize\n"
    ".type __load_and_call_sceSdmaFinalize @function\n"
    "__load_and_call_sceSdmaFinalize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaFinalize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaFinalize]\n");

void __load_and_call_sceSdmaFinalize();
static __attribute__ ((used)) void* __ptr_sceSdmaFinalize = &__load_and_call_sceSdmaFinalize;

static __attribute__ ((used)) void
__load_sceSdmaFinalize(void) {
  sprx_dlsym(__handle, "sceSdmaFinalize", &__ptr_sceSdmaFinalize);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaFlushAll\n"
    ".type sceSdmaFlushAll @function\n"
    "sceSdmaFlushAll:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaFlushAll]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaFlushAll\n"
    ".type __load_and_call_sceSdmaFlushAll @function\n"
    "__load_and_call_sceSdmaFlushAll:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaFlushAll\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaFlushAll]\n");

void __load_and_call_sceSdmaFlushAll();
static __attribute__ ((used)) void* __ptr_sceSdmaFlushAll = &__load_and_call_sceSdmaFlushAll;

static __attribute__ ((used)) void
__load_sceSdmaFlushAll(void) {
  sprx_dlsym(__handle, "sceSdmaFlushAll", &__ptr_sceSdmaFlushAll);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaFlushAllWithEvent\n"
    ".type sceSdmaFlushAllWithEvent @function\n"
    "sceSdmaFlushAllWithEvent:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaFlushAllWithEvent]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaFlushAllWithEvent\n"
    ".type __load_and_call_sceSdmaFlushAllWithEvent @function\n"
    "__load_and_call_sceSdmaFlushAllWithEvent:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaFlushAllWithEvent\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaFlushAllWithEvent]\n");

void __load_and_call_sceSdmaFlushAllWithEvent();
static __attribute__ ((used)) void* __ptr_sceSdmaFlushAllWithEvent = &__load_and_call_sceSdmaFlushAllWithEvent;

static __attribute__ ((used)) void
__load_sceSdmaFlushAllWithEvent(void) {
  sprx_dlsym(__handle, "sceSdmaFlushAllWithEvent", &__ptr_sceSdmaFlushAllWithEvent);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaInitialize\n"
    ".type sceSdmaInitialize @function\n"
    "sceSdmaInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaInitialize\n"
    ".type __load_and_call_sceSdmaInitialize @function\n"
    "__load_and_call_sceSdmaInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaInitialize]\n");

void __load_and_call_sceSdmaInitialize();
static __attribute__ ((used)) void* __ptr_sceSdmaInitialize = &__load_and_call_sceSdmaInitialize;

static __attribute__ ((used)) void
__load_sceSdmaInitialize(void) {
  sprx_dlsym(__handle, "sceSdmaInitialize", &__ptr_sceSdmaInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaKickQueue\n"
    ".type sceSdmaKickQueue @function\n"
    "sceSdmaKickQueue:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaKickQueue]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaKickQueue\n"
    ".type __load_and_call_sceSdmaKickQueue @function\n"
    "__load_and_call_sceSdmaKickQueue:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaKickQueue\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaKickQueue]\n");

void __load_and_call_sceSdmaKickQueue();
static __attribute__ ((used)) void* __ptr_sceSdmaKickQueue = &__load_and_call_sceSdmaKickQueue;

static __attribute__ ((used)) void
__load_sceSdmaKickQueue(void) {
  sprx_dlsym(__handle, "sceSdmaKickQueue", &__ptr_sceSdmaKickQueue);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaOpen\n"
    ".type sceSdmaOpen @function\n"
    "sceSdmaOpen:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaOpen]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaOpen\n"
    ".type __load_and_call_sceSdmaOpen @function\n"
    "__load_and_call_sceSdmaOpen:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaOpen\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaOpen]\n");

void __load_and_call_sceSdmaOpen();
static __attribute__ ((used)) void* __ptr_sceSdmaOpen = &__load_and_call_sceSdmaOpen;

static __attribute__ ((used)) void
__load_sceSdmaOpen(void) {
  sprx_dlsym(__handle, "sceSdmaOpen", &__ptr_sceSdmaOpen);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaQueryWorkingBufferSize\n"
    ".type sceSdmaQueryWorkingBufferSize @function\n"
    "sceSdmaQueryWorkingBufferSize:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaQueryWorkingBufferSize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaQueryWorkingBufferSize\n"
    ".type __load_and_call_sceSdmaQueryWorkingBufferSize @function\n"
    "__load_and_call_sceSdmaQueryWorkingBufferSize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaQueryWorkingBufferSize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaQueryWorkingBufferSize]\n");

void __load_and_call_sceSdmaQueryWorkingBufferSize();
static __attribute__ ((used)) void* __ptr_sceSdmaQueryWorkingBufferSize = &__load_and_call_sceSdmaQueryWorkingBufferSize;

static __attribute__ ((used)) void
__load_sceSdmaQueryWorkingBufferSize(void) {
  sprx_dlsym(__handle, "sceSdmaQueryWorkingBufferSize", &__ptr_sceSdmaQueryWorkingBufferSize);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaTryFlush\n"
    ".type sceSdmaTryFlush @function\n"
    "sceSdmaTryFlush:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaTryFlush]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaTryFlush\n"
    ".type __load_and_call_sceSdmaTryFlush @function\n"
    "__load_and_call_sceSdmaTryFlush:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaTryFlush\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaTryFlush]\n");

void __load_and_call_sceSdmaTryFlush();
static __attribute__ ((used)) void* __ptr_sceSdmaTryFlush = &__load_and_call_sceSdmaTryFlush;

static __attribute__ ((used)) void
__load_sceSdmaTryFlush(void) {
  sprx_dlsym(__handle, "sceSdmaTryFlush", &__ptr_sceSdmaTryFlush);
}

asm(".intel_syntax noprefix\n"
    ".global sceSdmaWaitForEvent\n"
    ".type sceSdmaWaitForEvent @function\n"
    "sceSdmaWaitForEvent:\n"
    "jmp qword ptr [rip + __ptr_sceSdmaWaitForEvent]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSdmaWaitForEvent\n"
    ".type __load_and_call_sceSdmaWaitForEvent @function\n"
    "__load_and_call_sceSdmaWaitForEvent:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSdmaWaitForEvent\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSdmaWaitForEvent]\n");

void __load_and_call_sceSdmaWaitForEvent();
static __attribute__ ((used)) void* __ptr_sceSdmaWaitForEvent = &__load_and_call_sceSdmaWaitForEvent;

static __attribute__ ((used)) void
__load_sceSdmaWaitForEvent(void) {
  sprx_dlsym(__handle, "sceSdmaWaitForEvent", &__ptr_sceSdmaWaitForEvent);
}
