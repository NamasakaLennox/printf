#include "main.h"

int print_char(va_list ap)
{
	char s = va_arg(ap, int);

        _putchar(s);
        return (1);
}
