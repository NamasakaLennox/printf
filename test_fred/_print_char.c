#include "main.h"

int print_char(char s, int count)
{
	int i = count;

	_putchar(s);
	i += 2; /* for % and specifier 'c' */
	return (i);
}
