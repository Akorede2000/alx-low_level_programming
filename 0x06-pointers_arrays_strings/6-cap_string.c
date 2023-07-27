#include "main.h"
/**
 * cap_string - capitalize string
 * @str: pointer
 * Return: pointer
 */
char *cap_string(char *str)
{
	char sep[] = ", ;\t\n.!?\"(){}";
	int i, j;

	for (i = 0; sep[i]; i++)
	{
		for (j = 0; str[j]; j++)
		{
			if (str[j] == sep[i])
			{
				if (str[j + 1] >= 97 && str[j + 1] <= 122)
				{
					str[j + 1] = str[j + 1] - 32;
				}
			}
		} 
	}
	return (str);
}
