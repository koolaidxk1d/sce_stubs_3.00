/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceUsbStorage", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageClearFakeWriteProtection\n"
    ".type sceUsbStorageClearFakeWriteProtection @function\n"
    "sceUsbStorageClearFakeWriteProtection:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageClearFakeWriteProtection]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageClearFakeWriteProtection\n"
    ".type __load_and_call_sceUsbStorageClearFakeWriteProtection @function\n"
    "__load_and_call_sceUsbStorageClearFakeWriteProtection:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageClearFakeWriteProtection\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageClearFakeWriteProtection]\n");

void __load_and_call_sceUsbStorageClearFakeWriteProtection();
static __attribute__ ((used)) void* __ptr_sceUsbStorageClearFakeWriteProtection = &__load_and_call_sceUsbStorageClearFakeWriteProtection;

static __attribute__ ((used)) void
__load_sceUsbStorageClearFakeWriteProtection(void) {
  sprx_dlsym(__handle, "sceUsbStorageClearFakeWriteProtection", &__ptr_sceUsbStorageClearFakeWriteProtection);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageGetDeviceInfo\n"
    ".type sceUsbStorageGetDeviceInfo @function\n"
    "sceUsbStorageGetDeviceInfo:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageGetDeviceInfo]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageGetDeviceInfo\n"
    ".type __load_and_call_sceUsbStorageGetDeviceInfo @function\n"
    "__load_and_call_sceUsbStorageGetDeviceInfo:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageGetDeviceInfo\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageGetDeviceInfo]\n");

void __load_and_call_sceUsbStorageGetDeviceInfo();
static __attribute__ ((used)) void* __ptr_sceUsbStorageGetDeviceInfo = &__load_and_call_sceUsbStorageGetDeviceInfo;

static __attribute__ ((used)) void
__load_sceUsbStorageGetDeviceInfo(void) {
  sprx_dlsym(__handle, "sceUsbStorageGetDeviceInfo", &__ptr_sceUsbStorageGetDeviceInfo);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageGetDeviceList\n"
    ".type sceUsbStorageGetDeviceList @function\n"
    "sceUsbStorageGetDeviceList:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageGetDeviceList]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageGetDeviceList\n"
    ".type __load_and_call_sceUsbStorageGetDeviceList @function\n"
    "__load_and_call_sceUsbStorageGetDeviceList:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageGetDeviceList\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageGetDeviceList]\n");

void __load_and_call_sceUsbStorageGetDeviceList();
static __attribute__ ((used)) void* __ptr_sceUsbStorageGetDeviceList = &__load_and_call_sceUsbStorageGetDeviceList;

static __attribute__ ((used)) void
__load_sceUsbStorageGetDeviceList(void) {
  sprx_dlsym(__handle, "sceUsbStorageGetDeviceList", &__ptr_sceUsbStorageGetDeviceList);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageGetMountPointOfShellCore\n"
    ".type sceUsbStorageGetMountPointOfShellCore @function\n"
    "sceUsbStorageGetMountPointOfShellCore:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageGetMountPointOfShellCore]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageGetMountPointOfShellCore\n"
    ".type __load_and_call_sceUsbStorageGetMountPointOfShellCore @function\n"
    "__load_and_call_sceUsbStorageGetMountPointOfShellCore:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageGetMountPointOfShellCore\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageGetMountPointOfShellCore]\n");

void __load_and_call_sceUsbStorageGetMountPointOfShellCore();
static __attribute__ ((used)) void* __ptr_sceUsbStorageGetMountPointOfShellCore = &__load_and_call_sceUsbStorageGetMountPointOfShellCore;

static __attribute__ ((used)) void
__load_sceUsbStorageGetMountPointOfShellCore(void) {
  sprx_dlsym(__handle, "sceUsbStorageGetMountPointOfShellCore", &__ptr_sceUsbStorageGetMountPointOfShellCore);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageGetdentsClose\n"
    ".type sceUsbStorageGetdentsClose @function\n"
    "sceUsbStorageGetdentsClose:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageGetdentsClose]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageGetdentsClose\n"
    ".type __load_and_call_sceUsbStorageGetdentsClose @function\n"
    "__load_and_call_sceUsbStorageGetdentsClose:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageGetdentsClose\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageGetdentsClose]\n");

void __load_and_call_sceUsbStorageGetdentsClose();
static __attribute__ ((used)) void* __ptr_sceUsbStorageGetdentsClose = &__load_and_call_sceUsbStorageGetdentsClose;

static __attribute__ ((used)) void
__load_sceUsbStorageGetdentsClose(void) {
  sprx_dlsym(__handle, "sceUsbStorageGetdentsClose", &__ptr_sceUsbStorageGetdentsClose);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageGetdentsOpen\n"
    ".type sceUsbStorageGetdentsOpen @function\n"
    "sceUsbStorageGetdentsOpen:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageGetdentsOpen]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageGetdentsOpen\n"
    ".type __load_and_call_sceUsbStorageGetdentsOpen @function\n"
    "__load_and_call_sceUsbStorageGetdentsOpen:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageGetdentsOpen\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageGetdentsOpen]\n");

void __load_and_call_sceUsbStorageGetdentsOpen();
static __attribute__ ((used)) void* __ptr_sceUsbStorageGetdentsOpen = &__load_and_call_sceUsbStorageGetdentsOpen;

static __attribute__ ((used)) void
__load_sceUsbStorageGetdentsOpen(void) {
  sprx_dlsym(__handle, "sceUsbStorageGetdentsOpen", &__ptr_sceUsbStorageGetdentsOpen);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageGetdentsRead\n"
    ".type sceUsbStorageGetdentsRead @function\n"
    "sceUsbStorageGetdentsRead:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageGetdentsRead]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageGetdentsRead\n"
    ".type __load_and_call_sceUsbStorageGetdentsRead @function\n"
    "__load_and_call_sceUsbStorageGetdentsRead:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageGetdentsRead\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageGetdentsRead]\n");

void __load_and_call_sceUsbStorageGetdentsRead();
static __attribute__ ((used)) void* __ptr_sceUsbStorageGetdentsRead = &__load_and_call_sceUsbStorageGetdentsRead;

static __attribute__ ((used)) void
__load_sceUsbStorageGetdentsRead(void) {
  sprx_dlsym(__handle, "sceUsbStorageGetdentsRead", &__ptr_sceUsbStorageGetdentsRead);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageInit\n"
    ".type sceUsbStorageInit @function\n"
    "sceUsbStorageInit:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageInit]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageInit\n"
    ".type __load_and_call_sceUsbStorageInit @function\n"
    "__load_and_call_sceUsbStorageInit:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageInit\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageInit]\n");

void __load_and_call_sceUsbStorageInit();
static __attribute__ ((used)) void* __ptr_sceUsbStorageInit = &__load_and_call_sceUsbStorageInit;

static __attribute__ ((used)) void
__load_sceUsbStorageInit(void) {
  sprx_dlsym(__handle, "sceUsbStorageInit", &__ptr_sceUsbStorageInit);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageIsExist\n"
    ".type sceUsbStorageIsExist @function\n"
    "sceUsbStorageIsExist:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageIsExist]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageIsExist\n"
    ".type __load_and_call_sceUsbStorageIsExist @function\n"
    "__load_and_call_sceUsbStorageIsExist:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageIsExist\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageIsExist]\n");

void __load_and_call_sceUsbStorageIsExist();
static __attribute__ ((used)) void* __ptr_sceUsbStorageIsExist = &__load_and_call_sceUsbStorageIsExist;

static __attribute__ ((used)) void
__load_sceUsbStorageIsExist(void) {
  sprx_dlsym(__handle, "sceUsbStorageIsExist", &__ptr_sceUsbStorageIsExist);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageRegisterCallback\n"
    ".type sceUsbStorageRegisterCallback @function\n"
    "sceUsbStorageRegisterCallback:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageRegisterCallback]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageRegisterCallback\n"
    ".type __load_and_call_sceUsbStorageRegisterCallback @function\n"
    "__load_and_call_sceUsbStorageRegisterCallback:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageRegisterCallback\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageRegisterCallback]\n");

void __load_and_call_sceUsbStorageRegisterCallback();
static __attribute__ ((used)) void* __ptr_sceUsbStorageRegisterCallback = &__load_and_call_sceUsbStorageRegisterCallback;

static __attribute__ ((used)) void
__load_sceUsbStorageRegisterCallback(void) {
  sprx_dlsym(__handle, "sceUsbStorageRegisterCallback", &__ptr_sceUsbStorageRegisterCallback);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageRegisterCallbackForMapUnavailable\n"
    ".type sceUsbStorageRegisterCallbackForMapUnavailable @function\n"
    "sceUsbStorageRegisterCallbackForMapUnavailable:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageRegisterCallbackForMapUnavailable]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageRegisterCallbackForMapUnavailable\n"
    ".type __load_and_call_sceUsbStorageRegisterCallbackForMapUnavailable @function\n"
    "__load_and_call_sceUsbStorageRegisterCallbackForMapUnavailable:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageRegisterCallbackForMapUnavailable\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageRegisterCallbackForMapUnavailable]\n");

void __load_and_call_sceUsbStorageRegisterCallbackForMapUnavailable();
static __attribute__ ((used)) void* __ptr_sceUsbStorageRegisterCallbackForMapUnavailable = &__load_and_call_sceUsbStorageRegisterCallbackForMapUnavailable;

static __attribute__ ((used)) void
__load_sceUsbStorageRegisterCallbackForMapUnavailable(void) {
  sprx_dlsym(__handle, "sceUsbStorageRegisterCallbackForMapUnavailable", &__ptr_sceUsbStorageRegisterCallbackForMapUnavailable);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageRequestMap\n"
    ".type sceUsbStorageRequestMap @function\n"
    "sceUsbStorageRequestMap:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageRequestMap]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageRequestMap\n"
    ".type __load_and_call_sceUsbStorageRequestMap @function\n"
    "__load_and_call_sceUsbStorageRequestMap:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageRequestMap\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageRequestMap]\n");

void __load_and_call_sceUsbStorageRequestMap();
static __attribute__ ((used)) void* __ptr_sceUsbStorageRequestMap = &__load_and_call_sceUsbStorageRequestMap;

static __attribute__ ((used)) void
__load_sceUsbStorageRequestMap(void) {
  sprx_dlsym(__handle, "sceUsbStorageRequestMap", &__ptr_sceUsbStorageRequestMap);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageRequestMapWSB\n"
    ".type sceUsbStorageRequestMapWSB @function\n"
    "sceUsbStorageRequestMapWSB:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageRequestMapWSB]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageRequestMapWSB\n"
    ".type __load_and_call_sceUsbStorageRequestMapWSB @function\n"
    "__load_and_call_sceUsbStorageRequestMapWSB:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageRequestMapWSB\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageRequestMapWSB]\n");

void __load_and_call_sceUsbStorageRequestMapWSB();
static __attribute__ ((used)) void* __ptr_sceUsbStorageRequestMapWSB = &__load_and_call_sceUsbStorageRequestMapWSB;

static __attribute__ ((used)) void
__load_sceUsbStorageRequestMapWSB(void) {
  sprx_dlsym(__handle, "sceUsbStorageRequestMapWSB", &__ptr_sceUsbStorageRequestMapWSB);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageRequestUnmap\n"
    ".type sceUsbStorageRequestUnmap @function\n"
    "sceUsbStorageRequestUnmap:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageRequestUnmap]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageRequestUnmap\n"
    ".type __load_and_call_sceUsbStorageRequestUnmap @function\n"
    "__load_and_call_sceUsbStorageRequestUnmap:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageRequestUnmap\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageRequestUnmap]\n");

void __load_and_call_sceUsbStorageRequestUnmap();
static __attribute__ ((used)) void* __ptr_sceUsbStorageRequestUnmap = &__load_and_call_sceUsbStorageRequestUnmap;

static __attribute__ ((used)) void
__load_sceUsbStorageRequestUnmap(void) {
  sprx_dlsym(__handle, "sceUsbStorageRequestUnmap", &__ptr_sceUsbStorageRequestUnmap);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageSetFakeMapLockForDebug\n"
    ".type sceUsbStorageSetFakeMapLockForDebug @function\n"
    "sceUsbStorageSetFakeMapLockForDebug:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageSetFakeMapLockForDebug]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageSetFakeMapLockForDebug\n"
    ".type __load_and_call_sceUsbStorageSetFakeMapLockForDebug @function\n"
    "__load_and_call_sceUsbStorageSetFakeMapLockForDebug:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageSetFakeMapLockForDebug\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageSetFakeMapLockForDebug]\n");

void __load_and_call_sceUsbStorageSetFakeMapLockForDebug();
static __attribute__ ((used)) void* __ptr_sceUsbStorageSetFakeMapLockForDebug = &__load_and_call_sceUsbStorageSetFakeMapLockForDebug;

static __attribute__ ((used)) void
__load_sceUsbStorageSetFakeMapLockForDebug(void) {
  sprx_dlsym(__handle, "sceUsbStorageSetFakeMapLockForDebug", &__ptr_sceUsbStorageSetFakeMapLockForDebug);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageSetFakeWriteProtection\n"
    ".type sceUsbStorageSetFakeWriteProtection @function\n"
    "sceUsbStorageSetFakeWriteProtection:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageSetFakeWriteProtection]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageSetFakeWriteProtection\n"
    ".type __load_and_call_sceUsbStorageSetFakeWriteProtection @function\n"
    "__load_and_call_sceUsbStorageSetFakeWriteProtection:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageSetFakeWriteProtection\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageSetFakeWriteProtection]\n");

void __load_and_call_sceUsbStorageSetFakeWriteProtection();
static __attribute__ ((used)) void* __ptr_sceUsbStorageSetFakeWriteProtection = &__load_and_call_sceUsbStorageSetFakeWriteProtection;

static __attribute__ ((used)) void
__load_sceUsbStorageSetFakeWriteProtection(void) {
  sprx_dlsym(__handle, "sceUsbStorageSetFakeWriteProtection", &__ptr_sceUsbStorageSetFakeWriteProtection);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageTerm\n"
    ".type sceUsbStorageTerm @function\n"
    "sceUsbStorageTerm:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageTerm]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageTerm\n"
    ".type __load_and_call_sceUsbStorageTerm @function\n"
    "__load_and_call_sceUsbStorageTerm:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageTerm\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageTerm]\n");

void __load_and_call_sceUsbStorageTerm();
static __attribute__ ((used)) void* __ptr_sceUsbStorageTerm = &__load_and_call_sceUsbStorageTerm;

static __attribute__ ((used)) void
__load_sceUsbStorageTerm(void) {
  sprx_dlsym(__handle, "sceUsbStorageTerm", &__ptr_sceUsbStorageTerm);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageUnregisterCallback\n"
    ".type sceUsbStorageUnregisterCallback @function\n"
    "sceUsbStorageUnregisterCallback:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageUnregisterCallback]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageUnregisterCallback\n"
    ".type __load_and_call_sceUsbStorageUnregisterCallback @function\n"
    "__load_and_call_sceUsbStorageUnregisterCallback:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageUnregisterCallback\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageUnregisterCallback]\n");

void __load_and_call_sceUsbStorageUnregisterCallback();
static __attribute__ ((used)) void* __ptr_sceUsbStorageUnregisterCallback = &__load_and_call_sceUsbStorageUnregisterCallback;

static __attribute__ ((used)) void
__load_sceUsbStorageUnregisterCallback(void) {
  sprx_dlsym(__handle, "sceUsbStorageUnregisterCallback", &__ptr_sceUsbStorageUnregisterCallback);
}

asm(".intel_syntax noprefix\n"
    ".global sceUsbStorageUnregisterCallbackForMapUnavailable\n"
    ".type sceUsbStorageUnregisterCallbackForMapUnavailable @function\n"
    "sceUsbStorageUnregisterCallbackForMapUnavailable:\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageUnregisterCallbackForMapUnavailable]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceUsbStorageUnregisterCallbackForMapUnavailable\n"
    ".type __load_and_call_sceUsbStorageUnregisterCallbackForMapUnavailable @function\n"
    "__load_and_call_sceUsbStorageUnregisterCallbackForMapUnavailable:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceUsbStorageUnregisterCallbackForMapUnavailable\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceUsbStorageUnregisterCallbackForMapUnavailable]\n");

void __load_and_call_sceUsbStorageUnregisterCallbackForMapUnavailable();
static __attribute__ ((used)) void* __ptr_sceUsbStorageUnregisterCallbackForMapUnavailable = &__load_and_call_sceUsbStorageUnregisterCallbackForMapUnavailable;

static __attribute__ ((used)) void
__load_sceUsbStorageUnregisterCallbackForMapUnavailable(void) {
  sprx_dlsym(__handle, "sceUsbStorageUnregisterCallbackForMapUnavailable", &__ptr_sceUsbStorageUnregisterCallbackForMapUnavailable);
}
