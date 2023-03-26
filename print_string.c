#include "main.h"

/**
 * print_string - prints a string
 * @ap: list containing the string
 * Return: the number of characters printed
 */
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
