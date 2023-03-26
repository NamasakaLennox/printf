#include "main.h"

/**
 * print_num - print an integer
 * @num: number to print
 */
void print_num(int num)
{
	unsigned int n1;

	if (num < 0)
	{
		_putchar('-');
		n1 = num * -1;
	}
	else
		n1 = num;
	if (n1 / 10)
		print_num(n1 / 10);
	_putchar(n1 % 10 + '0');
}

/**
 * print_integer - accepts an int list
 * @i: the list passed
 * Return: number of chars printed
 */
int print_integer(va_list i)
{
	int count = 0, num;

	num = va_arg(i, int);
	print_num(num);
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
