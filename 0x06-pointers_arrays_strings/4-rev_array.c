#include "main.h"

/**
 * reverse_array - function to reverse array elements
 * @a: input array pointer
 * @n: size
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		int tmp = *(a + i);

		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = tmp;
	}
}
