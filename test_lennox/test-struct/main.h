#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
typedef struct spec
{
	char *s;
	int (*f)(va_list);
} specifier;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_function(const char *format))(va_list);

int print_integer(va_list i);
int print_char(va_list ap);
int print_string(va_list ap);
int print_binary(va_list ap);
int print_hexadec(va_list ap);
int print_hexa_cap(va_list ap);
int print_octal(va_list ap);
int print_unsign_int(va_list ap);

#endif
