#include "main.h"

/**
 * _printf - prints a string
 * @format: the string passed
 * Return: number of characters printed
 * -1 if fail
 */
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
		if (format[i] == '\0') /* end of string */
			return (char_count);
		ptr = get_function(&format[i + 1]); /* get function address */
		if (ptr != NULL)
		{
			char_count += ptr(ap); /* return chars printed */
			i += 2; /* cater for '%' and the specifier */
			continue;
		}
		if (!format[i])
			return (-1);
		_putchar(format[i]); /* % without specifier */
		char_count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}

	va_end(ap);
	return (char_count);
}
