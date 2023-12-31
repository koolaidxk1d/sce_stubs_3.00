/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceVrTracker", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerCpuProcess\n"
    ".type sceVrTrackerCpuProcess @function\n"
    "sceVrTrackerCpuProcess:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerCpuProcess]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerCpuProcess\n"
    ".type __load_and_call_sceVrTrackerCpuProcess @function\n"
    "__load_and_call_sceVrTrackerCpuProcess:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerCpuProcess\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerCpuProcess]\n");

void __load_and_call_sceVrTrackerCpuProcess();
static __attribute__ ((used)) void* __ptr_sceVrTrackerCpuProcess = &__load_and_call_sceVrTrackerCpuProcess;

static __attribute__ ((used)) void
__load_sceVrTrackerCpuProcess(void) {
  sprx_dlsym(__handle, "sceVrTrackerCpuProcess", &__ptr_sceVrTrackerCpuProcess);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerGetPlayAreaWarningInfo\n"
    ".type sceVrTrackerGetPlayAreaWarningInfo @function\n"
    "sceVrTrackerGetPlayAreaWarningInfo:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerGetPlayAreaWarningInfo]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerGetPlayAreaWarningInfo\n"
    ".type __load_and_call_sceVrTrackerGetPlayAreaWarningInfo @function\n"
    "__load_and_call_sceVrTrackerGetPlayAreaWarningInfo:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerGetPlayAreaWarningInfo\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerGetPlayAreaWarningInfo]\n");

void __load_and_call_sceVrTrackerGetPlayAreaWarningInfo();
static __attribute__ ((used)) void* __ptr_sceVrTrackerGetPlayAreaWarningInfo = &__load_and_call_sceVrTrackerGetPlayAreaWarningInfo;

static __attribute__ ((used)) void
__load_sceVrTrackerGetPlayAreaWarningInfo(void) {
  sprx_dlsym(__handle, "sceVrTrackerGetPlayAreaWarningInfo", &__ptr_sceVrTrackerGetPlayAreaWarningInfo);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerGetResult\n"
    ".type sceVrTrackerGetResult @function\n"
    "sceVrTrackerGetResult:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerGetResult]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerGetResult\n"
    ".type __load_and_call_sceVrTrackerGetResult @function\n"
    "__load_and_call_sceVrTrackerGetResult:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerGetResult\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerGetResult]\n");

void __load_and_call_sceVrTrackerGetResult();
static __attribute__ ((used)) void* __ptr_sceVrTrackerGetResult = &__load_and_call_sceVrTrackerGetResult;

static __attribute__ ((used)) void
__load_sceVrTrackerGetResult(void) {
  sprx_dlsym(__handle, "sceVrTrackerGetResult", &__ptr_sceVrTrackerGetResult);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerGetTime\n"
    ".type sceVrTrackerGetTime @function\n"
    "sceVrTrackerGetTime:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerGetTime]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerGetTime\n"
    ".type __load_and_call_sceVrTrackerGetTime @function\n"
    "__load_and_call_sceVrTrackerGetTime:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerGetTime\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerGetTime]\n");

void __load_and_call_sceVrTrackerGetTime();
static __attribute__ ((used)) void* __ptr_sceVrTrackerGetTime = &__load_and_call_sceVrTrackerGetTime;

static __attribute__ ((used)) void
__load_sceVrTrackerGetTime(void) {
  sprx_dlsym(__handle, "sceVrTrackerGetTime", &__ptr_sceVrTrackerGetTime);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerGpuSubmit\n"
    ".type sceVrTrackerGpuSubmit @function\n"
    "sceVrTrackerGpuSubmit:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerGpuSubmit]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerGpuSubmit\n"
    ".type __load_and_call_sceVrTrackerGpuSubmit @function\n"
    "__load_and_call_sceVrTrackerGpuSubmit:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerGpuSubmit\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerGpuSubmit]\n");

void __load_and_call_sceVrTrackerGpuSubmit();
static __attribute__ ((used)) void* __ptr_sceVrTrackerGpuSubmit = &__load_and_call_sceVrTrackerGpuSubmit;

static __attribute__ ((used)) void
__load_sceVrTrackerGpuSubmit(void) {
  sprx_dlsym(__handle, "sceVrTrackerGpuSubmit", &__ptr_sceVrTrackerGpuSubmit);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerGpuWait\n"
    ".type sceVrTrackerGpuWait @function\n"
    "sceVrTrackerGpuWait:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerGpuWait]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerGpuWait\n"
    ".type __load_and_call_sceVrTrackerGpuWait @function\n"
    "__load_and_call_sceVrTrackerGpuWait:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerGpuWait\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerGpuWait]\n");

void __load_and_call_sceVrTrackerGpuWait();
static __attribute__ ((used)) void* __ptr_sceVrTrackerGpuWait = &__load_and_call_sceVrTrackerGpuWait;

static __attribute__ ((used)) void
__load_sceVrTrackerGpuWait(void) {
  sprx_dlsym(__handle, "sceVrTrackerGpuWait", &__ptr_sceVrTrackerGpuWait);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerGpuWaitAndCpuProcess\n"
    ".type sceVrTrackerGpuWaitAndCpuProcess @function\n"
    "sceVrTrackerGpuWaitAndCpuProcess:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerGpuWaitAndCpuProcess]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerGpuWaitAndCpuProcess\n"
    ".type __load_and_call_sceVrTrackerGpuWaitAndCpuProcess @function\n"
    "__load_and_call_sceVrTrackerGpuWaitAndCpuProcess:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerGpuWaitAndCpuProcess\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerGpuWaitAndCpuProcess]\n");

void __load_and_call_sceVrTrackerGpuWaitAndCpuProcess();
static __attribute__ ((used)) void* __ptr_sceVrTrackerGpuWaitAndCpuProcess = &__load_and_call_sceVrTrackerGpuWaitAndCpuProcess;

static __attribute__ ((used)) void
__load_sceVrTrackerGpuWaitAndCpuProcess(void) {
  sprx_dlsym(__handle, "sceVrTrackerGpuWaitAndCpuProcess", &__ptr_sceVrTrackerGpuWaitAndCpuProcess);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerInit\n"
    ".type sceVrTrackerInit @function\n"
    "sceVrTrackerInit:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerInit]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerInit\n"
    ".type __load_and_call_sceVrTrackerInit @function\n"
    "__load_and_call_sceVrTrackerInit:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerInit\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerInit]\n");

void __load_and_call_sceVrTrackerInit();
static __attribute__ ((used)) void* __ptr_sceVrTrackerInit = &__load_and_call_sceVrTrackerInit;

static __attribute__ ((used)) void
__load_sceVrTrackerInit(void) {
  sprx_dlsym(__handle, "sceVrTrackerInit", &__ptr_sceVrTrackerInit);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerNotifyEndOfCpuProcess\n"
    ".type sceVrTrackerNotifyEndOfCpuProcess @function\n"
    "sceVrTrackerNotifyEndOfCpuProcess:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerNotifyEndOfCpuProcess]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerNotifyEndOfCpuProcess\n"
    ".type __load_and_call_sceVrTrackerNotifyEndOfCpuProcess @function\n"
    "__load_and_call_sceVrTrackerNotifyEndOfCpuProcess:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerNotifyEndOfCpuProcess\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerNotifyEndOfCpuProcess]\n");

void __load_and_call_sceVrTrackerNotifyEndOfCpuProcess();
static __attribute__ ((used)) void* __ptr_sceVrTrackerNotifyEndOfCpuProcess = &__load_and_call_sceVrTrackerNotifyEndOfCpuProcess;

static __attribute__ ((used)) void
__load_sceVrTrackerNotifyEndOfCpuProcess(void) {
  sprx_dlsym(__handle, "sceVrTrackerNotifyEndOfCpuProcess", &__ptr_sceVrTrackerNotifyEndOfCpuProcess);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerQueryMemory\n"
    ".type sceVrTrackerQueryMemory @function\n"
    "sceVrTrackerQueryMemory:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerQueryMemory]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerQueryMemory\n"
    ".type __load_and_call_sceVrTrackerQueryMemory @function\n"
    "__load_and_call_sceVrTrackerQueryMemory:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerQueryMemory\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerQueryMemory]\n");

void __load_and_call_sceVrTrackerQueryMemory();
static __attribute__ ((used)) void* __ptr_sceVrTrackerQueryMemory = &__load_and_call_sceVrTrackerQueryMemory;

static __attribute__ ((used)) void
__load_sceVrTrackerQueryMemory(void) {
  sprx_dlsym(__handle, "sceVrTrackerQueryMemory", &__ptr_sceVrTrackerQueryMemory);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerRecalibrate\n"
    ".type sceVrTrackerRecalibrate @function\n"
    "sceVrTrackerRecalibrate:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerRecalibrate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerRecalibrate\n"
    ".type __load_and_call_sceVrTrackerRecalibrate @function\n"
    "__load_and_call_sceVrTrackerRecalibrate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerRecalibrate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerRecalibrate]\n");

void __load_and_call_sceVrTrackerRecalibrate();
static __attribute__ ((used)) void* __ptr_sceVrTrackerRecalibrate = &__load_and_call_sceVrTrackerRecalibrate;

static __attribute__ ((used)) void
__load_sceVrTrackerRecalibrate(void) {
  sprx_dlsym(__handle, "sceVrTrackerRecalibrate", &__ptr_sceVrTrackerRecalibrate);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerRegisterDevice\n"
    ".type sceVrTrackerRegisterDevice @function\n"
    "sceVrTrackerRegisterDevice:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerRegisterDevice]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerRegisterDevice\n"
    ".type __load_and_call_sceVrTrackerRegisterDevice @function\n"
    "__load_and_call_sceVrTrackerRegisterDevice:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerRegisterDevice\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerRegisterDevice]\n");

void __load_and_call_sceVrTrackerRegisterDevice();
static __attribute__ ((used)) void* __ptr_sceVrTrackerRegisterDevice = &__load_and_call_sceVrTrackerRegisterDevice;

static __attribute__ ((used)) void
__load_sceVrTrackerRegisterDevice(void) {
  sprx_dlsym(__handle, "sceVrTrackerRegisterDevice", &__ptr_sceVrTrackerRegisterDevice);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerRegisterDeviceInternal\n"
    ".type sceVrTrackerRegisterDeviceInternal @function\n"
    "sceVrTrackerRegisterDeviceInternal:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerRegisterDeviceInternal]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerRegisterDeviceInternal\n"
    ".type __load_and_call_sceVrTrackerRegisterDeviceInternal @function\n"
    "__load_and_call_sceVrTrackerRegisterDeviceInternal:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerRegisterDeviceInternal\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerRegisterDeviceInternal]\n");

void __load_and_call_sceVrTrackerRegisterDeviceInternal();
static __attribute__ ((used)) void* __ptr_sceVrTrackerRegisterDeviceInternal = &__load_and_call_sceVrTrackerRegisterDeviceInternal;

static __attribute__ ((used)) void
__load_sceVrTrackerRegisterDeviceInternal(void) {
  sprx_dlsym(__handle, "sceVrTrackerRegisterDeviceInternal", &__ptr_sceVrTrackerRegisterDeviceInternal);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerResetAll\n"
    ".type sceVrTrackerResetAll @function\n"
    "sceVrTrackerResetAll:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerResetAll]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerResetAll\n"
    ".type __load_and_call_sceVrTrackerResetAll @function\n"
    "__load_and_call_sceVrTrackerResetAll:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerResetAll\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerResetAll]\n");

void __load_and_call_sceVrTrackerResetAll();
static __attribute__ ((used)) void* __ptr_sceVrTrackerResetAll = &__load_and_call_sceVrTrackerResetAll;

static __attribute__ ((used)) void
__load_sceVrTrackerResetAll(void) {
  sprx_dlsym(__handle, "sceVrTrackerResetAll", &__ptr_sceVrTrackerResetAll);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerResetOrientationRelative\n"
    ".type sceVrTrackerResetOrientationRelative @function\n"
    "sceVrTrackerResetOrientationRelative:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerResetOrientationRelative]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerResetOrientationRelative\n"
    ".type __load_and_call_sceVrTrackerResetOrientationRelative @function\n"
    "__load_and_call_sceVrTrackerResetOrientationRelative:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerResetOrientationRelative\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerResetOrientationRelative]\n");

void __load_and_call_sceVrTrackerResetOrientationRelative();
static __attribute__ ((used)) void* __ptr_sceVrTrackerResetOrientationRelative = &__load_and_call_sceVrTrackerResetOrientationRelative;

static __attribute__ ((used)) void
__load_sceVrTrackerResetOrientationRelative(void) {
  sprx_dlsym(__handle, "sceVrTrackerResetOrientationRelative", &__ptr_sceVrTrackerResetOrientationRelative);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerSaveInternalBuffers\n"
    ".type sceVrTrackerSaveInternalBuffers @function\n"
    "sceVrTrackerSaveInternalBuffers:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerSaveInternalBuffers]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerSaveInternalBuffers\n"
    ".type __load_and_call_sceVrTrackerSaveInternalBuffers @function\n"
    "__load_and_call_sceVrTrackerSaveInternalBuffers:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerSaveInternalBuffers\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerSaveInternalBuffers]\n");

void __load_and_call_sceVrTrackerSaveInternalBuffers();
static __attribute__ ((used)) void* __ptr_sceVrTrackerSaveInternalBuffers = &__load_and_call_sceVrTrackerSaveInternalBuffers;

static __attribute__ ((used)) void
__load_sceVrTrackerSaveInternalBuffers(void) {
  sprx_dlsym(__handle, "sceVrTrackerSaveInternalBuffers", &__ptr_sceVrTrackerSaveInternalBuffers);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerSetDurationUntilStatusNotTracking\n"
    ".type sceVrTrackerSetDurationUntilStatusNotTracking @function\n"
    "sceVrTrackerSetDurationUntilStatusNotTracking:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerSetDurationUntilStatusNotTracking]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerSetDurationUntilStatusNotTracking\n"
    ".type __load_and_call_sceVrTrackerSetDurationUntilStatusNotTracking @function\n"
    "__load_and_call_sceVrTrackerSetDurationUntilStatusNotTracking:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerSetDurationUntilStatusNotTracking\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerSetDurationUntilStatusNotTracking]\n");

void __load_and_call_sceVrTrackerSetDurationUntilStatusNotTracking();
static __attribute__ ((used)) void* __ptr_sceVrTrackerSetDurationUntilStatusNotTracking = &__load_and_call_sceVrTrackerSetDurationUntilStatusNotTracking;

static __attribute__ ((used)) void
__load_sceVrTrackerSetDurationUntilStatusNotTracking(void) {
  sprx_dlsym(__handle, "sceVrTrackerSetDurationUntilStatusNotTracking", &__ptr_sceVrTrackerSetDurationUntilStatusNotTracking);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerSetExtendedMode\n"
    ".type sceVrTrackerSetExtendedMode @function\n"
    "sceVrTrackerSetExtendedMode:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerSetExtendedMode]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerSetExtendedMode\n"
    ".type __load_and_call_sceVrTrackerSetExtendedMode @function\n"
    "__load_and_call_sceVrTrackerSetExtendedMode:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerSetExtendedMode\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerSetExtendedMode]\n");

void __load_and_call_sceVrTrackerSetExtendedMode();
static __attribute__ ((used)) void* __ptr_sceVrTrackerSetExtendedMode = &__load_and_call_sceVrTrackerSetExtendedMode;

static __attribute__ ((used)) void
__load_sceVrTrackerSetExtendedMode(void) {
  sprx_dlsym(__handle, "sceVrTrackerSetExtendedMode", &__ptr_sceVrTrackerSetExtendedMode);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerSetLEDBrightness\n"
    ".type sceVrTrackerSetLEDBrightness @function\n"
    "sceVrTrackerSetLEDBrightness:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerSetLEDBrightness]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerSetLEDBrightness\n"
    ".type __load_and_call_sceVrTrackerSetLEDBrightness @function\n"
    "__load_and_call_sceVrTrackerSetLEDBrightness:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerSetLEDBrightness\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerSetLEDBrightness]\n");

void __load_and_call_sceVrTrackerSetLEDBrightness();
static __attribute__ ((used)) void* __ptr_sceVrTrackerSetLEDBrightness = &__load_and_call_sceVrTrackerSetLEDBrightness;

static __attribute__ ((used)) void
__load_sceVrTrackerSetLEDBrightness(void) {
  sprx_dlsym(__handle, "sceVrTrackerSetLEDBrightness", &__ptr_sceVrTrackerSetLEDBrightness);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerSetRestingMode\n"
    ".type sceVrTrackerSetRestingMode @function\n"
    "sceVrTrackerSetRestingMode:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerSetRestingMode]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerSetRestingMode\n"
    ".type __load_and_call_sceVrTrackerSetRestingMode @function\n"
    "__load_and_call_sceVrTrackerSetRestingMode:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerSetRestingMode\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerSetRestingMode]\n");

void __load_and_call_sceVrTrackerSetRestingMode();
static __attribute__ ((used)) void* __ptr_sceVrTrackerSetRestingMode = &__load_and_call_sceVrTrackerSetRestingMode;

static __attribute__ ((used)) void
__load_sceVrTrackerSetRestingMode(void) {
  sprx_dlsym(__handle, "sceVrTrackerSetRestingMode", &__ptr_sceVrTrackerSetRestingMode);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerTerm\n"
    ".type sceVrTrackerTerm @function\n"
    "sceVrTrackerTerm:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerTerm]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerTerm\n"
    ".type __load_and_call_sceVrTrackerTerm @function\n"
    "__load_and_call_sceVrTrackerTerm:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerTerm\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerTerm]\n");

void __load_and_call_sceVrTrackerTerm();
static __attribute__ ((used)) void* __ptr_sceVrTrackerTerm = &__load_and_call_sceVrTrackerTerm;

static __attribute__ ((used)) void
__load_sceVrTrackerTerm(void) {
  sprx_dlsym(__handle, "sceVrTrackerTerm", &__ptr_sceVrTrackerTerm);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerUnregisterDevice\n"
    ".type sceVrTrackerUnregisterDevice @function\n"
    "sceVrTrackerUnregisterDevice:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerUnregisterDevice]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerUnregisterDevice\n"
    ".type __load_and_call_sceVrTrackerUnregisterDevice @function\n"
    "__load_and_call_sceVrTrackerUnregisterDevice:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerUnregisterDevice\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerUnregisterDevice]\n");

void __load_and_call_sceVrTrackerUnregisterDevice();
static __attribute__ ((used)) void* __ptr_sceVrTrackerUnregisterDevice = &__load_and_call_sceVrTrackerUnregisterDevice;

static __attribute__ ((used)) void
__load_sceVrTrackerUnregisterDevice(void) {
  sprx_dlsym(__handle, "sceVrTrackerUnregisterDevice", &__ptr_sceVrTrackerUnregisterDevice);
}

asm(".intel_syntax noprefix\n"
    ".global sceVrTrackerUpdateMotionSensorData\n"
    ".type sceVrTrackerUpdateMotionSensorData @function\n"
    "sceVrTrackerUpdateMotionSensorData:\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerUpdateMotionSensorData]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVrTrackerUpdateMotionSensorData\n"
    ".type __load_and_call_sceVrTrackerUpdateMotionSensorData @function\n"
    "__load_and_call_sceVrTrackerUpdateMotionSensorData:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVrTrackerUpdateMotionSensorData\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVrTrackerUpdateMotionSensorData]\n");

void __load_and_call_sceVrTrackerUpdateMotionSensorData();
static __attribute__ ((used)) void* __ptr_sceVrTrackerUpdateMotionSensorData = &__load_and_call_sceVrTrackerUpdateMotionSensorData;

static __attribute__ ((used)) void
__load_sceVrTrackerUpdateMotionSensorData(void) {
  sprx_dlsym(__handle, "sceVrTrackerUpdateMotionSensorData", &__ptr_sceVrTrackerUpdateMotionSensorData);
}
