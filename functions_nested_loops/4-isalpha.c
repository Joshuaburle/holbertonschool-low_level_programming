#include "main.h"

/**
 *_isalpha - make a function see if its upper or lowercase
 *@c: check if the letter is in lowercase or uppercase
 *
 * Return: 1 if a letter is in lowercase or uppercase 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}

	else
{
	return (0);
}
}
