#include "main.h"

void print_oct(unsigned int num)
{
        unsigned int n1;

	n1 = num;
        if (n1 / 8)
                print_oct(n1 / 8);
        _putchar(n1 % 8 + '0');
}

int print_octal(unsigned int num, int count)
{
        int counter = count;

        print_oct(num);
        counter += 2;
        return (counter);
}
