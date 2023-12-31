/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceShare.native", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceShareCaptureScreenshot\n"
    ".type sceShareCaptureScreenshot @function\n"
    "sceShareCaptureScreenshot:\n"
    "jmp qword ptr [rip + __ptr_sceShareCaptureScreenshot]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShareCaptureScreenshot\n"
    ".type __load_and_call_sceShareCaptureScreenshot @function\n"
    "__load_and_call_sceShareCaptureScreenshot:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShareCaptureScreenshot\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShareCaptureScreenshot]\n");

void __load_and_call_sceShareCaptureScreenshot();
static __attribute__ ((used)) void* __ptr_sceShareCaptureScreenshot = &__load_and_call_sceShareCaptureScreenshot;

static __attribute__ ((used)) void
__load_sceShareCaptureScreenshot(void) {
  sprx_dlsym(__handle, "sceShareCaptureScreenshot", &__ptr_sceShareCaptureScreenshot);
}

asm(".intel_syntax noprefix\n"
    ".global sceShareCaptureVideoClip\n"
    ".type sceShareCaptureVideoClip @function\n"
    "sceShareCaptureVideoClip:\n"
    "jmp qword ptr [rip + __ptr_sceShareCaptureVideoClip]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShareCaptureVideoClip\n"
    ".type __load_and_call_sceShareCaptureVideoClip @function\n"
    "__load_and_call_sceShareCaptureVideoClip:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShareCaptureVideoClip\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShareCaptureVideoClip]\n");

void __load_and_call_sceShareCaptureVideoClip();
static __attribute__ ((used)) void* __ptr_sceShareCaptureVideoClip = &__load_and_call_sceShareCaptureVideoClip;

static __attribute__ ((used)) void
__load_sceShareCaptureVideoClip(void) {
  sprx_dlsym(__handle, "sceShareCaptureVideoClip", &__ptr_sceShareCaptureVideoClip);
}

asm(".intel_syntax noprefix\n"
    ".global sceShareFeaturePermit\n"
    ".type sceShareFeaturePermit @function\n"
    "sceShareFeaturePermit:\n"
    "jmp qword ptr [rip + __ptr_sceShareFeaturePermit]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShareFeaturePermit\n"
    ".type __load_and_call_sceShareFeaturePermit @function\n"
    "__load_and_call_sceShareFeaturePermit:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShareFeaturePermit\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShareFeaturePermit]\n");

void __load_and_call_sceShareFeaturePermit();
static __attribute__ ((used)) void* __ptr_sceShareFeaturePermit = &__load_and_call_sceShareFeaturePermit;

static __attribute__ ((used)) void
__load_sceShareFeaturePermit(void) {
  sprx_dlsym(__handle, "sceShareFeaturePermit", &__ptr_sceShareFeaturePermit);
}

asm(".intel_syntax noprefix\n"
    ".global sceShareFeatureProhibit\n"
    ".type sceShareFeatureProhibit @function\n"
    "sceShareFeatureProhibit:\n"
    "jmp qword ptr [rip + __ptr_sceShareFeatureProhibit]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShareFeatureProhibit\n"
    ".type __load_and_call_sceShareFeatureProhibit @function\n"
    "__load_and_call_sceShareFeatureProhibit:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShareFeatureProhibit\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShareFeatureProhibit]\n");

void __load_and_call_sceShareFeatureProhibit();
static __attribute__ ((used)) void* __ptr_sceShareFeatureProhibit = &__load_and_call_sceShareFeatureProhibit;

static __attribute__ ((used)) void
__load_sceShareFeatureProhibit(void) {
  sprx_dlsym(__handle, "sceShareFeatureProhibit", &__ptr_sceShareFeatureProhibit);
}

asm(".intel_syntax noprefix\n"
    ".global sceShareGetCurrentStatus\n"
    ".type sceShareGetCurrentStatus @function\n"
    "sceShareGetCurrentStatus:\n"
    "jmp qword ptr [rip + __ptr_sceShareGetCurrentStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShareGetCurrentStatus\n"
    ".type __load_and_call_sceShareGetCurrentStatus @function\n"
    "__load_and_call_sceShareGetCurrentStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShareGetCurrentStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShareGetCurrentStatus]\n");

void __load_and_call_sceShareGetCurrentStatus();
static __attribute__ ((used)) void* __ptr_sceShareGetCurrentStatus = &__load_and_call_sceShareGetCurrentStatus;

static __attribute__ ((used)) void
__load_sceShareGetCurrentStatus(void) {
  sprx_dlsym(__handle, "sceShareGetCurrentStatus", &__ptr_sceShareGetCurrentStatus);
}

asm(".intel_syntax noprefix\n"
    ".global sceShareInitialize\n"
    ".type sceShareInitialize @function\n"
    "sceShareInitialize:\n"
    "jmp qword ptr [rip + __ptr_sceShareInitialize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShareInitialize\n"
    ".type __load_and_call_sceShareInitialize @function\n"
    "__load_and_call_sceShareInitialize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShareInitialize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShareInitialize]\n");

void __load_and_call_sceShareInitialize();
static __attribute__ ((used)) void* __ptr_sceShareInitialize = &__load_and_call_sceShareInitialize;

static __attribute__ ((used)) void
__load_sceShareInitialize(void) {
  sprx_dlsym(__handle, "sceShareInitialize", &__ptr_sceShareInitialize);
}

asm(".intel_syntax noprefix\n"
    ".global sceShareOpenMenuForContent\n"
    ".type sceShareOpenMenuForContent @function\n"
    "sceShareOpenMenuForContent:\n"
    "jmp qword ptr [rip + __ptr_sceShareOpenMenuForContent]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShareOpenMenuForContent\n"
    ".type __load_and_call_sceShareOpenMenuForContent @function\n"
    "__load_and_call_sceShareOpenMenuForContent:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShareOpenMenuForContent\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShareOpenMenuForContent]\n");

void __load_and_call_sceShareOpenMenuForContent();
static __attribute__ ((used)) void* __ptr_sceShareOpenMenuForContent = &__load_and_call_sceShareOpenMenuForContent;

static __attribute__ ((used)) void
__load_sceShareOpenMenuForContent(void) {
  sprx_dlsym(__handle, "sceShareOpenMenuForContent", &__ptr_sceShareOpenMenuForContent);
}

asm(".intel_syntax noprefix\n"
    ".global sceShareRegisterContentEventCallback\n"
    ".type sceShareRegisterContentEventCallback @function\n"
    "sceShareRegisterContentEventCallback:\n"
    "jmp qword ptr [rip + __ptr_sceShareRegisterContentEventCallback]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShareRegisterContentEventCallback\n"
    ".type __load_and_call_sceShareRegisterContentEventCallback @function\n"
    "__load_and_call_sceShareRegisterContentEventCallback:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShareRegisterContentEventCallback\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShareRegisterContentEventCallback]\n");

void __load_and_call_sceShareRegisterContentEventCallback();
static __attribute__ ((used)) void* __ptr_sceShareRegisterContentEventCallback = &__load_and_call_sceShareRegisterContentEventCallback;

static __attribute__ ((used)) void
__load_sceShareRegisterContentEventCallback(void) {
  sprx_dlsym(__handle, "sceShareRegisterContentEventCallback", &__ptr_sceShareRegisterContentEventCallback);
}

asm(".intel_syntax noprefix\n"
    ".global sceShareSetCaptureSource\n"
    ".type sceShareSetCaptureSource @function\n"
    "sceShareSetCaptureSource:\n"
    "jmp qword ptr [rip + __ptr_sceShareSetCaptureSource]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShareSetCaptureSource\n"
    ".type __load_and_call_sceShareSetCaptureSource @function\n"
    "__load_and_call_sceShareSetCaptureSource:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShareSetCaptureSource\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShareSetCaptureSource]\n");

void __load_and_call_sceShareSetCaptureSource();
static __attribute__ ((used)) void* __ptr_sceShareSetCaptureSource = &__load_and_call_sceShareSetCaptureSource;

static __attribute__ ((used)) void
__load_sceShareSetCaptureSource(void) {
  sprx_dlsym(__handle, "sceShareSetCaptureSource", &__ptr_sceShareSetCaptureSource);
}

asm(".intel_syntax noprefix\n"
    ".global sceShareSetContentParam\n"
    ".type sceShareSetContentParam @function\n"
    "sceShareSetContentParam:\n"
    "jmp qword ptr [rip + __ptr_sceShareSetContentParam]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShareSetContentParam\n"
    ".type __load_and_call_sceShareSetContentParam @function\n"
    "__load_and_call_sceShareSetContentParam:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShareSetContentParam\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShareSetContentParam]\n");

void __load_and_call_sceShareSetContentParam();
static __attribute__ ((used)) void* __ptr_sceShareSetContentParam = &__load_and_call_sceShareSetContentParam;

static __attribute__ ((used)) void
__load_sceShareSetContentParam(void) {
  sprx_dlsym(__handle, "sceShareSetContentParam", &__ptr_sceShareSetContentParam);
}

asm(".intel_syntax noprefix\n"
    ".global sceShareSetScreenshotOverlayImage\n"
    ".type sceShareSetScreenshotOverlayImage @function\n"
    "sceShareSetScreenshotOverlayImage:\n"
    "jmp qword ptr [rip + __ptr_sceShareSetScreenshotOverlayImage]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShareSetScreenshotOverlayImage\n"
    ".type __load_and_call_sceShareSetScreenshotOverlayImage @function\n"
    "__load_and_call_sceShareSetScreenshotOverlayImage:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShareSetScreenshotOverlayImage\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShareSetScreenshotOverlayImage]\n");

void __load_and_call_sceShareSetScreenshotOverlayImage();
static __attribute__ ((used)) void* __ptr_sceShareSetScreenshotOverlayImage = &__load_and_call_sceShareSetScreenshotOverlayImage;

static __attribute__ ((used)) void
__load_sceShareSetScreenshotOverlayImage(void) {
  sprx_dlsym(__handle, "sceShareSetScreenshotOverlayImage", &__ptr_sceShareSetScreenshotOverlayImage);
}

asm(".intel_syntax noprefix\n"
    ".global sceShareTerminate\n"
    ".type sceShareTerminate @function\n"
    "sceShareTerminate:\n"
    "jmp qword ptr [rip + __ptr_sceShareTerminate]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShareTerminate\n"
    ".type __load_and_call_sceShareTerminate @function\n"
    "__load_and_call_sceShareTerminate:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShareTerminate\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShareTerminate]\n");

void __load_and_call_sceShareTerminate();
static __attribute__ ((used)) void* __ptr_sceShareTerminate = &__load_and_call_sceShareTerminate;

static __attribute__ ((used)) void
__load_sceShareTerminate(void) {
  sprx_dlsym(__handle, "sceShareTerminate", &__ptr_sceShareTerminate);
}

asm(".intel_syntax noprefix\n"
    ".global sceShareUnregisterContentEventCallback\n"
    ".type sceShareUnregisterContentEventCallback @function\n"
    "sceShareUnregisterContentEventCallback:\n"
    "jmp qword ptr [rip + __ptr_sceShareUnregisterContentEventCallback]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceShareUnregisterContentEventCallback\n"
    ".type __load_and_call_sceShareUnregisterContentEventCallback @function\n"
    "__load_and_call_sceShareUnregisterContentEventCallback:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceShareUnregisterContentEventCallback\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceShareUnregisterContentEventCallback]\n");

void __load_and_call_sceShareUnregisterContentEventCallback();
static __attribute__ ((used)) void* __ptr_sceShareUnregisterContentEventCallback = &__load_and_call_sceShareUnregisterContentEventCallback;

static __attribute__ ((used)) void
__load_sceShareUnregisterContentEventCallback(void) {
  sprx_dlsym(__handle, "sceShareUnregisterContentEventCallback", &__ptr_sceShareUnregisterContentEventCallback);
}
