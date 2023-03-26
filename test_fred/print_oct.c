#include "main.h"

/**
 * print_hex - prints a decimal in hexadecimal.
 * @n: integer to print.
*/
void print_hex(unsigned int n)
{
    if (n > 0xf)
    {
        print_hex(n >> 4);
    }
    _putchar("0123456789abcdef"[n & 0xf]);
}
