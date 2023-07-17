#include <stdio.h>

/**
 * main - Prints size
 * Return: Always 0 on successs
*/
int main(void)
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of float: %ld byte(s)\n", sizeof(float));
	return (0);
}
