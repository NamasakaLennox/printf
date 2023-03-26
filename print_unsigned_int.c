#include "main.h"

/**
 * print_unsign - prints an unsigned integer
 * @num: the number to print
 */
void print_unsign(unsigned int num)
{
	unsigned int n1;

	n1 = num;
	if (n1 / 10)
		print_unsign(n1 / 10);
	_putchar(n1 % 10 + '0');
}

/**
 * print_unsign_int - prints an unsigned integer
 * @ap: list containing the integer
 * Return: number of characters printed
 */
int print_unsign_int(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

	print_unsign(num);
	if (num == 0)
		count++;
	else
		while (num / 10)
		{
			count++;
			num /= 10;
		}
	return (count);
}
