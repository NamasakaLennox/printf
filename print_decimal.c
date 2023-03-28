#include "main.h"
/**
 * print_int - prints an integer value
 * @ap: list containing the number
 * @f: pointer to the flag struct
 * @m: pointer to the modifier struct
 *
 * Return: the number of digits printed
 */
int print_int(va_list ap, flags_t *f, mod_t *m)
{
	int num = va_arg(ap, int);
	int count = 0;

	if (f->space == 1 && f->plus == 0 && num >= 0)
		count += _putchar(' ');
	if (f->plus == 1 && num >= 0)
		count += _putchar('+');
	if (m->shorT == 1 && num >= 0)
	{
		num = (short)num;
	}
	if (m->lonG == 1 && num >= 0)
	{
		num = (long)num;
	}
	count += count_digit(num);
	if (num <= 0)
		count++;
	print_number(num);
	return (count);
}

/**
 * print_unsign - prints an unsigned integer
 * @ap: list containing the number
 * @f: pointer to the flag struct
 * @m: pointer to the modifier struct
 *
 * Return: number of digits printed
 */
int print_unsign(va_list ap, flags_t *f, mod_t *m)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *str;

	(void)f;
	if (m->shorT == 1)
	{
		num = (short)num;
	}
	if (m->lonG == 1)
	{
		num = (long)num;
	}

	str = convert(num, 10, 0);

	return (_puts(str));
}

/**
 * print_number - prints a given number
 * @num: the number to print
 */
void print_number(int num)
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
		print_number(n1 / 10);
	_putchar((n1 % 10) + '0');
}

/**
 * count_digit - counts the number of digits of a number
 * @num: the number to count
 *
 * Return: the number of digits
 */
int count_digit(int num)
{
	unsigned int count = 0;
	unsigned int n1;

	if (num < 0)
		n1 = num * -1;
	else
		n1 = num;
	while (n1 != 0)
	{
		n1 /= 10;
		count++;
	}
	return (count++);
}
