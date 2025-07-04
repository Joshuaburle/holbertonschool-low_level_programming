#include <stdio.h>

/**
 * main - Prints the program name, including the path.
 * @argc: Argument count.
 * @argv: Argument vector (argv[0] is the program name).
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
