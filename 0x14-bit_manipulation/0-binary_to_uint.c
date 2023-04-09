#include "main.h"

/**
 * Prototype: unsigned int binary_to_uint(const char *b);
 * where b is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
           there is one or more chars in the string b that is not 0 or 1
           b is NULL
 */	   
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}

	return (num);
}
