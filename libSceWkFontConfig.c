/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceWkFontConfig", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global _Z5dummyv\n"
    ".type _Z5dummyv @function\n"
    "_Z5dummyv:\n"
    "jmp qword ptr [rip + __ptr__Z5dummyv]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call__Z5dummyv\n"
    ".type __load_and_call__Z5dummyv @function\n"
    "__load_and_call__Z5dummyv:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load__Z5dummyv\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr__Z5dummyv]\n");

void __load_and_call__Z5dummyv();
static __attribute__ ((used)) void* __ptr__Z5dummyv = &__load_and_call__Z5dummyv;

static __attribute__ ((used)) void
__load__Z5dummyv(void) {
  sprx_dlsym(__handle, "_Z5dummyv", &__ptr__Z5dummyv);
}

asm(".intel_syntax noprefix\n"
    ".global sceWkFontConfigGetAttr\n"
    ".type sceWkFontConfigGetAttr @function\n"
    "sceWkFontConfigGetAttr:\n"
    "jmp qword ptr [rip + __ptr_sceWkFontConfigGetAttr]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceWkFontConfigGetAttr\n"
    ".type __load_and_call_sceWkFontConfigGetAttr @function\n"
    "__load_and_call_sceWkFontConfigGetAttr:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceWkFontConfigGetAttr\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceWkFontConfigGetAttr]\n");

void __load_and_call_sceWkFontConfigGetAttr();
static __attribute__ ((used)) void* __ptr_sceWkFontConfigGetAttr = &__load_and_call_sceWkFontConfigGetAttr;

static __attribute__ ((used)) void
__load_sceWkFontConfigGetAttr(void) {
  sprx_dlsym(__handle, "sceWkFontConfigGetAttr", &__ptr_sceWkFontConfigGetAttr);
}

asm(".intel_syntax noprefix\n"
    ".global sceWkFontConfigGetFont\n"
    ".type sceWkFontConfigGetFont @function\n"
    "sceWkFontConfigGetFont:\n"
    "jmp qword ptr [rip + __ptr_sceWkFontConfigGetFont]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceWkFontConfigGetFont\n"
    ".type __load_and_call_sceWkFontConfigGetFont @function\n"
    "__load_and_call_sceWkFontConfigGetFont:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceWkFontConfigGetFont\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceWkFontConfigGetFont]\n");

void __load_and_call_sceWkFontConfigGetFont();
static __attribute__ ((used)) void* __ptr_sceWkFontConfigGetFont = &__load_and_call_sceWkFontConfigGetFont;

static __attribute__ ((used)) void
__load_sceWkFontConfigGetFont(void) {
  sprx_dlsym(__handle, "sceWkFontConfigGetFont", &__ptr_sceWkFontConfigGetFont);
}

asm(".intel_syntax noprefix\n"
    ".global sceWkFontConfigGetFontFromFontName\n"
    ".type sceWkFontConfigGetFontFromFontName @function\n"
    "sceWkFontConfigGetFontFromFontName:\n"
    "jmp qword ptr [rip + __ptr_sceWkFontConfigGetFontFromFontName]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceWkFontConfigGetFontFromFontName\n"
    ".type __load_and_call_sceWkFontConfigGetFontFromFontName @function\n"
    "__load_and_call_sceWkFontConfigGetFontFromFontName:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceWkFontConfigGetFontFromFontName\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceWkFontConfigGetFontFromFontName]\n");

void __load_and_call_sceWkFontConfigGetFontFromFontName();
static __attribute__ ((used)) void* __ptr_sceWkFontConfigGetFontFromFontName = &__load_and_call_sceWkFontConfigGetFontFromFontName;

static __attribute__ ((used)) void
__load_sceWkFontConfigGetFontFromFontName(void) {
  sprx_dlsym(__handle, "sceWkFontConfigGetFontFromFontName", &__ptr_sceWkFontConfigGetFontFromFontName);
}

asm(".intel_syntax noprefix\n"
    ".global sceWkFontConfigGetFontName\n"
    ".type sceWkFontConfigGetFontName @function\n"
    "sceWkFontConfigGetFontName:\n"
    "jmp qword ptr [rip + __ptr_sceWkFontConfigGetFontName]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceWkFontConfigGetFontName\n"
    ".type __load_and_call_sceWkFontConfigGetFontName @function\n"
    "__load_and_call_sceWkFontConfigGetFontName:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceWkFontConfigGetFontName\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceWkFontConfigGetFontName]\n");

void __load_and_call_sceWkFontConfigGetFontName();
static __attribute__ ((used)) void* __ptr_sceWkFontConfigGetFontName = &__load_and_call_sceWkFontConfigGetFontName;

static __attribute__ ((used)) void
__load_sceWkFontConfigGetFontName(void) {
  sprx_dlsym(__handle, "sceWkFontConfigGetFontName", &__ptr_sceWkFontConfigGetFontName);
}

asm(".intel_syntax noprefix\n"
    ".global sceWkFontConfigGetFontPath\n"
    ".type sceWkFontConfigGetFontPath @function\n"
    "sceWkFontConfigGetFontPath:\n"
    "jmp qword ptr [rip + __ptr_sceWkFontConfigGetFontPath]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceWkFontConfigGetFontPath\n"
    ".type __load_and_call_sceWkFontConfigGetFontPath @function\n"
    "__load_and_call_sceWkFontConfigGetFontPath:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceWkFontConfigGetFontPath\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceWkFontConfigGetFontPath]\n");

void __load_and_call_sceWkFontConfigGetFontPath();
static __attribute__ ((used)) void* __ptr_sceWkFontConfigGetFontPath = &__load_and_call_sceWkFontConfigGetFontPath;

static __attribute__ ((used)) void
__load_sceWkFontConfigGetFontPath(void) {
  sprx_dlsym(__handle, "sceWkFontConfigGetFontPath", &__ptr_sceWkFontConfigGetFontPath);
}