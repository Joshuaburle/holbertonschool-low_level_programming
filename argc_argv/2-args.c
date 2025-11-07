#include <stdio.h>

/**
 * main - prints all arguments passed to the program
 * @argc: argument count
 * @argv: argument vector (array of strings)
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
