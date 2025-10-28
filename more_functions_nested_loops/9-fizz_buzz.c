#include <stdio.h>


/**
 *main - fizz buzz
 *
 *Description: on a multiple of 3 write Fizz and Buzz for 5
 *
 *section header:
 *Return: always 0 on sucess
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i == 100)
			printf("Buzz\n");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	return (0);
}
