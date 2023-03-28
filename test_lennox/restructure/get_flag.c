#include "main.h"

/**
 * get_flag - check for a flag if present
 * @s: the given character
 * @f: struct of flags, stored as an array
 *
 * Return: 1 if flag is present, 0 if none
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
	case '+':
		f->plus = 1;
		i = 1;
		break;
	case ' ':
		f->space = 1;
		i = 1;
		break;
	case '#':
		f->hash = 1;
		i = 1;
		break;
	case '-':
		f->minus = 1;
		i = 1;
		break;
	case '0':
		f->zero = 1;
		i = 1;
		break;
	}
	return (i);
}
