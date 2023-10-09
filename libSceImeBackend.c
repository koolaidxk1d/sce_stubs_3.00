/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceImeBackend", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceImeBackendAllConfirm\n"
    ".type sceImeBackendAllConfirm @function\n"
    "sceImeBackendAllConfirm:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendAllConfirm]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendAllConfirm\n"
    ".type __load_and_call_sceImeBackendAllConfirm @function\n"
    "__load_and_call_sceImeBackendAllConfirm:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendAllConfirm\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendAllConfirm]\n");

void __load_and_call_sceImeBackendAllConfirm();
static __attribute__ ((used)) void* __ptr_sceImeBackendAllConfirm = &__load_and_call_sceImeBackendAllConfirm;

static __attribute__ ((used)) void
__load_sceImeBackendAllConfirm(void) {
  sprx_dlsym(__handle, "sceImeBackendAllConfirm", &__ptr_sceImeBackendAllConfirm);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendAllDeleteConvertString\n"
    ".type sceImeBackendAllDeleteConvertString @function\n"
    "sceImeBackendAllDeleteConvertString:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendAllDeleteConvertString]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendAllDeleteConvertString\n"
    ".type __load_and_call_sceImeBackendAllDeleteConvertString @function\n"
    "__load_and_call_sceImeBackendAllDeleteConvertString:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendAllDeleteConvertString\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendAllDeleteConvertString]\n");

void __load_and_call_sceImeBackendAllDeleteConvertString();
static __attribute__ ((used)) void* __ptr_sceImeBackendAllDeleteConvertString = &__load_and_call_sceImeBackendAllDeleteConvertString;

static __attribute__ ((used)) void
__load_sceImeBackendAllDeleteConvertString(void) {
  sprx_dlsym(__handle, "sceImeBackendAllDeleteConvertString", &__ptr_sceImeBackendAllDeleteConvertString);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendBackspaceCharacter\n"
    ".type sceImeBackendBackspaceCharacter @function\n"
    "sceImeBackendBackspaceCharacter:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendBackspaceCharacter]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendBackspaceCharacter\n"
    ".type __load_and_call_sceImeBackendBackspaceCharacter @function\n"
    "__load_and_call_sceImeBackendBackspaceCharacter:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendBackspaceCharacter\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendBackspaceCharacter]\n");

void __load_and_call_sceImeBackendBackspaceCharacter();
static __attribute__ ((used)) void* __ptr_sceImeBackendBackspaceCharacter = &__load_and_call_sceImeBackendBackspaceCharacter;

static __attribute__ ((used)) void
__load_sceImeBackendBackspaceCharacter(void) {
  sprx_dlsym(__handle, "sceImeBackendBackspaceCharacter", &__ptr_sceImeBackendBackspaceCharacter);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendClose\n"
    ".type sceImeBackendClose @function\n"
    "sceImeBackendClose:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendClose]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendClose\n"
    ".type __load_and_call_sceImeBackendClose @function\n"
    "__load_and_call_sceImeBackendClose:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendClose\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendClose]\n");

void __load_and_call_sceImeBackendClose();
static __attribute__ ((used)) void* __ptr_sceImeBackendClose = &__load_and_call_sceImeBackendClose;

static __attribute__ ((used)) void
__load_sceImeBackendClose(void) {
  sprx_dlsym(__handle, "sceImeBackendClose", &__ptr_sceImeBackendClose);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendConvertBackward\n"
    ".type sceImeBackendConvertBackward @function\n"
    "sceImeBackendConvertBackward:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendConvertBackward]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendConvertBackward\n"
    ".type __load_and_call_sceImeBackendConvertBackward @function\n"
    "__load_and_call_sceImeBackendConvertBackward:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendConvertBackward\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendConvertBackward]\n");

void __load_and_call_sceImeBackendConvertBackward();
static __attribute__ ((used)) void* __ptr_sceImeBackendConvertBackward = &__load_and_call_sceImeBackendConvertBackward;

static __attribute__ ((used)) void
__load_sceImeBackendConvertBackward(void) {
  sprx_dlsym(__handle, "sceImeBackendConvertBackward", &__ptr_sceImeBackendConvertBackward);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendConvertCancel\n"
    ".type sceImeBackendConvertCancel @function\n"
    "sceImeBackendConvertCancel:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendConvertCancel]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendConvertCancel\n"
    ".type __load_and_call_sceImeBackendConvertCancel @function\n"
    "__load_and_call_sceImeBackendConvertCancel:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendConvertCancel\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendConvertCancel]\n");

void __load_and_call_sceImeBackendConvertCancel();
static __attribute__ ((used)) void* __ptr_sceImeBackendConvertCancel = &__load_and_call_sceImeBackendConvertCancel;

static __attribute__ ((used)) void
__load_sceImeBackendConvertCancel(void) {
  sprx_dlsym(__handle, "sceImeBackendConvertCancel", &__ptr_sceImeBackendConvertCancel);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendConvertForward\n"
    ".type sceImeBackendConvertForward @function\n"
    "sceImeBackendConvertForward:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendConvertForward]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendConvertForward\n"
    ".type __load_and_call_sceImeBackendConvertForward @function\n"
    "__load_and_call_sceImeBackendConvertForward:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendConvertForward\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendConvertForward]\n");

void __load_and_call_sceImeBackendConvertForward();
static __attribute__ ((used)) void* __ptr_sceImeBackendConvertForward = &__load_and_call_sceImeBackendConvertForward;

static __attribute__ ((used)) void
__load_sceImeBackendConvertForward(void) {
  sprx_dlsym(__handle, "sceImeBackendConvertForward", &__ptr_sceImeBackendConvertForward);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendDeleteCharacter\n"
    ".type sceImeBackendDeleteCharacter @function\n"
    "sceImeBackendDeleteCharacter:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendDeleteCharacter]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendDeleteCharacter\n"
    ".type __load_and_call_sceImeBackendDeleteCharacter @function\n"
    "__load_and_call_sceImeBackendDeleteCharacter:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendDeleteCharacter\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendDeleteCharacter]\n");

void __load_and_call_sceImeBackendDeleteCharacter();
static __attribute__ ((used)) void* __ptr_sceImeBackendDeleteCharacter = &__load_and_call_sceImeBackendDeleteCharacter;

static __attribute__ ((used)) void
__load_sceImeBackendDeleteCharacter(void) {
  sprx_dlsym(__handle, "sceImeBackendDeleteCharacter", &__ptr_sceImeBackendDeleteCharacter);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendEnterCharacter\n"
    ".type sceImeBackendEnterCharacter @function\n"
    "sceImeBackendEnterCharacter:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendEnterCharacter]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendEnterCharacter\n"
    ".type __load_and_call_sceImeBackendEnterCharacter @function\n"
    "__load_and_call_sceImeBackendEnterCharacter:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendEnterCharacter\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendEnterCharacter]\n");

void __load_and_call_sceImeBackendEnterCharacter();
static __attribute__ ((used)) void* __ptr_sceImeBackendEnterCharacter = &__load_and_call_sceImeBackendEnterCharacter;

static __attribute__ ((used)) void
__load_sceImeBackendEnterCharacter(void) {
  sprx_dlsym(__handle, "sceImeBackendEnterCharacter", &__ptr_sceImeBackendEnterCharacter);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendForTestFunction\n"
    ".type sceImeBackendForTestFunction @function\n"
    "sceImeBackendForTestFunction:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendForTestFunction]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendForTestFunction\n"
    ".type __load_and_call_sceImeBackendForTestFunction @function\n"
    "__load_and_call_sceImeBackendForTestFunction:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendForTestFunction\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendForTestFunction]\n");

void __load_and_call_sceImeBackendForTestFunction();
static __attribute__ ((used)) void* __ptr_sceImeBackendForTestFunction = &__load_and_call_sceImeBackendForTestFunction;

static __attribute__ ((used)) void
__load_sceImeBackendForTestFunction(void) {
  sprx_dlsym(__handle, "sceImeBackendForTestFunction", &__ptr_sceImeBackendForTestFunction);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendGetCandidateList\n"
    ".type sceImeBackendGetCandidateList @function\n"
    "sceImeBackendGetCandidateList:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetCandidateList]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendGetCandidateList\n"
    ".type __load_and_call_sceImeBackendGetCandidateList @function\n"
    "__load_and_call_sceImeBackendGetCandidateList:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendGetCandidateList\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetCandidateList]\n");

void __load_and_call_sceImeBackendGetCandidateList();
static __attribute__ ((used)) void* __ptr_sceImeBackendGetCandidateList = &__load_and_call_sceImeBackendGetCandidateList;

static __attribute__ ((used)) void
__load_sceImeBackendGetCandidateList(void) {
  sprx_dlsym(__handle, "sceImeBackendGetCandidateList", &__ptr_sceImeBackendGetCandidateList);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendGetCandidateListSize\n"
    ".type sceImeBackendGetCandidateListSize @function\n"
    "sceImeBackendGetCandidateListSize:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetCandidateListSize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendGetCandidateListSize\n"
    ".type __load_and_call_sceImeBackendGetCandidateListSize @function\n"
    "__load_and_call_sceImeBackendGetCandidateListSize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendGetCandidateListSize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetCandidateListSize]\n");

void __load_and_call_sceImeBackendGetCandidateListSize();
static __attribute__ ((used)) void* __ptr_sceImeBackendGetCandidateListSize = &__load_and_call_sceImeBackendGetCandidateListSize;

static __attribute__ ((used)) void
__load_sceImeBackendGetCandidateListSize(void) {
  sprx_dlsym(__handle, "sceImeBackendGetCandidateListSize", &__ptr_sceImeBackendGetCandidateListSize);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendGetCandidateSelect\n"
    ".type sceImeBackendGetCandidateSelect @function\n"
    "sceImeBackendGetCandidateSelect:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetCandidateSelect]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendGetCandidateSelect\n"
    ".type __load_and_call_sceImeBackendGetCandidateSelect @function\n"
    "__load_and_call_sceImeBackendGetCandidateSelect:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendGetCandidateSelect\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetCandidateSelect]\n");

void __load_and_call_sceImeBackendGetCandidateSelect();
static __attribute__ ((used)) void* __ptr_sceImeBackendGetCandidateSelect = &__load_and_call_sceImeBackendGetCandidateSelect;

static __attribute__ ((used)) void
__load_sceImeBackendGetCandidateSelect(void) {
  sprx_dlsym(__handle, "sceImeBackendGetCandidateSelect", &__ptr_sceImeBackendGetCandidateSelect);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendGetCaretIndex\n"
    ".type sceImeBackendGetCaretIndex @function\n"
    "sceImeBackendGetCaretIndex:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetCaretIndex]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendGetCaretIndex\n"
    ".type __load_and_call_sceImeBackendGetCaretIndex @function\n"
    "__load_and_call_sceImeBackendGetCaretIndex:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendGetCaretIndex\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetCaretIndex]\n");

void __load_and_call_sceImeBackendGetCaretIndex();
static __attribute__ ((used)) void* __ptr_sceImeBackendGetCaretIndex = &__load_and_call_sceImeBackendGetCaretIndex;

static __attribute__ ((used)) void
__load_sceImeBackendGetCaretIndex(void) {
  sprx_dlsym(__handle, "sceImeBackendGetCaretIndex", &__ptr_sceImeBackendGetCaretIndex);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendGetConfirmString\n"
    ".type sceImeBackendGetConfirmString @function\n"
    "sceImeBackendGetConfirmString:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetConfirmString]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendGetConfirmString\n"
    ".type __load_and_call_sceImeBackendGetConfirmString @function\n"
    "__load_and_call_sceImeBackendGetConfirmString:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendGetConfirmString\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetConfirmString]\n");

void __load_and_call_sceImeBackendGetConfirmString();
static __attribute__ ((used)) void* __ptr_sceImeBackendGetConfirmString = &__load_and_call_sceImeBackendGetConfirmString;

static __attribute__ ((used)) void
__load_sceImeBackendGetConfirmString(void) {
  sprx_dlsym(__handle, "sceImeBackendGetConfirmString", &__ptr_sceImeBackendGetConfirmString);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendGetConvertMode\n"
    ".type sceImeBackendGetConvertMode @function\n"
    "sceImeBackendGetConvertMode:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetConvertMode]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendGetConvertMode\n"
    ".type __load_and_call_sceImeBackendGetConvertMode @function\n"
    "__load_and_call_sceImeBackendGetConvertMode:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendGetConvertMode\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetConvertMode]\n");

void __load_and_call_sceImeBackendGetConvertMode();
static __attribute__ ((used)) void* __ptr_sceImeBackendGetConvertMode = &__load_and_call_sceImeBackendGetConvertMode;

static __attribute__ ((used)) void
__load_sceImeBackendGetConvertMode(void) {
  sprx_dlsym(__handle, "sceImeBackendGetConvertMode", &__ptr_sceImeBackendGetConvertMode);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendGetConvertString\n"
    ".type sceImeBackendGetConvertString @function\n"
    "sceImeBackendGetConvertString:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetConvertString]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendGetConvertString\n"
    ".type __load_and_call_sceImeBackendGetConvertString @function\n"
    "__load_and_call_sceImeBackendGetConvertString:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendGetConvertString\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetConvertString]\n");

void __load_and_call_sceImeBackendGetConvertString();
static __attribute__ ((used)) void* __ptr_sceImeBackendGetConvertString = &__load_and_call_sceImeBackendGetConvertString;

static __attribute__ ((used)) void
__load_sceImeBackendGetConvertString(void) {
  sprx_dlsym(__handle, "sceImeBackendGetConvertString", &__ptr_sceImeBackendGetConvertString);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendGetStatus\n"
    ".type sceImeBackendGetStatus @function\n"
    "sceImeBackendGetStatus:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetStatus]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendGetStatus\n"
    ".type __load_and_call_sceImeBackendGetStatus @function\n"
    "__load_and_call_sceImeBackendGetStatus:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendGetStatus\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetStatus]\n");

void __load_and_call_sceImeBackendGetStatus();
static __attribute__ ((used)) void* __ptr_sceImeBackendGetStatus = &__load_and_call_sceImeBackendGetStatus;

static __attribute__ ((used)) void
__load_sceImeBackendGetStatus(void) {
  sprx_dlsym(__handle, "sceImeBackendGetStatus", &__ptr_sceImeBackendGetStatus);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendGetString\n"
    ".type sceImeBackendGetString @function\n"
    "sceImeBackendGetString:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetString]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendGetString\n"
    ".type __load_and_call_sceImeBackendGetString @function\n"
    "__load_and_call_sceImeBackendGetString:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendGetString\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendGetString]\n");

void __load_and_call_sceImeBackendGetString();
static __attribute__ ((used)) void* __ptr_sceImeBackendGetString = &__load_and_call_sceImeBackendGetString;

static __attribute__ ((used)) void
__load_sceImeBackendGetString(void) {
  sprx_dlsym(__handle, "sceImeBackendGetString", &__ptr_sceImeBackendGetString);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendModeCaretNext\n"
    ".type sceImeBackendModeCaretNext @function\n"
    "sceImeBackendModeCaretNext:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendModeCaretNext]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendModeCaretNext\n"
    ".type __load_and_call_sceImeBackendModeCaretNext @function\n"
    "__load_and_call_sceImeBackendModeCaretNext:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendModeCaretNext\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendModeCaretNext]\n");

void __load_and_call_sceImeBackendModeCaretNext();
static __attribute__ ((used)) void* __ptr_sceImeBackendModeCaretNext = &__load_and_call_sceImeBackendModeCaretNext;

static __attribute__ ((used)) void
__load_sceImeBackendModeCaretNext(void) {
  sprx_dlsym(__handle, "sceImeBackendModeCaretNext", &__ptr_sceImeBackendModeCaretNext);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendModeCaretPrevious\n"
    ".type sceImeBackendModeCaretPrevious @function\n"
    "sceImeBackendModeCaretPrevious:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendModeCaretPrevious]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendModeCaretPrevious\n"
    ".type __load_and_call_sceImeBackendModeCaretPrevious @function\n"
    "__load_and_call_sceImeBackendModeCaretPrevious:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendModeCaretPrevious\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendModeCaretPrevious]\n");

void __load_and_call_sceImeBackendModeCaretPrevious();
static __attribute__ ((used)) void* __ptr_sceImeBackendModeCaretPrevious = &__load_and_call_sceImeBackendModeCaretPrevious;

static __attribute__ ((used)) void
__load_sceImeBackendModeCaretPrevious(void) {
  sprx_dlsym(__handle, "sceImeBackendModeCaretPrevious", &__ptr_sceImeBackendModeCaretPrevious);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendOpen\n"
    ".type sceImeBackendOpen @function\n"
    "sceImeBackendOpen:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendOpen]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendOpen\n"
    ".type __load_and_call_sceImeBackendOpen @function\n"
    "__load_and_call_sceImeBackendOpen:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendOpen\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendOpen]\n");

void __load_and_call_sceImeBackendOpen();
static __attribute__ ((used)) void* __ptr_sceImeBackendOpen = &__load_and_call_sceImeBackendOpen;

static __attribute__ ((used)) void
__load_sceImeBackendOpen(void) {
  sprx_dlsym(__handle, "sceImeBackendOpen", &__ptr_sceImeBackendOpen);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendParamInit\n"
    ".type sceImeBackendParamInit @function\n"
    "sceImeBackendParamInit:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendParamInit]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendParamInit\n"
    ".type __load_and_call_sceImeBackendParamInit @function\n"
    "__load_and_call_sceImeBackendParamInit:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendParamInit\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendParamInit]\n");

void __load_and_call_sceImeBackendParamInit();
static __attribute__ ((used)) void* __ptr_sceImeBackendParamInit = &__load_and_call_sceImeBackendParamInit;

static __attribute__ ((used)) void
__load_sceImeBackendParamInit(void) {
  sprx_dlsym(__handle, "sceImeBackendParamInit", &__ptr_sceImeBackendParamInit);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendPartConfirm\n"
    ".type sceImeBackendPartConfirm @function\n"
    "sceImeBackendPartConfirm:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendPartConfirm]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendPartConfirm\n"
    ".type __load_and_call_sceImeBackendPartConfirm @function\n"
    "__load_and_call_sceImeBackendPartConfirm:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendPartConfirm\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendPartConfirm]\n");

void __load_and_call_sceImeBackendPartConfirm();
static __attribute__ ((used)) void* __ptr_sceImeBackendPartConfirm = &__load_and_call_sceImeBackendPartConfirm;

static __attribute__ ((used)) void
__load_sceImeBackendPartConfirm(void) {
  sprx_dlsym(__handle, "sceImeBackendPartConfirm", &__ptr_sceImeBackendPartConfirm);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendReset\n"
    ".type sceImeBackendReset @function\n"
    "sceImeBackendReset:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendReset]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendReset\n"
    ".type __load_and_call_sceImeBackendReset @function\n"
    "__load_and_call_sceImeBackendReset:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendReset\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendReset]\n");

void __load_and_call_sceImeBackendReset();
static __attribute__ ((used)) void* __ptr_sceImeBackendReset = &__load_and_call_sceImeBackendReset;

static __attribute__ ((used)) void
__load_sceImeBackendReset(void) {
  sprx_dlsym(__handle, "sceImeBackendReset", &__ptr_sceImeBackendReset);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendSetConvertMode\n"
    ".type sceImeBackendSetConvertMode @function\n"
    "sceImeBackendSetConvertMode:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendSetConvertMode]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendSetConvertMode\n"
    ".type __load_and_call_sceImeBackendSetConvertMode @function\n"
    "__load_and_call_sceImeBackendSetConvertMode:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendSetConvertMode\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendSetConvertMode]\n");

void __load_and_call_sceImeBackendSetConvertMode();
static __attribute__ ((used)) void* __ptr_sceImeBackendSetConvertMode = &__load_and_call_sceImeBackendSetConvertMode;

static __attribute__ ((used)) void
__load_sceImeBackendSetConvertMode(void) {
  sprx_dlsym(__handle, "sceImeBackendSetConvertMode", &__ptr_sceImeBackendSetConvertMode);
}

asm(".intel_syntax noprefix\n"
    ".global sceImeBackendTemporalConfirm\n"
    ".type sceImeBackendTemporalConfirm @function\n"
    "sceImeBackendTemporalConfirm:\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendTemporalConfirm]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceImeBackendTemporalConfirm\n"
    ".type __load_and_call_sceImeBackendTemporalConfirm @function\n"
    "__load_and_call_sceImeBackendTemporalConfirm:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceImeBackendTemporalConfirm\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceImeBackendTemporalConfirm]\n");

void __load_and_call_sceImeBackendTemporalConfirm();
static __attribute__ ((used)) void* __ptr_sceImeBackendTemporalConfirm = &__load_and_call_sceImeBackendTemporalConfirm;

static __attribute__ ((used)) void
__load_sceImeBackendTemporalConfirm(void) {
  sprx_dlsym(__handle, "sceImeBackendTemporalConfirm", &__ptr_sceImeBackendTemporalConfirm);
}