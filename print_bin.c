#include "main.h"
/**
 * print_bin - prints a binary number
 * @num: the number to print
 */
void print_bin(unsigned int num)
{
	unsigned int n1;

	n1 = num;
	if (n1 / 2)
		print_bin(n1 / 2);
	_putchar(n1 % 2 + '0');
}

/**
 * print_binary - prints a binary number
 * @ap: a list of arguments
 * Return: number of characters printed
 */
int print_binary(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

	print_bin(num);
	if (num == 0)
		count++;
	else
		while (num / 2)
		{
			count++;
			num /= 2;
		}
	return (count);
}
