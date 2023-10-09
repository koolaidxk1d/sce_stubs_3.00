/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceCustomMusicAudioOut", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicAudioOutFinalize\n"
    ".type sceCustomMusicAudioOutFinalize @function\n"
    "sceCustomMusicAudioOutFinalize:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicAudioOutFinalize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicAudioOutFinalize\n"
    ".type __load_and_call_sceCustomMusicAudioOutFinalize @function\n"
    "__load_and_call_sceCustomMusicAudioOutFinalize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicAudioOutFinalize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicAudioOutFinalize]\n");

void __load_and_call_sceCustomMusicAudioOutFinalize();
static __attribute__ ((used)) void* __ptr_sceCustomMusicAudioOutFinalize = &__load_and_call_sceCustomMusicAudioOutFinalize;

static __attribute__ ((used)) void
__load_sceCustomMusicAudioOutFinalize(void) {
  sprx_dlsym(__handle, "sceCustomMusicAudioOutFinalize", &__ptr_sceCustomMusicAudioOutFinalize);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicAudioOutGetAllMusicVolume\n"
    ".type sceCustomMusicAudioOutGetAllMusicVolume @function\n"
    "sceCustomMusicAudioOutGetAllMusicVolume:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicAudioOutGetAllMusicVolume]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicAudioOutGetAllMusicVolume\n"
    ".type __load_and_call_sceCustomMusicAudioOutGetAllMusicVolume @function\n"
    "__load_and_call_sceCustomMusicAudioOutGetAllMusicVolume:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicAudioOutGetAllMusicVolume\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicAudioOutGetAllMusicVolume]\n");

void __load_and_call_sceCustomMusicAudioOutGetAllMusicVolume();
static __attribute__ ((used)) void* __ptr_sceCustomMusicAudioOutGetAllMusicVolume = &__load_and_call_sceCustomMusicAudioOutGetAllMusicVolume;

static __attribute__ ((used)) void
__load_sceCustomMusicAudioOutGetAllMusicVolume(void) {
  sprx_dlsym(__handle, "sceCustomMusicAudioOutGetAllMusicVolume", &__ptr_sceCustomMusicAudioOutGetAllMusicVolume);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicAudioOutGetMuted\n"
    ".type sceCustomMusicAudioOutGetMuted @function\n"
    "sceCustomMusicAudioOutGetMuted:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicAudioOutGetMuted]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicAudioOutGetMuted\n"
    ".type __load_and_call_sceCustomMusicAudioOutGetMuted @function\n"
    "__load_and_call_sceCustomMusicAudioOutGetMuted:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicAudioOutGetMuted\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicAudioOutGetMuted]\n");

void __load_and_call_sceCustomMusicAudioOutGetMuted();
static __attribute__ ((used)) void* __ptr_sceCustomMusicAudioOutGetMuted = &__load_and_call_sceCustomMusicAudioOutGetMuted;

static __attribute__ ((used)) void
__load_sceCustomMusicAudioOutGetMuted(void) {
  sprx_dlsym(__handle, "sceCustomMusicAudioOutGetMuted", &__ptr_sceCustomMusicAudioOutGetMuted);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicAudioOutGetVolume\n"
    ".type sceCustomMusicAudioOutGetVolume @function\n"
    "sceCustomMusicAudioOutGetVolume:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicAudioOutGetVolume]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicAudioOutGetVolume\n"
    ".type __load_and_call_sceCustomMusicAudioOutGetVolume @function\n"
    "__load_and_call_sceCustomMusicAudioOutGetVolume:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicAudioOutGetVolume\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicAudioOutGetVolume]\n");

void __load_and_call_sceCustomMusicAudioOutGetVolume();
static __attribute__ ((used)) void* __ptr_sceCustomMusicAudioOutGetVolume = &__load_and_call_sceCustomMusicAudioOutGetVolume;

static __attribute__ ((used)) void
__load_sceCustomMusicAudioOutGetVolume(void) {
  sprx_dlsym(__handle, "sceCustomMusicAudioOutGetVolume", &__ptr_sceCustomMusicAudioOutGetVolume);
}

asm(".intel_syntax noprefix\n"
    ".global sceCustomMusicAudioOutSetAllMusicVolume\n"
    ".type sceCustomMusicAudioOutSetAllMusicVolume @function\n"
    "sceCustomMusicAudioOutSetAllMusicVolume:\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicAudioOutSetAllMusicVolume]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceCustomMusicAudioOutSetAllMusicVolume\n"
    ".type __load_and_call_sceCustomMusicAudioOutSetAllMusicVolume @function\n"
    "__load_and_call_sceCustomMusicAudioOutSetAllMusicVolume:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceCustomMusicAudioOutSetAllMusicVolume\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceCustomMusicAudioOutSetAllMusicVolume]\n");

void __load_and_call_sceCustomMusicAudioOutSetAllMusicVolume();
static __attribute__ ((used)) void* __ptr_sceCustomMusicAudioOutSetAllMusicVolume = &__load_and_call_sceCustomMusicAudioOutSetAllMusicVolume;

static __attribute__ ((used)) void
__load_sceCustomMusicAudioOutSetAllMusicVolume(void) {
  sprx_dlsym(__handle, "sceCustomMusicAudioOutSetAllMusicVolume", &__ptr_sceCustomMusicAudioOutSetAllMusicVolume);
}