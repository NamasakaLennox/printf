#include "main.h"

/**
 * print_char - prints a character
 * @ap: the character passed as a list
 * Return: the number of characters printed
 */
int print_char(va_list ap)
{
	char s = va_arg(ap, int);

	_putchar(s);
	return (1);
}
