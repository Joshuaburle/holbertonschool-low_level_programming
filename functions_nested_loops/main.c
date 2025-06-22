#include "main.h"
#include <stdio.h>

/**
 * main - test add function
 *
 * Return: Always 0
 */
int main(void)
{
    int sum;

    sum = add(5, 3);
    printf("5 + 3 = %d\n", sum);

    sum = add(-4, 10);
    printf("-4 + 10 = %d\n", sum);

    return (0);
}
