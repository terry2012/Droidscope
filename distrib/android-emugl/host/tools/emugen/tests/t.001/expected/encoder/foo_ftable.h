// Generated Code - DO NOT EDIT !!
// generated by 'emugen'
#ifndef __foo_client_ftable_t_h
#define __foo_client_ftable_t_h


static const struct _foo_funcs_by_name {
	const char *name;
	void *proc;
} foo_funcs_by_name[] = {
	{"fooAlphaFunc", (void*)fooAlphaFunc},
	{"fooIsBuffer", (void*)fooIsBuffer},
	{"fooUnsupported", (void*)fooUnsupported},
	{"fooDoEncoderFlush", (void*)fooDoEncoderFlush},
	{"fooTakeConstVoidPtrConstPtr", (void*)fooTakeConstVoidPtrConstPtr},
};
static const int foo_num_funcs = sizeof(foo_funcs_by_name) / sizeof(struct _foo_funcs_by_name);


#endif
