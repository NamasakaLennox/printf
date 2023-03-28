#include "main.h"

/**
 * print_exclusive_string - prints a string
 * @ap: list containing the sting
 * @f: pointer to the flag struct
 * @m: pointer to the modifier struct
 *
 * Description: Non printable characters (0 < ASCII value < 32 or >= 127)
 * are printed this way: \x, followed by the ASCII code value
 * in hexadecimal upper case - always 2 characters
 *
 * Return: the number of characters printed
 */
int print_exclusive_string(va_list ap, flags_t *f, mod_t *m)
{
	int i, count = 0;
	char *ptr;
	char *str = va_arg(ap, char *);
	(void)f;
	(void)m;

	if (!str)
		return (_puts("(null)"));

	for (i = 0; str[i]; i++)
	{
		if (str[i] > 0 && (str[i] < 32 || str[i] >= 127))
		{
			_puts("\\x");
			count += 2;
			ptr = convert(str[i], 16, 0);
			if (!ptr[1])
				count += _putchar('0');
			count += _puts(ptr);
		}
		else
			count += _putchar(str[i]);
	}
	return (count);
}

/**
 * print_reverse - prints a string in reverse
 * @ap: list containing the string
 * @f: pointer to the flag struct
 * @m: pointer to the modifier struct
 *
 * Return: the number of characters printed
 */
int print_reverse(va_list ap, flags_t *f, mod_t *m)
{
	int i = 0, j;
	char *str = va_arg(ap, char *);

	(void)f;
	(void)m;

	if (!str)
		str = "(null)";
	while (str[i])
		i++;
	for (j = i - 1; j >= 0; j--)
		_putchar(str[j]);
	return (i);
}

/**
 * print_rot13 - encrypts in rot13
 * @ap: list of arguments containing string
 * @f: pointer to the flag structs
 * @m: pointer to the modifier struct
 *
 * Return: number of characters printed
 */
int print_rot13(va_list ap, flags_t *f, mod_t *m)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *str = va_arg(ap, char *);

	(void)f;
	(void)m;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' ||
						       str[i] > 'z'))
			_putchar(str[i]);
		else
		{
			j = 0;
			while (alpha[j])
			{
				if (str[i] == alpha[j])
				{
					_putchar(rot13[j]);
				}
				j++;
			}
		}
	}
	return (i);
}

/**
 * print_percent - prints the percentage symbol
 * @ap: list arguments
 * @f: pointer to the struct flags
 * @m: pointer to the modifier struct
 *
 * Return: returns 1, chars printed
 */
int print_percent(va_list ap, flags_t *f, mod_t *m)
{
	(void)f;
	(void)ap;
	(void)m;

	return (_putchar('%'));
}

/**
 * print_address - prints an address of a memory location
 * @ap: list containing the address
 * @f: pointer to the flag struct
 * @m: pointer to the modifier struct
 *
 * Return: number of characters printed
 */
int print_address(va_list ap, flags_t *f, mod_t *m)
{
	char *str;
	unsigned long int addr = va_arg(ap, unsigned long int);

	register int count = 0;

	(void)f;
	(void)m;

	if (!addr)
		return (_puts("(nil)"));
	str = convert(addr, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
