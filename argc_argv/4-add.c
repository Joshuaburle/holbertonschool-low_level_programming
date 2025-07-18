#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as arguments.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	char *arg;

	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}
