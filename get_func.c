#include "main.h"

/**
 * get_function - gets the function to handle
 * @format: string to check
 * Return: pointer to the given function
 */
int (*get_function(const char *format))(va_list)
{
	specifier get_f[] = {
			{"d", print_integer},
			{"c", print_char},
			{"s", print_string},
			{"i", print_integer},
			{"b", print_binary},
			{"x", print_hexadec},
			{"X", print_hexa_cap},
			{"o", print_octal},
			{"u", print_unsign_int},
			{NULL, NULL}
		};
	unsigned int i;

	i = 0;
	while (get_f[i].s)
	{
		if (get_f[i].s[0] == (*format))
			return (get_f[i].f);
		i++;
	}
	return (get_f[i].f);
}
