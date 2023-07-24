#include "main.h"
/**
 * puts_half - prints half
 * @str: pointer
 * Return: nothing
 */
void puts_half(char *str)
{
	int len, i;

	len = 0;
	while (str[len] != '\0')
		len++;
	for (i = 0; str[i] != '\0'; i++)
		if ( i > (len - 1) / 2)
			_putchar(str[i]);
	_putchar('\n');
}
