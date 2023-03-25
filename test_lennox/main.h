#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(char s, int count);
int print_string(char *str, int count);
int print_integer(int num, int count);
int print_binary(int num, int count);
int print_unsign_int(int num, int count);

#endif
