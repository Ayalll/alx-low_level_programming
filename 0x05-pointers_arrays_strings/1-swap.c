#include <stdio.h>

/**
 * swap_int - swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */
int swap_int(int *a, int *b)
/* the function that swaps the values of two integers. */
{
int a;
int temp = *a;
*a = *b;
*b = temp;
}
