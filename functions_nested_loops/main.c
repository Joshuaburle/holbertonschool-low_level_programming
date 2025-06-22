#include "main.h"
#include <stdio.h>

/**
 * main - tests _isalpha function
 *
 * Return: Always 0
 */
int main(void)
{
    printf("'a' -> %d\n", _isalpha('a')); /* 1 */
    printf("'Z' -> %d\n", _isalpha('Z')); /* 1 */
    printf("'9' -> %d\n", _isalpha('9')); /* 0 */
    printf("'?' -> %d\n", _isalpha('?')); /* 0 */
    return (0);
}
