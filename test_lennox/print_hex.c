#include "main.h"

void print_hex(unsigned int num)
{
        unsigned int n1;

        n1 = num;
        if (n1 / 16)
                print_hex(n1 / 16);
        if (n1 % 16 > 9)
	{
		switch (n1 % 16)
		{
		case 10:
			_putchar('a');
			break;
		case 11:
                        _putchar('b');
			break;
		case 12:
                        _putchar('c');
                        break;
		case 13:
                        _putchar('d');
                        break;
		case 14:
                        _putchar('e');
                        break;
		case 15:
                        _putchar('f');
                        break;
		}
	}
	else
		_putchar(n1 % 16 + '0');
}

int print_hexadec(unsigned int num, int count)
{
	int counter = count;

	print_hex(num);
	counter += 2;
	return (counter);
}
