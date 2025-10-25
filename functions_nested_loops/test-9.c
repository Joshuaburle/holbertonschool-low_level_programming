#include <stdio.h>

/**
 *times_table - print every * table from 0 to 9
 *
 *
 * return: always 0 on sucess
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j <= 9)
            {
                if (j == 0)
                {
                    putchar(i * j + '0');
                }
                else
                {
                    putchar(',');
                    putchar(' ');
                    putchar(' ');
                    putchar(i * j + '0');
                }
            }
            else
            {
                putchar(',');
                putchar(' ');
                putchar(i * j / 10 + '0'); 
                putchar(i * j % 10 + '0'); 
            }
		}
		putchar('\n');
    }
    return (0);
}					