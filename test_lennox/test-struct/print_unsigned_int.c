#include "main.h"

void print_unsigned(unsigned int num)
{
        unsigned int n1;

        n1 = num;
        if (n1 / 10)
                print_unsigned(n1 / 10);
        _putchar(n1 % 10 + '0');
}

int print_unsign_int(va_list ap)
{
        unsigned int num = va_arg(ap, unsigned int);
	int count = 0;

        print_unsigned(num);
	if (num == 0)
		count++;
	else
            	while (num / 10)
		{
                 	count++;
			num /= 10;
		}
        return(count);
}
