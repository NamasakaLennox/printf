#include "main.h"

int get_modifier(char s, mod_t *m)
{
    int i = 0;

    switch (s)
    {
    case 'h':
        m->shorT = 1;
        i = 1;
        break;
    case 'l':
        m->lonG = 1;
        break;
    default:
        break;
    }
    return (i);
}
