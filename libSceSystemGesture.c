/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceSystemGesture", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureAppendTouchRecognizer\n"
    ".type sceSystemGestureAppendTouchRecognizer @function\n"
    "sceSystemGestureAppendTouchRecognizer:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureAppendTouchRecognizer]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureAppendTouchRecognizer\n"
    ".type __load_and_call_sceSystemGestureAppendTouchRecognizer @function\n"
    "__load_and_call_sceSystemGestureAppendTouchRecognizer:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureAppendTouchRecognizer\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureAppendTouchRecognizer]\n");

void __load_and_call_sceSystemGestureAppendTouchRecognizer();
static __attribute__ ((used)) void* __ptr_sceSystemGestureAppendTouchRecognizer = &__load_and_call_sceSystemGestureAppendTouchRecognizer;

static __attribute__ ((used)) void
__load_sceSystemGestureAppendTouchRecognizer(void) {
  sprx_dlsym(__handle, "sceSystemGestureAppendTouchRecognizer", &__ptr_sceSystemGestureAppendTouchRecognizer);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureClose\n"
    ".type sceSystemGestureClose @function\n"
    "sceSystemGestureClose:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureClose]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureClose\n"
    ".type __load_and_call_sceSystemGestureClose @function\n"
    "__load_and_call_sceSystemGestureClose:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureClose\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureClose]\n");

void __load_and_call_sceSystemGestureClose();
static __attribute__ ((used)) void* __ptr_sceSystemGestureClose = &__load_and_call_sceSystemGestureClose;

static __attribute__ ((used)) void
__load_sceSystemGestureClose(void) {
  sprx_dlsym(__handle, "sceSystemGestureClose", &__ptr_sceSystemGestureClose);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureCreateTouchRecognizer\n"
    ".type sceSystemGestureCreateTouchRecognizer @function\n"
    "sceSystemGestureCreateTouchRecognizer:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureCreateTouchRecognizer]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureCreateTouchRecognizer\n"
    ".type __load_and_call_sceSystemGestureCreateTouchRecognizer @function\n"
    "__load_and_call_sceSystemGestureCreateTouchRecognizer:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureCreateTouchRecognizer\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureCreateTouchRecognizer]\n");

void __load_and_call_sceSystemGestureCreateTouchRecognizer();
static __attribute__ ((used)) void* __ptr_sceSystemGestureCreateTouchRecognizer = &__load_and_call_sceSystemGestureCreateTouchRecognizer;

static __attribute__ ((used)) void
__load_sceSystemGestureCreateTouchRecognizer(void) {
  sprx_dlsym(__handle, "sceSystemGestureCreateTouchRecognizer", &__ptr_sceSystemGestureCreateTouchRecognizer);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureDebugGetVersion\n"
    ".type sceSystemGestureDebugGetVersion @function\n"
    "sceSystemGestureDebugGetVersion:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureDebugGetVersion]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureDebugGetVersion\n"
    ".type __load_and_call_sceSystemGestureDebugGetVersion @function\n"
    "__load_and_call_sceSystemGestureDebugGetVersion:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureDebugGetVersion\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureDebugGetVersion]\n");

void __load_and_call_sceSystemGestureDebugGetVersion();
static __attribute__ ((used)) void* __ptr_sceSystemGestureDebugGetVersion = &__load_and_call_sceSystemGestureDebugGetVersion;

static __attribute__ ((used)) void
__load_sceSystemGestureDebugGetVersion(void) {
  sprx_dlsym(__handle, "sceSystemGestureDebugGetVersion", &__ptr_sceSystemGestureDebugGetVersion);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureFinalizePrimitiveTouchRecognizer\n"
    ".type sceSystemGestureFinalizePrimitiveTouchRecognizer @function\n"
    "sceSystemGestureFinalizePrimitiveTouchRecognizer:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureFinalizePrimitiveTouchRecognizer]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureFinalizePrimitiveTouchRecognizer\n"
    ".type __load_and_call_sceSystemGestureFinalizePrimitiveTouchRecognizer @function\n"
    "__load_and_call_sceSystemGestureFinalizePrimitiveTouchRecognizer:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureFinalizePrimitiveTouchRecognizer\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureFinalizePrimitiveTouchRecognizer]\n");

void __load_and_call_sceSystemGestureFinalizePrimitiveTouchRecognizer();
static __attribute__ ((used)) void* __ptr_sceSystemGestureFinalizePrimitiveTouchRecognizer = &__load_and_call_sceSystemGestureFinalizePrimitiveTouchRecognizer;

static __attribute__ ((used)) void
__load_sceSystemGestureFinalizePrimitiveTouchRecognizer(void) {
  sprx_dlsym(__handle, "sceSystemGestureFinalizePrimitiveTouchRecognizer", &__ptr_sceSystemGestureFinalizePrimitiveTouchRecognizer);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureGetPrimitiveTouchEventByIndex\n"
    ".type sceSystemGestureGetPrimitiveTouchEventByIndex @function\n"
    "sceSystemGestureGetPrimitiveTouchEventByIndex:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetPrimitiveTouchEventByIndex]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureGetPrimitiveTouchEventByIndex\n"
    ".type __load_and_call_sceSystemGestureGetPrimitiveTouchEventByIndex @function\n"
    "__load_and_call_sceSystemGestureGetPrimitiveTouchEventByIndex:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureGetPrimitiveTouchEventByIndex\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetPrimitiveTouchEventByIndex]\n");

void __load_and_call_sceSystemGestureGetPrimitiveTouchEventByIndex();
static __attribute__ ((used)) void* __ptr_sceSystemGestureGetPrimitiveTouchEventByIndex = &__load_and_call_sceSystemGestureGetPrimitiveTouchEventByIndex;

static __attribute__ ((used)) void
__load_sceSystemGestureGetPrimitiveTouchEventByIndex(void) {
  sprx_dlsym(__handle, "sceSystemGestureGetPrimitiveTouchEventByIndex", &__ptr_sceSystemGestureGetPrimitiveTouchEventByIndex);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureGetPrimitiveTouchEventByPrimitiveID\n"
    ".type sceSystemGestureGetPrimitiveTouchEventByPrimitiveID @function\n"
    "sceSystemGestureGetPrimitiveTouchEventByPrimitiveID:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetPrimitiveTouchEventByPrimitiveID]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureGetPrimitiveTouchEventByPrimitiveID\n"
    ".type __load_and_call_sceSystemGestureGetPrimitiveTouchEventByPrimitiveID @function\n"
    "__load_and_call_sceSystemGestureGetPrimitiveTouchEventByPrimitiveID:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureGetPrimitiveTouchEventByPrimitiveID\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetPrimitiveTouchEventByPrimitiveID]\n");

void __load_and_call_sceSystemGestureGetPrimitiveTouchEventByPrimitiveID();
static __attribute__ ((used)) void* __ptr_sceSystemGestureGetPrimitiveTouchEventByPrimitiveID = &__load_and_call_sceSystemGestureGetPrimitiveTouchEventByPrimitiveID;

static __attribute__ ((used)) void
__load_sceSystemGestureGetPrimitiveTouchEventByPrimitiveID(void) {
  sprx_dlsym(__handle, "sceSystemGestureGetPrimitiveTouchEventByPrimitiveID", &__ptr_sceSystemGestureGetPrimitiveTouchEventByPrimitiveID);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureGetPrimitiveTouchEvents\n"
    ".type sceSystemGestureGetPrimitiveTouchEvents @function\n"
    "sceSystemGestureGetPrimitiveTouchEvents:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetPrimitiveTouchEvents]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureGetPrimitiveTouchEvents\n"
    ".type __load_and_call_sceSystemGestureGetPrimitiveTouchEvents @function\n"
    "__load_and_call_sceSystemGestureGetPrimitiveTouchEvents:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureGetPrimitiveTouchEvents\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetPrimitiveTouchEvents]\n");

void __load_and_call_sceSystemGestureGetPrimitiveTouchEvents();
static __attribute__ ((used)) void* __ptr_sceSystemGestureGetPrimitiveTouchEvents = &__load_and_call_sceSystemGestureGetPrimitiveTouchEvents;

static __attribute__ ((used)) void
__load_sceSystemGestureGetPrimitiveTouchEvents(void) {
  sprx_dlsym(__handle, "sceSystemGestureGetPrimitiveTouchEvents", &__ptr_sceSystemGestureGetPrimitiveTouchEvents);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureGetPrimitiveTouchEventsCount\n"
    ".type sceSystemGestureGetPrimitiveTouchEventsCount @function\n"
    "sceSystemGestureGetPrimitiveTouchEventsCount:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetPrimitiveTouchEventsCount]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureGetPrimitiveTouchEventsCount\n"
    ".type __load_and_call_sceSystemGestureGetPrimitiveTouchEventsCount @function\n"
    "__load_and_call_sceSystemGestureGetPrimitiveTouchEventsCount:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureGetPrimitiveTouchEventsCount\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetPrimitiveTouchEventsCount]\n");

void __load_and_call_sceSystemGestureGetPrimitiveTouchEventsCount();
static __attribute__ ((used)) void* __ptr_sceSystemGestureGetPrimitiveTouchEventsCount = &__load_and_call_sceSystemGestureGetPrimitiveTouchEventsCount;

static __attribute__ ((used)) void
__load_sceSystemGestureGetPrimitiveTouchEventsCount(void) {
  sprx_dlsym(__handle, "sceSystemGestureGetPrimitiveTouchEventsCount", &__ptr_sceSystemGestureGetPrimitiveTouchEventsCount);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureGetTouchEventByEventID\n"
    ".type sceSystemGestureGetTouchEventByEventID @function\n"
    "sceSystemGestureGetTouchEventByEventID:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetTouchEventByEventID]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureGetTouchEventByEventID\n"
    ".type __load_and_call_sceSystemGestureGetTouchEventByEventID @function\n"
    "__load_and_call_sceSystemGestureGetTouchEventByEventID:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureGetTouchEventByEventID\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetTouchEventByEventID]\n");

void __load_and_call_sceSystemGestureGetTouchEventByEventID();
static __attribute__ ((used)) void* __ptr_sceSystemGestureGetTouchEventByEventID = &__load_and_call_sceSystemGestureGetTouchEventByEventID;

static __attribute__ ((used)) void
__load_sceSystemGestureGetTouchEventByEventID(void) {
  sprx_dlsym(__handle, "sceSystemGestureGetTouchEventByEventID", &__ptr_sceSystemGestureGetTouchEventByEventID);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureGetTouchEventByIndex\n"
    ".type sceSystemGestureGetTouchEventByIndex @function\n"
    "sceSystemGestureGetTouchEventByIndex:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetTouchEventByIndex]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureGetTouchEventByIndex\n"
    ".type __load_and_call_sceSystemGestureGetTouchEventByIndex @function\n"
    "__load_and_call_sceSystemGestureGetTouchEventByIndex:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureGetTouchEventByIndex\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetTouchEventByIndex]\n");

void __load_and_call_sceSystemGestureGetTouchEventByIndex();
static __attribute__ ((used)) void* __ptr_sceSystemGestureGetTouchEventByIndex = &__load_and_call_sceSystemGestureGetTouchEventByIndex;

static __attribute__ ((used)) void
__load_sceSystemGestureGetTouchEventByIndex(void) {
  sprx_dlsym(__handle, "sceSystemGestureGetTouchEventByIndex", &__ptr_sceSystemGestureGetTouchEventByIndex);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureGetTouchEvents\n"
    ".type sceSystemGestureGetTouchEvents @function\n"
    "sceSystemGestureGetTouchEvents:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetTouchEvents]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureGetTouchEvents\n"
    ".type __load_and_call_sceSystemGestureGetTouchEvents @function\n"
    "__load_and_call_sceSystemGestureGetTouchEvents:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureGetTouchEvents\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetTouchEvents]\n");

void __load_and_call_sceSystemGestureGetTouchEvents();
static __attribute__ ((used)) void* __ptr_sceSystemGestureGetTouchEvents = &__load_and_call_sceSystemGestureGetTouchEvents;

static __attribute__ ((used)) void
__load_sceSystemGestureGetTouchEvents(void) {
  sprx_dlsym(__handle, "sceSystemGestureGetTouchEvents", &__ptr_sceSystemGestureGetTouchEvents);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureGetTouchEventsCount\n"
    ".type sceSystemGestureGetTouchEventsCount @function\n"
    "sceSystemGestureGetTouchEventsCount:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetTouchEventsCount]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureGetTouchEventsCount\n"
    ".type __load_and_call_sceSystemGestureGetTouchEventsCount @function\n"
    "__load_and_call_sceSystemGestureGetTouchEventsCount:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureGetTouchEventsCount\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetTouchEventsCount]\n");

void __load_and_call_sceSystemGestureGetTouchEventsCount();
static __attribute__ ((used)) void* __ptr_sceSystemGestureGetTouchEventsCount = &__load_and_call_sceSystemGestureGetTouchEventsCount;

static __attribute__ ((used)) void
__load_sceSystemGestureGetTouchEventsCount(void) {
  sprx_dlsym(__handle, "sceSystemGestureGetTouchEventsCount", &__ptr_sceSystemGestureGetTouchEventsCount);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureGetTouchRecognizerInformation\n"
    ".type sceSystemGestureGetTouchRecognizerInformation @function\n"
    "sceSystemGestureGetTouchRecognizerInformation:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetTouchRecognizerInformation]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureGetTouchRecognizerInformation\n"
    ".type __load_and_call_sceSystemGestureGetTouchRecognizerInformation @function\n"
    "__load_and_call_sceSystemGestureGetTouchRecognizerInformation:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureGetTouchRecognizerInformation\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureGetTouchRecognizerInformation]\n");

void __load_and_call_sceSystemGestureGetTouchRecognizerInformation();
static __attribute__ ((used)) void* __ptr_sceSystemGestureGetTouchRecognizerInformation = &__load_and_call_sceSystemGestureGetTouchRecognizerInformation;

static __attribute__ ((used)) void
__load_sceSystemGestureGetTouchRecognizerInformation(void) {
  sprx_dlsym(__handle, "sceSystemGestureGetTouchRecognizerInformation", &__ptr_sceSystemGestureGetTouchRecognizerInformation);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureInitializePrimitiveTouchRecognizer\n"
    ".type sceSystemGestureInitializePrimitiveTouchRecognizer @function\n"
    "sceSystemGestureInitializePrimitiveTouchRecognizer:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureInitializePrimitiveTouchRecognizer]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureInitializePrimitiveTouchRecognizer\n"
    ".type __load_and_call_sceSystemGestureInitializePrimitiveTouchRecognizer @function\n"
    "__load_and_call_sceSystemGestureInitializePrimitiveTouchRecognizer:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureInitializePrimitiveTouchRecognizer\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureInitializePrimitiveTouchRecognizer]\n");

void __load_and_call_sceSystemGestureInitializePrimitiveTouchRecognizer();
static __attribute__ ((used)) void* __ptr_sceSystemGestureInitializePrimitiveTouchRecognizer = &__load_and_call_sceSystemGestureInitializePrimitiveTouchRecognizer;

static __attribute__ ((used)) void
__load_sceSystemGestureInitializePrimitiveTouchRecognizer(void) {
  sprx_dlsym(__handle, "sceSystemGestureInitializePrimitiveTouchRecognizer", &__ptr_sceSystemGestureInitializePrimitiveTouchRecognizer);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureOpen\n"
    ".type sceSystemGestureOpen @function\n"
    "sceSystemGestureOpen:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureOpen]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureOpen\n"
    ".type __load_and_call_sceSystemGestureOpen @function\n"
    "__load_and_call_sceSystemGestureOpen:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureOpen\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureOpen]\n");

void __load_and_call_sceSystemGestureOpen();
static __attribute__ ((used)) void* __ptr_sceSystemGestureOpen = &__load_and_call_sceSystemGestureOpen;

static __attribute__ ((used)) void
__load_sceSystemGestureOpen(void) {
  sprx_dlsym(__handle, "sceSystemGestureOpen", &__ptr_sceSystemGestureOpen);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureRemoveTouchRecognizer\n"
    ".type sceSystemGestureRemoveTouchRecognizer @function\n"
    "sceSystemGestureRemoveTouchRecognizer:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureRemoveTouchRecognizer]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureRemoveTouchRecognizer\n"
    ".type __load_and_call_sceSystemGestureRemoveTouchRecognizer @function\n"
    "__load_and_call_sceSystemGestureRemoveTouchRecognizer:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureRemoveTouchRecognizer\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureRemoveTouchRecognizer]\n");

void __load_and_call_sceSystemGestureRemoveTouchRecognizer();
static __attribute__ ((used)) void* __ptr_sceSystemGestureRemoveTouchRecognizer = &__load_and_call_sceSystemGestureRemoveTouchRecognizer;

static __attribute__ ((used)) void
__load_sceSystemGestureRemoveTouchRecognizer(void) {
  sprx_dlsym(__handle, "sceSystemGestureRemoveTouchRecognizer", &__ptr_sceSystemGestureRemoveTouchRecognizer);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureResetPrimitiveTouchRecognizer\n"
    ".type sceSystemGestureResetPrimitiveTouchRecognizer @function\n"
    "sceSystemGestureResetPrimitiveTouchRecognizer:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureResetPrimitiveTouchRecognizer]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureResetPrimitiveTouchRecognizer\n"
    ".type __load_and_call_sceSystemGestureResetPrimitiveTouchRecognizer @function\n"
    "__load_and_call_sceSystemGestureResetPrimitiveTouchRecognizer:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureResetPrimitiveTouchRecognizer\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureResetPrimitiveTouchRecognizer]\n");

void __load_and_call_sceSystemGestureResetPrimitiveTouchRecognizer();
static __attribute__ ((used)) void* __ptr_sceSystemGestureResetPrimitiveTouchRecognizer = &__load_and_call_sceSystemGestureResetPrimitiveTouchRecognizer;

static __attribute__ ((used)) void
__load_sceSystemGestureResetPrimitiveTouchRecognizer(void) {
  sprx_dlsym(__handle, "sceSystemGestureResetPrimitiveTouchRecognizer", &__ptr_sceSystemGestureResetPrimitiveTouchRecognizer);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureResetTouchRecognizer\n"
    ".type sceSystemGestureResetTouchRecognizer @function\n"
    "sceSystemGestureResetTouchRecognizer:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureResetTouchRecognizer]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureResetTouchRecognizer\n"
    ".type __load_and_call_sceSystemGestureResetTouchRecognizer @function\n"
    "__load_and_call_sceSystemGestureResetTouchRecognizer:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureResetTouchRecognizer\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureResetTouchRecognizer]\n");

void __load_and_call_sceSystemGestureResetTouchRecognizer();
static __attribute__ ((used)) void* __ptr_sceSystemGestureResetTouchRecognizer = &__load_and_call_sceSystemGestureResetTouchRecognizer;

static __attribute__ ((used)) void
__load_sceSystemGestureResetTouchRecognizer(void) {
  sprx_dlsym(__handle, "sceSystemGestureResetTouchRecognizer", &__ptr_sceSystemGestureResetTouchRecognizer);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureUpdateAllTouchRecognizer\n"
    ".type sceSystemGestureUpdateAllTouchRecognizer @function\n"
    "sceSystemGestureUpdateAllTouchRecognizer:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureUpdateAllTouchRecognizer]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureUpdateAllTouchRecognizer\n"
    ".type __load_and_call_sceSystemGestureUpdateAllTouchRecognizer @function\n"
    "__load_and_call_sceSystemGestureUpdateAllTouchRecognizer:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureUpdateAllTouchRecognizer\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureUpdateAllTouchRecognizer]\n");

void __load_and_call_sceSystemGestureUpdateAllTouchRecognizer();
static __attribute__ ((used)) void* __ptr_sceSystemGestureUpdateAllTouchRecognizer = &__load_and_call_sceSystemGestureUpdateAllTouchRecognizer;

static __attribute__ ((used)) void
__load_sceSystemGestureUpdateAllTouchRecognizer(void) {
  sprx_dlsym(__handle, "sceSystemGestureUpdateAllTouchRecognizer", &__ptr_sceSystemGestureUpdateAllTouchRecognizer);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureUpdatePrimitiveTouchRecognizer\n"
    ".type sceSystemGestureUpdatePrimitiveTouchRecognizer @function\n"
    "sceSystemGestureUpdatePrimitiveTouchRecognizer:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureUpdatePrimitiveTouchRecognizer]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureUpdatePrimitiveTouchRecognizer\n"
    ".type __load_and_call_sceSystemGestureUpdatePrimitiveTouchRecognizer @function\n"
    "__load_and_call_sceSystemGestureUpdatePrimitiveTouchRecognizer:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureUpdatePrimitiveTouchRecognizer\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureUpdatePrimitiveTouchRecognizer]\n");

void __load_and_call_sceSystemGestureUpdatePrimitiveTouchRecognizer();
static __attribute__ ((used)) void* __ptr_sceSystemGestureUpdatePrimitiveTouchRecognizer = &__load_and_call_sceSystemGestureUpdatePrimitiveTouchRecognizer;

static __attribute__ ((used)) void
__load_sceSystemGestureUpdatePrimitiveTouchRecognizer(void) {
  sprx_dlsym(__handle, "sceSystemGestureUpdatePrimitiveTouchRecognizer", &__ptr_sceSystemGestureUpdatePrimitiveTouchRecognizer);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureUpdateTouchRecognizer\n"
    ".type sceSystemGestureUpdateTouchRecognizer @function\n"
    "sceSystemGestureUpdateTouchRecognizer:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureUpdateTouchRecognizer]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureUpdateTouchRecognizer\n"
    ".type __load_and_call_sceSystemGestureUpdateTouchRecognizer @function\n"
    "__load_and_call_sceSystemGestureUpdateTouchRecognizer:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureUpdateTouchRecognizer\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureUpdateTouchRecognizer]\n");

void __load_and_call_sceSystemGestureUpdateTouchRecognizer();
static __attribute__ ((used)) void* __ptr_sceSystemGestureUpdateTouchRecognizer = &__load_and_call_sceSystemGestureUpdateTouchRecognizer;

static __attribute__ ((used)) void
__load_sceSystemGestureUpdateTouchRecognizer(void) {
  sprx_dlsym(__handle, "sceSystemGestureUpdateTouchRecognizer", &__ptr_sceSystemGestureUpdateTouchRecognizer);
}

asm(".intel_syntax noprefix\n"
    ".global sceSystemGestureUpdateTouchRecognizerRectangle\n"
    ".type sceSystemGestureUpdateTouchRecognizerRectangle @function\n"
    "sceSystemGestureUpdateTouchRecognizerRectangle:\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureUpdateTouchRecognizerRectangle]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceSystemGestureUpdateTouchRecognizerRectangle\n"
    ".type __load_and_call_sceSystemGestureUpdateTouchRecognizerRectangle @function\n"
    "__load_and_call_sceSystemGestureUpdateTouchRecognizerRectangle:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceSystemGestureUpdateTouchRecognizerRectangle\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceSystemGestureUpdateTouchRecognizerRectangle]\n");

void __load_and_call_sceSystemGestureUpdateTouchRecognizerRectangle();
static __attribute__ ((used)) void* __ptr_sceSystemGestureUpdateTouchRecognizerRectangle = &__load_and_call_sceSystemGestureUpdateTouchRecognizerRectangle;

static __attribute__ ((used)) void
__load_sceSystemGestureUpdateTouchRecognizerRectangle(void) {
  sprx_dlsym(__handle, "sceSystemGestureUpdateTouchRecognizerRectangle", &__ptr_sceSystemGestureUpdateTouchRecognizerRectangle);
}