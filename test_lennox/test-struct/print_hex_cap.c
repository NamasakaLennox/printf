#include "main.h"

void print_hex_cap(unsigned int num)
{
        unsigned int n1;

        n1 = num;
        if (n1 / 16)
                print_hex_cap(n1 / 16);
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
int print_hexa_cap(va_list ap)
{
        int count = 0;
        unsigned int num = va_arg(ap, unsigned int);

        print_hex_cap(num);
        if (num == 0)
                count++;
        else
                while (num / 16)
                {
                        count++;
                        num /= 16;
                }
        return (count);
}
