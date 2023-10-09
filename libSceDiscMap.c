/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceDiscMap", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceDiscMapGetPackageSize\n"
    ".type sceDiscMapGetPackageSize @function\n"
    "sceDiscMapGetPackageSize:\n"
    "jmp qword ptr [rip + __ptr_sceDiscMapGetPackageSize]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceDiscMapGetPackageSize\n"
    ".type __load_and_call_sceDiscMapGetPackageSize @function\n"
    "__load_and_call_sceDiscMapGetPackageSize:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceDiscMapGetPackageSize\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceDiscMapGetPackageSize]\n");

void __load_and_call_sceDiscMapGetPackageSize();
static __attribute__ ((used)) void* __ptr_sceDiscMapGetPackageSize = &__load_and_call_sceDiscMapGetPackageSize;

static __attribute__ ((used)) void
__load_sceDiscMapGetPackageSize(void) {
  sprx_dlsym(__handle, "sceDiscMapGetPackageSize", &__ptr_sceDiscMapGetPackageSize);
}

asm(".intel_syntax noprefix\n"
    ".global sceDiscMapIsRequestOnHDD\n"
    ".type sceDiscMapIsRequestOnHDD @function\n"
    "sceDiscMapIsRequestOnHDD:\n"
    "jmp qword ptr [rip + __ptr_sceDiscMapIsRequestOnHDD]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceDiscMapIsRequestOnHDD\n"
    ".type __load_and_call_sceDiscMapIsRequestOnHDD @function\n"
    "__load_and_call_sceDiscMapIsRequestOnHDD:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceDiscMapIsRequestOnHDD\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceDiscMapIsRequestOnHDD]\n");

void __load_and_call_sceDiscMapIsRequestOnHDD();
static __attribute__ ((used)) void* __ptr_sceDiscMapIsRequestOnHDD = &__load_and_call_sceDiscMapIsRequestOnHDD;

static __attribute__ ((used)) void
__load_sceDiscMapIsRequestOnHDD(void) {
  sprx_dlsym(__handle, "sceDiscMapIsRequestOnHDD", &__ptr_sceDiscMapIsRequestOnHDD);
}
