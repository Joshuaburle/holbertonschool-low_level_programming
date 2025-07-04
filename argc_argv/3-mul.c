#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers and prints the result.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, 1 if incorrect number of arguments.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
