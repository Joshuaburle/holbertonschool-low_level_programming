#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description : Write a program that prints the alphabet in lowercase.
 * Return: Always 0 (sucess)
 */
int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
