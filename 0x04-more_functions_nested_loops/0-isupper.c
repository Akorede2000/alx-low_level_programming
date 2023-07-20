#include "main.h"
/**
 * _isupper - Test for isUpper
 * Return: 1 if upper  and 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
