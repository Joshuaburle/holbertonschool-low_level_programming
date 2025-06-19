#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description : Write a program that prints the alphabet in lowercase and uppercase.
 * Return: Always 0 (sucess)
 */
int main(void)
{
char alphabet, alphABET;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
}
for (alphABET = 'A'; alphABET <= 'Z' ; alphABET++)
{
putchar(alphABET);
}
putchar('\n');
return (0);
}
