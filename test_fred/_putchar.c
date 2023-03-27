#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character in the standard output
 * @c: character to write
 * Return: 1 - the number of characters printed
 */
int _putchar(char c)
{
	static char buffer[1024];
	static int i;

	if (c == -1 || i >= 1024)
	{
		write(1, &buffer, i);
		i = 0;
	}
	if (c != -1)
	{
		buffer[i] = c;
		i++;
	}
	return (1);
}

/**
 * _puts - prints a string in the standard output
 * @str: the string to be printed
 *
 * Return: The number of characters printed
 */
int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
