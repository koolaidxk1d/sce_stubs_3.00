/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceEsvmEngine", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineDestroyMediaKeySystemAccess\n"
    ".type sceEsvmEngineDestroyMediaKeySystemAccess @function\n"
    "sceEsvmEngineDestroyMediaKeySystemAccess:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineDestroyMediaKeySystemAccess]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineDestroyMediaKeySystemAccess\n"
    ".type __load_and_call_sceEsvmEngineDestroyMediaKeySystemAccess @function\n"
    "__load_and_call_sceEsvmEngineDestroyMediaKeySystemAccess:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineDestroyMediaKeySystemAccess\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineDestroyMediaKeySystemAccess]\n");

void __load_and_call_sceEsvmEngineDestroyMediaKeySystemAccess();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineDestroyMediaKeySystemAccess = &__load_and_call_sceEsvmEngineDestroyMediaKeySystemAccess;

static __attribute__ ((used)) void
__load_sceEsvmEngineDestroyMediaKeySystemAccess(void) {
  sprx_dlsym(__handle, "sceEsvmEngineDestroyMediaKeySystemAccess", &__ptr_sceEsvmEngineDestroyMediaKeySystemAccess);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeySessionClose\n"
    ".type sceEsvmEngineMediaKeySessionClose @function\n"
    "sceEsvmEngineMediaKeySessionClose:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionClose]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeySessionClose\n"
    ".type __load_and_call_sceEsvmEngineMediaKeySessionClose @function\n"
    "__load_and_call_sceEsvmEngineMediaKeySessionClose:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeySessionClose\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionClose]\n");

void __load_and_call_sceEsvmEngineMediaKeySessionClose();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeySessionClose = &__load_and_call_sceEsvmEngineMediaKeySessionClose;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeySessionClose(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeySessionClose", &__ptr_sceEsvmEngineMediaKeySessionClose);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeySessionGenerateRequest\n"
    ".type sceEsvmEngineMediaKeySessionGenerateRequest @function\n"
    "sceEsvmEngineMediaKeySessionGenerateRequest:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionGenerateRequest]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeySessionGenerateRequest\n"
    ".type __load_and_call_sceEsvmEngineMediaKeySessionGenerateRequest @function\n"
    "__load_and_call_sceEsvmEngineMediaKeySessionGenerateRequest:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeySessionGenerateRequest\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionGenerateRequest]\n");

void __load_and_call_sceEsvmEngineMediaKeySessionGenerateRequest();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeySessionGenerateRequest = &__load_and_call_sceEsvmEngineMediaKeySessionGenerateRequest;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeySessionGenerateRequest(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeySessionGenerateRequest", &__ptr_sceEsvmEngineMediaKeySessionGenerateRequest);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeySessionGetExpiration\n"
    ".type sceEsvmEngineMediaKeySessionGetExpiration @function\n"
    "sceEsvmEngineMediaKeySessionGetExpiration:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionGetExpiration]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeySessionGetExpiration\n"
    ".type __load_and_call_sceEsvmEngineMediaKeySessionGetExpiration @function\n"
    "__load_and_call_sceEsvmEngineMediaKeySessionGetExpiration:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeySessionGetExpiration\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionGetExpiration]\n");

void __load_and_call_sceEsvmEngineMediaKeySessionGetExpiration();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeySessionGetExpiration = &__load_and_call_sceEsvmEngineMediaKeySessionGetExpiration;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeySessionGetExpiration(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeySessionGetExpiration", &__ptr_sceEsvmEngineMediaKeySessionGetExpiration);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeySessionGetKeyStatuses\n"
    ".type sceEsvmEngineMediaKeySessionGetKeyStatuses @function\n"
    "sceEsvmEngineMediaKeySessionGetKeyStatuses:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionGetKeyStatuses]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeySessionGetKeyStatuses\n"
    ".type __load_and_call_sceEsvmEngineMediaKeySessionGetKeyStatuses @function\n"
    "__load_and_call_sceEsvmEngineMediaKeySessionGetKeyStatuses:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeySessionGetKeyStatuses\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionGetKeyStatuses]\n");

void __load_and_call_sceEsvmEngineMediaKeySessionGetKeyStatuses();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeySessionGetKeyStatuses = &__load_and_call_sceEsvmEngineMediaKeySessionGetKeyStatuses;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeySessionGetKeyStatuses(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeySessionGetKeyStatuses", &__ptr_sceEsvmEngineMediaKeySessionGetKeyStatuses);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeySessionGetSessionId\n"
    ".type sceEsvmEngineMediaKeySessionGetSessionId @function\n"
    "sceEsvmEngineMediaKeySessionGetSessionId:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionGetSessionId]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeySessionGetSessionId\n"
    ".type __load_and_call_sceEsvmEngineMediaKeySessionGetSessionId @function\n"
    "__load_and_call_sceEsvmEngineMediaKeySessionGetSessionId:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeySessionGetSessionId\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionGetSessionId]\n");

void __load_and_call_sceEsvmEngineMediaKeySessionGetSessionId();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeySessionGetSessionId = &__load_and_call_sceEsvmEngineMediaKeySessionGetSessionId;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeySessionGetSessionId(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeySessionGetSessionId", &__ptr_sceEsvmEngineMediaKeySessionGetSessionId);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeySessionLoad\n"
    ".type sceEsvmEngineMediaKeySessionLoad @function\n"
    "sceEsvmEngineMediaKeySessionLoad:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionLoad]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeySessionLoad\n"
    ".type __load_and_call_sceEsvmEngineMediaKeySessionLoad @function\n"
    "__load_and_call_sceEsvmEngineMediaKeySessionLoad:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeySessionLoad\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionLoad]\n");

void __load_and_call_sceEsvmEngineMediaKeySessionLoad();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeySessionLoad = &__load_and_call_sceEsvmEngineMediaKeySessionLoad;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeySessionLoad(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeySessionLoad", &__ptr_sceEsvmEngineMediaKeySessionLoad);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeySessionRemove\n"
    ".type sceEsvmEngineMediaKeySessionRemove @function\n"
    "sceEsvmEngineMediaKeySessionRemove:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionRemove]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeySessionRemove\n"
    ".type __load_and_call_sceEsvmEngineMediaKeySessionRemove @function\n"
    "__load_and_call_sceEsvmEngineMediaKeySessionRemove:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeySessionRemove\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionRemove]\n");

void __load_and_call_sceEsvmEngineMediaKeySessionRemove();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeySessionRemove = &__load_and_call_sceEsvmEngineMediaKeySessionRemove;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeySessionRemove(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeySessionRemove", &__ptr_sceEsvmEngineMediaKeySessionRemove);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeySessionSetEventHandler\n"
    ".type sceEsvmEngineMediaKeySessionSetEventHandler @function\n"
    "sceEsvmEngineMediaKeySessionSetEventHandler:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionSetEventHandler]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeySessionSetEventHandler\n"
    ".type __load_and_call_sceEsvmEngineMediaKeySessionSetEventHandler @function\n"
    "__load_and_call_sceEsvmEngineMediaKeySessionSetEventHandler:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeySessionSetEventHandler\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionSetEventHandler]\n");

void __load_and_call_sceEsvmEngineMediaKeySessionSetEventHandler();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeySessionSetEventHandler = &__load_and_call_sceEsvmEngineMediaKeySessionSetEventHandler;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeySessionSetEventHandler(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeySessionSetEventHandler", &__ptr_sceEsvmEngineMediaKeySessionSetEventHandler);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeySessionUpdate\n"
    ".type sceEsvmEngineMediaKeySessionUpdate @function\n"
    "sceEsvmEngineMediaKeySessionUpdate:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionUpdate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeySessionUpdate\n"
    ".type __load_and_call_sceEsvmEngineMediaKeySessionUpdate @function\n"
    "__load_and_call_sceEsvmEngineMediaKeySessionUpdate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeySessionUpdate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySessionUpdate]\n");

void __load_and_call_sceEsvmEngineMediaKeySessionUpdate();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeySessionUpdate = &__load_and_call_sceEsvmEngineMediaKeySessionUpdate;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeySessionUpdate(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeySessionUpdate", &__ptr_sceEsvmEngineMediaKeySessionUpdate);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeySystemAccessCreateMediaKeys\n"
    ".type sceEsvmEngineMediaKeySystemAccessCreateMediaKeys @function\n"
    "sceEsvmEngineMediaKeySystemAccessCreateMediaKeys:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySystemAccessCreateMediaKeys]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeySystemAccessCreateMediaKeys\n"
    ".type __load_and_call_sceEsvmEngineMediaKeySystemAccessCreateMediaKeys @function\n"
    "__load_and_call_sceEsvmEngineMediaKeySystemAccessCreateMediaKeys:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeySystemAccessCreateMediaKeys\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySystemAccessCreateMediaKeys]\n");

void __load_and_call_sceEsvmEngineMediaKeySystemAccessCreateMediaKeys();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeySystemAccessCreateMediaKeys = &__load_and_call_sceEsvmEngineMediaKeySystemAccessCreateMediaKeys;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeySystemAccessCreateMediaKeys(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeySystemAccessCreateMediaKeys", &__ptr_sceEsvmEngineMediaKeySystemAccessCreateMediaKeys);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys\n"
    ".type sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys @function\n"
    "sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys\n"
    ".type __load_and_call_sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys @function\n"
    "__load_and_call_sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys]\n");

void __load_and_call_sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys = &__load_and_call_sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys", &__ptr_sceEsvmEngineMediaKeySystemAccessDestroyMediaKeys);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeySystemAccessGetConfiguration\n"
    ".type sceEsvmEngineMediaKeySystemAccessGetConfiguration @function\n"
    "sceEsvmEngineMediaKeySystemAccessGetConfiguration:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySystemAccessGetConfiguration]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeySystemAccessGetConfiguration\n"
    ".type __load_and_call_sceEsvmEngineMediaKeySystemAccessGetConfiguration @function\n"
    "__load_and_call_sceEsvmEngineMediaKeySystemAccessGetConfiguration:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeySystemAccessGetConfiguration\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySystemAccessGetConfiguration]\n");

void __load_and_call_sceEsvmEngineMediaKeySystemAccessGetConfiguration();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeySystemAccessGetConfiguration = &__load_and_call_sceEsvmEngineMediaKeySystemAccessGetConfiguration;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeySystemAccessGetConfiguration(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeySystemAccessGetConfiguration", &__ptr_sceEsvmEngineMediaKeySystemAccessGetConfiguration);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig\n"
    ".type sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig @function\n"
    "sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig\n"
    ".type __load_and_call_sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig @function\n"
    "__load_and_call_sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig]\n");

void __load_and_call_sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig = &__load_and_call_sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig", &__ptr_sceEsvmEngineMediaKeySystemAccessSetCdmStorageConfig);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeysCreateSession\n"
    ".type sceEsvmEngineMediaKeysCreateSession @function\n"
    "sceEsvmEngineMediaKeysCreateSession:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeysCreateSession]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeysCreateSession\n"
    ".type __load_and_call_sceEsvmEngineMediaKeysCreateSession @function\n"
    "__load_and_call_sceEsvmEngineMediaKeysCreateSession:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeysCreateSession\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeysCreateSession]\n");

void __load_and_call_sceEsvmEngineMediaKeysCreateSession();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeysCreateSession = &__load_and_call_sceEsvmEngineMediaKeysCreateSession;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeysCreateSession(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeysCreateSession", &__ptr_sceEsvmEngineMediaKeysCreateSession);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeysDestroySession\n"
    ".type sceEsvmEngineMediaKeysDestroySession @function\n"
    "sceEsvmEngineMediaKeysDestroySession:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeysDestroySession]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeysDestroySession\n"
    ".type __load_and_call_sceEsvmEngineMediaKeysDestroySession @function\n"
    "__load_and_call_sceEsvmEngineMediaKeysDestroySession:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeysDestroySession\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeysDestroySession]\n");

void __load_and_call_sceEsvmEngineMediaKeysDestroySession();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeysDestroySession = &__load_and_call_sceEsvmEngineMediaKeysDestroySession;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeysDestroySession(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeysDestroySession", &__ptr_sceEsvmEngineMediaKeysDestroySession);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeysSetEventHandler\n"
    ".type sceEsvmEngineMediaKeysSetEventHandler @function\n"
    "sceEsvmEngineMediaKeysSetEventHandler:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeysSetEventHandler]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeysSetEventHandler\n"
    ".type __load_and_call_sceEsvmEngineMediaKeysSetEventHandler @function\n"
    "__load_and_call_sceEsvmEngineMediaKeysSetEventHandler:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeysSetEventHandler\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeysSetEventHandler]\n");

void __load_and_call_sceEsvmEngineMediaKeysSetEventHandler();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeysSetEventHandler = &__load_and_call_sceEsvmEngineMediaKeysSetEventHandler;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeysSetEventHandler(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeysSetEventHandler", &__ptr_sceEsvmEngineMediaKeysSetEventHandler);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineMediaKeysSetServerCertificate\n"
    ".type sceEsvmEngineMediaKeysSetServerCertificate @function\n"
    "sceEsvmEngineMediaKeysSetServerCertificate:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeysSetServerCertificate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineMediaKeysSetServerCertificate\n"
    ".type __load_and_call_sceEsvmEngineMediaKeysSetServerCertificate @function\n"
    "__load_and_call_sceEsvmEngineMediaKeysSetServerCertificate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineMediaKeysSetServerCertificate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineMediaKeysSetServerCertificate]\n");

void __load_and_call_sceEsvmEngineMediaKeysSetServerCertificate();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineMediaKeysSetServerCertificate = &__load_and_call_sceEsvmEngineMediaKeysSetServerCertificate;

static __attribute__ ((used)) void
__load_sceEsvmEngineMediaKeysSetServerCertificate(void) {
  sprx_dlsym(__handle, "sceEsvmEngineMediaKeysSetServerCertificate", &__ptr_sceEsvmEngineMediaKeysSetServerCertificate);
}

asm(".intel_syntax noprefix\n"
    ".global sceEsvmEngineRequestMediaKeySystemAccess\n"
    ".type sceEsvmEngineRequestMediaKeySystemAccess @function\n"
    "sceEsvmEngineRequestMediaKeySystemAccess:\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineRequestMediaKeySystemAccess]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceEsvmEngineRequestMediaKeySystemAccess\n"
    ".type __load_and_call_sceEsvmEngineRequestMediaKeySystemAccess @function\n"
    "__load_and_call_sceEsvmEngineRequestMediaKeySystemAccess:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceEsvmEngineRequestMediaKeySystemAccess\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceEsvmEngineRequestMediaKeySystemAccess]\n");

void __load_and_call_sceEsvmEngineRequestMediaKeySystemAccess();
static __attribute__ ((used)) void* __ptr_sceEsvmEngineRequestMediaKeySystemAccess = &__load_and_call_sceEsvmEngineRequestMediaKeySystemAccess;

static __attribute__ ((used)) void
__load_sceEsvmEngineRequestMediaKeySystemAccess(void) {
  sprx_dlsym(__handle, "sceEsvmEngineRequestMediaKeySystemAccess", &__ptr_sceEsvmEngineRequestMediaKeySystemAccess);
}
