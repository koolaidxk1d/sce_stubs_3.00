/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceMove", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceMoveClose\n"
    ".type sceMoveClose @function\n"
    "sceMoveClose:\n"
    "jmp qword ptr [rip + __ptr_sceMoveClose]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveClose\n"
    ".type __load_and_call_sceMoveClose @function\n"
    "__load_and_call_sceMoveClose:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveClose\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveClose]\n");

void __load_and_call_sceMoveClose();
static __attribute__ ((used)) void* __ptr_sceMoveClose = &__load_and_call_sceMoveClose;

static __attribute__ ((used)) void
__load_sceMoveClose(void) {
  sprx_dlsym(__handle, "sceMoveClose", &__ptr_sceMoveClose);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveGetBluetoothAddress\n"
    ".type sceMoveGetBluetoothAddress @function\n"
    "sceMoveGetBluetoothAddress:\n"
    "jmp qword ptr [rip + __ptr_sceMoveGetBluetoothAddress]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveGetBluetoothAddress\n"
    ".type __load_and_call_sceMoveGetBluetoothAddress @function\n"
    "__load_and_call_sceMoveGetBluetoothAddress:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveGetBluetoothAddress\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveGetBluetoothAddress]\n");

void __load_and_call_sceMoveGetBluetoothAddress();
static __attribute__ ((used)) void* __ptr_sceMoveGetBluetoothAddress = &__load_and_call_sceMoveGetBluetoothAddress;

static __attribute__ ((used)) void
__load_sceMoveGetBluetoothAddress(void) {
  sprx_dlsym(__handle, "sceMoveGetBluetoothAddress", &__ptr_sceMoveGetBluetoothAddress);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveGetCalibrationInfo\n"
    ".type sceMoveGetCalibrationInfo @function\n"
    "sceMoveGetCalibrationInfo:\n"
    "jmp qword ptr [rip + __ptr_sceMoveGetCalibrationInfo]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveGetCalibrationInfo\n"
    ".type __load_and_call_sceMoveGetCalibrationInfo @function\n"
    "__load_and_call_sceMoveGetCalibrationInfo:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveGetCalibrationInfo\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveGetCalibrationInfo]\n");

void __load_and_call_sceMoveGetCalibrationInfo();
static __attribute__ ((used)) void* __ptr_sceMoveGetCalibrationInfo = &__load_and_call_sceMoveGetCalibrationInfo;

static __attribute__ ((used)) void
__load_sceMoveGetCalibrationInfo(void) {
  sprx_dlsym(__handle, "sceMoveGetCalibrationInfo", &__ptr_sceMoveGetCalibrationInfo);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveGetDeviceId\n"
    ".type sceMoveGetDeviceId @function\n"
    "sceMoveGetDeviceId:\n"
    "jmp qword ptr [rip + __ptr_sceMoveGetDeviceId]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveGetDeviceId\n"
    ".type __load_and_call_sceMoveGetDeviceId @function\n"
    "__load_and_call_sceMoveGetDeviceId:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveGetDeviceId\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveGetDeviceId]\n");

void __load_and_call_sceMoveGetDeviceId();
static __attribute__ ((used)) void* __ptr_sceMoveGetDeviceId = &__load_and_call_sceMoveGetDeviceId;

static __attribute__ ((used)) void
__load_sceMoveGetDeviceId(void) {
  sprx_dlsym(__handle, "sceMoveGetDeviceId", &__ptr_sceMoveGetDeviceId);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveGetDeviceInfo\n"
    ".type sceMoveGetDeviceInfo @function\n"
    "sceMoveGetDeviceInfo:\n"
    "jmp qword ptr [rip + __ptr_sceMoveGetDeviceInfo]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveGetDeviceInfo\n"
    ".type __load_and_call_sceMoveGetDeviceInfo @function\n"
    "__load_and_call_sceMoveGetDeviceInfo:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveGetDeviceInfo\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveGetDeviceInfo]\n");

void __load_and_call_sceMoveGetDeviceInfo();
static __attribute__ ((used)) void* __ptr_sceMoveGetDeviceInfo = &__load_and_call_sceMoveGetDeviceInfo;

static __attribute__ ((used)) void
__load_sceMoveGetDeviceInfo(void) {
  sprx_dlsym(__handle, "sceMoveGetDeviceInfo", &__ptr_sceMoveGetDeviceInfo);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveGetExtensionPortInfo\n"
    ".type sceMoveGetExtensionPortInfo @function\n"
    "sceMoveGetExtensionPortInfo:\n"
    "jmp qword ptr [rip + __ptr_sceMoveGetExtensionPortInfo]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveGetExtensionPortInfo\n"
    ".type __load_and_call_sceMoveGetExtensionPortInfo @function\n"
    "__load_and_call_sceMoveGetExtensionPortInfo:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveGetExtensionPortInfo\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveGetExtensionPortInfo]\n");

void __load_and_call_sceMoveGetExtensionPortInfo();
static __attribute__ ((used)) void* __ptr_sceMoveGetExtensionPortInfo = &__load_and_call_sceMoveGetExtensionPortInfo;

static __attribute__ ((used)) void
__load_sceMoveGetExtensionPortInfo(void) {
  sprx_dlsym(__handle, "sceMoveGetExtensionPortInfo", &__ptr_sceMoveGetExtensionPortInfo);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveInit\n"
    ".type sceMoveInit @function\n"
    "sceMoveInit:\n"
    "jmp qword ptr [rip + __ptr_sceMoveInit]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveInit\n"
    ".type __load_and_call_sceMoveInit @function\n"
    "__load_and_call_sceMoveInit:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveInit\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveInit]\n");

void __load_and_call_sceMoveInit();
static __attribute__ ((used)) void* __ptr_sceMoveInit = &__load_and_call_sceMoveInit;

static __attribute__ ((used)) void
__load_sceMoveInit(void) {
  sprx_dlsym(__handle, "sceMoveInit", &__ptr_sceMoveInit);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveIsReproductionModel\n"
    ".type sceMoveIsReproductionModel @function\n"
    "sceMoveIsReproductionModel:\n"
    "jmp qword ptr [rip + __ptr_sceMoveIsReproductionModel]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveIsReproductionModel\n"
    ".type __load_and_call_sceMoveIsReproductionModel @function\n"
    "__load_and_call_sceMoveIsReproductionModel:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveIsReproductionModel\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveIsReproductionModel]\n");

void __load_and_call_sceMoveIsReproductionModel();
static __attribute__ ((used)) void* __ptr_sceMoveIsReproductionModel = &__load_and_call_sceMoveIsReproductionModel;

static __attribute__ ((used)) void
__load_sceMoveIsReproductionModel(void) {
  sprx_dlsym(__handle, "sceMoveIsReproductionModel", &__ptr_sceMoveIsReproductionModel);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveIsValidHandle\n"
    ".type sceMoveIsValidHandle @function\n"
    "sceMoveIsValidHandle:\n"
    "jmp qword ptr [rip + __ptr_sceMoveIsValidHandle]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveIsValidHandle\n"
    ".type __load_and_call_sceMoveIsValidHandle @function\n"
    "__load_and_call_sceMoveIsValidHandle:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveIsValidHandle\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveIsValidHandle]\n");

void __load_and_call_sceMoveIsValidHandle();
static __attribute__ ((used)) void* __ptr_sceMoveIsValidHandle = &__load_and_call_sceMoveIsValidHandle;

static __attribute__ ((used)) void
__load_sceMoveIsValidHandle(void) {
  sprx_dlsym(__handle, "sceMoveIsValidHandle", &__ptr_sceMoveIsValidHandle);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveOpen\n"
    ".type sceMoveOpen @function\n"
    "sceMoveOpen:\n"
    "jmp qword ptr [rip + __ptr_sceMoveOpen]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveOpen\n"
    ".type __load_and_call_sceMoveOpen @function\n"
    "__load_and_call_sceMoveOpen:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveOpen\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveOpen]\n");

void __load_and_call_sceMoveOpen();
static __attribute__ ((used)) void* __ptr_sceMoveOpen = &__load_and_call_sceMoveOpen;

static __attribute__ ((used)) void
__load_sceMoveOpen(void) {
  sprx_dlsym(__handle, "sceMoveOpen", &__ptr_sceMoveOpen);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveReadStateLatest\n"
    ".type sceMoveReadStateLatest @function\n"
    "sceMoveReadStateLatest:\n"
    "jmp qword ptr [rip + __ptr_sceMoveReadStateLatest]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveReadStateLatest\n"
    ".type __load_and_call_sceMoveReadStateLatest @function\n"
    "__load_and_call_sceMoveReadStateLatest:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveReadStateLatest\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveReadStateLatest]\n");

void __load_and_call_sceMoveReadStateLatest();
static __attribute__ ((used)) void* __ptr_sceMoveReadStateLatest = &__load_and_call_sceMoveReadStateLatest;

static __attribute__ ((used)) void
__load_sceMoveReadStateLatest(void) {
  sprx_dlsym(__handle, "sceMoveReadStateLatest", &__ptr_sceMoveReadStateLatest);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveReadStateRecent\n"
    ".type sceMoveReadStateRecent @function\n"
    "sceMoveReadStateRecent:\n"
    "jmp qword ptr [rip + __ptr_sceMoveReadStateRecent]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveReadStateRecent\n"
    ".type __load_and_call_sceMoveReadStateRecent @function\n"
    "__load_and_call_sceMoveReadStateRecent:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveReadStateRecent\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveReadStateRecent]\n");

void __load_and_call_sceMoveReadStateRecent();
static __attribute__ ((used)) void* __ptr_sceMoveReadStateRecent = &__load_and_call_sceMoveReadStateRecent;

static __attribute__ ((used)) void
__load_sceMoveReadStateRecent(void) {
  sprx_dlsym(__handle, "sceMoveReadStateRecent", &__ptr_sceMoveReadStateRecent);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveReadStateRecentForTracker\n"
    ".type sceMoveReadStateRecentForTracker @function\n"
    "sceMoveReadStateRecentForTracker:\n"
    "jmp qword ptr [rip + __ptr_sceMoveReadStateRecentForTracker]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveReadStateRecentForTracker\n"
    ".type __load_and_call_sceMoveReadStateRecentForTracker @function\n"
    "__load_and_call_sceMoveReadStateRecentForTracker:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveReadStateRecentForTracker\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveReadStateRecentForTracker]\n");

void __load_and_call_sceMoveReadStateRecentForTracker();
static __attribute__ ((used)) void* __ptr_sceMoveReadStateRecentForTracker = &__load_and_call_sceMoveReadStateRecentForTracker;

static __attribute__ ((used)) void
__load_sceMoveReadStateRecentForTracker(void) {
  sprx_dlsym(__handle, "sceMoveReadStateRecentForTracker", &__ptr_sceMoveReadStateRecentForTracker);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveResetLightSphere\n"
    ".type sceMoveResetLightSphere @function\n"
    "sceMoveResetLightSphere:\n"
    "jmp qword ptr [rip + __ptr_sceMoveResetLightSphere]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveResetLightSphere\n"
    ".type __load_and_call_sceMoveResetLightSphere @function\n"
    "__load_and_call_sceMoveResetLightSphere:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveResetLightSphere\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveResetLightSphere]\n");

void __load_and_call_sceMoveResetLightSphere();
static __attribute__ ((used)) void* __ptr_sceMoveResetLightSphere = &__load_and_call_sceMoveResetLightSphere;

static __attribute__ ((used)) void
__load_sceMoveResetLightSphere(void) {
  sprx_dlsym(__handle, "sceMoveResetLightSphere", &__ptr_sceMoveResetLightSphere);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveSetCalibrationMode\n"
    ".type sceMoveSetCalibrationMode @function\n"
    "sceMoveSetCalibrationMode:\n"
    "jmp qword ptr [rip + __ptr_sceMoveSetCalibrationMode]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveSetCalibrationMode\n"
    ".type __load_and_call_sceMoveSetCalibrationMode @function\n"
    "__load_and_call_sceMoveSetCalibrationMode:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveSetCalibrationMode\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveSetCalibrationMode]\n");

void __load_and_call_sceMoveSetCalibrationMode();
static __attribute__ ((used)) void* __ptr_sceMoveSetCalibrationMode = &__load_and_call_sceMoveSetCalibrationMode;

static __attribute__ ((used)) void
__load_sceMoveSetCalibrationMode(void) {
  sprx_dlsym(__handle, "sceMoveSetCalibrationMode", &__ptr_sceMoveSetCalibrationMode);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveSetExtensionPortOutput\n"
    ".type sceMoveSetExtensionPortOutput @function\n"
    "sceMoveSetExtensionPortOutput:\n"
    "jmp qword ptr [rip + __ptr_sceMoveSetExtensionPortOutput]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveSetExtensionPortOutput\n"
    ".type __load_and_call_sceMoveSetExtensionPortOutput @function\n"
    "__load_and_call_sceMoveSetExtensionPortOutput:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveSetExtensionPortOutput\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveSetExtensionPortOutput]\n");

void __load_and_call_sceMoveSetExtensionPortOutput();
static __attribute__ ((used)) void* __ptr_sceMoveSetExtensionPortOutput = &__load_and_call_sceMoveSetExtensionPortOutput;

static __attribute__ ((used)) void
__load_sceMoveSetExtensionPortOutput(void) {
  sprx_dlsym(__handle, "sceMoveSetExtensionPortOutput", &__ptr_sceMoveSetExtensionPortOutput);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveSetLightSphere\n"
    ".type sceMoveSetLightSphere @function\n"
    "sceMoveSetLightSphere:\n"
    "jmp qword ptr [rip + __ptr_sceMoveSetLightSphere]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveSetLightSphere\n"
    ".type __load_and_call_sceMoveSetLightSphere @function\n"
    "__load_and_call_sceMoveSetLightSphere:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveSetLightSphere\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveSetLightSphere]\n");

void __load_and_call_sceMoveSetLightSphere();
static __attribute__ ((used)) void* __ptr_sceMoveSetLightSphere = &__load_and_call_sceMoveSetLightSphere;

static __attribute__ ((used)) void
__load_sceMoveSetLightSphere(void) {
  sprx_dlsym(__handle, "sceMoveSetLightSphere", &__ptr_sceMoveSetLightSphere);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveSetLightSphereForTracker\n"
    ".type sceMoveSetLightSphereForTracker @function\n"
    "sceMoveSetLightSphereForTracker:\n"
    "jmp qword ptr [rip + __ptr_sceMoveSetLightSphereForTracker]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveSetLightSphereForTracker\n"
    ".type __load_and_call_sceMoveSetLightSphereForTracker @function\n"
    "__load_and_call_sceMoveSetLightSphereForTracker:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveSetLightSphereForTracker\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveSetLightSphereForTracker]\n");

void __load_and_call_sceMoveSetLightSphereForTracker();
static __attribute__ ((used)) void* __ptr_sceMoveSetLightSphereForTracker = &__load_and_call_sceMoveSetLightSphereForTracker;

static __attribute__ ((used)) void
__load_sceMoveSetLightSphereForTracker(void) {
  sprx_dlsym(__handle, "sceMoveSetLightSphereForTracker", &__ptr_sceMoveSetLightSphereForTracker);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveSetVibration\n"
    ".type sceMoveSetVibration @function\n"
    "sceMoveSetVibration:\n"
    "jmp qword ptr [rip + __ptr_sceMoveSetVibration]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveSetVibration\n"
    ".type __load_and_call_sceMoveSetVibration @function\n"
    "__load_and_call_sceMoveSetVibration:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveSetVibration\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveSetVibration]\n");

void __load_and_call_sceMoveSetVibration();
static __attribute__ ((used)) void* __ptr_sceMoveSetVibration = &__load_and_call_sceMoveSetVibration;

static __attribute__ ((used)) void
__load_sceMoveSetVibration(void) {
  sprx_dlsym(__handle, "sceMoveSetVibration", &__ptr_sceMoveSetVibration);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTerm\n"
    ".type sceMoveTerm @function\n"
    "sceMoveTerm:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTerm]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTerm\n"
    ".type __load_and_call_sceMoveTerm @function\n"
    "__load_and_call_sceMoveTerm:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTerm\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTerm]\n");

void __load_and_call_sceMoveTerm();
static __attribute__ ((used)) void* __ptr_sceMoveTerm = &__load_and_call_sceMoveTerm;

static __attribute__ ((used)) void
__load_sceMoveTerm(void) {
  sprx_dlsym(__handle, "sceMoveTerm", &__ptr_sceMoveTerm);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveWriteCalibrationInfo\n"
    ".type sceMoveWriteCalibrationInfo @function\n"
    "sceMoveWriteCalibrationInfo:\n"
    "jmp qword ptr [rip + __ptr_sceMoveWriteCalibrationInfo]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveWriteCalibrationInfo\n"
    ".type __load_and_call_sceMoveWriteCalibrationInfo @function\n"
    "__load_and_call_sceMoveWriteCalibrationInfo:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveWriteCalibrationInfo\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveWriteCalibrationInfo]\n");

void __load_and_call_sceMoveWriteCalibrationInfo();
static __attribute__ ((used)) void* __ptr_sceMoveWriteCalibrationInfo = &__load_and_call_sceMoveWriteCalibrationInfo;

static __attribute__ ((used)) void
__load_sceMoveWriteCalibrationInfo(void) {
  sprx_dlsym(__handle, "sceMoveWriteCalibrationInfo", &__ptr_sceMoveWriteCalibrationInfo);
}