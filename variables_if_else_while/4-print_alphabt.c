#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 * Description : Write a program that prints the alphabet except q & e.
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
