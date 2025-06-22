#include "main.h"
#include <stdio.h>

/**
 * main - test _islower
 *
 * Return: Always 0
 */
int main(void)
{
    char test1 = 'g';
    char test2 = 'G';

    printf("%c: %d\n", test1, _islower(test1));
    printf("%c: %d\n", test2, _islower(test2)); 

    return (0);
}
