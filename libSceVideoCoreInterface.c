/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceVideoCoreInterface", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceVideoCoreIfSetFunctionTableUnlimited\n"
    ".type sceVideoCoreIfSetFunctionTableUnlimited @function\n"
    "sceVideoCoreIfSetFunctionTableUnlimited:\n"
    "jmp qword ptr [rip + __ptr_sceVideoCoreIfSetFunctionTableUnlimited]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceVideoCoreIfSetFunctionTableUnlimited\n"
    ".type __load_and_call_sceVideoCoreIfSetFunctionTableUnlimited @function\n"
    "__load_and_call_sceVideoCoreIfSetFunctionTableUnlimited:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceVideoCoreIfSetFunctionTableUnlimited\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceVideoCoreIfSetFunctionTableUnlimited]\n");

void __load_and_call_sceVideoCoreIfSetFunctionTableUnlimited();
static __attribute__ ((used)) void* __ptr_sceVideoCoreIfSetFunctionTableUnlimited = &__load_and_call_sceVideoCoreIfSetFunctionTableUnlimited;

static __attribute__ ((used)) void
__load_sceVideoCoreIfSetFunctionTableUnlimited(void) {
  sprx_dlsym(__handle, "sceVideoCoreIfSetFunctionTableUnlimited", &__ptr_sceVideoCoreIfSetFunctionTableUnlimited);
}
