#include <stdio.h>

/**
 * main - entry point
 * Description : print 10 to 0 digits without char variables
 * Return: Always 0.
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	putchar('\n');

	return (0);
}
