#include "main.h"

/**
 * _memcpy - function  copies  n bytes from memory area src to memory area dest
 * @src: array to be copy from
 * @dest: array to destination of the copy
 * @n: number of bytes to be copy from src, starting from the first element
 *
 * Return: dest (pointer variable)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*dest++ = src[i];
		i++;
	}
	return (dest);
}
