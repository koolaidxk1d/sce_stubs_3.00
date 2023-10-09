/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceConvertKeycode", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceConvertKeycodeGetCharacter\n"
    ".type sceConvertKeycodeGetCharacter @function\n"
    "sceConvertKeycodeGetCharacter:\n"
    "jmp qword ptr [rip + __ptr_sceConvertKeycodeGetCharacter]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceConvertKeycodeGetCharacter\n"
    ".type __load_and_call_sceConvertKeycodeGetCharacter @function\n"
    "__load_and_call_sceConvertKeycodeGetCharacter:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceConvertKeycodeGetCharacter\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceConvertKeycodeGetCharacter]\n");

void __load_and_call_sceConvertKeycodeGetCharacter();
static __attribute__ ((used)) void* __ptr_sceConvertKeycodeGetCharacter = &__load_and_call_sceConvertKeycodeGetCharacter;

static __attribute__ ((used)) void
__load_sceConvertKeycodeGetCharacter(void) {
  sprx_dlsym(__handle, "sceConvertKeycodeGetCharacter", &__ptr_sceConvertKeycodeGetCharacter);
}

asm(".intel_syntax noprefix\n"
    ".global sceConvertKeycodeGetCharacterFromKeyboardData\n"
    ".type sceConvertKeycodeGetCharacterFromKeyboardData @function\n"
    "sceConvertKeycodeGetCharacterFromKeyboardData:\n"
    "jmp qword ptr [rip + __ptr_sceConvertKeycodeGetCharacterFromKeyboardData]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceConvertKeycodeGetCharacterFromKeyboardData\n"
    ".type __load_and_call_sceConvertKeycodeGetCharacterFromKeyboardData @function\n"
    "__load_and_call_sceConvertKeycodeGetCharacterFromKeyboardData:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceConvertKeycodeGetCharacterFromKeyboardData\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceConvertKeycodeGetCharacterFromKeyboardData]\n");

void __load_and_call_sceConvertKeycodeGetCharacterFromKeyboardData();
static __attribute__ ((used)) void* __ptr_sceConvertKeycodeGetCharacterFromKeyboardData = &__load_and_call_sceConvertKeycodeGetCharacterFromKeyboardData;

static __attribute__ ((used)) void
__load_sceConvertKeycodeGetCharacterFromKeyboardData(void) {
  sprx_dlsym(__handle, "sceConvertKeycodeGetCharacterFromKeyboardData", &__ptr_sceConvertKeycodeGetCharacterFromKeyboardData);
}

asm(".intel_syntax noprefix\n"
    ".global sceConvertKeycodeGetImeKeyboardType\n"
    ".type sceConvertKeycodeGetImeKeyboardType @function\n"
    "sceConvertKeycodeGetImeKeyboardType:\n"
    "jmp qword ptr [rip + __ptr_sceConvertKeycodeGetImeKeyboardType]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceConvertKeycodeGetImeKeyboardType\n"
    ".type __load_and_call_sceConvertKeycodeGetImeKeyboardType @function\n"
    "__load_and_call_sceConvertKeycodeGetImeKeyboardType:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceConvertKeycodeGetImeKeyboardType\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceConvertKeycodeGetImeKeyboardType]\n");

void __load_and_call_sceConvertKeycodeGetImeKeyboardType();
static __attribute__ ((used)) void* __ptr_sceConvertKeycodeGetImeKeyboardType = &__load_and_call_sceConvertKeycodeGetImeKeyboardType;

static __attribute__ ((used)) void
__load_sceConvertKeycodeGetImeKeyboardType(void) {
  sprx_dlsym(__handle, "sceConvertKeycodeGetImeKeyboardType", &__ptr_sceConvertKeycodeGetImeKeyboardType);
}

asm(".intel_syntax noprefix\n"
    ".global sceConvertKeycodeGetVirtualKeycode\n"
    ".type sceConvertKeycodeGetVirtualKeycode @function\n"
    "sceConvertKeycodeGetVirtualKeycode:\n"
    "jmp qword ptr [rip + __ptr_sceConvertKeycodeGetVirtualKeycode]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceConvertKeycodeGetVirtualKeycode\n"
    ".type __load_and_call_sceConvertKeycodeGetVirtualKeycode @function\n"
    "__load_and_call_sceConvertKeycodeGetVirtualKeycode:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceConvertKeycodeGetVirtualKeycode\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceConvertKeycodeGetVirtualKeycode]\n");

void __load_and_call_sceConvertKeycodeGetVirtualKeycode();
static __attribute__ ((used)) void* __ptr_sceConvertKeycodeGetVirtualKeycode = &__load_and_call_sceConvertKeycodeGetVirtualKeycode;

static __attribute__ ((used)) void
__load_sceConvertKeycodeGetVirtualKeycode(void) {
  sprx_dlsym(__handle, "sceConvertKeycodeGetVirtualKeycode", &__ptr_sceConvertKeycodeGetVirtualKeycode);
}
