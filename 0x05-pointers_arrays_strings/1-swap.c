#include <stdio.h>

/**
 * swap_int - function to swaps the values of two integers.
 * @a:parameter a
 * @b:parameter b
 * Return: *a & *b
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
