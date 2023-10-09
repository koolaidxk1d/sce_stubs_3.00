/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceTextToSpeech", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceTextToSpeechCancelImpl\n"
    ".type sceTextToSpeechCancelImpl @function\n"
    "sceTextToSpeechCancelImpl:\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechCancelImpl]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceTextToSpeechCancelImpl\n"
    ".type __load_and_call_sceTextToSpeechCancelImpl @function\n"
    "__load_and_call_sceTextToSpeechCancelImpl:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceTextToSpeechCancelImpl\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechCancelImpl]\n");

void __load_and_call_sceTextToSpeechCancelImpl();
static __attribute__ ((used)) void* __ptr_sceTextToSpeechCancelImpl = &__load_and_call_sceTextToSpeechCancelImpl;

static __attribute__ ((used)) void
__load_sceTextToSpeechCancelImpl(void) {
  sprx_dlsym(__handle, "sceTextToSpeechCancelImpl", &__ptr_sceTextToSpeechCancelImpl);
}

asm(".intel_syntax noprefix\n"
    ".global sceTextToSpeechCloseImpl\n"
    ".type sceTextToSpeechCloseImpl @function\n"
    "sceTextToSpeechCloseImpl:\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechCloseImpl]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceTextToSpeechCloseImpl\n"
    ".type __load_and_call_sceTextToSpeechCloseImpl @function\n"
    "__load_and_call_sceTextToSpeechCloseImpl:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceTextToSpeechCloseImpl\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechCloseImpl]\n");

void __load_and_call_sceTextToSpeechCloseImpl();
static __attribute__ ((used)) void* __ptr_sceTextToSpeechCloseImpl = &__load_and_call_sceTextToSpeechCloseImpl;

static __attribute__ ((used)) void
__load_sceTextToSpeechCloseImpl(void) {
  sprx_dlsym(__handle, "sceTextToSpeechCloseImpl", &__ptr_sceTextToSpeechCloseImpl);
}

asm(".intel_syntax noprefix\n"
    ".global sceTextToSpeechGetStatusImpl\n"
    ".type sceTextToSpeechGetStatusImpl @function\n"
    "sceTextToSpeechGetStatusImpl:\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechGetStatusImpl]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceTextToSpeechGetStatusImpl\n"
    ".type __load_and_call_sceTextToSpeechGetStatusImpl @function\n"
    "__load_and_call_sceTextToSpeechGetStatusImpl:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceTextToSpeechGetStatusImpl\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechGetStatusImpl]\n");

void __load_and_call_sceTextToSpeechGetStatusImpl();
static __attribute__ ((used)) void* __ptr_sceTextToSpeechGetStatusImpl = &__load_and_call_sceTextToSpeechGetStatusImpl;

static __attribute__ ((used)) void
__load_sceTextToSpeechGetStatusImpl(void) {
  sprx_dlsym(__handle, "sceTextToSpeechGetStatusImpl", &__ptr_sceTextToSpeechGetStatusImpl);
}

asm(".intel_syntax noprefix\n"
    ".global sceTextToSpeechInitImpl\n"
    ".type sceTextToSpeechInitImpl @function\n"
    "sceTextToSpeechInitImpl:\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechInitImpl]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceTextToSpeechInitImpl\n"
    ".type __load_and_call_sceTextToSpeechInitImpl @function\n"
    "__load_and_call_sceTextToSpeechInitImpl:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceTextToSpeechInitImpl\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechInitImpl]\n");

void __load_and_call_sceTextToSpeechInitImpl();
static __attribute__ ((used)) void* __ptr_sceTextToSpeechInitImpl = &__load_and_call_sceTextToSpeechInitImpl;

static __attribute__ ((used)) void
__load_sceTextToSpeechInitImpl(void) {
  sprx_dlsym(__handle, "sceTextToSpeechInitImpl", &__ptr_sceTextToSpeechInitImpl);
}

asm(".intel_syntax noprefix\n"
    ".global sceTextToSpeechOpenImpl\n"
    ".type sceTextToSpeechOpenImpl @function\n"
    "sceTextToSpeechOpenImpl:\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechOpenImpl]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceTextToSpeechOpenImpl\n"
    ".type __load_and_call_sceTextToSpeechOpenImpl @function\n"
    "__load_and_call_sceTextToSpeechOpenImpl:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceTextToSpeechOpenImpl\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechOpenImpl]\n");

void __load_and_call_sceTextToSpeechOpenImpl();
static __attribute__ ((used)) void* __ptr_sceTextToSpeechOpenImpl = &__load_and_call_sceTextToSpeechOpenImpl;

static __attribute__ ((used)) void
__load_sceTextToSpeechOpenImpl(void) {
  sprx_dlsym(__handle, "sceTextToSpeechOpenImpl", &__ptr_sceTextToSpeechOpenImpl);
}

asm(".intel_syntax noprefix\n"
    ".global sceTextToSpeechPauseImpl\n"
    ".type sceTextToSpeechPauseImpl @function\n"
    "sceTextToSpeechPauseImpl:\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechPauseImpl]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceTextToSpeechPauseImpl\n"
    ".type __load_and_call_sceTextToSpeechPauseImpl @function\n"
    "__load_and_call_sceTextToSpeechPauseImpl:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceTextToSpeechPauseImpl\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechPauseImpl]\n");

void __load_and_call_sceTextToSpeechPauseImpl();
static __attribute__ ((used)) void* __ptr_sceTextToSpeechPauseImpl = &__load_and_call_sceTextToSpeechPauseImpl;

static __attribute__ ((used)) void
__load_sceTextToSpeechPauseImpl(void) {
  sprx_dlsym(__handle, "sceTextToSpeechPauseImpl", &__ptr_sceTextToSpeechPauseImpl);
}

asm(".intel_syntax noprefix\n"
    ".global sceTextToSpeechResumeImpl\n"
    ".type sceTextToSpeechResumeImpl @function\n"
    "sceTextToSpeechResumeImpl:\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechResumeImpl]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceTextToSpeechResumeImpl\n"
    ".type __load_and_call_sceTextToSpeechResumeImpl @function\n"
    "__load_and_call_sceTextToSpeechResumeImpl:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceTextToSpeechResumeImpl\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechResumeImpl]\n");

void __load_and_call_sceTextToSpeechResumeImpl();
static __attribute__ ((used)) void* __ptr_sceTextToSpeechResumeImpl = &__load_and_call_sceTextToSpeechResumeImpl;

static __attribute__ ((used)) void
__load_sceTextToSpeechResumeImpl(void) {
  sprx_dlsym(__handle, "sceTextToSpeechResumeImpl", &__ptr_sceTextToSpeechResumeImpl);
}

asm(".intel_syntax noprefix\n"
    ".global sceTextToSpeechSpeakContinuousImpl\n"
    ".type sceTextToSpeechSpeakContinuousImpl @function\n"
    "sceTextToSpeechSpeakContinuousImpl:\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechSpeakContinuousImpl]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceTextToSpeechSpeakContinuousImpl\n"
    ".type __load_and_call_sceTextToSpeechSpeakContinuousImpl @function\n"
    "__load_and_call_sceTextToSpeechSpeakContinuousImpl:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceTextToSpeechSpeakContinuousImpl\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechSpeakContinuousImpl]\n");

void __load_and_call_sceTextToSpeechSpeakContinuousImpl();
static __attribute__ ((used)) void* __ptr_sceTextToSpeechSpeakContinuousImpl = &__load_and_call_sceTextToSpeechSpeakContinuousImpl;

static __attribute__ ((used)) void
__load_sceTextToSpeechSpeakContinuousImpl(void) {
  sprx_dlsym(__handle, "sceTextToSpeechSpeakContinuousImpl", &__ptr_sceTextToSpeechSpeakContinuousImpl);
}

asm(".intel_syntax noprefix\n"
    ".global sceTextToSpeechSpeakImpl\n"
    ".type sceTextToSpeechSpeakImpl @function\n"
    "sceTextToSpeechSpeakImpl:\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechSpeakImpl]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceTextToSpeechSpeakImpl\n"
    ".type __load_and_call_sceTextToSpeechSpeakImpl @function\n"
    "__load_and_call_sceTextToSpeechSpeakImpl:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceTextToSpeechSpeakImpl\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechSpeakImpl]\n");

void __load_and_call_sceTextToSpeechSpeakImpl();
static __attribute__ ((used)) void* __ptr_sceTextToSpeechSpeakImpl = &__load_and_call_sceTextToSpeechSpeakImpl;

static __attribute__ ((used)) void
__load_sceTextToSpeechSpeakImpl(void) {
  sprx_dlsym(__handle, "sceTextToSpeechSpeakImpl", &__ptr_sceTextToSpeechSpeakImpl);
}

asm(".intel_syntax noprefix\n"
    ".global sceTextToSpeechTermImpl\n"
    ".type sceTextToSpeechTermImpl @function\n"
    "sceTextToSpeechTermImpl:\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechTermImpl]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceTextToSpeechTermImpl\n"
    ".type __load_and_call_sceTextToSpeechTermImpl @function\n"
    "__load_and_call_sceTextToSpeechTermImpl:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceTextToSpeechTermImpl\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceTextToSpeechTermImpl]\n");

void __load_and_call_sceTextToSpeechTermImpl();
static __attribute__ ((used)) void* __ptr_sceTextToSpeechTermImpl = &__load_and_call_sceTextToSpeechTermImpl;

static __attribute__ ((used)) void
__load_sceTextToSpeechTermImpl(void) {
  sprx_dlsym(__handle, "sceTextToSpeechTermImpl", &__ptr_sceTextToSpeechTermImpl);
}