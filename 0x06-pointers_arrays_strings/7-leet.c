#include "main.h"
/**
 * leet - solve leet
 * @str: pointer
 * Return: pointer
 */
char *leet(char *str)
{
	char test[] = "AE0TL";
	char values[] = "43071";
	int i, j;

	for (i = 0; i < 5; i++)
	{
		for (j = 0; str[j]; j++)
		{
			if (str[j] == test[i] || str[j] == test[i] + 32)
			{
				str[j] = values[i];
			}
		}
	}
	return (str);
}
