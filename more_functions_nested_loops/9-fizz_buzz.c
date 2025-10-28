#include <stdio.h>


/**
 * printf - 
 *
 *
 */

int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
        else
            printf("%d ", i);
		if (i == 100)
			printf("Buzz");
    }
    printf("\n");
    return (0);
}