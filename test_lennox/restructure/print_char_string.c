#include "main.h"

/**
 * print_string - prints a string passed as argument
 * @ap: list containing the string
 * @f: pointer to flag struct
 * @m: pointer to the modifier struct
 *
 * Return: the number of characters printed
 */
int print_string(va_list ap, flags_t *f, mod_t *m)
{
	char *s = va_arg(ap, char *);

	(void)f;
	(void)m;

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a given character
 * @ap: list containing the character
 * @f: pointer to the flag struct
 * @m: pointer to the modifier struct
 *
 * Return: the number of chars printed, 1
 */
int print_char(va_list ap, flags_t *f, mod_t *m)
{
	(void)f;
	(void)m;

	_putchar(va_arg(ap, int));
	return (1);
}
