#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 245;
	int neg = -78458;
	char *str = "printf a simple";
	char c = 'a';
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Let's try to printf %c simple sentence.\n", c);
	_printf("Let's try to %s sentence.\n", str);
	_printf("Please print %d, thanks!\n", num);
	_printf("Please print %d, thanks!\n", neg);
	_printf("Please print %i, thanks!\n", num);
        _printf("Please print %i, thanks!\n", neg);
	_printf("Please print %b, thanks!\n", num);
	return (0);
}
