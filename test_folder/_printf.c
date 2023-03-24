#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int i;

	i = 0;
	va_start(ap, format);

	/* iterate through the string */
	while (format[i])
	{
		if (format[i] == '%') /* incase of specifier */
		{
			if (format[i + 1] == 'c') /* for character specifier */
			{
				i = print_char(va_arg(ap, int), i);
				continue;
			}
			if (format[i + 1] == 's')
			{
				/* to continue with where the string ends */
				i = print_string(va_arg(ap, char *), i);
				continue;
			}
		}
		_putchar(format[i]);;
		i++;
	}

	va_end(ap);
	return (0);
}
