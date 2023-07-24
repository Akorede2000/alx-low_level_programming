#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: pointer
 * Return: int
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
