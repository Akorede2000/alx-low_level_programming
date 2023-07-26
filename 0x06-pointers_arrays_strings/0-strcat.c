#include "main.h"
/**
 * _strcat - concat strings
 * @dest: pointer
 * @src: pointer
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, len;


	len = 0, i = 0;
	while (dest[i])
	{
		len++;
		i++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
