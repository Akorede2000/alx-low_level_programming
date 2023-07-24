#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse string
 * @s: pointer
 * Return: nothing
 */
void rev_string(char *s)
{
	int len, i;
	char *start, *end;
	char c;


	len = 0;
	start = s, end = s;
	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len - 1; i++)
		end++;
	for (i = 0; i < len / 2; i++)
	{
		c = *end;
		*end = *start;
		*start = c;
		end--;
		start++;
	}
}
