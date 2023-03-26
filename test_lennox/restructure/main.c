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
    int len = 65;
    int len2 = -65;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u], [%u]\n", 65, -65);
    printf("Unsigned:[%u], [%u]\n", 65, -65);
    _printf("Unsigned octal:[%o], [%o]\n", 65, -65);
    printf("Unsigned octal:[%o], [%o]\n", 65, -65);
    _printf("Unsigned hexadecimal:[%x, %X]\n", 6589, -6589);
    printf("Unsigned hexadecimal:[%x, %X]\n", 6589, -6589);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("String:[%b]\n", 9);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n", "Reverse");
    /*printf("Unknown:[%r]\n", "Reverse");*/
    _printf("Unknown:[%R]\n", "Reverse");
    _printf("Unknown:[%R]\n", "Erirefr");
    _printf("%S\n", "Best\nSchool");
    return (0);
}
