#include <stdio.h>

/**
 * main - entry point
 * Description : Write the alphabet in reverse
 * Return: Always 0.
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');

	return (0);
}
