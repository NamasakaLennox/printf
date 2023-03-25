#include "main.h"

void print_bin(int num)
{
	unsigned int n1;

	if (num < 0)
	{
		_putchar('-');
		n1 = num * -1;
	}
	else
		n1 = num;
	if (n1 / 2)
		print_bin(n1 / 2);
	_putchar(n1 % 2 + '0');
}
int print_binary(int num, int count)
{
	int counter = count;

	print_bin(num);
	counter += 2;
	return (counter);
}
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
			switch (format[i + 1])
			{
			case 'c': /* for character specifier */
				i = print_char(va_arg(ap, int), i);
				continue;
			case 's':
				i = print_string(va_arg(ap, char *), i);
				continue;
			case 'd':
				i = print_integer(va_arg(ap, int), i);
				continue;
			case 'i':
				i = print_integer(va_arg(ap, int), i);
				continue;
			case 'b':
				i = print_binary(va_arg(ap, int), i);
				continue;
			}
		}
		_putchar(format[i]);;
		i++;
	}

	va_end(ap);
	return (0);
}
