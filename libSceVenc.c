/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceVenc", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceVencCreateEncoder\n"
    ".type sceVencCreateEncoder @function\n"
    "sceVencCreateEncoder:\n"
    "jmp qword ptr [rip + __ptr_sceVencCreateEncoder]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVencCreateEncoder\n"
    ".type __load_and_call_sceVencCreateEncoder @function\n"
    "__load_and_call_sceVencCreateEncoder:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVencCreateEncoder\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVencCreateEncoder]\n");

void __load_and_call_sceVencCreateEncoder();
static __attribute__ ((used)) void* __ptr_sceVencCreateEncoder = &__load_and_call_sceVencCreateEncoder;

static __attribute__ ((used)) void
__load_sceVencCreateEncoder(void) {
  sprx_dlsym(__handle, "sceVencCreateEncoder", &__ptr_sceVencCreateEncoder);
}

asm(".intel_syntax noprefix\n"
    ".global sceVencDeleteEncoder\n"
    ".type sceVencDeleteEncoder @function\n"
    "sceVencDeleteEncoder:\n"
    "jmp qword ptr [rip + __ptr_sceVencDeleteEncoder]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVencDeleteEncoder\n"
    ".type __load_and_call_sceVencDeleteEncoder @function\n"
    "__load_and_call_sceVencDeleteEncoder:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVencDeleteEncoder\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVencDeleteEncoder]\n");

void __load_and_call_sceVencDeleteEncoder();
static __attribute__ ((used)) void* __ptr_sceVencDeleteEncoder = &__load_and_call_sceVencDeleteEncoder;

static __attribute__ ((used)) void
__load_sceVencDeleteEncoder(void) {
  sprx_dlsym(__handle, "sceVencDeleteEncoder", &__ptr_sceVencDeleteEncoder);
}

asm(".intel_syntax noprefix\n"
    ".global sceVencGetConfig\n"
    ".type sceVencGetConfig @function\n"
    "sceVencGetConfig:\n"
    "jmp qword ptr [rip + __ptr_sceVencGetConfig]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVencGetConfig\n"
    ".type __load_and_call_sceVencGetConfig @function\n"
    "__load_and_call_sceVencGetConfig:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVencGetConfig\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVencGetConfig]\n");

void __load_and_call_sceVencGetConfig();
static __attribute__ ((used)) void* __ptr_sceVencGetConfig = &__load_and_call_sceVencGetConfig;

static __attribute__ ((used)) void
__load_sceVencGetConfig(void) {
  sprx_dlsym(__handle, "sceVencGetConfig", &__ptr_sceVencGetConfig);
}

asm(".intel_syntax noprefix\n"
    ".global sceVencMapMemory\n"
    ".type sceVencMapMemory @function\n"
    "sceVencMapMemory:\n"
    "jmp qword ptr [rip + __ptr_sceVencMapMemory]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVencMapMemory\n"
    ".type __load_and_call_sceVencMapMemory @function\n"
    "__load_and_call_sceVencMapMemory:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVencMapMemory\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVencMapMemory]\n");

void __load_and_call_sceVencMapMemory();
static __attribute__ ((used)) void* __ptr_sceVencMapMemory = &__load_and_call_sceVencMapMemory;

static __attribute__ ((used)) void
__load_sceVencMapMemory(void) {
  sprx_dlsym(__handle, "sceVencMapMemory", &__ptr_sceVencMapMemory);
}

asm(".intel_syntax noprefix\n"
    ".global sceVencQueryHeader\n"
    ".type sceVencQueryHeader @function\n"
    "sceVencQueryHeader:\n"
    "jmp qword ptr [rip + __ptr_sceVencQueryHeader]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVencQueryHeader\n"
    ".type __load_and_call_sceVencQueryHeader @function\n"
    "__load_and_call_sceVencQueryHeader:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVencQueryHeader\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVencQueryHeader]\n");

void __load_and_call_sceVencQueryHeader();
static __attribute__ ((used)) void* __ptr_sceVencQueryHeader = &__load_and_call_sceVencQueryHeader;

static __attribute__ ((used)) void
__load_sceVencQueryHeader(void) {
  sprx_dlsym(__handle, "sceVencQueryHeader", &__ptr_sceVencQueryHeader);
}

asm(".intel_syntax noprefix\n"
    ".global sceVencQueryMemorySize\n"
    ".type sceVencQueryMemorySize @function\n"
    "sceVencQueryMemorySize:\n"
    "jmp qword ptr [rip + __ptr_sceVencQueryMemorySize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVencQueryMemorySize\n"
    ".type __load_and_call_sceVencQueryMemorySize @function\n"
    "__load_and_call_sceVencQueryMemorySize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVencQueryMemorySize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVencQueryMemorySize]\n");

void __load_and_call_sceVencQueryMemorySize();
static __attribute__ ((used)) void* __ptr_sceVencQueryMemorySize = &__load_and_call_sceVencQueryMemorySize;

static __attribute__ ((used)) void
__load_sceVencQueryMemorySize(void) {
  sprx_dlsym(__handle, "sceVencQueryMemorySize", &__ptr_sceVencQueryMemorySize);
}

asm(".intel_syntax noprefix\n"
    ".global sceVencQueryPreset\n"
    ".type sceVencQueryPreset @function\n"
    "sceVencQueryPreset:\n"
    "jmp qword ptr [rip + __ptr_sceVencQueryPreset]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVencQueryPreset\n"
    ".type __load_and_call_sceVencQueryPreset @function\n"
    "__load_and_call_sceVencQueryPreset:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVencQueryPreset\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVencQueryPreset]\n");

void __load_and_call_sceVencQueryPreset();
static __attribute__ ((used)) void* __ptr_sceVencQueryPreset = &__load_and_call_sceVencQueryPreset;

static __attribute__ ((used)) void
__load_sceVencQueryPreset(void) {
  sprx_dlsym(__handle, "sceVencQueryPreset", &__ptr_sceVencQueryPreset);
}

asm(".intel_syntax noprefix\n"
    ".global sceVencSetConfig\n"
    ".type sceVencSetConfig @function\n"
    "sceVencSetConfig:\n"
    "jmp qword ptr [rip + __ptr_sceVencSetConfig]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVencSetConfig\n"
    ".type __load_and_call_sceVencSetConfig @function\n"
    "__load_and_call_sceVencSetConfig:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVencSetConfig\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVencSetConfig]\n");

void __load_and_call_sceVencSetConfig();
static __attribute__ ((used)) void* __ptr_sceVencSetConfig = &__load_and_call_sceVencSetConfig;

static __attribute__ ((used)) void
__load_sceVencSetConfig(void) {
  sprx_dlsym(__handle, "sceVencSetConfig", &__ptr_sceVencSetConfig);
}

asm(".intel_syntax noprefix\n"
    ".global sceVencSetDecodedFrame\n"
    ".type sceVencSetDecodedFrame @function\n"
    "sceVencSetDecodedFrame:\n"
    "jmp qword ptr [rip + __ptr_sceVencSetDecodedFrame]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVencSetDecodedFrame\n"
    ".type __load_and_call_sceVencSetDecodedFrame @function\n"
    "__load_and_call_sceVencSetDecodedFrame:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVencSetDecodedFrame\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVencSetDecodedFrame]\n");

void __load_and_call_sceVencSetDecodedFrame();
static __attribute__ ((used)) void* __ptr_sceVencSetDecodedFrame = &__load_and_call_sceVencSetDecodedFrame;

static __attribute__ ((used)) void
__load_sceVencSetDecodedFrame(void) {
  sprx_dlsym(__handle, "sceVencSetDecodedFrame", &__ptr_sceVencSetDecodedFrame);
}

asm(".intel_syntax noprefix\n"
    ".global sceVencSetPictureConfig\n"
    ".type sceVencSetPictureConfig @function\n"
    "sceVencSetPictureConfig:\n"
    "jmp qword ptr [rip + __ptr_sceVencSetPictureConfig]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVencSetPictureConfig\n"
    ".type __load_and_call_sceVencSetPictureConfig @function\n"
    "__load_and_call_sceVencSetPictureConfig:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVencSetPictureConfig\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVencSetPictureConfig]\n");

void __load_and_call_sceVencSetPictureConfig();
static __attribute__ ((used)) void* __ptr_sceVencSetPictureConfig = &__load_and_call_sceVencSetPictureConfig;

static __attribute__ ((used)) void
__load_sceVencSetPictureConfig(void) {
  sprx_dlsym(__handle, "sceVencSetPictureConfig", &__ptr_sceVencSetPictureConfig);
}

asm(".intel_syntax noprefix\n"
    ".global sceVencSetRateControlConfig\n"
    ".type sceVencSetRateControlConfig @function\n"
    "sceVencSetRateControlConfig:\n"
    "jmp qword ptr [rip + __ptr_sceVencSetRateControlConfig]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVencSetRateControlConfig\n"
    ".type __load_and_call_sceVencSetRateControlConfig @function\n"
    "__load_and_call_sceVencSetRateControlConfig:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVencSetRateControlConfig\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVencSetRateControlConfig]\n");

void __load_and_call_sceVencSetRateControlConfig();
static __attribute__ ((used)) void* __ptr_sceVencSetRateControlConfig = &__load_and_call_sceVencSetRateControlConfig;

static __attribute__ ((used)) void
__load_sceVencSetRateControlConfig(void) {
  sprx_dlsym(__handle, "sceVencSetRateControlConfig", &__ptr_sceVencSetRateControlConfig);
}

asm(".intel_syntax noprefix\n"
    ".global sceVencSetReferenceFrameInvalidationConfig\n"
    ".type sceVencSetReferenceFrameInvalidationConfig @function\n"
    "sceVencSetReferenceFrameInvalidationConfig:\n"
    "jmp qword ptr [rip + __ptr_sceVencSetReferenceFrameInvalidationConfig]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVencSetReferenceFrameInvalidationConfig\n"
    ".type __load_and_call_sceVencSetReferenceFrameInvalidationConfig @function\n"
    "__load_and_call_sceVencSetReferenceFrameInvalidationConfig:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVencSetReferenceFrameInvalidationConfig\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVencSetReferenceFrameInvalidationConfig]\n");

void __load_and_call_sceVencSetReferenceFrameInvalidationConfig();
static __attribute__ ((used)) void* __ptr_sceVencSetReferenceFrameInvalidationConfig = &__load_and_call_sceVencSetReferenceFrameInvalidationConfig;

static __attribute__ ((used)) void
__load_sceVencSetReferenceFrameInvalidationConfig(void) {
  sprx_dlsym(__handle, "sceVencSetReferenceFrameInvalidationConfig", &__ptr_sceVencSetReferenceFrameInvalidationConfig);
}

asm(".intel_syntax noprefix\n"
    ".global sceVencStartEncode\n"
    ".type sceVencStartEncode @function\n"
    "sceVencStartEncode:\n"
    "jmp qword ptr [rip + __ptr_sceVencStartEncode]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVencStartEncode\n"
    ".type __load_and_call_sceVencStartEncode @function\n"
    "__load_and_call_sceVencStartEncode:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVencStartEncode\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVencStartEncode]\n");

void __load_and_call_sceVencStartEncode();
static __attribute__ ((used)) void* __ptr_sceVencStartEncode = &__load_and_call_sceVencStartEncode;

static __attribute__ ((used)) void
__load_sceVencStartEncode(void) {
  sprx_dlsym(__handle, "sceVencStartEncode", &__ptr_sceVencStartEncode);
}

asm(".intel_syntax noprefix\n"
    ".global sceVencStopEncode\n"
    ".type sceVencStopEncode @function\n"
    "sceVencStopEncode:\n"
    "jmp qword ptr [rip + __ptr_sceVencStopEncode]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVencStopEncode\n"
    ".type __load_and_call_sceVencStopEncode @function\n"
    "__load_and_call_sceVencStopEncode:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVencStopEncode\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVencStopEncode]\n");

void __load_and_call_sceVencStopEncode();
static __attribute__ ((used)) void* __ptr_sceVencStopEncode = &__load_and_call_sceVencStopEncode;

static __attribute__ ((used)) void
__load_sceVencStopEncode(void) {
  sprx_dlsym(__handle, "sceVencStopEncode", &__ptr_sceVencStopEncode);
}
