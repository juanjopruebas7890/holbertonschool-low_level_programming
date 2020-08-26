#include "search_algos.h"

/**
 * print_array - is the prototype, prints half of a string.
 *@array: where is the data located.
 *@min: minimum
 *@max: max
 *Return: 0
 */
void print_array(int *array, int min, int max)
{
	{
		int t;

		for (t = min; t < max; t++)
		{
			printf("%d, ", array[t]);
		}
		printf("%d", array[t]);
	}
	putchar('\n');
}

/**
 * binary_search - will search for a value using binary search
 * @array: variable.
 * @size: size of the array
 * @value: the value that is going to be searched
 * Return: -1
 */
int binary_search(int *array, size_t size, int value)
{
	int mid, min = 0, max = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	min = 0, max = size - 1;
	while (min <= max)
	{
		printf("Searching in array: ");
		print_array(array, min, max);
		mid = (min + max) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			min = mid + 1;
		}
		else
		{
			max = mid + 1;
		}
	}
	return (-1);
}
