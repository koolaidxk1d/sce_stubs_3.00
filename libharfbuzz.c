/*
 This file was generated by trampgen.py, do not edit manually!
*/


int sprx_dlsym(unsigned int handle, const char *symname, void *addr);
int sprx_dlopen(const char* libname, unsigned short *handle);
int sprx_dlclose(unsigned short handle);


static unsigned short __handle = 0;

static void __attribute__((constructor(102)))
__constructor(void) {
  sprx_dlopen("libharfbuzz", &__handle);
}

static void __attribute__((destructor(102)))
__destructor(void) {
  sprx_dlclose(__handle);
}


asm(".intel_syntax noprefix\n"
    ".global hb_blob_create\n"
    ".type hb_blob_create @function\n"
    "hb_blob_create:\n"
    "jmp qword ptr [rip + __ptr_hb_blob_create]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_blob_create\n"
    ".type __load_and_call_hb_blob_create @function\n"
    "__load_and_call_hb_blob_create:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_blob_create\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_blob_create]\n");

void __load_and_call_hb_blob_create();
static __attribute__ ((used)) void* __ptr_hb_blob_create = &__load_and_call_hb_blob_create;

static __attribute__ ((used)) void
__load_hb_blob_create(void) {
  sprx_dlsym(__handle, "hb_blob_create", &__ptr_hb_blob_create);
}

asm(".intel_syntax noprefix\n"
    ".global hb_buffer_add_utf16\n"
    ".type hb_buffer_add_utf16 @function\n"
    "hb_buffer_add_utf16:\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_add_utf16]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_buffer_add_utf16\n"
    ".type __load_and_call_hb_buffer_add_utf16 @function\n"
    "__load_and_call_hb_buffer_add_utf16:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_buffer_add_utf16\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_add_utf16]\n");

void __load_and_call_hb_buffer_add_utf16();
static __attribute__ ((used)) void* __ptr_hb_buffer_add_utf16 = &__load_and_call_hb_buffer_add_utf16;

static __attribute__ ((used)) void
__load_hb_buffer_add_utf16(void) {
  sprx_dlsym(__handle, "hb_buffer_add_utf16", &__ptr_hb_buffer_add_utf16);
}

asm(".intel_syntax noprefix\n"
    ".global hb_buffer_create\n"
    ".type hb_buffer_create @function\n"
    "hb_buffer_create:\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_create]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_buffer_create\n"
    ".type __load_and_call_hb_buffer_create @function\n"
    "__load_and_call_hb_buffer_create:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_buffer_create\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_create]\n");

void __load_and_call_hb_buffer_create();
static __attribute__ ((used)) void* __ptr_hb_buffer_create = &__load_and_call_hb_buffer_create;

static __attribute__ ((used)) void
__load_hb_buffer_create(void) {
  sprx_dlsym(__handle, "hb_buffer_create", &__ptr_hb_buffer_create);
}

asm(".intel_syntax noprefix\n"
    ".global hb_buffer_destroy\n"
    ".type hb_buffer_destroy @function\n"
    "hb_buffer_destroy:\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_destroy]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_buffer_destroy\n"
    ".type __load_and_call_hb_buffer_destroy @function\n"
    "__load_and_call_hb_buffer_destroy:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_buffer_destroy\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_destroy]\n");

void __load_and_call_hb_buffer_destroy();
static __attribute__ ((used)) void* __ptr_hb_buffer_destroy = &__load_and_call_hb_buffer_destroy;

static __attribute__ ((used)) void
__load_hb_buffer_destroy(void) {
  sprx_dlsym(__handle, "hb_buffer_destroy", &__ptr_hb_buffer_destroy);
}

asm(".intel_syntax noprefix\n"
    ".global hb_buffer_get_direction\n"
    ".type hb_buffer_get_direction @function\n"
    "hb_buffer_get_direction:\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_get_direction]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_buffer_get_direction\n"
    ".type __load_and_call_hb_buffer_get_direction @function\n"
    "__load_and_call_hb_buffer_get_direction:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_buffer_get_direction\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_get_direction]\n");

void __load_and_call_hb_buffer_get_direction();
static __attribute__ ((used)) void* __ptr_hb_buffer_get_direction = &__load_and_call_hb_buffer_get_direction;

static __attribute__ ((used)) void
__load_hb_buffer_get_direction(void) {
  sprx_dlsym(__handle, "hb_buffer_get_direction", &__ptr_hb_buffer_get_direction);
}

asm(".intel_syntax noprefix\n"
    ".global hb_buffer_get_glyph_infos\n"
    ".type hb_buffer_get_glyph_infos @function\n"
    "hb_buffer_get_glyph_infos:\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_get_glyph_infos]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_buffer_get_glyph_infos\n"
    ".type __load_and_call_hb_buffer_get_glyph_infos @function\n"
    "__load_and_call_hb_buffer_get_glyph_infos:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_buffer_get_glyph_infos\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_get_glyph_infos]\n");

void __load_and_call_hb_buffer_get_glyph_infos();
static __attribute__ ((used)) void* __ptr_hb_buffer_get_glyph_infos = &__load_and_call_hb_buffer_get_glyph_infos;

static __attribute__ ((used)) void
__load_hb_buffer_get_glyph_infos(void) {
  sprx_dlsym(__handle, "hb_buffer_get_glyph_infos", &__ptr_hb_buffer_get_glyph_infos);
}

asm(".intel_syntax noprefix\n"
    ".global hb_buffer_get_glyph_positions\n"
    ".type hb_buffer_get_glyph_positions @function\n"
    "hb_buffer_get_glyph_positions:\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_get_glyph_positions]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_buffer_get_glyph_positions\n"
    ".type __load_and_call_hb_buffer_get_glyph_positions @function\n"
    "__load_and_call_hb_buffer_get_glyph_positions:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_buffer_get_glyph_positions\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_get_glyph_positions]\n");

void __load_and_call_hb_buffer_get_glyph_positions();
static __attribute__ ((used)) void* __ptr_hb_buffer_get_glyph_positions = &__load_and_call_hb_buffer_get_glyph_positions;

static __attribute__ ((used)) void
__load_hb_buffer_get_glyph_positions(void) {
  sprx_dlsym(__handle, "hb_buffer_get_glyph_positions", &__ptr_hb_buffer_get_glyph_positions);
}

asm(".intel_syntax noprefix\n"
    ".global hb_buffer_get_length\n"
    ".type hb_buffer_get_length @function\n"
    "hb_buffer_get_length:\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_get_length]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_buffer_get_length\n"
    ".type __load_and_call_hb_buffer_get_length @function\n"
    "__load_and_call_hb_buffer_get_length:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_buffer_get_length\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_get_length]\n");

void __load_and_call_hb_buffer_get_length();
static __attribute__ ((used)) void* __ptr_hb_buffer_get_length = &__load_and_call_hb_buffer_get_length;

static __attribute__ ((used)) void
__load_hb_buffer_get_length(void) {
  sprx_dlsym(__handle, "hb_buffer_get_length", &__ptr_hb_buffer_get_length);
}

asm(".intel_syntax noprefix\n"
    ".global hb_buffer_guess_segment_properties\n"
    ".type hb_buffer_guess_segment_properties @function\n"
    "hb_buffer_guess_segment_properties:\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_guess_segment_properties]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_buffer_guess_segment_properties\n"
    ".type __load_and_call_hb_buffer_guess_segment_properties @function\n"
    "__load_and_call_hb_buffer_guess_segment_properties:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_buffer_guess_segment_properties\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_guess_segment_properties]\n");

void __load_and_call_hb_buffer_guess_segment_properties();
static __attribute__ ((used)) void* __ptr_hb_buffer_guess_segment_properties = &__load_and_call_hb_buffer_guess_segment_properties;

static __attribute__ ((used)) void
__load_hb_buffer_guess_segment_properties(void) {
  sprx_dlsym(__handle, "hb_buffer_guess_segment_properties", &__ptr_hb_buffer_guess_segment_properties);
}

asm(".intel_syntax noprefix\n"
    ".global hb_buffer_reset\n"
    ".type hb_buffer_reset @function\n"
    "hb_buffer_reset:\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_reset]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_buffer_reset\n"
    ".type __load_and_call_hb_buffer_reset @function\n"
    "__load_and_call_hb_buffer_reset:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_buffer_reset\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_reset]\n");

void __load_and_call_hb_buffer_reset();
static __attribute__ ((used)) void* __ptr_hb_buffer_reset = &__load_and_call_hb_buffer_reset;

static __attribute__ ((used)) void
__load_hb_buffer_reset(void) {
  sprx_dlsym(__handle, "hb_buffer_reset", &__ptr_hb_buffer_reset);
}

asm(".intel_syntax noprefix\n"
    ".global hb_buffer_set_direction\n"
    ".type hb_buffer_set_direction @function\n"
    "hb_buffer_set_direction:\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_set_direction]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_buffer_set_direction\n"
    ".type __load_and_call_hb_buffer_set_direction @function\n"
    "__load_and_call_hb_buffer_set_direction:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_buffer_set_direction\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_set_direction]\n");

void __load_and_call_hb_buffer_set_direction();
static __attribute__ ((used)) void* __ptr_hb_buffer_set_direction = &__load_and_call_hb_buffer_set_direction;

static __attribute__ ((used)) void
__load_hb_buffer_set_direction(void) {
  sprx_dlsym(__handle, "hb_buffer_set_direction", &__ptr_hb_buffer_set_direction);
}

asm(".intel_syntax noprefix\n"
    ".global hb_buffer_set_script\n"
    ".type hb_buffer_set_script @function\n"
    "hb_buffer_set_script:\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_set_script]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_buffer_set_script\n"
    ".type __load_and_call_hb_buffer_set_script @function\n"
    "__load_and_call_hb_buffer_set_script:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_buffer_set_script\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_set_script]\n");

void __load_and_call_hb_buffer_set_script();
static __attribute__ ((used)) void* __ptr_hb_buffer_set_script = &__load_and_call_hb_buffer_set_script;

static __attribute__ ((used)) void
__load_hb_buffer_set_script(void) {
  sprx_dlsym(__handle, "hb_buffer_set_script", &__ptr_hb_buffer_set_script);
}

asm(".intel_syntax noprefix\n"
    ".global hb_buffer_set_unicode_funcs\n"
    ".type hb_buffer_set_unicode_funcs @function\n"
    "hb_buffer_set_unicode_funcs:\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_set_unicode_funcs]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_buffer_set_unicode_funcs\n"
    ".type __load_and_call_hb_buffer_set_unicode_funcs @function\n"
    "__load_and_call_hb_buffer_set_unicode_funcs:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_buffer_set_unicode_funcs\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_buffer_set_unicode_funcs]\n");

void __load_and_call_hb_buffer_set_unicode_funcs();
static __attribute__ ((used)) void* __ptr_hb_buffer_set_unicode_funcs = &__load_and_call_hb_buffer_set_unicode_funcs;

static __attribute__ ((used)) void
__load_hb_buffer_set_unicode_funcs(void) {
  sprx_dlsym(__handle, "hb_buffer_set_unicode_funcs", &__ptr_hb_buffer_set_unicode_funcs);
}

asm(".intel_syntax noprefix\n"
    ".global hb_face_create_for_tables\n"
    ".type hb_face_create_for_tables @function\n"
    "hb_face_create_for_tables:\n"
    "jmp qword ptr [rip + __ptr_hb_face_create_for_tables]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_face_create_for_tables\n"
    ".type __load_and_call_hb_face_create_for_tables @function\n"
    "__load_and_call_hb_face_create_for_tables:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_face_create_for_tables\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_face_create_for_tables]\n");

void __load_and_call_hb_face_create_for_tables();
static __attribute__ ((used)) void* __ptr_hb_face_create_for_tables = &__load_and_call_hb_face_create_for_tables;

static __attribute__ ((used)) void
__load_hb_face_create_for_tables(void) {
  sprx_dlsym(__handle, "hb_face_create_for_tables", &__ptr_hb_face_create_for_tables);
}

asm(".intel_syntax noprefix\n"
    ".global hb_face_destroy\n"
    ".type hb_face_destroy @function\n"
    "hb_face_destroy:\n"
    "jmp qword ptr [rip + __ptr_hb_face_destroy]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_face_destroy\n"
    ".type __load_and_call_hb_face_destroy @function\n"
    "__load_and_call_hb_face_destroy:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_face_destroy\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_face_destroy]\n");

void __load_and_call_hb_face_destroy();
static __attribute__ ((used)) void* __ptr_hb_face_destroy = &__load_and_call_hb_face_destroy;

static __attribute__ ((used)) void
__load_hb_face_destroy(void) {
  sprx_dlsym(__handle, "hb_face_destroy", &__ptr_hb_face_destroy);
}

asm(".intel_syntax noprefix\n"
    ".global hb_font_create\n"
    ".type hb_font_create @function\n"
    "hb_font_create:\n"
    "jmp qword ptr [rip + __ptr_hb_font_create]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_font_create\n"
    ".type __load_and_call_hb_font_create @function\n"
    "__load_and_call_hb_font_create:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_font_create\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_font_create]\n");

void __load_and_call_hb_font_create();
static __attribute__ ((used)) void* __ptr_hb_font_create = &__load_and_call_hb_font_create;

static __attribute__ ((used)) void
__load_hb_font_create(void) {
  sprx_dlsym(__handle, "hb_font_create", &__ptr_hb_font_create);
}

asm(".intel_syntax noprefix\n"
    ".global hb_font_destroy\n"
    ".type hb_font_destroy @function\n"
    "hb_font_destroy:\n"
    "jmp qword ptr [rip + __ptr_hb_font_destroy]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_font_destroy\n"
    ".type __load_and_call_hb_font_destroy @function\n"
    "__load_and_call_hb_font_destroy:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_font_destroy\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_font_destroy]\n");

void __load_and_call_hb_font_destroy();
static __attribute__ ((used)) void* __ptr_hb_font_destroy = &__load_and_call_hb_font_destroy;

static __attribute__ ((used)) void
__load_hb_font_destroy(void) {
  sprx_dlsym(__handle, "hb_font_destroy", &__ptr_hb_font_destroy);
}

asm(".intel_syntax noprefix\n"
    ".global hb_font_funcs_create\n"
    ".type hb_font_funcs_create @function\n"
    "hb_font_funcs_create:\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_create]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_font_funcs_create\n"
    ".type __load_and_call_hb_font_funcs_create @function\n"
    "__load_and_call_hb_font_funcs_create:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_font_funcs_create\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_create]\n");

void __load_and_call_hb_font_funcs_create();
static __attribute__ ((used)) void* __ptr_hb_font_funcs_create = &__load_and_call_hb_font_funcs_create;

static __attribute__ ((used)) void
__load_hb_font_funcs_create(void) {
  sprx_dlsym(__handle, "hb_font_funcs_create", &__ptr_hb_font_funcs_create);
}

asm(".intel_syntax noprefix\n"
    ".global hb_font_funcs_make_immutable\n"
    ".type hb_font_funcs_make_immutable @function\n"
    "hb_font_funcs_make_immutable:\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_make_immutable]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_font_funcs_make_immutable\n"
    ".type __load_and_call_hb_font_funcs_make_immutable @function\n"
    "__load_and_call_hb_font_funcs_make_immutable:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_font_funcs_make_immutable\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_make_immutable]\n");

void __load_and_call_hb_font_funcs_make_immutable();
static __attribute__ ((used)) void* __ptr_hb_font_funcs_make_immutable = &__load_and_call_hb_font_funcs_make_immutable;

static __attribute__ ((used)) void
__load_hb_font_funcs_make_immutable(void) {
  sprx_dlsym(__handle, "hb_font_funcs_make_immutable", &__ptr_hb_font_funcs_make_immutable);
}

asm(".intel_syntax noprefix\n"
    ".global hb_font_funcs_set_glyph_extents_func\n"
    ".type hb_font_funcs_set_glyph_extents_func @function\n"
    "hb_font_funcs_set_glyph_extents_func:\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_set_glyph_extents_func]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_font_funcs_set_glyph_extents_func\n"
    ".type __load_and_call_hb_font_funcs_set_glyph_extents_func @function\n"
    "__load_and_call_hb_font_funcs_set_glyph_extents_func:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_font_funcs_set_glyph_extents_func\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_set_glyph_extents_func]\n");

void __load_and_call_hb_font_funcs_set_glyph_extents_func();
static __attribute__ ((used)) void* __ptr_hb_font_funcs_set_glyph_extents_func = &__load_and_call_hb_font_funcs_set_glyph_extents_func;

static __attribute__ ((used)) void
__load_hb_font_funcs_set_glyph_extents_func(void) {
  sprx_dlsym(__handle, "hb_font_funcs_set_glyph_extents_func", &__ptr_hb_font_funcs_set_glyph_extents_func);
}

asm(".intel_syntax noprefix\n"
    ".global hb_font_funcs_set_glyph_func\n"
    ".type hb_font_funcs_set_glyph_func @function\n"
    "hb_font_funcs_set_glyph_func:\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_set_glyph_func]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_font_funcs_set_glyph_func\n"
    ".type __load_and_call_hb_font_funcs_set_glyph_func @function\n"
    "__load_and_call_hb_font_funcs_set_glyph_func:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_font_funcs_set_glyph_func\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_set_glyph_func]\n");

void __load_and_call_hb_font_funcs_set_glyph_func();
static __attribute__ ((used)) void* __ptr_hb_font_funcs_set_glyph_func = &__load_and_call_hb_font_funcs_set_glyph_func;

static __attribute__ ((used)) void
__load_hb_font_funcs_set_glyph_func(void) {
  sprx_dlsym(__handle, "hb_font_funcs_set_glyph_func", &__ptr_hb_font_funcs_set_glyph_func);
}

asm(".intel_syntax noprefix\n"
    ".global hb_font_funcs_set_glyph_h_advance_func\n"
    ".type hb_font_funcs_set_glyph_h_advance_func @function\n"
    "hb_font_funcs_set_glyph_h_advance_func:\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_set_glyph_h_advance_func]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_font_funcs_set_glyph_h_advance_func\n"
    ".type __load_and_call_hb_font_funcs_set_glyph_h_advance_func @function\n"
    "__load_and_call_hb_font_funcs_set_glyph_h_advance_func:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_font_funcs_set_glyph_h_advance_func\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_set_glyph_h_advance_func]\n");

void __load_and_call_hb_font_funcs_set_glyph_h_advance_func();
static __attribute__ ((used)) void* __ptr_hb_font_funcs_set_glyph_h_advance_func = &__load_and_call_hb_font_funcs_set_glyph_h_advance_func;

static __attribute__ ((used)) void
__load_hb_font_funcs_set_glyph_h_advance_func(void) {
  sprx_dlsym(__handle, "hb_font_funcs_set_glyph_h_advance_func", &__ptr_hb_font_funcs_set_glyph_h_advance_func);
}

asm(".intel_syntax noprefix\n"
    ".global hb_font_funcs_set_glyph_h_origin_func\n"
    ".type hb_font_funcs_set_glyph_h_origin_func @function\n"
    "hb_font_funcs_set_glyph_h_origin_func:\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_set_glyph_h_origin_func]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_font_funcs_set_glyph_h_origin_func\n"
    ".type __load_and_call_hb_font_funcs_set_glyph_h_origin_func @function\n"
    "__load_and_call_hb_font_funcs_set_glyph_h_origin_func:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_font_funcs_set_glyph_h_origin_func\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_set_glyph_h_origin_func]\n");

void __load_and_call_hb_font_funcs_set_glyph_h_origin_func();
static __attribute__ ((used)) void* __ptr_hb_font_funcs_set_glyph_h_origin_func = &__load_and_call_hb_font_funcs_set_glyph_h_origin_func;

static __attribute__ ((used)) void
__load_hb_font_funcs_set_glyph_h_origin_func(void) {
  sprx_dlsym(__handle, "hb_font_funcs_set_glyph_h_origin_func", &__ptr_hb_font_funcs_set_glyph_h_origin_func);
}

asm(".intel_syntax noprefix\n"
    ".global hb_font_funcs_set_nominal_glyph_func\n"
    ".type hb_font_funcs_set_nominal_glyph_func @function\n"
    "hb_font_funcs_set_nominal_glyph_func:\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_set_nominal_glyph_func]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_font_funcs_set_nominal_glyph_func\n"
    ".type __load_and_call_hb_font_funcs_set_nominal_glyph_func @function\n"
    "__load_and_call_hb_font_funcs_set_nominal_glyph_func:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_font_funcs_set_nominal_glyph_func\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_set_nominal_glyph_func]\n");

void __load_and_call_hb_font_funcs_set_nominal_glyph_func();
static __attribute__ ((used)) void* __ptr_hb_font_funcs_set_nominal_glyph_func = &__load_and_call_hb_font_funcs_set_nominal_glyph_func;

static __attribute__ ((used)) void
__load_hb_font_funcs_set_nominal_glyph_func(void) {
  sprx_dlsym(__handle, "hb_font_funcs_set_nominal_glyph_func", &__ptr_hb_font_funcs_set_nominal_glyph_func);
}

asm(".intel_syntax noprefix\n"
    ".global hb_font_funcs_set_variation_glyph_func\n"
    ".type hb_font_funcs_set_variation_glyph_func @function\n"
    "hb_font_funcs_set_variation_glyph_func:\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_set_variation_glyph_func]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_font_funcs_set_variation_glyph_func\n"
    ".type __load_and_call_hb_font_funcs_set_variation_glyph_func @function\n"
    "__load_and_call_hb_font_funcs_set_variation_glyph_func:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_font_funcs_set_variation_glyph_func\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_font_funcs_set_variation_glyph_func]\n");

void __load_and_call_hb_font_funcs_set_variation_glyph_func();
static __attribute__ ((used)) void* __ptr_hb_font_funcs_set_variation_glyph_func = &__load_and_call_hb_font_funcs_set_variation_glyph_func;

static __attribute__ ((used)) void
__load_hb_font_funcs_set_variation_glyph_func(void) {
  sprx_dlsym(__handle, "hb_font_funcs_set_variation_glyph_func", &__ptr_hb_font_funcs_set_variation_glyph_func);
}

asm(".intel_syntax noprefix\n"
    ".global hb_font_make_immutable\n"
    ".type hb_font_make_immutable @function\n"
    "hb_font_make_immutable:\n"
    "jmp qword ptr [rip + __ptr_hb_font_make_immutable]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_font_make_immutable\n"
    ".type __load_and_call_hb_font_make_immutable @function\n"
    "__load_and_call_hb_font_make_immutable:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_font_make_immutable\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_font_make_immutable]\n");

void __load_and_call_hb_font_make_immutable();
static __attribute__ ((used)) void* __ptr_hb_font_make_immutable = &__load_and_call_hb_font_make_immutable;

static __attribute__ ((used)) void
__load_hb_font_make_immutable(void) {
  sprx_dlsym(__handle, "hb_font_make_immutable", &__ptr_hb_font_make_immutable);
}

asm(".intel_syntax noprefix\n"
    ".global hb_font_set_funcs\n"
    ".type hb_font_set_funcs @function\n"
    "hb_font_set_funcs:\n"
    "jmp qword ptr [rip + __ptr_hb_font_set_funcs]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_font_set_funcs\n"
    ".type __load_and_call_hb_font_set_funcs @function\n"
    "__load_and_call_hb_font_set_funcs:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_font_set_funcs\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_font_set_funcs]\n");

void __load_and_call_hb_font_set_funcs();
static __attribute__ ((used)) void* __ptr_hb_font_set_funcs = &__load_and_call_hb_font_set_funcs;

static __attribute__ ((used)) void
__load_hb_font_set_funcs(void) {
  sprx_dlsym(__handle, "hb_font_set_funcs", &__ptr_hb_font_set_funcs);
}

asm(".intel_syntax noprefix\n"
    ".global hb_font_set_ppem\n"
    ".type hb_font_set_ppem @function\n"
    "hb_font_set_ppem:\n"
    "jmp qword ptr [rip + __ptr_hb_font_set_ppem]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_font_set_ppem\n"
    ".type __load_and_call_hb_font_set_ppem @function\n"
    "__load_and_call_hb_font_set_ppem:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_font_set_ppem\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_font_set_ppem]\n");

void __load_and_call_hb_font_set_ppem();
static __attribute__ ((used)) void* __ptr_hb_font_set_ppem = &__load_and_call_hb_font_set_ppem;

static __attribute__ ((used)) void
__load_hb_font_set_ppem(void) {
  sprx_dlsym(__handle, "hb_font_set_ppem", &__ptr_hb_font_set_ppem);
}

asm(".intel_syntax noprefix\n"
    ".global hb_font_set_scale\n"
    ".type hb_font_set_scale @function\n"
    "hb_font_set_scale:\n"
    "jmp qword ptr [rip + __ptr_hb_font_set_scale]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_font_set_scale\n"
    ".type __load_and_call_hb_font_set_scale @function\n"
    "__load_and_call_hb_font_set_scale:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_font_set_scale\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_font_set_scale]\n");

void __load_and_call_hb_font_set_scale();
static __attribute__ ((used)) void* __ptr_hb_font_set_scale = &__load_and_call_hb_font_set_scale;

static __attribute__ ((used)) void
__load_hb_font_set_scale(void) {
  sprx_dlsym(__handle, "hb_font_set_scale", &__ptr_hb_font_set_scale);
}

asm(".intel_syntax noprefix\n"
    ".global hb_ft_face_create_cached\n"
    ".type hb_ft_face_create_cached @function\n"
    "hb_ft_face_create_cached:\n"
    "jmp qword ptr [rip + __ptr_hb_ft_face_create_cached]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_ft_face_create_cached\n"
    ".type __load_and_call_hb_ft_face_create_cached @function\n"
    "__load_and_call_hb_ft_face_create_cached:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_ft_face_create_cached\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_ft_face_create_cached]\n");

void __load_and_call_hb_ft_face_create_cached();
static __attribute__ ((used)) void* __ptr_hb_ft_face_create_cached = &__load_and_call_hb_ft_face_create_cached;

static __attribute__ ((used)) void
__load_hb_ft_face_create_cached(void) {
  sprx_dlsym(__handle, "hb_ft_face_create_cached", &__ptr_hb_ft_face_create_cached);
}

asm(".intel_syntax noprefix\n"
    ".global hb_icu_get_unicode_funcs\n"
    ".type hb_icu_get_unicode_funcs @function\n"
    "hb_icu_get_unicode_funcs:\n"
    "jmp qword ptr [rip + __ptr_hb_icu_get_unicode_funcs]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_icu_get_unicode_funcs\n"
    ".type __load_and_call_hb_icu_get_unicode_funcs @function\n"
    "__load_and_call_hb_icu_get_unicode_funcs:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_icu_get_unicode_funcs\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_icu_get_unicode_funcs]\n");

void __load_and_call_hb_icu_get_unicode_funcs();
static __attribute__ ((used)) void* __ptr_hb_icu_get_unicode_funcs = &__load_and_call_hb_icu_get_unicode_funcs;

static __attribute__ ((used)) void
__load_hb_icu_get_unicode_funcs(void) {
  sprx_dlsym(__handle, "hb_icu_get_unicode_funcs", &__ptr_hb_icu_get_unicode_funcs);
}

asm(".intel_syntax noprefix\n"
    ".global hb_icu_script_to_script\n"
    ".type hb_icu_script_to_script @function\n"
    "hb_icu_script_to_script:\n"
    "jmp qword ptr [rip + __ptr_hb_icu_script_to_script]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_icu_script_to_script\n"
    ".type __load_and_call_hb_icu_script_to_script @function\n"
    "__load_and_call_hb_icu_script_to_script:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_icu_script_to_script\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_icu_script_to_script]\n");

void __load_and_call_hb_icu_script_to_script();
static __attribute__ ((used)) void* __ptr_hb_icu_script_to_script = &__load_and_call_hb_icu_script_to_script;

static __attribute__ ((used)) void
__load_hb_icu_script_to_script(void) {
  sprx_dlsym(__handle, "hb_icu_script_to_script", &__ptr_hb_icu_script_to_script);
}

asm(".intel_syntax noprefix\n"
    ".global hb_ot_layout_language_find_feature\n"
    ".type hb_ot_layout_language_find_feature @function\n"
    "hb_ot_layout_language_find_feature:\n"
    "jmp qword ptr [rip + __ptr_hb_ot_layout_language_find_feature]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_ot_layout_language_find_feature\n"
    ".type __load_and_call_hb_ot_layout_language_find_feature @function\n"
    "__load_and_call_hb_ot_layout_language_find_feature:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_ot_layout_language_find_feature\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_ot_layout_language_find_feature]\n");

void __load_and_call_hb_ot_layout_language_find_feature();
static __attribute__ ((used)) void* __ptr_hb_ot_layout_language_find_feature = &__load_and_call_hb_ot_layout_language_find_feature;

static __attribute__ ((used)) void
__load_hb_ot_layout_language_find_feature(void) {
  sprx_dlsym(__handle, "hb_ot_layout_language_find_feature", &__ptr_hb_ot_layout_language_find_feature);
}

asm(".intel_syntax noprefix\n"
    ".global hb_ot_layout_script_get_language_tags\n"
    ".type hb_ot_layout_script_get_language_tags @function\n"
    "hb_ot_layout_script_get_language_tags:\n"
    "jmp qword ptr [rip + __ptr_hb_ot_layout_script_get_language_tags]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_ot_layout_script_get_language_tags\n"
    ".type __load_and_call_hb_ot_layout_script_get_language_tags @function\n"
    "__load_and_call_hb_ot_layout_script_get_language_tags:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_ot_layout_script_get_language_tags\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_ot_layout_script_get_language_tags]\n");

void __load_and_call_hb_ot_layout_script_get_language_tags();
static __attribute__ ((used)) void* __ptr_hb_ot_layout_script_get_language_tags = &__load_and_call_hb_ot_layout_script_get_language_tags;

static __attribute__ ((used)) void
__load_hb_ot_layout_script_get_language_tags(void) {
  sprx_dlsym(__handle, "hb_ot_layout_script_get_language_tags", &__ptr_hb_ot_layout_script_get_language_tags);
}

asm(".intel_syntax noprefix\n"
    ".global hb_ot_layout_table_get_script_tags\n"
    ".type hb_ot_layout_table_get_script_tags @function\n"
    "hb_ot_layout_table_get_script_tags:\n"
    "jmp qword ptr [rip + __ptr_hb_ot_layout_table_get_script_tags]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_ot_layout_table_get_script_tags\n"
    ".type __load_and_call_hb_ot_layout_table_get_script_tags @function\n"
    "__load_and_call_hb_ot_layout_table_get_script_tags:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_ot_layout_table_get_script_tags\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_ot_layout_table_get_script_tags]\n");

void __load_and_call_hb_ot_layout_table_get_script_tags();
static __attribute__ ((used)) void* __ptr_hb_ot_layout_table_get_script_tags = &__load_and_call_hb_ot_layout_table_get_script_tags;

static __attribute__ ((used)) void
__load_hb_ot_layout_table_get_script_tags(void) {
  sprx_dlsym(__handle, "hb_ot_layout_table_get_script_tags", &__ptr_hb_ot_layout_table_get_script_tags);
}

asm(".intel_syntax noprefix\n"
    ".global hb_ot_tag_to_script\n"
    ".type hb_ot_tag_to_script @function\n"
    "hb_ot_tag_to_script:\n"
    "jmp qword ptr [rip + __ptr_hb_ot_tag_to_script]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_ot_tag_to_script\n"
    ".type __load_and_call_hb_ot_tag_to_script @function\n"
    "__load_and_call_hb_ot_tag_to_script:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_ot_tag_to_script\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_ot_tag_to_script]\n");

void __load_and_call_hb_ot_tag_to_script();
static __attribute__ ((used)) void* __ptr_hb_ot_tag_to_script = &__load_and_call_hb_ot_tag_to_script;

static __attribute__ ((used)) void
__load_hb_ot_tag_to_script(void) {
  sprx_dlsym(__handle, "hb_ot_tag_to_script", &__ptr_hb_ot_tag_to_script);
}

asm(".intel_syntax noprefix\n"
    ".global hb_shape\n"
    ".type hb_shape @function\n"
    "hb_shape:\n"
    "jmp qword ptr [rip + __ptr_hb_shape]\n");

asm(".intel_syntax noprefix\n"
    ".local __load_and_call_hb_shape\n"
    ".type __load_and_call_hb_shape @function\n"
    "__load_and_call_hb_shape:\n"
    "push rdi\n"
    "push rsi\n"
    "push rdx\n"
    "push rcx\n"
    "push r8\n"
    "push r9\n"
    "call __load_hb_shape\n"
    "pop r9\n"
    "pop r8\n"
    "pop rcx\n"
    "pop rdx\n"
    "pop rsi\n"
    "pop rdi\n"
    "jmp qword ptr [rip + __ptr_hb_shape]\n");

void __load_and_call_hb_shape();
static __attribute__ ((used)) void* __ptr_hb_shape = &__load_and_call_hb_shape;

static __attribute__ ((used)) void
__load_hb_shape(void) {
  sprx_dlsym(__handle, "hb_shape", &__ptr_hb_shape);
}