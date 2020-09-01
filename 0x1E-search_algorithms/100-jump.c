#include <stdio.h>
#include <math.h>
/**
* jump_search - search for a value
*
* @array: pointer of the array
* @size: number of elements
* @value: value to search
* Description: search for a value using  Jump search algorithm
* Return: int
*/
int jump_search(int *array, size_t size, int value)
{
	int min, max;
	int i;

	if (!array)
		return (-1);

	min = 0;
	max = sqrt((int)size);

	while (max < (int)size && array[max] < value)
	{
		printf("Value checked array[%d] = [%d]\n", min, array[min]);
		min = max;
		max += sqrt((int)size);
	}
	printf("Value checked array[%d] = [%d]\n", min, array[min]);
	printf("Value found between indexes [%d] and [%d]\n", min, max);
	for (i = min; i <= (int)size - 1 && i <= max; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
