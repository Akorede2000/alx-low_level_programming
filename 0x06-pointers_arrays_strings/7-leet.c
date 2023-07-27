#include "main.h"
/**
 * leet - solve leet
 * @str: pointer
 * Return: pointer
 */
char *leet(char *str)
{
	char test[] = "AE0TL";
	char test2[] = "aeotl";
	char values[] = "43071";
	int i, j;

	for (i = 0; values[i]; i++)
	{
		for (j = 0; str[j]; j++)
		{
			if (str[j] == test[i] || str[j] == test2[i])
			{
				str[j] = values[i];
			}
		}
	}
	return (str);
}
