#include "main.h"

/**
 * print_int - print an integer
 * @n: integer to print.
*/
void print_int(int n)
{
    if (n < 0)
    {
        _putchar('-');
        n = -n;
    }
    if (n > 9)
    {
        print_int(n / 10);
    }
    _putchar(n % 10 + '0');
}
