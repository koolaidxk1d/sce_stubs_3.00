/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceCompanionHttpd", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdAddHeader\n"
    ".type sceCompanionHttpdAddHeader @function\n"
    "sceCompanionHttpdAddHeader:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdAddHeader]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdAddHeader\n"
    ".type __load_and_call_sceCompanionHttpdAddHeader @function\n"
    "__load_and_call_sceCompanionHttpdAddHeader:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdAddHeader\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdAddHeader]\n");

void __load_and_call_sceCompanionHttpdAddHeader();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdAddHeader = &__load_and_call_sceCompanionHttpdAddHeader;

static __attribute__ ((used)) void
__load_sceCompanionHttpdAddHeader(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdAddHeader", &__ptr_sceCompanionHttpdAddHeader);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdGet2ndScreenStatus\n"
    ".type sceCompanionHttpdGet2ndScreenStatus @function\n"
    "sceCompanionHttpdGet2ndScreenStatus:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdGet2ndScreenStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdGet2ndScreenStatus\n"
    ".type __load_and_call_sceCompanionHttpdGet2ndScreenStatus @function\n"
    "__load_and_call_sceCompanionHttpdGet2ndScreenStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdGet2ndScreenStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdGet2ndScreenStatus]\n");

void __load_and_call_sceCompanionHttpdGet2ndScreenStatus();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdGet2ndScreenStatus = &__load_and_call_sceCompanionHttpdGet2ndScreenStatus;

static __attribute__ ((used)) void
__load_sceCompanionHttpdGet2ndScreenStatus(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdGet2ndScreenStatus", &__ptr_sceCompanionHttpdGet2ndScreenStatus);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdGetEvent\n"
    ".type sceCompanionHttpdGetEvent @function\n"
    "sceCompanionHttpdGetEvent:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdGetEvent]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdGetEvent\n"
    ".type __load_and_call_sceCompanionHttpdGetEvent @function\n"
    "__load_and_call_sceCompanionHttpdGetEvent:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdGetEvent\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdGetEvent]\n");

void __load_and_call_sceCompanionHttpdGetEvent();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdGetEvent = &__load_and_call_sceCompanionHttpdGetEvent;

static __attribute__ ((used)) void
__load_sceCompanionHttpdGetEvent(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdGetEvent", &__ptr_sceCompanionHttpdGetEvent);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdGetUserId\n"
    ".type sceCompanionHttpdGetUserId @function\n"
    "sceCompanionHttpdGetUserId:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdGetUserId]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdGetUserId\n"
    ".type __load_and_call_sceCompanionHttpdGetUserId @function\n"
    "__load_and_call_sceCompanionHttpdGetUserId:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdGetUserId\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdGetUserId]\n");

void __load_and_call_sceCompanionHttpdGetUserId();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdGetUserId = &__load_and_call_sceCompanionHttpdGetUserId;

static __attribute__ ((used)) void
__load_sceCompanionHttpdGetUserId(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdGetUserId", &__ptr_sceCompanionHttpdGetUserId);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdInitialize\n"
    ".type sceCompanionHttpdInitialize @function\n"
    "sceCompanionHttpdInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdInitialize\n"
    ".type __load_and_call_sceCompanionHttpdInitialize @function\n"
    "__load_and_call_sceCompanionHttpdInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdInitialize]\n");

void __load_and_call_sceCompanionHttpdInitialize();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdInitialize = &__load_and_call_sceCompanionHttpdInitialize;

static __attribute__ ((used)) void
__load_sceCompanionHttpdInitialize(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdInitialize", &__ptr_sceCompanionHttpdInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdInitialize2\n"
    ".type sceCompanionHttpdInitialize2 @function\n"
    "sceCompanionHttpdInitialize2:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdInitialize2]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdInitialize2\n"
    ".type __load_and_call_sceCompanionHttpdInitialize2 @function\n"
    "__load_and_call_sceCompanionHttpdInitialize2:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdInitialize2\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdInitialize2]\n");

void __load_and_call_sceCompanionHttpdInitialize2();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdInitialize2 = &__load_and_call_sceCompanionHttpdInitialize2;

static __attribute__ ((used)) void
__load_sceCompanionHttpdInitialize2(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdInitialize2", &__ptr_sceCompanionHttpdInitialize2);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdOptParamInitialize\n"
    ".type sceCompanionHttpdOptParamInitialize @function\n"
    "sceCompanionHttpdOptParamInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdOptParamInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdOptParamInitialize\n"
    ".type __load_and_call_sceCompanionHttpdOptParamInitialize @function\n"
    "__load_and_call_sceCompanionHttpdOptParamInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdOptParamInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdOptParamInitialize]\n");

void __load_and_call_sceCompanionHttpdOptParamInitialize();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdOptParamInitialize = &__load_and_call_sceCompanionHttpdOptParamInitialize;

static __attribute__ ((used)) void
__load_sceCompanionHttpdOptParamInitialize(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdOptParamInitialize", &__ptr_sceCompanionHttpdOptParamInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdRegisterRequestBodyReceptionCallback\n"
    ".type sceCompanionHttpdRegisterRequestBodyReceptionCallback @function\n"
    "sceCompanionHttpdRegisterRequestBodyReceptionCallback:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdRegisterRequestBodyReceptionCallback]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdRegisterRequestBodyReceptionCallback\n"
    ".type __load_and_call_sceCompanionHttpdRegisterRequestBodyReceptionCallback @function\n"
    "__load_and_call_sceCompanionHttpdRegisterRequestBodyReceptionCallback:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdRegisterRequestBodyReceptionCallback\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdRegisterRequestBodyReceptionCallback]\n");

void __load_and_call_sceCompanionHttpdRegisterRequestBodyReceptionCallback();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdRegisterRequestBodyReceptionCallback = &__load_and_call_sceCompanionHttpdRegisterRequestBodyReceptionCallback;

static __attribute__ ((used)) void
__load_sceCompanionHttpdRegisterRequestBodyReceptionCallback(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdRegisterRequestBodyReceptionCallback", &__ptr_sceCompanionHttpdRegisterRequestBodyReceptionCallback);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdRegisterRequestCallback\n"
    ".type sceCompanionHttpdRegisterRequestCallback @function\n"
    "sceCompanionHttpdRegisterRequestCallback:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdRegisterRequestCallback]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdRegisterRequestCallback\n"
    ".type __load_and_call_sceCompanionHttpdRegisterRequestCallback @function\n"
    "__load_and_call_sceCompanionHttpdRegisterRequestCallback:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdRegisterRequestCallback\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdRegisterRequestCallback]\n");

void __load_and_call_sceCompanionHttpdRegisterRequestCallback();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdRegisterRequestCallback = &__load_and_call_sceCompanionHttpdRegisterRequestCallback;

static __attribute__ ((used)) void
__load_sceCompanionHttpdRegisterRequestCallback(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdRegisterRequestCallback", &__ptr_sceCompanionHttpdRegisterRequestCallback);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdRegisterRequestCallback2\n"
    ".type sceCompanionHttpdRegisterRequestCallback2 @function\n"
    "sceCompanionHttpdRegisterRequestCallback2:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdRegisterRequestCallback2]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdRegisterRequestCallback2\n"
    ".type __load_and_call_sceCompanionHttpdRegisterRequestCallback2 @function\n"
    "__load_and_call_sceCompanionHttpdRegisterRequestCallback2:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdRegisterRequestCallback2\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdRegisterRequestCallback2]\n");

void __load_and_call_sceCompanionHttpdRegisterRequestCallback2();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdRegisterRequestCallback2 = &__load_and_call_sceCompanionHttpdRegisterRequestCallback2;

static __attribute__ ((used)) void
__load_sceCompanionHttpdRegisterRequestCallback2(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdRegisterRequestCallback2", &__ptr_sceCompanionHttpdRegisterRequestCallback2);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdSetBody\n"
    ".type sceCompanionHttpdSetBody @function\n"
    "sceCompanionHttpdSetBody:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdSetBody]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdSetBody\n"
    ".type __load_and_call_sceCompanionHttpdSetBody @function\n"
    "__load_and_call_sceCompanionHttpdSetBody:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdSetBody\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdSetBody]\n");

void __load_and_call_sceCompanionHttpdSetBody();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdSetBody = &__load_and_call_sceCompanionHttpdSetBody;

static __attribute__ ((used)) void
__load_sceCompanionHttpdSetBody(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdSetBody", &__ptr_sceCompanionHttpdSetBody);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdSetStatus\n"
    ".type sceCompanionHttpdSetStatus @function\n"
    "sceCompanionHttpdSetStatus:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdSetStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdSetStatus\n"
    ".type __load_and_call_sceCompanionHttpdSetStatus @function\n"
    "__load_and_call_sceCompanionHttpdSetStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdSetStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdSetStatus]\n");

void __load_and_call_sceCompanionHttpdSetStatus();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdSetStatus = &__load_and_call_sceCompanionHttpdSetStatus;

static __attribute__ ((used)) void
__load_sceCompanionHttpdSetStatus(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdSetStatus", &__ptr_sceCompanionHttpdSetStatus);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdStart\n"
    ".type sceCompanionHttpdStart @function\n"
    "sceCompanionHttpdStart:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdStart]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdStart\n"
    ".type __load_and_call_sceCompanionHttpdStart @function\n"
    "__load_and_call_sceCompanionHttpdStart:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdStart\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdStart]\n");

void __load_and_call_sceCompanionHttpdStart();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdStart = &__load_and_call_sceCompanionHttpdStart;

static __attribute__ ((used)) void
__load_sceCompanionHttpdStart(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdStart", &__ptr_sceCompanionHttpdStart);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdStop\n"
    ".type sceCompanionHttpdStop @function\n"
    "sceCompanionHttpdStop:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdStop]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdStop\n"
    ".type __load_and_call_sceCompanionHttpdStop @function\n"
    "__load_and_call_sceCompanionHttpdStop:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdStop\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdStop]\n");

void __load_and_call_sceCompanionHttpdStop();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdStop = &__load_and_call_sceCompanionHttpdStop;

static __attribute__ ((used)) void
__load_sceCompanionHttpdStop(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdStop", &__ptr_sceCompanionHttpdStop);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdTerminate\n"
    ".type sceCompanionHttpdTerminate @function\n"
    "sceCompanionHttpdTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdTerminate\n"
    ".type __load_and_call_sceCompanionHttpdTerminate @function\n"
    "__load_and_call_sceCompanionHttpdTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdTerminate]\n");

void __load_and_call_sceCompanionHttpdTerminate();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdTerminate = &__load_and_call_sceCompanionHttpdTerminate;

static __attribute__ ((used)) void
__load_sceCompanionHttpdTerminate(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdTerminate", &__ptr_sceCompanionHttpdTerminate);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdUnregisterRequestBodyReceptionCallback\n"
    ".type sceCompanionHttpdUnregisterRequestBodyReceptionCallback @function\n"
    "sceCompanionHttpdUnregisterRequestBodyReceptionCallback:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdUnregisterRequestBodyReceptionCallback]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdUnregisterRequestBodyReceptionCallback\n"
    ".type __load_and_call_sceCompanionHttpdUnregisterRequestBodyReceptionCallback @function\n"
    "__load_and_call_sceCompanionHttpdUnregisterRequestBodyReceptionCallback:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdUnregisterRequestBodyReceptionCallback\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdUnregisterRequestBodyReceptionCallback]\n");

void __load_and_call_sceCompanionHttpdUnregisterRequestBodyReceptionCallback();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdUnregisterRequestBodyReceptionCallback = &__load_and_call_sceCompanionHttpdUnregisterRequestBodyReceptionCallback;

static __attribute__ ((used)) void
__load_sceCompanionHttpdUnregisterRequestBodyReceptionCallback(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdUnregisterRequestBodyReceptionCallback", &__ptr_sceCompanionHttpdUnregisterRequestBodyReceptionCallback);
}

asm(".intel_syntax noprefix\n"
    ".global sceCompanionHttpdUnregisterRequestCallback\n"
    ".type sceCompanionHttpdUnregisterRequestCallback @function\n"
    "sceCompanionHttpdUnregisterRequestCallback:\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdUnregisterRequestCallback]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCompanionHttpdUnregisterRequestCallback\n"
    ".type __load_and_call_sceCompanionHttpdUnregisterRequestCallback @function\n"
    "__load_and_call_sceCompanionHttpdUnregisterRequestCallback:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCompanionHttpdUnregisterRequestCallback\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCompanionHttpdUnregisterRequestCallback]\n");

void __load_and_call_sceCompanionHttpdUnregisterRequestCallback();
static __attribute__ ((used)) void* __ptr_sceCompanionHttpdUnregisterRequestCallback = &__load_and_call_sceCompanionHttpdUnregisterRequestCallback;

static __attribute__ ((used)) void
__load_sceCompanionHttpdUnregisterRequestCallback(void) {
  sprx_dlsym(__handle, "sceCompanionHttpdUnregisterRequestCallback", &__ptr_sceCompanionHttpdUnregisterRequestCallback);
}
