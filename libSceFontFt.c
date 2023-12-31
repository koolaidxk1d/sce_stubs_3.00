/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libSceFontFt", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global sceFontFtInitAliases\n"
    ".type sceFontFtInitAliases @function\n"
    "sceFontFtInitAliases:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtInitAliases]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtInitAliases\n"
    ".type __load_and_call_sceFontFtInitAliases @function\n"
    "__load_and_call_sceFontFtInitAliases:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtInitAliases\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtInitAliases]\n");

void __load_and_call_sceFontFtInitAliases();
static __attribute__ ((used)) void* __ptr_sceFontFtInitAliases = &__load_and_call_sceFontFtInitAliases;

static __attribute__ ((used)) void
__load_sceFontFtInitAliases(void) {
  sprx_dlsym(__handle, "sceFontFtInitAliases", &__ptr_sceFontFtInitAliases);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSetAliasFont\n"
    ".type sceFontFtSetAliasFont @function\n"
    "sceFontFtSetAliasFont:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSetAliasFont]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSetAliasFont\n"
    ".type __load_and_call_sceFontFtSetAliasFont @function\n"
    "__load_and_call_sceFontFtSetAliasFont:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSetAliasFont\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSetAliasFont]\n");

void __load_and_call_sceFontFtSetAliasFont();
static __attribute__ ((used)) void* __ptr_sceFontFtSetAliasFont = &__load_and_call_sceFontFtSetAliasFont;

static __attribute__ ((used)) void
__load_sceFontFtSetAliasFont(void) {
  sprx_dlsym(__handle, "sceFontFtSetAliasFont", &__ptr_sceFontFtSetAliasFont);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSetAliasPath\n"
    ".type sceFontFtSetAliasPath @function\n"
    "sceFontFtSetAliasPath:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSetAliasPath]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSetAliasPath\n"
    ".type __load_and_call_sceFontFtSetAliasPath @function\n"
    "__load_and_call_sceFontFtSetAliasPath:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSetAliasPath\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSetAliasPath]\n");

void __load_and_call_sceFontFtSetAliasPath();
static __attribute__ ((used)) void* __ptr_sceFontFtSetAliasPath = &__load_and_call_sceFontFtSetAliasPath;

static __attribute__ ((used)) void
__load_sceFontFtSetAliasPath(void) {
  sprx_dlsym(__handle, "sceFontFtSetAliasPath", &__ptr_sceFontFtSetAliasPath);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSupportBdf\n"
    ".type sceFontFtSupportBdf @function\n"
    "sceFontFtSupportBdf:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportBdf]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSupportBdf\n"
    ".type __load_and_call_sceFontFtSupportBdf @function\n"
    "__load_and_call_sceFontFtSupportBdf:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSupportBdf\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportBdf]\n");

void __load_and_call_sceFontFtSupportBdf();
static __attribute__ ((used)) void* __ptr_sceFontFtSupportBdf = &__load_and_call_sceFontFtSupportBdf;

static __attribute__ ((used)) void
__load_sceFontFtSupportBdf(void) {
  sprx_dlsym(__handle, "sceFontFtSupportBdf", &__ptr_sceFontFtSupportBdf);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSupportCid\n"
    ".type sceFontFtSupportCid @function\n"
    "sceFontFtSupportCid:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportCid]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSupportCid\n"
    ".type __load_and_call_sceFontFtSupportCid @function\n"
    "__load_and_call_sceFontFtSupportCid:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSupportCid\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportCid]\n");

void __load_and_call_sceFontFtSupportCid();
static __attribute__ ((used)) void* __ptr_sceFontFtSupportCid = &__load_and_call_sceFontFtSupportCid;

static __attribute__ ((used)) void
__load_sceFontFtSupportCid(void) {
  sprx_dlsym(__handle, "sceFontFtSupportCid", &__ptr_sceFontFtSupportCid);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSupportFontFormats\n"
    ".type sceFontFtSupportFontFormats @function\n"
    "sceFontFtSupportFontFormats:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportFontFormats]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSupportFontFormats\n"
    ".type __load_and_call_sceFontFtSupportFontFormats @function\n"
    "__load_and_call_sceFontFtSupportFontFormats:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSupportFontFormats\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportFontFormats]\n");

void __load_and_call_sceFontFtSupportFontFormats();
static __attribute__ ((used)) void* __ptr_sceFontFtSupportFontFormats = &__load_and_call_sceFontFtSupportFontFormats;

static __attribute__ ((used)) void
__load_sceFontFtSupportFontFormats(void) {
  sprx_dlsym(__handle, "sceFontFtSupportFontFormats", &__ptr_sceFontFtSupportFontFormats);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSupportOpenType\n"
    ".type sceFontFtSupportOpenType @function\n"
    "sceFontFtSupportOpenType:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportOpenType]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSupportOpenType\n"
    ".type __load_and_call_sceFontFtSupportOpenType @function\n"
    "__load_and_call_sceFontFtSupportOpenType:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSupportOpenType\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportOpenType]\n");

void __load_and_call_sceFontFtSupportOpenType();
static __attribute__ ((used)) void* __ptr_sceFontFtSupportOpenType = &__load_and_call_sceFontFtSupportOpenType;

static __attribute__ ((used)) void
__load_sceFontFtSupportOpenType(void) {
  sprx_dlsym(__handle, "sceFontFtSupportOpenType", &__ptr_sceFontFtSupportOpenType);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSupportOpenTypeOtf\n"
    ".type sceFontFtSupportOpenTypeOtf @function\n"
    "sceFontFtSupportOpenTypeOtf:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportOpenTypeOtf]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSupportOpenTypeOtf\n"
    ".type __load_and_call_sceFontFtSupportOpenTypeOtf @function\n"
    "__load_and_call_sceFontFtSupportOpenTypeOtf:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSupportOpenTypeOtf\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportOpenTypeOtf]\n");

void __load_and_call_sceFontFtSupportOpenTypeOtf();
static __attribute__ ((used)) void* __ptr_sceFontFtSupportOpenTypeOtf = &__load_and_call_sceFontFtSupportOpenTypeOtf;

static __attribute__ ((used)) void
__load_sceFontFtSupportOpenTypeOtf(void) {
  sprx_dlsym(__handle, "sceFontFtSupportOpenTypeOtf", &__ptr_sceFontFtSupportOpenTypeOtf);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSupportOpenTypeTtf\n"
    ".type sceFontFtSupportOpenTypeTtf @function\n"
    "sceFontFtSupportOpenTypeTtf:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportOpenTypeTtf]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSupportOpenTypeTtf\n"
    ".type __load_and_call_sceFontFtSupportOpenTypeTtf @function\n"
    "__load_and_call_sceFontFtSupportOpenTypeTtf:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSupportOpenTypeTtf\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportOpenTypeTtf]\n");

void __load_and_call_sceFontFtSupportOpenTypeTtf();
static __attribute__ ((used)) void* __ptr_sceFontFtSupportOpenTypeTtf = &__load_and_call_sceFontFtSupportOpenTypeTtf;

static __attribute__ ((used)) void
__load_sceFontFtSupportOpenTypeTtf(void) {
  sprx_dlsym(__handle, "sceFontFtSupportOpenTypeTtf", &__ptr_sceFontFtSupportOpenTypeTtf);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSupportPcf\n"
    ".type sceFontFtSupportPcf @function\n"
    "sceFontFtSupportPcf:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportPcf]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSupportPcf\n"
    ".type __load_and_call_sceFontFtSupportPcf @function\n"
    "__load_and_call_sceFontFtSupportPcf:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSupportPcf\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportPcf]\n");

void __load_and_call_sceFontFtSupportPcf();
static __attribute__ ((used)) void* __ptr_sceFontFtSupportPcf = &__load_and_call_sceFontFtSupportPcf;

static __attribute__ ((used)) void
__load_sceFontFtSupportPcf(void) {
  sprx_dlsym(__handle, "sceFontFtSupportPcf", &__ptr_sceFontFtSupportPcf);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSupportPfr\n"
    ".type sceFontFtSupportPfr @function\n"
    "sceFontFtSupportPfr:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportPfr]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSupportPfr\n"
    ".type __load_and_call_sceFontFtSupportPfr @function\n"
    "__load_and_call_sceFontFtSupportPfr:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSupportPfr\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportPfr]\n");

void __load_and_call_sceFontFtSupportPfr();
static __attribute__ ((used)) void* __ptr_sceFontFtSupportPfr = &__load_and_call_sceFontFtSupportPfr;

static __attribute__ ((used)) void
__load_sceFontFtSupportPfr(void) {
  sprx_dlsym(__handle, "sceFontFtSupportPfr", &__ptr_sceFontFtSupportPfr);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSupportSystemFonts\n"
    ".type sceFontFtSupportSystemFonts @function\n"
    "sceFontFtSupportSystemFonts:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportSystemFonts]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSupportSystemFonts\n"
    ".type __load_and_call_sceFontFtSupportSystemFonts @function\n"
    "__load_and_call_sceFontFtSupportSystemFonts:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSupportSystemFonts\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportSystemFonts]\n");

void __load_and_call_sceFontFtSupportSystemFonts();
static __attribute__ ((used)) void* __ptr_sceFontFtSupportSystemFonts = &__load_and_call_sceFontFtSupportSystemFonts;

static __attribute__ ((used)) void
__load_sceFontFtSupportSystemFonts(void) {
  sprx_dlsym(__handle, "sceFontFtSupportSystemFonts", &__ptr_sceFontFtSupportSystemFonts);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSupportTrueType\n"
    ".type sceFontFtSupportTrueType @function\n"
    "sceFontFtSupportTrueType:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportTrueType]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSupportTrueType\n"
    ".type __load_and_call_sceFontFtSupportTrueType @function\n"
    "__load_and_call_sceFontFtSupportTrueType:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSupportTrueType\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportTrueType]\n");

void __load_and_call_sceFontFtSupportTrueType();
static __attribute__ ((used)) void* __ptr_sceFontFtSupportTrueType = &__load_and_call_sceFontFtSupportTrueType;

static __attribute__ ((used)) void
__load_sceFontFtSupportTrueType(void) {
  sprx_dlsym(__handle, "sceFontFtSupportTrueType", &__ptr_sceFontFtSupportTrueType);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSupportTrueTypeGx\n"
    ".type sceFontFtSupportTrueTypeGx @function\n"
    "sceFontFtSupportTrueTypeGx:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportTrueTypeGx]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSupportTrueTypeGx\n"
    ".type __load_and_call_sceFontFtSupportTrueTypeGx @function\n"
    "__load_and_call_sceFontFtSupportTrueTypeGx:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSupportTrueTypeGx\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportTrueTypeGx]\n");

void __load_and_call_sceFontFtSupportTrueTypeGx();
static __attribute__ ((used)) void* __ptr_sceFontFtSupportTrueTypeGx = &__load_and_call_sceFontFtSupportTrueTypeGx;

static __attribute__ ((used)) void
__load_sceFontFtSupportTrueTypeGx(void) {
  sprx_dlsym(__handle, "sceFontFtSupportTrueTypeGx", &__ptr_sceFontFtSupportTrueTypeGx);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSupportType1\n"
    ".type sceFontFtSupportType1 @function\n"
    "sceFontFtSupportType1:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportType1]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSupportType1\n"
    ".type __load_and_call_sceFontFtSupportType1 @function\n"
    "__load_and_call_sceFontFtSupportType1:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSupportType1\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportType1]\n");

void __load_and_call_sceFontFtSupportType1();
static __attribute__ ((used)) void* __ptr_sceFontFtSupportType1 = &__load_and_call_sceFontFtSupportType1;

static __attribute__ ((used)) void
__load_sceFontFtSupportType1(void) {
  sprx_dlsym(__handle, "sceFontFtSupportType1", &__ptr_sceFontFtSupportType1);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSupportType42\n"
    ".type sceFontFtSupportType42 @function\n"
    "sceFontFtSupportType42:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportType42]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSupportType42\n"
    ".type __load_and_call_sceFontFtSupportType42 @function\n"
    "__load_and_call_sceFontFtSupportType42:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSupportType42\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportType42]\n");

void __load_and_call_sceFontFtSupportType42();
static __attribute__ ((used)) void* __ptr_sceFontFtSupportType42 = &__load_and_call_sceFontFtSupportType42;

static __attribute__ ((used)) void
__load_sceFontFtSupportType42(void) {
  sprx_dlsym(__handle, "sceFontFtSupportType42", &__ptr_sceFontFtSupportType42);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtSupportWinFonts\n"
    ".type sceFontFtSupportWinFonts @function\n"
    "sceFontFtSupportWinFonts:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportWinFonts]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtSupportWinFonts\n"
    ".type __load_and_call_sceFontFtSupportWinFonts @function\n"
    "__load_and_call_sceFontFtSupportWinFonts:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtSupportWinFonts\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtSupportWinFonts]\n");

void __load_and_call_sceFontFtSupportWinFonts();
static __attribute__ ((used)) void* __ptr_sceFontFtSupportWinFonts = &__load_and_call_sceFontFtSupportWinFonts;

static __attribute__ ((used)) void
__load_sceFontFtSupportWinFonts(void) {
  sprx_dlsym(__handle, "sceFontFtSupportWinFonts", &__ptr_sceFontFtSupportWinFonts);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontFtTermAliases\n"
    ".type sceFontFtTermAliases @function\n"
    "sceFontFtTermAliases:\n"
    "jmp qword ptr [rip + __ptr_sceFontFtTermAliases]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontFtTermAliases\n"
    ".type __load_and_call_sceFontFtTermAliases @function\n"
    "__load_and_call_sceFontFtTermAliases:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontFtTermAliases\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontFtTermAliases]\n");

void __load_and_call_sceFontFtTermAliases();
static __attribute__ ((used)) void* __ptr_sceFontFtTermAliases = &__load_and_call_sceFontFtTermAliases;

static __attribute__ ((used)) void
__load_sceFontFtTermAliases(void) {
  sprx_dlsym(__handle, "sceFontFtTermAliases", &__ptr_sceFontFtTermAliases);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontSelectLibraryFt\n"
    ".type sceFontSelectLibraryFt @function\n"
    "sceFontSelectLibraryFt:\n"
    "jmp qword ptr [rip + __ptr_sceFontSelectLibraryFt]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontSelectLibraryFt\n"
    ".type __load_and_call_sceFontSelectLibraryFt @function\n"
    "__load_and_call_sceFontSelectLibraryFt:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontSelectLibraryFt\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontSelectLibraryFt]\n");

void __load_and_call_sceFontSelectLibraryFt();
static __attribute__ ((used)) void* __ptr_sceFontSelectLibraryFt = &__load_and_call_sceFontSelectLibraryFt;

static __attribute__ ((used)) void
__load_sceFontSelectLibraryFt(void) {
  sprx_dlsym(__handle, "sceFontSelectLibraryFt", &__ptr_sceFontSelectLibraryFt);
}

asm(".intel_syntax noprefix\n"
    ".global sceFontSelectRendererFt\n"
    ".type sceFontSelectRendererFt @function\n"
    "sceFontSelectRendererFt:\n"
    "jmp qword ptr [rip + __ptr_sceFontSelectRendererFt]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_sceFontSelectRendererFt\n"
    ".type __load_and_call_sceFontSelectRendererFt @function\n"
    "__load_and_call_sceFontSelectRendererFt:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_sceFontSelectRendererFt\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_sceFontSelectRendererFt]\n");

void __load_and_call_sceFontSelectRendererFt();
static __attribute__ ((used)) void* __ptr_sceFontSelectRendererFt = &__load_and_call_sceFontSelectRendererFt;

static __attribute__ ((used)) void
__load_sceFontSelectRendererFt(void) {
  sprx_dlsym(__handle, "sceFontSelectRendererFt", &__ptr_sceFontSelectRendererFt);
}
