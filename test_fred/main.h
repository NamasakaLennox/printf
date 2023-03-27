#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
    char *type_arg;
    int (*f)(va_list, char *, unsigned int);
} print_t;

void print_buf(char c);
void print_str(char *str);
void print_int(int n);
void print_hex(unsigned int n);

#endif
