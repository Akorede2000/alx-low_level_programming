#include "main.h"
/**
 * _strncpy - copy string
 * @dest: pointer
 * @src: pointer
 * @n: int
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
