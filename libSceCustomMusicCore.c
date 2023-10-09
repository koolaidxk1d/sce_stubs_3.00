/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceCustomMusicCore", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreBgmClose\n"
    ".type sceCustomMusicCoreBgmClose @function\n"
    "sceCustomMusicCoreBgmClose:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreBgmClose]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreBgmClose\n"
    ".type __load_and_call_sceCustomMusicCoreBgmClose @function\n"
    "__load_and_call_sceCustomMusicCoreBgmClose:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreBgmClose\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreBgmClose]\n");

void __load_and_call_sceCustomMusicCoreBgmClose();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreBgmClose = &__load_and_call_sceCustomMusicCoreBgmClose;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreBgmClose(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreBgmClose", &__ptr_sceCustomMusicCoreBgmClose);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreBgmOpen\n"
    ".type sceCustomMusicCoreBgmOpen @function\n"
    "sceCustomMusicCoreBgmOpen:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreBgmOpen]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreBgmOpen\n"
    ".type __load_and_call_sceCustomMusicCoreBgmOpen @function\n"
    "__load_and_call_sceCustomMusicCoreBgmOpen:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreBgmOpen\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreBgmOpen]\n");

void __load_and_call_sceCustomMusicCoreBgmOpen();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreBgmOpen = &__load_and_call_sceCustomMusicCoreBgmOpen;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreBgmOpen(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreBgmOpen", &__ptr_sceCustomMusicCoreBgmOpen);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreBgmOpen2\n"
    ".type sceCustomMusicCoreBgmOpen2 @function\n"
    "sceCustomMusicCoreBgmOpen2:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreBgmOpen2]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreBgmOpen2\n"
    ".type __load_and_call_sceCustomMusicCoreBgmOpen2 @function\n"
    "__load_and_call_sceCustomMusicCoreBgmOpen2:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreBgmOpen2\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreBgmOpen2]\n");

void __load_and_call_sceCustomMusicCoreBgmOpen2();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreBgmOpen2 = &__load_and_call_sceCustomMusicCoreBgmOpen2;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreBgmOpen2(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreBgmOpen2", &__ptr_sceCustomMusicCoreBgmOpen2);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreBgmOutput\n"
    ".type sceCustomMusicCoreBgmOutput @function\n"
    "sceCustomMusicCoreBgmOutput:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreBgmOutput]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreBgmOutput\n"
    ".type __load_and_call_sceCustomMusicCoreBgmOutput @function\n"
    "__load_and_call_sceCustomMusicCoreBgmOutput:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreBgmOutput\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreBgmOutput]\n");

void __load_and_call_sceCustomMusicCoreBgmOutput();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreBgmOutput = &__load_and_call_sceCustomMusicCoreBgmOutput;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreBgmOutput(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreBgmOutput", &__ptr_sceCustomMusicCoreBgmOutput);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreBgmSetAudioVolume\n"
    ".type sceCustomMusicCoreBgmSetAudioVolume @function\n"
    "sceCustomMusicCoreBgmSetAudioVolume:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreBgmSetAudioVolume]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreBgmSetAudioVolume\n"
    ".type __load_and_call_sceCustomMusicCoreBgmSetAudioVolume @function\n"
    "__load_and_call_sceCustomMusicCoreBgmSetAudioVolume:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreBgmSetAudioVolume\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreBgmSetAudioVolume]\n");

void __load_and_call_sceCustomMusicCoreBgmSetAudioVolume();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreBgmSetAudioVolume = &__load_and_call_sceCustomMusicCoreBgmSetAudioVolume;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreBgmSetAudioVolume(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreBgmSetAudioVolume", &__ptr_sceCustomMusicCoreBgmSetAudioVolume);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreBgmStart\n"
    ".type sceCustomMusicCoreBgmStart @function\n"
    "sceCustomMusicCoreBgmStart:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreBgmStart]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreBgmStart\n"
    ".type __load_and_call_sceCustomMusicCoreBgmStart @function\n"
    "__load_and_call_sceCustomMusicCoreBgmStart:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreBgmStart\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreBgmStart]\n");

void __load_and_call_sceCustomMusicCoreBgmStart();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreBgmStart = &__load_and_call_sceCustomMusicCoreBgmStart;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreBgmStart(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreBgmStart", &__ptr_sceCustomMusicCoreBgmStart);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreBgmStop\n"
    ".type sceCustomMusicCoreBgmStop @function\n"
    "sceCustomMusicCoreBgmStop:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreBgmStop]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreBgmStop\n"
    ".type __load_and_call_sceCustomMusicCoreBgmStop @function\n"
    "__load_and_call_sceCustomMusicCoreBgmStop:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreBgmStop\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreBgmStop]\n");

void __load_and_call_sceCustomMusicCoreBgmStop();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreBgmStop = &__load_and_call_sceCustomMusicCoreBgmStop;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreBgmStop(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreBgmStop", &__ptr_sceCustomMusicCoreBgmStop);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreGetBgmAuthorityStatus\n"
    ".type sceCustomMusicCoreGetBgmAuthorityStatus @function\n"
    "sceCustomMusicCoreGetBgmAuthorityStatus:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreGetBgmAuthorityStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreGetBgmAuthorityStatus\n"
    ".type __load_and_call_sceCustomMusicCoreGetBgmAuthorityStatus @function\n"
    "__load_and_call_sceCustomMusicCoreGetBgmAuthorityStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreGetBgmAuthorityStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreGetBgmAuthorityStatus]\n");

void __load_and_call_sceCustomMusicCoreGetBgmAuthorityStatus();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreGetBgmAuthorityStatus = &__load_and_call_sceCustomMusicCoreGetBgmAuthorityStatus;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreGetBgmAuthorityStatus(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreGetBgmAuthorityStatus", &__ptr_sceCustomMusicCoreGetBgmAuthorityStatus);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreGetHdcpStatus\n"
    ".type sceCustomMusicCoreGetHdcpStatus @function\n"
    "sceCustomMusicCoreGetHdcpStatus:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreGetHdcpStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreGetHdcpStatus\n"
    ".type __load_and_call_sceCustomMusicCoreGetHdcpStatus @function\n"
    "__load_and_call_sceCustomMusicCoreGetHdcpStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreGetHdcpStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreGetHdcpStatus]\n");

void __load_and_call_sceCustomMusicCoreGetHdcpStatus();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreGetHdcpStatus = &__load_and_call_sceCustomMusicCoreGetHdcpStatus;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreGetHdcpStatus(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreGetHdcpStatus", &__ptr_sceCustomMusicCoreGetHdcpStatus);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreGetSystemAudioVolume\n"
    ".type sceCustomMusicCoreGetSystemAudioVolume @function\n"
    "sceCustomMusicCoreGetSystemAudioVolume:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreGetSystemAudioVolume]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreGetSystemAudioVolume\n"
    ".type __load_and_call_sceCustomMusicCoreGetSystemAudioVolume @function\n"
    "__load_and_call_sceCustomMusicCoreGetSystemAudioVolume:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreGetSystemAudioVolume\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreGetSystemAudioVolume]\n");

void __load_and_call_sceCustomMusicCoreGetSystemAudioVolume();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreGetSystemAudioVolume = &__load_and_call_sceCustomMusicCoreGetSystemAudioVolume;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreGetSystemAudioVolume(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreGetSystemAudioVolume", &__ptr_sceCustomMusicCoreGetSystemAudioVolume);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCorePostEvent\n"
    ".type sceCustomMusicCorePostEvent @function\n"
    "sceCustomMusicCorePostEvent:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCorePostEvent]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCorePostEvent\n"
    ".type __load_and_call_sceCustomMusicCorePostEvent @function\n"
    "__load_and_call_sceCustomMusicCorePostEvent:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCorePostEvent\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCorePostEvent]\n");

void __load_and_call_sceCustomMusicCorePostEvent();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCorePostEvent = &__load_and_call_sceCustomMusicCorePostEvent;

static __attribute__ ((used)) void
__load_sceCustomMusicCorePostEvent(void) {
  sprx_dlsym(__handle, "sceCustomMusicCorePostEvent", &__ptr_sceCustomMusicCorePostEvent);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreSendEvent\n"
    ".type sceCustomMusicCoreSendEvent @function\n"
    "sceCustomMusicCoreSendEvent:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreSendEvent]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreSendEvent\n"
    ".type __load_and_call_sceCustomMusicCoreSendEvent @function\n"
    "__load_and_call_sceCustomMusicCoreSendEvent:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreSendEvent\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreSendEvent]\n");

void __load_and_call_sceCustomMusicCoreSendEvent();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreSendEvent = &__load_and_call_sceCustomMusicCoreSendEvent;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreSendEvent(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreSendEvent", &__ptr_sceCustomMusicCoreSendEvent);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreSendMulticastEvent\n"
    ".type sceCustomMusicCoreSendMulticastEvent @function\n"
    "sceCustomMusicCoreSendMulticastEvent:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreSendMulticastEvent]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreSendMulticastEvent\n"
    ".type __load_and_call_sceCustomMusicCoreSendMulticastEvent @function\n"
    "__load_and_call_sceCustomMusicCoreSendMulticastEvent:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreSendMulticastEvent\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreSendMulticastEvent]\n");

void __load_and_call_sceCustomMusicCoreSendMulticastEvent();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreSendMulticastEvent = &__load_and_call_sceCustomMusicCoreSendMulticastEvent;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreSendMulticastEvent(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreSendMulticastEvent", &__ptr_sceCustomMusicCoreSendMulticastEvent);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreSendSpMessage\n"
    ".type sceCustomMusicCoreSendSpMessage @function\n"
    "sceCustomMusicCoreSendSpMessage:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreSendSpMessage]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreSendSpMessage\n"
    ".type __load_and_call_sceCustomMusicCoreSendSpMessage @function\n"
    "__load_and_call_sceCustomMusicCoreSendSpMessage:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreSendSpMessage\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreSendSpMessage]\n");

void __load_and_call_sceCustomMusicCoreSendSpMessage();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreSendSpMessage = &__load_and_call_sceCustomMusicCoreSendSpMessage;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreSendSpMessage(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreSendSpMessage", &__ptr_sceCustomMusicCoreSendSpMessage);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreSetSystemAudioVolume\n"
    ".type sceCustomMusicCoreSetSystemAudioVolume @function\n"
    "sceCustomMusicCoreSetSystemAudioVolume:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreSetSystemAudioVolume]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreSetSystemAudioVolume\n"
    ".type __load_and_call_sceCustomMusicCoreSetSystemAudioVolume @function\n"
    "__load_and_call_sceCustomMusicCoreSetSystemAudioVolume:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreSetSystemAudioVolume\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreSetSystemAudioVolume]\n");

void __load_and_call_sceCustomMusicCoreSetSystemAudioVolume();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreSetSystemAudioVolume = &__load_and_call_sceCustomMusicCoreSetSystemAudioVolume;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreSetSystemAudioVolume(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreSetSystemAudioVolume", &__ptr_sceCustomMusicCoreSetSystemAudioVolume);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreStartOperation\n"
    ".type sceCustomMusicCoreStartOperation @function\n"
    "sceCustomMusicCoreStartOperation:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreStartOperation]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreStartOperation\n"
    ".type __load_and_call_sceCustomMusicCoreStartOperation @function\n"
    "__load_and_call_sceCustomMusicCoreStartOperation:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreStartOperation\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreStartOperation]\n");

void __load_and_call_sceCustomMusicCoreStartOperation();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreStartOperation = &__load_and_call_sceCustomMusicCoreStartOperation;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreStartOperation(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreStartOperation", &__ptr_sceCustomMusicCoreStartOperation);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreStartOperation2\n"
    ".type sceCustomMusicCoreStartOperation2 @function\n"
    "sceCustomMusicCoreStartOperation2:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreStartOperation2]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreStartOperation2\n"
    ".type __load_and_call_sceCustomMusicCoreStartOperation2 @function\n"
    "__load_and_call_sceCustomMusicCoreStartOperation2:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreStartOperation2\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreStartOperation2]\n");

void __load_and_call_sceCustomMusicCoreStartOperation2();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreStartOperation2 = &__load_and_call_sceCustomMusicCoreStartOperation2;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreStartOperation2(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreStartOperation2", &__ptr_sceCustomMusicCoreStartOperation2);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicCoreStopOperation\n"
    ".type sceCustomMusicCoreStopOperation @function\n"
    "sceCustomMusicCoreStopOperation:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreStopOperation]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicCoreStopOperation\n"
    ".type __load_and_call_sceCustomMusicCoreStopOperation @function\n"
    "__load_and_call_sceCustomMusicCoreStopOperation:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicCoreStopOperation\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicCoreStopOperation]\n");

void __load_and_call_sceCustomMusicCoreStopOperation();
static __attribute__ ((used)) void* __ptr_sceCustomMusicCoreStopOperation = &__load_and_call_sceCustomMusicCoreStopOperation;

static __attribute__ ((used)) void
__load_sceCustomMusicCoreStopOperation(void) {
  sprx_dlsym(__handle, "sceCustomMusicCoreStopOperation", &__ptr_sceCustomMusicCoreStopOperation);
}
