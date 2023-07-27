#include "main.h"
/**
 * cap_string - capitalize string
 * @str: pointer
 * Return: pointer
 */
char *cap_string(char *str)
{
	char sep[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(', ')', '{', '}'};
	int i, j;

	for (i = 0; sep[i]; i++)
	{
		for (j = 0; str[j]; j++)
		{
			if (str[j] == sep[i])
			{
				if (str[j + 1] >= 'a' && str[j + 1] <= 'z')
				{
					str[j + 1] = str[j + 1] - 32;
				}
			}
		} 
	}
	return (str);
}
