#include "main.h"

/**
 * Prototype: int clear_bit(unsigned long int *n, unsigned int index);
 * where index is the index, starting from 0 of the bit you want to set
 * Returns: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
