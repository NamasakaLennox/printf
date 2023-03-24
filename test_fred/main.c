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
	char *str = "printf a simple";
	char c = 'a';
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Let's try to printf %c simple sentence.\n", c);
	_printf("Let's try to %s sentence.\n", str);
	return (0);
}
