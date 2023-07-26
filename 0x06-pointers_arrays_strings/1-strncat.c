#include "main.h"
/**
 * _strncat - concat strings
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	i = 0, len = 0;
	while (dest[i])
	{
		i++;
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
