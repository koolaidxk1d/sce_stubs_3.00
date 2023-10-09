/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libScePsmUtil", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global scePsmUtilFinalize\n"
    ".type scePsmUtilFinalize @function\n"
    "scePsmUtilFinalize:\n"
    "jmp qword ptr [rip + __ptr_scePsmUtilFinalize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePsmUtilFinalize\n"
    ".type __load_and_call_scePsmUtilFinalize @function\n"
    "__load_and_call_scePsmUtilFinalize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePsmUtilFinalize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePsmUtilFinalize]\n");

void __load_and_call_scePsmUtilFinalize();
static __attribute__ ((used)) void* __ptr_scePsmUtilFinalize = &__load_and_call_scePsmUtilFinalize;

static __attribute__ ((used)) void
__load_scePsmUtilFinalize(void) {
  sprx_dlsym(__handle, "scePsmUtilFinalize", &__ptr_scePsmUtilFinalize);
}

asm(".intel_syntax noprefix\n"
    ".global scePsmUtilGetPsmIniFile\n"
    ".type scePsmUtilGetPsmIniFile @function\n"
    "scePsmUtilGetPsmIniFile:\n"
    "jmp qword ptr [rip + __ptr_scePsmUtilGetPsmIniFile]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePsmUtilGetPsmIniFile\n"
    ".type __load_and_call_scePsmUtilGetPsmIniFile @function\n"
    "__load_and_call_scePsmUtilGetPsmIniFile:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePsmUtilGetPsmIniFile\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePsmUtilGetPsmIniFile]\n");

void __load_and_call_scePsmUtilGetPsmIniFile();
static __attribute__ ((used)) void* __ptr_scePsmUtilGetPsmIniFile = &__load_and_call_scePsmUtilGetPsmIniFile;

static __attribute__ ((used)) void
__load_scePsmUtilGetPsmIniFile(void) {
  sprx_dlsym(__handle, "scePsmUtilGetPsmIniFile", &__ptr_scePsmUtilGetPsmIniFile);
}

asm(".intel_syntax noprefix\n"
    ".global scePsmUtilInitialize\n"
    ".type scePsmUtilInitialize @function\n"
    "scePsmUtilInitialize:\n"
    "jmp qword ptr [rip + __ptr_scePsmUtilInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePsmUtilInitialize\n"
    ".type __load_and_call_scePsmUtilInitialize @function\n"
    "__load_and_call_scePsmUtilInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePsmUtilInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePsmUtilInitialize]\n");

void __load_and_call_scePsmUtilInitialize();
static __attribute__ ((used)) void* __ptr_scePsmUtilInitialize = &__load_and_call_scePsmUtilInitialize;

static __attribute__ ((used)) void
__load_scePsmUtilInitialize(void) {
  sprx_dlsym(__handle, "scePsmUtilInitialize", &__ptr_scePsmUtilInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global scePsmUtilRegisterCallbacks\n"
    ".type scePsmUtilRegisterCallbacks @function\n"
    "scePsmUtilRegisterCallbacks:\n"
    "jmp qword ptr [rip + __ptr_scePsmUtilRegisterCallbacks]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_scePsmUtilRegisterCallbacks\n"
    ".type __load_and_call_scePsmUtilRegisterCallbacks @function\n"
    "__load_and_call_scePsmUtilRegisterCallbacks:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_scePsmUtilRegisterCallbacks\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_scePsmUtilRegisterCallbacks]\n");

void __load_and_call_scePsmUtilRegisterCallbacks();
static __attribute__ ((used)) void* __ptr_scePsmUtilRegisterCallbacks = &__load_and_call_scePsmUtilRegisterCallbacks;

static __attribute__ ((used)) void
__load_scePsmUtilRegisterCallbacks(void) {
  sprx_dlsym(__handle, "scePsmUtilRegisterCallbacks", &__ptr_scePsmUtilRegisterCallbacks);
}
