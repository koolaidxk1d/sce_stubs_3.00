/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceNpTcs", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceNpTcsIntDownloadData\n"
    ".type sceNpTcsIntDownloadData @function\n"
    "sceNpTcsIntDownloadData:\n"
    "jmp qword ptr [rip + __ptr_sceNpTcsIntDownloadData]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpTcsIntDownloadData\n"
    ".type __load_and_call_sceNpTcsIntDownloadData @function\n"
    "__load_and_call_sceNpTcsIntDownloadData:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpTcsIntDownloadData\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpTcsIntDownloadData]\n");

void __load_and_call_sceNpTcsIntDownloadData();
static __attribute__ ((used)) void* __ptr_sceNpTcsIntDownloadData = &__load_and_call_sceNpTcsIntDownloadData;

static __attribute__ ((used)) void
__load_sceNpTcsIntDownloadData(void) {
  sprx_dlsym(__handle, "sceNpTcsIntDownloadData", &__ptr_sceNpTcsIntDownloadData);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpTcsIntUploadDataToNewSlotAbort\n"
    ".type sceNpTcsIntUploadDataToNewSlotAbort @function\n"
    "sceNpTcsIntUploadDataToNewSlotAbort:\n"
    "jmp qword ptr [rip + __ptr_sceNpTcsIntUploadDataToNewSlotAbort]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpTcsIntUploadDataToNewSlotAbort\n"
    ".type __load_and_call_sceNpTcsIntUploadDataToNewSlotAbort @function\n"
    "__load_and_call_sceNpTcsIntUploadDataToNewSlotAbort:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpTcsIntUploadDataToNewSlotAbort\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpTcsIntUploadDataToNewSlotAbort]\n");

void __load_and_call_sceNpTcsIntUploadDataToNewSlotAbort();
static __attribute__ ((used)) void* __ptr_sceNpTcsIntUploadDataToNewSlotAbort = &__load_and_call_sceNpTcsIntUploadDataToNewSlotAbort;

static __attribute__ ((used)) void
__load_sceNpTcsIntUploadDataToNewSlotAbort(void) {
  sprx_dlsym(__handle, "sceNpTcsIntUploadDataToNewSlotAbort", &__ptr_sceNpTcsIntUploadDataToNewSlotAbort);
}

asm(".intel_syntax noprefix\n"
    ".global sceNpTcsIntUploadDataToNewSlotBegin\n"
    ".type sceNpTcsIntUploadDataToNewSlotBegin @function\n"
    "sceNpTcsIntUploadDataToNewSlotBegin:\n"
    "jmp qword ptr [rip + __ptr_sceNpTcsIntUploadDataToNewSlotBegin]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceNpTcsIntUploadDataToNewSlotBegin\n"
    ".type __load_and_call_sceNpTcsIntUploadDataToNewSlotBegin @function\n"
    "__load_and_call_sceNpTcsIntUploadDataToNewSlotBegin:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceNpTcsIntUploadDataToNewSlotBegin\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceNpTcsIntUploadDataToNewSlotBegin]\n");

void __load_and_call_sceNpTcsIntUploadDataToNewSlotBegin();
static __attribute__ ((used)) void* __ptr_sceNpTcsIntUploadDataToNewSlotBegin = &__load_and_call_sceNpTcsIntUploadDataToNewSlotBegin;

static __attribute__ ((used)) void
__load_sceNpTcsIntUploadDataToNewSlotBegin(void) {
  sprx_dlsym(__handle, "sceNpTcsIntUploadDataToNewSlotBegin", &__ptr_sceNpTcsIntUploadDataToNewSlotBegin);
}