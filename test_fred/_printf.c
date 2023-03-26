#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
void _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            switch (*format)
            {
                case 'c':
                {
                    char c = va_arg(args, int);
                    _putchar(c);
                    break;
                }
                case 's':
                {
                    char *s = va_arg(args, char *);
                    print_str(s);
                    break;
                }
                case 'd':
                {
                    int n = va_arg(args, int);
                    print_int(n);
                    break;
                }
                case 'x':
                {
                    unsigned int n = va_arg(args, unsigned int);
                    print_hex(n);
                    break;
                }
                default:
                {
                    _putchar('%');
                    _putchar(*format);
                    break;
                }
            }
        } else
        {
            _putchar(*format);
        }
        format++;
    }

    va_end(args);
}
