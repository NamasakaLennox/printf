#include "main.h"

void print_bin(unsigned int num)
{
        unsigned int n1;

	n1 = num;
        if (n1 / 2)
                print_bin(n1 / 2);
        _putchar(n1 % 2 + '0');
}
int print_binary(unsigned int num, int count)
{
        int counter = count;

        print_bin(num);
        counter += 2;
        return (counter);
}
