#include "main.h"
/**
 * reverse_array - reverse array
 * @a: pointer
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int i, *start, *end, temp;


	start = a, end = a;
	for (i = 0; i < n - 1; i++)
		end++;
	for (i = 0; i < n / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		end--;
		start++; 
	}
}
