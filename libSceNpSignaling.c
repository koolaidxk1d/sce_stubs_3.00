/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceNpSignaling", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingActivateConnection\n"
    ".type sceNpSignalingActivateConnection @function\n"
    "sceNpSignalingActivateConnection:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingActivateConnection]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingActivateConnection\n"
    ".type __load_and_call_sceNpSignalingActivateConnection @function\n"
    "__load_and_call_sceNpSignalingActivateConnection:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingActivateConnection\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingActivateConnection]\n");

void __load_and_call_sceNpSignalingActivateConnection();
static __attribute__ ((used)) void* __ptr_sceNpSignalingActivateConnection = &__load_and_call_sceNpSignalingActivateConnection;

static __attribute__ ((used)) void
__load_sceNpSignalingActivateConnection(void) {
  sprx_dlsym(__handle, "sceNpSignalingActivateConnection", &__ptr_sceNpSignalingActivateConnection);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingActivateConnectionA\n"
    ".type sceNpSignalingActivateConnectionA @function\n"
    "sceNpSignalingActivateConnectionA:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingActivateConnectionA]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingActivateConnectionA\n"
    ".type __load_and_call_sceNpSignalingActivateConnectionA @function\n"
    "__load_and_call_sceNpSignalingActivateConnectionA:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingActivateConnectionA\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingActivateConnectionA]\n");

void __load_and_call_sceNpSignalingActivateConnectionA();
static __attribute__ ((used)) void* __ptr_sceNpSignalingActivateConnectionA = &__load_and_call_sceNpSignalingActivateConnectionA;

static __attribute__ ((used)) void
__load_sceNpSignalingActivateConnectionA(void) {
  sprx_dlsym(__handle, "sceNpSignalingActivateConnectionA", &__ptr_sceNpSignalingActivateConnectionA);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingCancelPeerNetInfo\n"
    ".type sceNpSignalingCancelPeerNetInfo @function\n"
    "sceNpSignalingCancelPeerNetInfo:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingCancelPeerNetInfo]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingCancelPeerNetInfo\n"
    ".type __load_and_call_sceNpSignalingCancelPeerNetInfo @function\n"
    "__load_and_call_sceNpSignalingCancelPeerNetInfo:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingCancelPeerNetInfo\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingCancelPeerNetInfo]\n");

void __load_and_call_sceNpSignalingCancelPeerNetInfo();
static __attribute__ ((used)) void* __ptr_sceNpSignalingCancelPeerNetInfo = &__load_and_call_sceNpSignalingCancelPeerNetInfo;

static __attribute__ ((used)) void
__load_sceNpSignalingCancelPeerNetInfo(void) {
  sprx_dlsym(__handle, "sceNpSignalingCancelPeerNetInfo", &__ptr_sceNpSignalingCancelPeerNetInfo);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingCreateContext\n"
    ".type sceNpSignalingCreateContext @function\n"
    "sceNpSignalingCreateContext:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingCreateContext]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingCreateContext\n"
    ".type __load_and_call_sceNpSignalingCreateContext @function\n"
    "__load_and_call_sceNpSignalingCreateContext:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingCreateContext\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingCreateContext]\n");

void __load_and_call_sceNpSignalingCreateContext();
static __attribute__ ((used)) void* __ptr_sceNpSignalingCreateContext = &__load_and_call_sceNpSignalingCreateContext;

static __attribute__ ((used)) void
__load_sceNpSignalingCreateContext(void) {
  sprx_dlsym(__handle, "sceNpSignalingCreateContext", &__ptr_sceNpSignalingCreateContext);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingCreateContextA\n"
    ".type sceNpSignalingCreateContextA @function\n"
    "sceNpSignalingCreateContextA:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingCreateContextA]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingCreateContextA\n"
    ".type __load_and_call_sceNpSignalingCreateContextA @function\n"
    "__load_and_call_sceNpSignalingCreateContextA:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingCreateContextA\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingCreateContextA]\n");

void __load_and_call_sceNpSignalingCreateContextA();
static __attribute__ ((used)) void* __ptr_sceNpSignalingCreateContextA = &__load_and_call_sceNpSignalingCreateContextA;

static __attribute__ ((used)) void
__load_sceNpSignalingCreateContextA(void) {
  sprx_dlsym(__handle, "sceNpSignalingCreateContextA", &__ptr_sceNpSignalingCreateContextA);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingDeactivateConnection\n"
    ".type sceNpSignalingDeactivateConnection @function\n"
    "sceNpSignalingDeactivateConnection:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingDeactivateConnection]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingDeactivateConnection\n"
    ".type __load_and_call_sceNpSignalingDeactivateConnection @function\n"
    "__load_and_call_sceNpSignalingDeactivateConnection:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingDeactivateConnection\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingDeactivateConnection]\n");

void __load_and_call_sceNpSignalingDeactivateConnection();
static __attribute__ ((used)) void* __ptr_sceNpSignalingDeactivateConnection = &__load_and_call_sceNpSignalingDeactivateConnection;

static __attribute__ ((used)) void
__load_sceNpSignalingDeactivateConnection(void) {
  sprx_dlsym(__handle, "sceNpSignalingDeactivateConnection", &__ptr_sceNpSignalingDeactivateConnection);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingDeleteContext\n"
    ".type sceNpSignalingDeleteContext @function\n"
    "sceNpSignalingDeleteContext:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingDeleteContext]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingDeleteContext\n"
    ".type __load_and_call_sceNpSignalingDeleteContext @function\n"
    "__load_and_call_sceNpSignalingDeleteContext:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingDeleteContext\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingDeleteContext]\n");

void __load_and_call_sceNpSignalingDeleteContext();
static __attribute__ ((used)) void* __ptr_sceNpSignalingDeleteContext = &__load_and_call_sceNpSignalingDeleteContext;

static __attribute__ ((used)) void
__load_sceNpSignalingDeleteContext(void) {
  sprx_dlsym(__handle, "sceNpSignalingDeleteContext", &__ptr_sceNpSignalingDeleteContext);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingGetConnectionFromNpId\n"
    ".type sceNpSignalingGetConnectionFromNpId @function\n"
    "sceNpSignalingGetConnectionFromNpId:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetConnectionFromNpId]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingGetConnectionFromNpId\n"
    ".type __load_and_call_sceNpSignalingGetConnectionFromNpId @function\n"
    "__load_and_call_sceNpSignalingGetConnectionFromNpId:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingGetConnectionFromNpId\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetConnectionFromNpId]\n");

void __load_and_call_sceNpSignalingGetConnectionFromNpId();
static __attribute__ ((used)) void* __ptr_sceNpSignalingGetConnectionFromNpId = &__load_and_call_sceNpSignalingGetConnectionFromNpId;

static __attribute__ ((used)) void
__load_sceNpSignalingGetConnectionFromNpId(void) {
  sprx_dlsym(__handle, "sceNpSignalingGetConnectionFromNpId", &__ptr_sceNpSignalingGetConnectionFromNpId);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingGetConnectionFromPeerAddress\n"
    ".type sceNpSignalingGetConnectionFromPeerAddress @function\n"
    "sceNpSignalingGetConnectionFromPeerAddress:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetConnectionFromPeerAddress]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingGetConnectionFromPeerAddress\n"
    ".type __load_and_call_sceNpSignalingGetConnectionFromPeerAddress @function\n"
    "__load_and_call_sceNpSignalingGetConnectionFromPeerAddress:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingGetConnectionFromPeerAddress\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetConnectionFromPeerAddress]\n");

void __load_and_call_sceNpSignalingGetConnectionFromPeerAddress();
static __attribute__ ((used)) void* __ptr_sceNpSignalingGetConnectionFromPeerAddress = &__load_and_call_sceNpSignalingGetConnectionFromPeerAddress;

static __attribute__ ((used)) void
__load_sceNpSignalingGetConnectionFromPeerAddress(void) {
  sprx_dlsym(__handle, "sceNpSignalingGetConnectionFromPeerAddress", &__ptr_sceNpSignalingGetConnectionFromPeerAddress);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingGetConnectionFromPeerAddressA\n"
    ".type sceNpSignalingGetConnectionFromPeerAddressA @function\n"
    "sceNpSignalingGetConnectionFromPeerAddressA:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetConnectionFromPeerAddressA]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingGetConnectionFromPeerAddressA\n"
    ".type __load_and_call_sceNpSignalingGetConnectionFromPeerAddressA @function\n"
    "__load_and_call_sceNpSignalingGetConnectionFromPeerAddressA:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingGetConnectionFromPeerAddressA\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetConnectionFromPeerAddressA]\n");

void __load_and_call_sceNpSignalingGetConnectionFromPeerAddressA();
static __attribute__ ((used)) void* __ptr_sceNpSignalingGetConnectionFromPeerAddressA = &__load_and_call_sceNpSignalingGetConnectionFromPeerAddressA;

static __attribute__ ((used)) void
__load_sceNpSignalingGetConnectionFromPeerAddressA(void) {
  sprx_dlsym(__handle, "sceNpSignalingGetConnectionFromPeerAddressA", &__ptr_sceNpSignalingGetConnectionFromPeerAddressA);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingGetConnectionInfo\n"
    ".type sceNpSignalingGetConnectionInfo @function\n"
    "sceNpSignalingGetConnectionInfo:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetConnectionInfo]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingGetConnectionInfo\n"
    ".type __load_and_call_sceNpSignalingGetConnectionInfo @function\n"
    "__load_and_call_sceNpSignalingGetConnectionInfo:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingGetConnectionInfo\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetConnectionInfo]\n");

void __load_and_call_sceNpSignalingGetConnectionInfo();
static __attribute__ ((used)) void* __ptr_sceNpSignalingGetConnectionInfo = &__load_and_call_sceNpSignalingGetConnectionInfo;

static __attribute__ ((used)) void
__load_sceNpSignalingGetConnectionInfo(void) {
  sprx_dlsym(__handle, "sceNpSignalingGetConnectionInfo", &__ptr_sceNpSignalingGetConnectionInfo);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingGetConnectionInfoA\n"
    ".type sceNpSignalingGetConnectionInfoA @function\n"
    "sceNpSignalingGetConnectionInfoA:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetConnectionInfoA]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingGetConnectionInfoA\n"
    ".type __load_and_call_sceNpSignalingGetConnectionInfoA @function\n"
    "__load_and_call_sceNpSignalingGetConnectionInfoA:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingGetConnectionInfoA\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetConnectionInfoA]\n");

void __load_and_call_sceNpSignalingGetConnectionInfoA();
static __attribute__ ((used)) void* __ptr_sceNpSignalingGetConnectionInfoA = &__load_and_call_sceNpSignalingGetConnectionInfoA;

static __attribute__ ((used)) void
__load_sceNpSignalingGetConnectionInfoA(void) {
  sprx_dlsym(__handle, "sceNpSignalingGetConnectionInfoA", &__ptr_sceNpSignalingGetConnectionInfoA);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingGetConnectionStatistics\n"
    ".type sceNpSignalingGetConnectionStatistics @function\n"
    "sceNpSignalingGetConnectionStatistics:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetConnectionStatistics]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingGetConnectionStatistics\n"
    ".type __load_and_call_sceNpSignalingGetConnectionStatistics @function\n"
    "__load_and_call_sceNpSignalingGetConnectionStatistics:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingGetConnectionStatistics\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetConnectionStatistics]\n");

void __load_and_call_sceNpSignalingGetConnectionStatistics();
static __attribute__ ((used)) void* __ptr_sceNpSignalingGetConnectionStatistics = &__load_and_call_sceNpSignalingGetConnectionStatistics;

static __attribute__ ((used)) void
__load_sceNpSignalingGetConnectionStatistics(void) {
  sprx_dlsym(__handle, "sceNpSignalingGetConnectionStatistics", &__ptr_sceNpSignalingGetConnectionStatistics);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingGetConnectionStatus\n"
    ".type sceNpSignalingGetConnectionStatus @function\n"
    "sceNpSignalingGetConnectionStatus:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetConnectionStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingGetConnectionStatus\n"
    ".type __load_and_call_sceNpSignalingGetConnectionStatus @function\n"
    "__load_and_call_sceNpSignalingGetConnectionStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingGetConnectionStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetConnectionStatus]\n");

void __load_and_call_sceNpSignalingGetConnectionStatus();
static __attribute__ ((used)) void* __ptr_sceNpSignalingGetConnectionStatus = &__load_and_call_sceNpSignalingGetConnectionStatus;

static __attribute__ ((used)) void
__load_sceNpSignalingGetConnectionStatus(void) {
  sprx_dlsym(__handle, "sceNpSignalingGetConnectionStatus", &__ptr_sceNpSignalingGetConnectionStatus);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingGetContextOption\n"
    ".type sceNpSignalingGetContextOption @function\n"
    "sceNpSignalingGetContextOption:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetContextOption]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingGetContextOption\n"
    ".type __load_and_call_sceNpSignalingGetContextOption @function\n"
    "__load_and_call_sceNpSignalingGetContextOption:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingGetContextOption\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetContextOption]\n");

void __load_and_call_sceNpSignalingGetContextOption();
static __attribute__ ((used)) void* __ptr_sceNpSignalingGetContextOption = &__load_and_call_sceNpSignalingGetContextOption;

static __attribute__ ((used)) void
__load_sceNpSignalingGetContextOption(void) {
  sprx_dlsym(__handle, "sceNpSignalingGetContextOption", &__ptr_sceNpSignalingGetContextOption);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingGetLocalNetInfo\n"
    ".type sceNpSignalingGetLocalNetInfo @function\n"
    "sceNpSignalingGetLocalNetInfo:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetLocalNetInfo]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingGetLocalNetInfo\n"
    ".type __load_and_call_sceNpSignalingGetLocalNetInfo @function\n"
    "__load_and_call_sceNpSignalingGetLocalNetInfo:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingGetLocalNetInfo\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetLocalNetInfo]\n");

void __load_and_call_sceNpSignalingGetLocalNetInfo();
static __attribute__ ((used)) void* __ptr_sceNpSignalingGetLocalNetInfo = &__load_and_call_sceNpSignalingGetLocalNetInfo;

static __attribute__ ((used)) void
__load_sceNpSignalingGetLocalNetInfo(void) {
  sprx_dlsym(__handle, "sceNpSignalingGetLocalNetInfo", &__ptr_sceNpSignalingGetLocalNetInfo);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingGetMemoryInfo\n"
    ".type sceNpSignalingGetMemoryInfo @function\n"
    "sceNpSignalingGetMemoryInfo:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetMemoryInfo]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingGetMemoryInfo\n"
    ".type __load_and_call_sceNpSignalingGetMemoryInfo @function\n"
    "__load_and_call_sceNpSignalingGetMemoryInfo:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingGetMemoryInfo\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetMemoryInfo]\n");

void __load_and_call_sceNpSignalingGetMemoryInfo();
static __attribute__ ((used)) void* __ptr_sceNpSignalingGetMemoryInfo = &__load_and_call_sceNpSignalingGetMemoryInfo;

static __attribute__ ((used)) void
__load_sceNpSignalingGetMemoryInfo(void) {
  sprx_dlsym(__handle, "sceNpSignalingGetMemoryInfo", &__ptr_sceNpSignalingGetMemoryInfo);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingGetPeerNetInfo\n"
    ".type sceNpSignalingGetPeerNetInfo @function\n"
    "sceNpSignalingGetPeerNetInfo:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetPeerNetInfo]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingGetPeerNetInfo\n"
    ".type __load_and_call_sceNpSignalingGetPeerNetInfo @function\n"
    "__load_and_call_sceNpSignalingGetPeerNetInfo:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingGetPeerNetInfo\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetPeerNetInfo]\n");

void __load_and_call_sceNpSignalingGetPeerNetInfo();
static __attribute__ ((used)) void* __ptr_sceNpSignalingGetPeerNetInfo = &__load_and_call_sceNpSignalingGetPeerNetInfo;

static __attribute__ ((used)) void
__load_sceNpSignalingGetPeerNetInfo(void) {
  sprx_dlsym(__handle, "sceNpSignalingGetPeerNetInfo", &__ptr_sceNpSignalingGetPeerNetInfo);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingGetPeerNetInfoA\n"
    ".type sceNpSignalingGetPeerNetInfoA @function\n"
    "sceNpSignalingGetPeerNetInfoA:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetPeerNetInfoA]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingGetPeerNetInfoA\n"
    ".type __load_and_call_sceNpSignalingGetPeerNetInfoA @function\n"
    "__load_and_call_sceNpSignalingGetPeerNetInfoA:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingGetPeerNetInfoA\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetPeerNetInfoA]\n");

void __load_and_call_sceNpSignalingGetPeerNetInfoA();
static __attribute__ ((used)) void* __ptr_sceNpSignalingGetPeerNetInfoA = &__load_and_call_sceNpSignalingGetPeerNetInfoA;

static __attribute__ ((used)) void
__load_sceNpSignalingGetPeerNetInfoA(void) {
  sprx_dlsym(__handle, "sceNpSignalingGetPeerNetInfoA", &__ptr_sceNpSignalingGetPeerNetInfoA);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingGetPeerNetInfoResult\n"
    ".type sceNpSignalingGetPeerNetInfoResult @function\n"
    "sceNpSignalingGetPeerNetInfoResult:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetPeerNetInfoResult]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingGetPeerNetInfoResult\n"
    ".type __load_and_call_sceNpSignalingGetPeerNetInfoResult @function\n"
    "__load_and_call_sceNpSignalingGetPeerNetInfoResult:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingGetPeerNetInfoResult\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingGetPeerNetInfoResult]\n");

void __load_and_call_sceNpSignalingGetPeerNetInfoResult();
static __attribute__ ((used)) void* __ptr_sceNpSignalingGetPeerNetInfoResult = &__load_and_call_sceNpSignalingGetPeerNetInfoResult;

static __attribute__ ((used)) void
__load_sceNpSignalingGetPeerNetInfoResult(void) {
  sprx_dlsym(__handle, "sceNpSignalingGetPeerNetInfoResult", &__ptr_sceNpSignalingGetPeerNetInfoResult);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingInitialize\n"
    ".type sceNpSignalingInitialize @function\n"
    "sceNpSignalingInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingInitialize\n"
    ".type __load_and_call_sceNpSignalingInitialize @function\n"
    "__load_and_call_sceNpSignalingInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingInitialize]\n");

void __load_and_call_sceNpSignalingInitialize();
static __attribute__ ((used)) void* __ptr_sceNpSignalingInitialize = &__load_and_call_sceNpSignalingInitialize;

static __attribute__ ((used)) void
__load_sceNpSignalingInitialize(void) {
  sprx_dlsym(__handle, "sceNpSignalingInitialize", &__ptr_sceNpSignalingInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingSetContextOption\n"
    ".type sceNpSignalingSetContextOption @function\n"
    "sceNpSignalingSetContextOption:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingSetContextOption]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingSetContextOption\n"
    ".type __load_and_call_sceNpSignalingSetContextOption @function\n"
    "__load_and_call_sceNpSignalingSetContextOption:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingSetContextOption\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingSetContextOption]\n");

void __load_and_call_sceNpSignalingSetContextOption();
static __attribute__ ((used)) void* __ptr_sceNpSignalingSetContextOption = &__load_and_call_sceNpSignalingSetContextOption;

static __attribute__ ((used)) void
__load_sceNpSignalingSetContextOption(void) {
  sprx_dlsym(__handle, "sceNpSignalingSetContextOption", &__ptr_sceNpSignalingSetContextOption);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingTerminate\n"
    ".type sceNpSignalingTerminate @function\n"
    "sceNpSignalingTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingTerminate\n"
    ".type __load_and_call_sceNpSignalingTerminate @function\n"
    "__load_and_call_sceNpSignalingTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingTerminate]\n");

void __load_and_call_sceNpSignalingTerminate();
static __attribute__ ((used)) void* __ptr_sceNpSignalingTerminate = &__load_and_call_sceNpSignalingTerminate;

static __attribute__ ((used)) void
__load_sceNpSignalingTerminate(void) {
  sprx_dlsym(__handle, "sceNpSignalingTerminate", &__ptr_sceNpSignalingTerminate);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpSignalingTerminateConnection\n"
    ".type sceNpSignalingTerminateConnection @function\n"
    "sceNpSignalingTerminateConnection:\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingTerminateConnection]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpSignalingTerminateConnection\n"
    ".type __load_and_call_sceNpSignalingTerminateConnection @function\n"
    "__load_and_call_sceNpSignalingTerminateConnection:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpSignalingTerminateConnection\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpSignalingTerminateConnection]\n");

void __load_and_call_sceNpSignalingTerminateConnection();
static __attribute__ ((used)) void* __ptr_sceNpSignalingTerminateConnection = &__load_and_call_sceNpSignalingTerminateConnection;

static __attribute__ ((used)) void
__load_sceNpSignalingTerminateConnection(void) {
  sprx_dlsym(__handle, "sceNpSignalingTerminateConnection", &__ptr_sceNpSignalingTerminateConnection);
}
