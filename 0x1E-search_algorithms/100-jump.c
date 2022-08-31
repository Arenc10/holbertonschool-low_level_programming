#include "search_algos.h"
/**
 * min - Function that returns the min between two int
 * @a: First int
 * @b: Second int
 * Return: Either a or b
 */
size_t min(size_t a, size_t b){
	if (b>a)
		return a;
	return b;
}
/**
 * jump_search - Function that searches for a value using jump search algo
 * @array: Array to be used
 * @size: Size of the array
 * @value: Value to be found
 * Return: -1 if it is not in Array or the index of the value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump = 0, step = sqrt(size);

	while (array[min(step, size) -1] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		jump = step;
		step += sqrt(size);
		if (jump >= size)
			return (-1);
	}
	while (array[jump] < value)
	{
		jump++;

		if (jump == min(step, size))
			return (-1);
	}

	if (array[jump] == value)
		return (jump);

	return (-1);

}
