#include "main.h"

/**
 * print_hex - prints a hexadecimal value - lowercase
 * @ap: list containing the number
 * @f: pointer to the flag struct
 * @m: pointer to the modifier struct
 *
 * Return: the number of digits printed
 */
int print_hex(va_list ap, flags_t *f, mod_t *m)
{
	unsigned int num = va_arg(ap, unsigned int);
	int count = 0;
	char *str;

	str = convert(num, 16, 1);
	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	if (m->shorT == 1)
	{
		num = (short)num;
	}
	if (m->lonG == 1)
	{
		num = (long)num;
	}
	count += _puts(str);

	return (count);
}

/**
 * print_hex_caps - prints a hexadecimal value- uppercase
 * @ap: list containing the number required
 * @f: pointer to the flag struct
 * @m: pointer to the modifier struct
 *
 * Return: the number of digits printed
 */
int print_hex_caps(va_list ap, flags_t *f, mod_t *m)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *str;
	int count = 0;

	str = convert(num, 16, 0);
	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	if (m->shorT == 1)
	{
		num = (short)num;
	}
	if (m->lonG == 1)
	{
		num = (long)num;
	}
	count += _puts(str);

	return (count);
}

/**
 * print_binary - prints a number in binary format
 * @ap: list containing the number to print
 * @f: pointer to the flag struct
 * @m: pointer to the modifier struct
 *
 * Return: the number of digits printed
 */
int print_binary(va_list ap, flags_t *f, mod_t *m)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	(void)m;

	return (_puts(str));
}

/**
 * print_octal - prints a number in octal format
 * @ap: list containing the number
 * @f: pointer to the flag struct
 * @m: pointer to the modifier struct
 *
 * Return: the number of digits printed
 */
int print_octal(va_list ap, flags_t *f, mod_t *m)
{
	unsigned int num = va_arg(ap, unsigned int);
	char *str;
	int count = 0;

	(void)m;

	str = convert(num, 8, 0);
	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	if (m->shorT == 1)
	{
		num = (short)num;
	}
	if (m->lonG == 1)
	{
		num = (long)num;
	}
	count += _puts(str);

	return (count);
}
