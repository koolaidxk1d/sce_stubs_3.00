/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceMoveTracker", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerCalibrateReset\n"
    ".type sceMoveTrackerCalibrateReset @function\n"
    "sceMoveTrackerCalibrateReset:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCalibrateReset]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerCalibrateReset\n"
    ".type __load_and_call_sceMoveTrackerCalibrateReset @function\n"
    "__load_and_call_sceMoveTrackerCalibrateReset:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerCalibrateReset\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCalibrateReset]\n");

void __load_and_call_sceMoveTrackerCalibrateReset();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerCalibrateReset = &__load_and_call_sceMoveTrackerCalibrateReset;

static __attribute__ ((used)) void
__load_sceMoveTrackerCalibrateReset(void) {
  sprx_dlsym(__handle, "sceMoveTrackerCalibrateReset", &__ptr_sceMoveTrackerCalibrateReset);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerCalibrateYaw\n"
    ".type sceMoveTrackerCalibrateYaw @function\n"
    "sceMoveTrackerCalibrateYaw:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCalibrateYaw]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerCalibrateYaw\n"
    ".type __load_and_call_sceMoveTrackerCalibrateYaw @function\n"
    "__load_and_call_sceMoveTrackerCalibrateYaw:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerCalibrateYaw\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCalibrateYaw]\n");

void __load_and_call_sceMoveTrackerCalibrateYaw();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerCalibrateYaw = &__load_and_call_sceMoveTrackerCalibrateYaw;

static __attribute__ ((used)) void
__load_sceMoveTrackerCalibrateYaw(void) {
  sprx_dlsym(__handle, "sceMoveTrackerCalibrateYaw", &__ptr_sceMoveTrackerCalibrateYaw);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerCameraUpdate\n"
    ".type sceMoveTrackerCameraUpdate @function\n"
    "sceMoveTrackerCameraUpdate:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCameraUpdate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerCameraUpdate\n"
    ".type __load_and_call_sceMoveTrackerCameraUpdate @function\n"
    "__load_and_call_sceMoveTrackerCameraUpdate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerCameraUpdate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCameraUpdate]\n");

void __load_and_call_sceMoveTrackerCameraUpdate();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerCameraUpdate = &__load_and_call_sceMoveTrackerCameraUpdate;

static __attribute__ ((used)) void
__load_sceMoveTrackerCameraUpdate(void) {
  sprx_dlsym(__handle, "sceMoveTrackerCameraUpdate", &__ptr_sceMoveTrackerCameraUpdate);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerCaptureInit\n"
    ".type sceMoveTrackerCaptureInit @function\n"
    "sceMoveTrackerCaptureInit:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCaptureInit]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerCaptureInit\n"
    ".type __load_and_call_sceMoveTrackerCaptureInit @function\n"
    "__load_and_call_sceMoveTrackerCaptureInit:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerCaptureInit\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCaptureInit]\n");

void __load_and_call_sceMoveTrackerCaptureInit();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerCaptureInit = &__load_and_call_sceMoveTrackerCaptureInit;

static __attribute__ ((used)) void
__load_sceMoveTrackerCaptureInit(void) {
  sprx_dlsym(__handle, "sceMoveTrackerCaptureInit", &__ptr_sceMoveTrackerCaptureInit);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerCaptureTerm\n"
    ".type sceMoveTrackerCaptureTerm @function\n"
    "sceMoveTrackerCaptureTerm:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCaptureTerm]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerCaptureTerm\n"
    ".type __load_and_call_sceMoveTrackerCaptureTerm @function\n"
    "__load_and_call_sceMoveTrackerCaptureTerm:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerCaptureTerm\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerCaptureTerm]\n");

void __load_and_call_sceMoveTrackerCaptureTerm();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerCaptureTerm = &__load_and_call_sceMoveTrackerCaptureTerm;

static __attribute__ ((used)) void
__load_sceMoveTrackerCaptureTerm(void) {
  sprx_dlsym(__handle, "sceMoveTrackerCaptureTerm", &__ptr_sceMoveTrackerCaptureTerm);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerControllersUpdate\n"
    ".type sceMoveTrackerControllersUpdate @function\n"
    "sceMoveTrackerControllersUpdate:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerControllersUpdate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerControllersUpdate\n"
    ".type __load_and_call_sceMoveTrackerControllersUpdate @function\n"
    "__load_and_call_sceMoveTrackerControllersUpdate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerControllersUpdate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerControllersUpdate]\n");

void __load_and_call_sceMoveTrackerControllersUpdate();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerControllersUpdate = &__load_and_call_sceMoveTrackerControllersUpdate;

static __attribute__ ((used)) void
__load_sceMoveTrackerControllersUpdate(void) {
  sprx_dlsym(__handle, "sceMoveTrackerControllersUpdate", &__ptr_sceMoveTrackerControllersUpdate);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerGetState\n"
    ".type sceMoveTrackerGetState @function\n"
    "sceMoveTrackerGetState:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerGetState]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerGetState\n"
    ".type __load_and_call_sceMoveTrackerGetState @function\n"
    "__load_and_call_sceMoveTrackerGetState:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerGetState\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerGetState]\n");

void __load_and_call_sceMoveTrackerGetState();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerGetState = &__load_and_call_sceMoveTrackerGetState;

static __attribute__ ((used)) void
__load_sceMoveTrackerGetState(void) {
  sprx_dlsym(__handle, "sceMoveTrackerGetState", &__ptr_sceMoveTrackerGetState);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerGetVersion\n"
    ".type sceMoveTrackerGetVersion @function\n"
    "sceMoveTrackerGetVersion:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerGetVersion]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerGetVersion\n"
    ".type __load_and_call_sceMoveTrackerGetVersion @function\n"
    "__load_and_call_sceMoveTrackerGetVersion:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerGetVersion\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerGetVersion]\n");

void __load_and_call_sceMoveTrackerGetVersion();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerGetVersion = &__load_and_call_sceMoveTrackerGetVersion;

static __attribute__ ((used)) void
__load_sceMoveTrackerGetVersion(void) {
  sprx_dlsym(__handle, "sceMoveTrackerGetVersion", &__ptr_sceMoveTrackerGetVersion);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerGetWorkingMemorySize\n"
    ".type sceMoveTrackerGetWorkingMemorySize @function\n"
    "sceMoveTrackerGetWorkingMemorySize:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerGetWorkingMemorySize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerGetWorkingMemorySize\n"
    ".type __load_and_call_sceMoveTrackerGetWorkingMemorySize @function\n"
    "__load_and_call_sceMoveTrackerGetWorkingMemorySize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerGetWorkingMemorySize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerGetWorkingMemorySize]\n");

void __load_and_call_sceMoveTrackerGetWorkingMemorySize();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerGetWorkingMemorySize = &__load_and_call_sceMoveTrackerGetWorkingMemorySize;

static __attribute__ ((used)) void
__load_sceMoveTrackerGetWorkingMemorySize(void) {
  sprx_dlsym(__handle, "sceMoveTrackerGetWorkingMemorySize", &__ptr_sceMoveTrackerGetWorkingMemorySize);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerInit\n"
    ".type sceMoveTrackerInit @function\n"
    "sceMoveTrackerInit:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerInit]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerInit\n"
    ".type __load_and_call_sceMoveTrackerInit @function\n"
    "__load_and_call_sceMoveTrackerInit:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerInit\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerInit]\n");

void __load_and_call_sceMoveTrackerInit();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerInit = &__load_and_call_sceMoveTrackerInit;

static __attribute__ ((used)) void
__load_sceMoveTrackerInit(void) {
  sprx_dlsym(__handle, "sceMoveTrackerInit", &__ptr_sceMoveTrackerInit);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerPlayGetImages\n"
    ".type sceMoveTrackerPlayGetImages @function\n"
    "sceMoveTrackerPlayGetImages:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerPlayGetImages]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerPlayGetImages\n"
    ".type __load_and_call_sceMoveTrackerPlayGetImages @function\n"
    "__load_and_call_sceMoveTrackerPlayGetImages:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerPlayGetImages\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerPlayGetImages]\n");

void __load_and_call_sceMoveTrackerPlayGetImages();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerPlayGetImages = &__load_and_call_sceMoveTrackerPlayGetImages;

static __attribute__ ((used)) void
__load_sceMoveTrackerPlayGetImages(void) {
  sprx_dlsym(__handle, "sceMoveTrackerPlayGetImages", &__ptr_sceMoveTrackerPlayGetImages);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerPlayGetStates\n"
    ".type sceMoveTrackerPlayGetStates @function\n"
    "sceMoveTrackerPlayGetStates:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerPlayGetStates]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerPlayGetStates\n"
    ".type __load_and_call_sceMoveTrackerPlayGetStates @function\n"
    "__load_and_call_sceMoveTrackerPlayGetStates:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerPlayGetStates\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerPlayGetStates]\n");

void __load_and_call_sceMoveTrackerPlayGetStates();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerPlayGetStates = &__load_and_call_sceMoveTrackerPlayGetStates;

static __attribute__ ((used)) void
__load_sceMoveTrackerPlayGetStates(void) {
  sprx_dlsym(__handle, "sceMoveTrackerPlayGetStates", &__ptr_sceMoveTrackerPlayGetStates);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerPlayStart\n"
    ".type sceMoveTrackerPlayStart @function\n"
    "sceMoveTrackerPlayStart:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerPlayStart]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerPlayStart\n"
    ".type __load_and_call_sceMoveTrackerPlayStart @function\n"
    "__load_and_call_sceMoveTrackerPlayStart:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerPlayStart\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerPlayStart]\n");

void __load_and_call_sceMoveTrackerPlayStart();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerPlayStart = &__load_and_call_sceMoveTrackerPlayStart;

static __attribute__ ((used)) void
__load_sceMoveTrackerPlayStart(void) {
  sprx_dlsym(__handle, "sceMoveTrackerPlayStart", &__ptr_sceMoveTrackerPlayStart);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerPlayStep\n"
    ".type sceMoveTrackerPlayStep @function\n"
    "sceMoveTrackerPlayStep:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerPlayStep]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerPlayStep\n"
    ".type __load_and_call_sceMoveTrackerPlayStep @function\n"
    "__load_and_call_sceMoveTrackerPlayStep:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerPlayStep\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerPlayStep]\n");

void __load_and_call_sceMoveTrackerPlayStep();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerPlayStep = &__load_and_call_sceMoveTrackerPlayStep;

static __attribute__ ((used)) void
__load_sceMoveTrackerPlayStep(void) {
  sprx_dlsym(__handle, "sceMoveTrackerPlayStep", &__ptr_sceMoveTrackerPlayStep);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerRecordSave\n"
    ".type sceMoveTrackerRecordSave @function\n"
    "sceMoveTrackerRecordSave:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerRecordSave]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerRecordSave\n"
    ".type __load_and_call_sceMoveTrackerRecordSave @function\n"
    "__load_and_call_sceMoveTrackerRecordSave:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerRecordSave\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerRecordSave]\n");

void __load_and_call_sceMoveTrackerRecordSave();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerRecordSave = &__load_and_call_sceMoveTrackerRecordSave;

static __attribute__ ((used)) void
__load_sceMoveTrackerRecordSave(void) {
  sprx_dlsym(__handle, "sceMoveTrackerRecordSave", &__ptr_sceMoveTrackerRecordSave);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerRecordStart\n"
    ".type sceMoveTrackerRecordStart @function\n"
    "sceMoveTrackerRecordStart:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerRecordStart]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerRecordStart\n"
    ".type __load_and_call_sceMoveTrackerRecordStart @function\n"
    "__load_and_call_sceMoveTrackerRecordStart:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerRecordStart\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerRecordStart]\n");

void __load_and_call_sceMoveTrackerRecordStart();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerRecordStart = &__load_and_call_sceMoveTrackerRecordStart;

static __attribute__ ((used)) void
__load_sceMoveTrackerRecordStart(void) {
  sprx_dlsym(__handle, "sceMoveTrackerRecordStart", &__ptr_sceMoveTrackerRecordStart);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerRecordStop\n"
    ".type sceMoveTrackerRecordStop @function\n"
    "sceMoveTrackerRecordStop:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerRecordStop]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerRecordStop\n"
    ".type __load_and_call_sceMoveTrackerRecordStop @function\n"
    "__load_and_call_sceMoveTrackerRecordStop:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerRecordStop\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerRecordStop]\n");

void __load_and_call_sceMoveTrackerRecordStop();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerRecordStop = &__load_and_call_sceMoveTrackerRecordStop;

static __attribute__ ((used)) void
__load_sceMoveTrackerRecordStop(void) {
  sprx_dlsym(__handle, "sceMoveTrackerRecordStop", &__ptr_sceMoveTrackerRecordStop);
}

asm(".intel_syntax noprefix\n"
    ".global sceMoveTrackerTerm\n"
    ".type sceMoveTrackerTerm @function\n"
    "sceMoveTrackerTerm:\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerTerm]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceMoveTrackerTerm\n"
    ".type __load_and_call_sceMoveTrackerTerm @function\n"
    "__load_and_call_sceMoveTrackerTerm:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceMoveTrackerTerm\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceMoveTrackerTerm]\n");

void __load_and_call_sceMoveTrackerTerm();
static __attribute__ ((used)) void* __ptr_sceMoveTrackerTerm = &__load_and_call_sceMoveTrackerTerm;

static __attribute__ ((used)) void
__load_sceMoveTrackerTerm(void) {
  sprx_dlsym(__handle, "sceMoveTrackerTerm", &__ptr_sceMoveTrackerTerm);
}
