#include "main.h"

void print_unsigned(unsigned int num)
{
        unsigned int n1;

        n1 = num;
        if (n1 / 10)
                print_unsigned(n1 / 10);
        _putchar(n1 % 10 + '0');
}

int print_unsign_int(int num, int count)
{
        unsigned int counter = count, number = num;

        print_unsigned(number);
        counter += 2;
        return(counter);
}
