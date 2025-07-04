/**
 * is_prime_helper - Helper function to check for factors
 * @n: Number to check
 * @i: Current divisor
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if n is a prime number, 0 otherwise
 * @n: Number to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
