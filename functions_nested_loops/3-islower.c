#include "main.h"

/**
 *_islower - make a function to know if its write in lowercase
 *@c: check if the letter is in lowercase
 *
 *
 * Return: 1 if a letter is in lowercase. 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
{
	return (1);
}

	else
{
	return (0);
}
}
