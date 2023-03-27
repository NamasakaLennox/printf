#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
/**
 * struct flags - checks for flags
 * @plus: check for '+'
 * @space: check for ' '
 * @hash: check for '#'
 * @shorT: check for 'h'
 * @lonG: check for 'l'
 */
typedef struct  flags
{
	int plus;
	int space;
	int hash;
	int shorT;
	int lonG;
	int fWidth;
} flags_t;

/**
 * struct spec - check for specifiers
 * @c: specifier given
 * @f: pointer to operation to perform
 */
typedef struct spec
{
	char c;
	int (*f)(va_list ap, flags_t *f);
} specifier;

/* printf */
int _printf(const char *format, ...);
int (*get_print(char s))(va_list, flags_t *);
int get_flag(char s, flags_t *f);

/* putchar */
int _putchar(char c);
int _puts(char *str);

/* alphabet */
int print_char(va_list ap, flags_t *f);
int print_string(va_list ap, flags_t *f);

/* print numbers */
int print_int(va_list ap, flags_t *f);
void print_number(int num);
int print_unsign(va_list ap, flags_t *f);
int count_digit(int num);
char *convert(unsigned long int num, int base, int lowercase);

/* conversions from decimal */
int print_hex(va_list ap, flags_t *f);
int print_hex_caps(va_list ap, flags_t *f);
int print_binary(va_list ap, flags_t *f);
int print_octal(va_list ap, flags_t *f);

/* custom converters */
int print_exclusive_string(va_list ap, flags_t *f);
int print_rot13(va_list ap, flags_t *f);
int print_reverse(va_list ap, flags_t *f);
int print_percent(va_list ap, flags_t *f);
int print_address(va_list ap, flags_t *f);

#endif
