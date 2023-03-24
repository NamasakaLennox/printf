#include "main.h"

void print_num(int num)
{
        unsigned int n1;

        if (num < 0)
        {
                _putchar('-');
                n1 = num * -1;
        }
        else
                n1 = num;
        if (n1 / 10)
                print_num(n1 / 10);
        _putchar(n1 % 10 + '0');
}

int print_integer(int num, int count)
{
        int counter = count;

        print_num(num);
        counter += 2;
        return (counter);
}
