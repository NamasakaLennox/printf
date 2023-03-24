#include "main.h"

int print_string(char *str, int count)
{
        int i = 0;
	int counter = count;
        while (str[i])
        {
                _putchar(str[i]);
                i++;
        }
        counter += 2;
        return (counter);
}
