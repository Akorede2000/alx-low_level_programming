#include "main.h"

/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;
}
