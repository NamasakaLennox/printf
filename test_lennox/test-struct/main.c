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
	/* unsigned int test = neg; */
	char *str = "printf a simple";
	char c = 'a';
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Please print %d, thanks!\n", num);
	_printf("Please print %d, thanks!\n", neg);
	_printf("Please print %c character, thanks!\n", c);
	_printf("Let's try to %s sentence.\n", str);
	_printf("Please print %b, %b, thanks!\n", num, 9);
	_printf("Please print %x, %x, thanks!\n", num, neg);
	printf("Please print %x, %x, thanks!\n", num, neg);
	_printf("Please print %X, %X, thanks!\n", num, neg);
        printf("Please print %X, %X, thanks!\n", num, neg);
	_printf("Please print %o, %o, thanks!\n", num, neg);
        printf("Please print %o, %o, thanks!\n", num, neg);
	_printf("Please print %u, %u, thanks!\n", num, neg);
        printf("Please print %u, %u, thanks!\n", num, neg);
	return (0);
}
