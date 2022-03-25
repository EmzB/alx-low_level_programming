#include "main.h"
/**
 * reverse_array - Reverses an array of integers
 *
 * @a: An array 
 *
 * @n: number of values to swap
 *
 * Return: No return
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
