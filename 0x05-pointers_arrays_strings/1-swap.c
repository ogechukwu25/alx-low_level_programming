#include "main.h"

/**
 * swap_int - swaps the value of the integers
 * @a: int a
 * @b: int b
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
