#include "main.h"

/**
 *
 *
 *
 *
 */

int _isupper(int c)
{
    int i;

    for (i = 'a'; i <= 'z'; c++)
    {
        if (c != i)
        {
            return (0);
        }
        else
        {
            return (1);
        }
    }
    return (0);
}