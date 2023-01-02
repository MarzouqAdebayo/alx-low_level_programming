/**
 * *_memcpy - Funtion to replace array values up to n bytes with b
 * @dest: pointer to the array
 * @src: character to replace the value with
 * @n: number of byte up to which to replace values
 *
 * Return: pointer to the array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
