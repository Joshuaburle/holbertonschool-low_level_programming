#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 * Description : program that prints all single digit of 10 to 0
 * Return: Always 0.
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
		if (x < 9)
		{
			printf(", ");
		}
	}
	printf("\n");

	return (0);
}
