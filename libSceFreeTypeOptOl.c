/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceFreeTypeOptOl", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global FT_Get_PFR_Advance\n"
    ".type FT_Get_PFR_Advance @function\n"
    "FT_Get_PFR_Advance:\n"
    "jmp qword ptr [rip + __ptr_FT_Get_PFR_Advance]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_FT_Get_PFR_Advance\n"
    ".type __load_and_call_FT_Get_PFR_Advance @function\n"
    "__load_and_call_FT_Get_PFR_Advance:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_FT_Get_PFR_Advance\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_FT_Get_PFR_Advance]\n");

void __load_and_call_FT_Get_PFR_Advance();
static __attribute__ ((used)) void* __ptr_FT_Get_PFR_Advance = &__load_and_call_FT_Get_PFR_Advance;

static __attribute__ ((used)) void
__load_FT_Get_PFR_Advance(void) {
  sprx_dlsym(__handle, "FT_Get_PFR_Advance", &__ptr_FT_Get_PFR_Advance);
}

asm(".intel_syntax noprefix\n"
    ".global FT_Get_PFR_Kerning\n"
    ".type FT_Get_PFR_Kerning @function\n"
    "FT_Get_PFR_Kerning:\n"
    "jmp qword ptr [rip + __ptr_FT_Get_PFR_Kerning]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_FT_Get_PFR_Kerning\n"
    ".type __load_and_call_FT_Get_PFR_Kerning @function\n"
    "__load_and_call_FT_Get_PFR_Kerning:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_FT_Get_PFR_Kerning\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_FT_Get_PFR_Kerning]\n");

void __load_and_call_FT_Get_PFR_Kerning();
static __attribute__ ((used)) void* __ptr_FT_Get_PFR_Kerning = &__load_and_call_FT_Get_PFR_Kerning;

static __attribute__ ((used)) void
__load_FT_Get_PFR_Kerning(void) {
  sprx_dlsym(__handle, "FT_Get_PFR_Kerning", &__ptr_FT_Get_PFR_Kerning);
}

asm(".intel_syntax noprefix\n"
    ".global FT_Get_PFR_Metrics\n"
    ".type FT_Get_PFR_Metrics @function\n"
    "FT_Get_PFR_Metrics:\n"
    "jmp qword ptr [rip + __ptr_FT_Get_PFR_Metrics]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_FT_Get_PFR_Metrics\n"
    ".type __load_and_call_FT_Get_PFR_Metrics @function\n"
    "__load_and_call_FT_Get_PFR_Metrics:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_FT_Get_PFR_Metrics\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_FT_Get_PFR_Metrics]\n");

void __load_and_call_FT_Get_PFR_Metrics();
static __attribute__ ((used)) void* __ptr_FT_Get_PFR_Metrics = &__load_and_call_FT_Get_PFR_Metrics;

static __attribute__ ((used)) void
__load_FT_Get_PFR_Metrics(void) {
  sprx_dlsym(__handle, "FT_Get_PFR_Metrics", &__ptr_FT_Get_PFR_Metrics);
}