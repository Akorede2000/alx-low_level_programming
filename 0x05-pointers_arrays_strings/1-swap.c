#include "main.h"
/**
 * swap_int - swap integers
 * @a: pointer to int a
 * @b: pointer to int b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
