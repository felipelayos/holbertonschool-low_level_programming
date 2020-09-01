#include "search_algos.h"
/**
* binary_search - searches for a value
*
* @array: pointer of the array
* @size: number of elements
* @value: value to search
* Description: searches for a value using  Jump search algorithm
* Return: int
*/
int binary_search(int *array, size_t size, int value)
{
	int min, max, mid;
	int i;

	if (!array)
		return (-1);

	min = 0;
	max = (int)size - 1;

	while (min <= max)
	{
		printf("Searching in array: ");

		for (i = min; i <= max; i++)
		{
			if (i != max)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		mid = (min + max)  / 2;

		if (array[mid] < value)
			min = mid + 1;
		else if (array[mid] > value)
			max = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
