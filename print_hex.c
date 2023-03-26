#include "main.h"

/**
 * print_hex - prints the given parameter in hexadecimal format
 * @num: the number to print
 */
void print_hex(unsigned int num)
{
	unsigned int n1;

	n1 = num;
	if (n1 / 16)
		print_hex(n1 / 16);
	if (n1 % 16 > 9)
	{
		switch (n1 % 16)
		{
		case 10:
			_putchar('a');
			break;
		case 11:
			_putchar('b');
			break;
		case 12:
			_putchar('c');
			break;
		case 13:
			_putchar('d');
			break;
		case 14:
			_putchar('e');
			break;
		case 15:
			_putchar('f');
			break;
		}
	}
	else
		_putchar(n1 % 16 + '0');
}

/**
 * print_hexadec - prints hexadecimal numbers;
 * @ap: the number to print
 * Return: number of characters printed
 */
int print_hexadec(va_list ap)
{
	int count = 0;
	unsigned int num = va_arg(ap, unsigned int);

	print_hex(num);
	if (num == 0)
		count++;
	else
		while (num / 16)
		{
			count++;
			num /= 16;
		}
	return (count);
}
