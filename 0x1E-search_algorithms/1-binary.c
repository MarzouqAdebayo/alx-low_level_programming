#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array using binary search
 *
 * @array: The array to search
 * @size: The size of the array
 * @value: The value to search for
 *
 * Return: The index of the value if found, -1 otherwise
 */
int binary_search(int* array, size_t size, int value)
{
  int mid, lo, high, i;

  if (!array)
    return (-1);
  lo = 0;
  high = size - 1;
  while (lo <= high)
  {
    printf("Searching in array: ");
    for (i = lo; i <= high; i++)
    {
      printf("%d", array[i]);
      if (i < high)
        printf(", ");
    }
    putchar('\n');
    mid = lo + (high - lo) / 2;
    if (array[mid] == value)
      return (mid);
    else if (array[mid] < value)
      lo = mid + 1;
    else
      high = mid -  1;
  }
  return (-1);
}
