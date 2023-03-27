#include "main.h"

/**
 * convert - converts a given number to a given base
 * @num: the number to convert
 * @base: the base to convert to
 * @lowercase: added for a base 16 case scenario
 *
 * Return: pointer to the converted string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *select;
	static char buffer[50];
	char *ptr;

	select = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = select[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}
