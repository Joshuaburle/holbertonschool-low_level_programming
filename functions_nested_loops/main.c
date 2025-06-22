#include "main.h"

/**
 * main - tests print_sign
 *
 * Return: Always 0
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');

    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');

    r = print_sign(-5);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0'); /* Attention : affichera 255 pour -1 */
    _putchar('\n');

    return (0);
}
