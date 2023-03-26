#include "main.h"


int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, char_count = 0;
	int (*ptr)(va_list);

	if (format == NULL)
		return (-1);
	va_start(ap, format);

	/* iterate through the string */
	while (format[i])
	{
		while (format[i] != '%' && format[i])
		{
			_putchar(format[i]);
			char_count++;
			i++;
		}
		if (format[i] == '\0')
			return (char_count);
		ptr = get_function(&format[i + 1]);
		if (ptr != NULL)
		{
			char_count += ptr(ap);
			i += 2;
			continue;
		}
		if (!format[i])
			return (-1);
		_putchar(format[i]);
		char_count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}

	va_end(ap);
	return (char_count);
}
