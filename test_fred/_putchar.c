#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes character to standard output
 * @c: Character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.

*/
void _putchar(char c)
{
    write(1, &c, 1);
}
