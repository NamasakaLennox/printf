#include "main.h"

/**
 * print_oct - prints a number in octal format
 * @num: number to print
 */
void print_oct(unsigned int num)
{
	unsigned int n1;

	n1 = num;
	if (n1 / 8)
		print_oct(n1 / 8);
	_putchar(n1 % 8 + '0');
}

/**
 * print_octal - converts an integer to octal
 * @ap: list of integer
 * Return: the number of characters printed
 */
int print_octal(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

	print_oct(num);
	if (num == 0)
		count++;
	else
		while (num / 8)
		{
			count++;
			num /= 8;
		}

	return (count);
}
