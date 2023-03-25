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
	unsigned int test = neg;
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
	_printf("Please print %b, %b, thanks!\n", num, neg);
	_printf("Let's try to printf %u.\n", test);
	printf("Let's try to printf %u.\n", test);
	_printf("Let's try to printf %o, %o.\n", num, neg);
        printf("Let's try to printf %o, %o.\n", num, neg);
	return (0);
}
