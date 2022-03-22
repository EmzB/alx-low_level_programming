#include<stdio.h>
#include "main.h"
/**
*swap_int - swaps variable values.
*@a: value to be evaluate.
*@b: value to be evaluate.
*Return: Void
*/
void swap_int(int *a, int *b)
{

	int n = *a;
	*a = *b;
	*b = n;
}
