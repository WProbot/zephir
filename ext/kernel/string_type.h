
#ifndef ZEPHIR_STRING_TYPE_H
#define ZEPHIR_STRING_TYPE_H 1

typedef struct {
	char *str;
	size_t len;
	size_t size;
} zephir_str;

#define zephir_str_assign(str_p, d_str, d_length) { \
	if (!str_p) { \
		(str_p) = emalloc(sizeof(zephir_str)); \
		(str_p)->str = emalloc(48); \
		(str_p)->len = d_length; \
		(str_p)->size = 48; \
	} else  { \
		efree((str_p)->str); \
	} \
	memcpy((str_p)->str, d_str, d_length); \
	(str_p)->str[d_length] = '\0'; \
}

#define zephir_str_assign_long(str_p, lvalue)

#define zephir_str_append_long(str_p, lvalue)

#endif