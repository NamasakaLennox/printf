#include "main.h"

void print_oct(unsigned int num)
{
        unsigned int n1;

        n1 = num;
        if (n1 / 8)
                print_oct(n1 / 8);
        _putchar(n1 % 8 + '0');
}

int print_octal(va_list ap)
{
        unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

        print_oct(num);
	if (num == 0)
                count++;
        else
            	while (num / 8)
		{
                 	count++;
			num /= 8;
		}

        return (count);
}
