/**
 *_strcmp - compares two strings
 *@s1: first string
 *@s2: second string
 *
 * Description: compares two strings
 * section header:
 * Return: an integer less than, equal to, or greater than zero
 */
int _strcmp(char *s1, char *s2)
{
	unsigned char u1, u2;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	u1 = (unsigned char) *s1;
	u2 = (unsigned char) *s2;
	return (u1 - u2);
}
