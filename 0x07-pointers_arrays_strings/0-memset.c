/**
 * *_memset - Funtion to replace array values up to n bytes with b
 * @s: pointer to the array
 * @b: character to replace the value with
 * @n: number of byte up to which to replace values
 *
 * Return: pointer to the array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
