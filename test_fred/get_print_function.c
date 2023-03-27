#include "main.h"
/**
 * get_print_func - selects the correct function to perform the operation.
 * @s: argument indentifier
 * @index: index for argument indentifier
 * Return: pointer to a function.
*/
int(*get_print_func(const char *s, int index))(va_list, char *, unsigned int)
{
    print_t pr[] = {
        {"c", print_chr},
        {"s", print_str},
        {"x", print_hex},
        {"d", print_int},
        {"i", print_int},
        {"o", print_oct}
    }
    int i = 0, j = 0, first_index;

    first_index = index;
    while (pr[i].type_arg)
    {
        if (s[index] == pr[i].type_arg[j])
        {
            if (pr[i].type_arg[j + 1] != '\0')
                index++, j++;
            else
                break;
        }
        else
        {
            j = 0;
            i++;
            index = first_index;
        }
    }
    return (pr[i].f);
}
