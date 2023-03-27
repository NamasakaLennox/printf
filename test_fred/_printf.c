#include "main.h"

/**
 * _printf - prints a given string passed as arguments
 * @format: the passed string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	const char *ptr;
	int (*pfunc)(va_list, flags_t *);
	flags_t flags = {0, 0, 0};
	mod_t modifiers = {0, 0};

	register int count = 0;

	va_start(ap, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (ptr = format; *ptr; ptr++) /* iterate through the string */
	{
		if (*ptr == '%') /* found a specifier */
		{
			ptr++;
			if (*ptr == '%') /* to print percent */
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*ptr, &flags))
				ptr++;
			while (get_modifier(*ptr, &modifiers))
				ptr++;
			pfunc = get_print(*ptr); /* function to perform */
			count += (pfunc)
				? pfunc(ap, &flags, &modifiers) /* if found */
				: _printf("%%%c", *ptr); /* false */
		}
		else
			count += _putchar(*ptr);
	}
	_putchar(-1);
	va_end(ap);
	return (count);
}
