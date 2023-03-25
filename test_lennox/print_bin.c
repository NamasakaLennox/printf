#include "main.h"

void print_bin(int num)
{
        unsigned int n1;

        if (num < 0)
        {
                _putchar('-');
                n1 = num * -1;
        }
        else
                n1 = num;
        if (n1 / 2)
                print_bin(n1 / 2);
        _putchar(n1 % 2 + '0');
}
int print_binary(int num, int count)
{
        int counter = count;

        print_bin(num);
        counter += 2;
        return (counter);
}
