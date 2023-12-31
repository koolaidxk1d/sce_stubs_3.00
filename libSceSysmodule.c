/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceSysmodule", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleGetModuleHandleInternal\n"
    ".type sceSysmoduleGetModuleHandleInternal @function\n"
    "sceSysmoduleGetModuleHandleInternal:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleGetModuleHandleInternal]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleGetModuleHandleInternal\n"
    ".type __load_and_call_sceSysmoduleGetModuleHandleInternal @function\n"
    "__load_and_call_sceSysmoduleGetModuleHandleInternal:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleGetModuleHandleInternal\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleGetModuleHandleInternal]\n");

void __load_and_call_sceSysmoduleGetModuleHandleInternal();
static __attribute__ ((used)) void* __ptr_sceSysmoduleGetModuleHandleInternal = &__load_and_call_sceSysmoduleGetModuleHandleInternal;

static __attribute__ ((used)) void
__load_sceSysmoduleGetModuleHandleInternal(void) {
  sprx_dlsym(__handle, "sceSysmoduleGetModuleHandleInternal", &__ptr_sceSysmoduleGetModuleHandleInternal);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleGetModuleInfoForUnwind\n"
    ".type sceSysmoduleGetModuleInfoForUnwind @function\n"
    "sceSysmoduleGetModuleInfoForUnwind:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleGetModuleInfoForUnwind]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleGetModuleInfoForUnwind\n"
    ".type __load_and_call_sceSysmoduleGetModuleInfoForUnwind @function\n"
    "__load_and_call_sceSysmoduleGetModuleInfoForUnwind:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleGetModuleInfoForUnwind\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleGetModuleInfoForUnwind]\n");

void __load_and_call_sceSysmoduleGetModuleInfoForUnwind();
static __attribute__ ((used)) void* __ptr_sceSysmoduleGetModuleInfoForUnwind = &__load_and_call_sceSysmoduleGetModuleInfoForUnwind;

static __attribute__ ((used)) void
__load_sceSysmoduleGetModuleInfoForUnwind(void) {
  sprx_dlsym(__handle, "sceSysmoduleGetModuleInfoForUnwind", &__ptr_sceSysmoduleGetModuleInfoForUnwind);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleIsCalledFromSysModule\n"
    ".type sceSysmoduleIsCalledFromSysModule @function\n"
    "sceSysmoduleIsCalledFromSysModule:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleIsCalledFromSysModule]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleIsCalledFromSysModule\n"
    ".type __load_and_call_sceSysmoduleIsCalledFromSysModule @function\n"
    "__load_and_call_sceSysmoduleIsCalledFromSysModule:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleIsCalledFromSysModule\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleIsCalledFromSysModule]\n");

void __load_and_call_sceSysmoduleIsCalledFromSysModule();
static __attribute__ ((used)) void* __ptr_sceSysmoduleIsCalledFromSysModule = &__load_and_call_sceSysmoduleIsCalledFromSysModule;

static __attribute__ ((used)) void
__load_sceSysmoduleIsCalledFromSysModule(void) {
  sprx_dlsym(__handle, "sceSysmoduleIsCalledFromSysModule", &__ptr_sceSysmoduleIsCalledFromSysModule);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleIsCameraPreloaded\n"
    ".type sceSysmoduleIsCameraPreloaded @function\n"
    "sceSysmoduleIsCameraPreloaded:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleIsCameraPreloaded]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleIsCameraPreloaded\n"
    ".type __load_and_call_sceSysmoduleIsCameraPreloaded @function\n"
    "__load_and_call_sceSysmoduleIsCameraPreloaded:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleIsCameraPreloaded\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleIsCameraPreloaded]\n");

void __load_and_call_sceSysmoduleIsCameraPreloaded();
static __attribute__ ((used)) void* __ptr_sceSysmoduleIsCameraPreloaded = &__load_and_call_sceSysmoduleIsCameraPreloaded;

static __attribute__ ((used)) void
__load_sceSysmoduleIsCameraPreloaded(void) {
  sprx_dlsym(__handle, "sceSysmoduleIsCameraPreloaded", &__ptr_sceSysmoduleIsCameraPreloaded);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleIsLoaded\n"
    ".type sceSysmoduleIsLoaded @function\n"
    "sceSysmoduleIsLoaded:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleIsLoaded]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleIsLoaded\n"
    ".type __load_and_call_sceSysmoduleIsLoaded @function\n"
    "__load_and_call_sceSysmoduleIsLoaded:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleIsLoaded\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleIsLoaded]\n");

void __load_and_call_sceSysmoduleIsLoaded();
static __attribute__ ((used)) void* __ptr_sceSysmoduleIsLoaded = &__load_and_call_sceSysmoduleIsLoaded;

static __attribute__ ((used)) void
__load_sceSysmoduleIsLoaded(void) {
  sprx_dlsym(__handle, "sceSysmoduleIsLoaded", &__ptr_sceSysmoduleIsLoaded);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleIsLoadedInternal\n"
    ".type sceSysmoduleIsLoadedInternal @function\n"
    "sceSysmoduleIsLoadedInternal:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleIsLoadedInternal]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleIsLoadedInternal\n"
    ".type __load_and_call_sceSysmoduleIsLoadedInternal @function\n"
    "__load_and_call_sceSysmoduleIsLoadedInternal:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleIsLoadedInternal\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleIsLoadedInternal]\n");

void __load_and_call_sceSysmoduleIsLoadedInternal();
static __attribute__ ((used)) void* __ptr_sceSysmoduleIsLoadedInternal = &__load_and_call_sceSysmoduleIsLoadedInternal;

static __attribute__ ((used)) void
__load_sceSysmoduleIsLoadedInternal(void) {
  sprx_dlsym(__handle, "sceSysmoduleIsLoadedInternal", &__ptr_sceSysmoduleIsLoadedInternal);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleLoadModule\n"
    ".type sceSysmoduleLoadModule @function\n"
    "sceSysmoduleLoadModule:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleLoadModule]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleLoadModule\n"
    ".type __load_and_call_sceSysmoduleLoadModule @function\n"
    "__load_and_call_sceSysmoduleLoadModule:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleLoadModule\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleLoadModule]\n");

void __load_and_call_sceSysmoduleLoadModule();
static __attribute__ ((used)) void* __ptr_sceSysmoduleLoadModule = &__load_and_call_sceSysmoduleLoadModule;

static __attribute__ ((used)) void
__load_sceSysmoduleLoadModule(void) {
  sprx_dlsym(__handle, "sceSysmoduleLoadModule", &__ptr_sceSysmoduleLoadModule);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleLoadModuleByNameInternal\n"
    ".type sceSysmoduleLoadModuleByNameInternal @function\n"
    "sceSysmoduleLoadModuleByNameInternal:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleLoadModuleByNameInternal]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleLoadModuleByNameInternal\n"
    ".type __load_and_call_sceSysmoduleLoadModuleByNameInternal @function\n"
    "__load_and_call_sceSysmoduleLoadModuleByNameInternal:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleLoadModuleByNameInternal\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleLoadModuleByNameInternal]\n");

void __load_and_call_sceSysmoduleLoadModuleByNameInternal();
static __attribute__ ((used)) void* __ptr_sceSysmoduleLoadModuleByNameInternal = &__load_and_call_sceSysmoduleLoadModuleByNameInternal;

static __attribute__ ((used)) void
__load_sceSysmoduleLoadModuleByNameInternal(void) {
  sprx_dlsym(__handle, "sceSysmoduleLoadModuleByNameInternal", &__ptr_sceSysmoduleLoadModuleByNameInternal);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleLoadModuleInternal\n"
    ".type sceSysmoduleLoadModuleInternal @function\n"
    "sceSysmoduleLoadModuleInternal:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleLoadModuleInternal]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleLoadModuleInternal\n"
    ".type __load_and_call_sceSysmoduleLoadModuleInternal @function\n"
    "__load_and_call_sceSysmoduleLoadModuleInternal:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleLoadModuleInternal\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleLoadModuleInternal]\n");

void __load_and_call_sceSysmoduleLoadModuleInternal();
static __attribute__ ((used)) void* __ptr_sceSysmoduleLoadModuleInternal = &__load_and_call_sceSysmoduleLoadModuleInternal;

static __attribute__ ((used)) void
__load_sceSysmoduleLoadModuleInternal(void) {
  sprx_dlsym(__handle, "sceSysmoduleLoadModuleInternal", &__ptr_sceSysmoduleLoadModuleInternal);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleLoadModuleInternalWithArg\n"
    ".type sceSysmoduleLoadModuleInternalWithArg @function\n"
    "sceSysmoduleLoadModuleInternalWithArg:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleLoadModuleInternalWithArg]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleLoadModuleInternalWithArg\n"
    ".type __load_and_call_sceSysmoduleLoadModuleInternalWithArg @function\n"
    "__load_and_call_sceSysmoduleLoadModuleInternalWithArg:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleLoadModuleInternalWithArg\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleLoadModuleInternalWithArg]\n");

void __load_and_call_sceSysmoduleLoadModuleInternalWithArg();
static __attribute__ ((used)) void* __ptr_sceSysmoduleLoadModuleInternalWithArg = &__load_and_call_sceSysmoduleLoadModuleInternalWithArg;

static __attribute__ ((used)) void
__load_sceSysmoduleLoadModuleInternalWithArg(void) {
  sprx_dlsym(__handle, "sceSysmoduleLoadModuleInternalWithArg", &__ptr_sceSysmoduleLoadModuleInternalWithArg);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleMapLibcForLibkernel\n"
    ".type sceSysmoduleMapLibcForLibkernel @function\n"
    "sceSysmoduleMapLibcForLibkernel:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleMapLibcForLibkernel]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleMapLibcForLibkernel\n"
    ".type __load_and_call_sceSysmoduleMapLibcForLibkernel @function\n"
    "__load_and_call_sceSysmoduleMapLibcForLibkernel:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleMapLibcForLibkernel\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleMapLibcForLibkernel]\n");

void __load_and_call_sceSysmoduleMapLibcForLibkernel();
static __attribute__ ((used)) void* __ptr_sceSysmoduleMapLibcForLibkernel = &__load_and_call_sceSysmoduleMapLibcForLibkernel;

static __attribute__ ((used)) void
__load_sceSysmoduleMapLibcForLibkernel(void) {
  sprx_dlsym(__handle, "sceSysmoduleMapLibcForLibkernel", &__ptr_sceSysmoduleMapLibcForLibkernel);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmodulePreloadModuleForLibkernel\n"
    ".type sceSysmodulePreloadModuleForLibkernel @function\n"
    "sceSysmodulePreloadModuleForLibkernel:\n"
    "jmp qword ptr [rip + __ptr_sceSysmodulePreloadModuleForLibkernel]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmodulePreloadModuleForLibkernel\n"
    ".type __load_and_call_sceSysmodulePreloadModuleForLibkernel @function\n"
    "__load_and_call_sceSysmodulePreloadModuleForLibkernel:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmodulePreloadModuleForLibkernel\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmodulePreloadModuleForLibkernel]\n");

void __load_and_call_sceSysmodulePreloadModuleForLibkernel();
static __attribute__ ((used)) void* __ptr_sceSysmodulePreloadModuleForLibkernel = &__load_and_call_sceSysmodulePreloadModuleForLibkernel;

static __attribute__ ((used)) void
__load_sceSysmodulePreloadModuleForLibkernel(void) {
  sprx_dlsym(__handle, "sceSysmodulePreloadModuleForLibkernel", &__ptr_sceSysmodulePreloadModuleForLibkernel);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleUnloadModule\n"
    ".type sceSysmoduleUnloadModule @function\n"
    "sceSysmoduleUnloadModule:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleUnloadModule]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleUnloadModule\n"
    ".type __load_and_call_sceSysmoduleUnloadModule @function\n"
    "__load_and_call_sceSysmoduleUnloadModule:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleUnloadModule\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleUnloadModule]\n");

void __load_and_call_sceSysmoduleUnloadModule();
static __attribute__ ((used)) void* __ptr_sceSysmoduleUnloadModule = &__load_and_call_sceSysmoduleUnloadModule;

static __attribute__ ((used)) void
__load_sceSysmoduleUnloadModule(void) {
  sprx_dlsym(__handle, "sceSysmoduleUnloadModule", &__ptr_sceSysmoduleUnloadModule);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleUnloadModuleByNameInternal\n"
    ".type sceSysmoduleUnloadModuleByNameInternal @function\n"
    "sceSysmoduleUnloadModuleByNameInternal:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleUnloadModuleByNameInternal]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleUnloadModuleByNameInternal\n"
    ".type __load_and_call_sceSysmoduleUnloadModuleByNameInternal @function\n"
    "__load_and_call_sceSysmoduleUnloadModuleByNameInternal:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleUnloadModuleByNameInternal\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleUnloadModuleByNameInternal]\n");

void __load_and_call_sceSysmoduleUnloadModuleByNameInternal();
static __attribute__ ((used)) void* __ptr_sceSysmoduleUnloadModuleByNameInternal = &__load_and_call_sceSysmoduleUnloadModuleByNameInternal;

static __attribute__ ((used)) void
__load_sceSysmoduleUnloadModuleByNameInternal(void) {
  sprx_dlsym(__handle, "sceSysmoduleUnloadModuleByNameInternal", &__ptr_sceSysmoduleUnloadModuleByNameInternal);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleUnloadModuleInternal\n"
    ".type sceSysmoduleUnloadModuleInternal @function\n"
    "sceSysmoduleUnloadModuleInternal:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleUnloadModuleInternal]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleUnloadModuleInternal\n"
    ".type __load_and_call_sceSysmoduleUnloadModuleInternal @function\n"
    "__load_and_call_sceSysmoduleUnloadModuleInternal:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleUnloadModuleInternal\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleUnloadModuleInternal]\n");

void __load_and_call_sceSysmoduleUnloadModuleInternal();
static __attribute__ ((used)) void* __ptr_sceSysmoduleUnloadModuleInternal = &__load_and_call_sceSysmoduleUnloadModuleInternal;

static __attribute__ ((used)) void
__load_sceSysmoduleUnloadModuleInternal(void) {
  sprx_dlsym(__handle, "sceSysmoduleUnloadModuleInternal", &__ptr_sceSysmoduleUnloadModuleInternal);
}

asm(".intel_syntax noprefix\n"
    ".global sceSysmoduleUnloadModuleInternalWithArg\n"
    ".type sceSysmoduleUnloadModuleInternalWithArg @function\n"
    "sceSysmoduleUnloadModuleInternalWithArg:\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleUnloadModuleInternalWithArg]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSysmoduleUnloadModuleInternalWithArg\n"
    ".type __load_and_call_sceSysmoduleUnloadModuleInternalWithArg @function\n"
    "__load_and_call_sceSysmoduleUnloadModuleInternalWithArg:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSysmoduleUnloadModuleInternalWithArg\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSysmoduleUnloadModuleInternalWithArg]\n");

void __load_and_call_sceSysmoduleUnloadModuleInternalWithArg();
static __attribute__ ((used)) void* __ptr_sceSysmoduleUnloadModuleInternalWithArg = &__load_and_call_sceSysmoduleUnloadModuleInternalWithArg;

static __attribute__ ((used)) void
__load_sceSysmoduleUnloadModuleInternalWithArg(void) {
  sprx_dlsym(__handle, "sceSysmoduleUnloadModuleInternalWithArg", &__ptr_sceSysmoduleUnloadModuleInternalWithArg);
}
