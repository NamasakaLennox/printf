#include "main.h"

/**
 * get_print - a funtion pointer to the selected function
 * @s: the passed specifier
 *
 * Return: pointer to the respective function
 */
int (*get_print(char s))(va_list, flags_t *, mod_t *)
{
	specifier sp[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'u', print_unsign},
		{'x', print_hex},
		{'X', print_hex_caps},
		{'b', print_binary},
		{'o', print_octal},
		{'r', print_reverse},
		{'S', print_exclusive_string},
		{'%', print_percent},
		{'R', print_rot13},
		{'p', print_address}
	};
	int arr_size = 14;

	register int i;

	for (i = 0; i < arr_size; i++)
		if (sp[i].c == s)
			return (sp[i].f);

	return (NULL);
}
