#include "main.h"

int print_string(va_list ap)
{
        int i = 0;
        char *str = va_arg(ap, char *);

        while (str[i])
        {
                _putchar(str[i]);
                i++;
        }

        return (i);
}
