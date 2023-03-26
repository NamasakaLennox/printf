#include "main.h"

/**
 * print_str - writes the string to stdout
 * @str: string to print
*/
void print_str(char *str)
{
    while (*str != '\0')
    {
        _putchar(*str);
        str++;
    }
}
