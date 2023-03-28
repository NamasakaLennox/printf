#include "main.h"

/**
 * get_modifier - check for modifier.
 * @s: the passed character
 * @m: struct of modifiers, stored as an array
 *
 * Return: 1 if modifier is present, 0 if none.
*/
int get_modifier(char s, mod_t *m)
{
	int i = 0;

	switch (s)
	{
	case 'h':
		m->shorT = 1;
		i = 1;
		break;
	case 'l':
		m->lonG = 1;
		i = 1;
		break;
	default:
		break;
	}
	return (i);
}
