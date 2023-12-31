/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceShellUIUtil", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceShellUIUtilCreateTaskToken\n"
    ".type sceShellUIUtilCreateTaskToken @function\n"
    "sceShellUIUtilCreateTaskToken:\n"
    "jmp qword ptr [rip + __ptr_sceShellUIUtilCreateTaskToken]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShellUIUtilCreateTaskToken\n"
    ".type __load_and_call_sceShellUIUtilCreateTaskToken @function\n"
    "__load_and_call_sceShellUIUtilCreateTaskToken:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShellUIUtilCreateTaskToken\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShellUIUtilCreateTaskToken]\n");

void __load_and_call_sceShellUIUtilCreateTaskToken();
static __attribute__ ((used)) void* __ptr_sceShellUIUtilCreateTaskToken = &__load_and_call_sceShellUIUtilCreateTaskToken;

static __attribute__ ((used)) void
__load_sceShellUIUtilCreateTaskToken(void) {
  sprx_dlsym(__handle, "sceShellUIUtilCreateTaskToken", &__ptr_sceShellUIUtilCreateTaskToken);
}

asm(".intel_syntax noprefix\n"
    ".global sceShellUIUtilGetAppUrl\n"
    ".type sceShellUIUtilGetAppUrl @function\n"
    "sceShellUIUtilGetAppUrl:\n"
    "jmp qword ptr [rip + __ptr_sceShellUIUtilGetAppUrl]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShellUIUtilGetAppUrl\n"
    ".type __load_and_call_sceShellUIUtilGetAppUrl @function\n"
    "__load_and_call_sceShellUIUtilGetAppUrl:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShellUIUtilGetAppUrl\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShellUIUtilGetAppUrl]\n");

void __load_and_call_sceShellUIUtilGetAppUrl();
static __attribute__ ((used)) void* __ptr_sceShellUIUtilGetAppUrl = &__load_and_call_sceShellUIUtilGetAppUrl;

static __attribute__ ((used)) void
__load_sceShellUIUtilGetAppUrl(void) {
  sprx_dlsym(__handle, "sceShellUIUtilGetAppUrl", &__ptr_sceShellUIUtilGetAppUrl);
}

asm(".intel_syntax noprefix\n"
    ".global sceShellUIUtilInitialize\n"
    ".type sceShellUIUtilInitialize @function\n"
    "sceShellUIUtilInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceShellUIUtilInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShellUIUtilInitialize\n"
    ".type __load_and_call_sceShellUIUtilInitialize @function\n"
    "__load_and_call_sceShellUIUtilInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShellUIUtilInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShellUIUtilInitialize]\n");

void __load_and_call_sceShellUIUtilInitialize();
static __attribute__ ((used)) void* __ptr_sceShellUIUtilInitialize = &__load_and_call_sceShellUIUtilInitialize;

static __attribute__ ((used)) void
__load_sceShellUIUtilInitialize(void) {
  sprx_dlsym(__handle, "sceShellUIUtilInitialize", &__ptr_sceShellUIUtilInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceShellUIUtilLaunchByUri\n"
    ".type sceShellUIUtilLaunchByUri @function\n"
    "sceShellUIUtilLaunchByUri:\n"
    "jmp qword ptr [rip + __ptr_sceShellUIUtilLaunchByUri]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShellUIUtilLaunchByUri\n"
    ".type __load_and_call_sceShellUIUtilLaunchByUri @function\n"
    "__load_and_call_sceShellUIUtilLaunchByUri:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShellUIUtilLaunchByUri\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShellUIUtilLaunchByUri]\n");

void __load_and_call_sceShellUIUtilLaunchByUri();
static __attribute__ ((used)) void* __ptr_sceShellUIUtilLaunchByUri = &__load_and_call_sceShellUIUtilLaunchByUri;

static __attribute__ ((used)) void
__load_sceShellUIUtilLaunchByUri(void) {
  sprx_dlsym(__handle, "sceShellUIUtilLaunchByUri", &__ptr_sceShellUIUtilLaunchByUri);
}

asm(".intel_syntax noprefix\n"
    ".global sceShellUIUtilLaunchTask\n"
    ".type sceShellUIUtilLaunchTask @function\n"
    "sceShellUIUtilLaunchTask:\n"
    "jmp qword ptr [rip + __ptr_sceShellUIUtilLaunchTask]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShellUIUtilLaunchTask\n"
    ".type __load_and_call_sceShellUIUtilLaunchTask @function\n"
    "__load_and_call_sceShellUIUtilLaunchTask:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShellUIUtilLaunchTask\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShellUIUtilLaunchTask]\n");

void __load_and_call_sceShellUIUtilLaunchTask();
static __attribute__ ((used)) void* __ptr_sceShellUIUtilLaunchTask = &__load_and_call_sceShellUIUtilLaunchTask;

static __attribute__ ((used)) void
__load_sceShellUIUtilLaunchTask(void) {
  sprx_dlsym(__handle, "sceShellUIUtilLaunchTask", &__ptr_sceShellUIUtilLaunchTask);
}

asm(".intel_syntax noprefix\n"
    ".global sceShellUIUtilTerminate\n"
    ".type sceShellUIUtilTerminate @function\n"
    "sceShellUIUtilTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceShellUIUtilTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShellUIUtilTerminate\n"
    ".type __load_and_call_sceShellUIUtilTerminate @function\n"
    "__load_and_call_sceShellUIUtilTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShellUIUtilTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShellUIUtilTerminate]\n");

void __load_and_call_sceShellUIUtilTerminate();
static __attribute__ ((used)) void* __ptr_sceShellUIUtilTerminate = &__load_and_call_sceShellUIUtilTerminate;

static __attribute__ ((used)) void
__load_sceShellUIUtilTerminate(void) {
  sprx_dlsym(__handle, "sceShellUIUtilTerminate", &__ptr_sceShellUIUtilTerminate);
}
