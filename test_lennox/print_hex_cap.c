#include "main.h"

void print_cap_hex(unsigned int num)
{
        unsigned int n1;

        n1 = num;
        if (n1 / 16)
                print_cap_hex(n1 / 16);
        if (n1 % 16 > 9)
        {
                switch (n1 % 16)
                {
                case 10:
                        _putchar('A');
                        break;
                case 11:
                        _putchar('B');
                        break;
                case 12:
                        _putchar('C');
                        break;
                case 13:
                        _putchar('D');
                        break;
                case 14:
                        _putchar('E');
                        break;
                case 15:
                        _putchar('F');
                        break;
                }
        }
        else
                _putchar(n1 % 16 + '0');
}
int print_hexa_cap(unsigned int num, int count)
{
	int counter = count;

	print_cap_hex(num);
	counter += 2;
	return (counter);
}
