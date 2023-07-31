#include "main.h"
#include <string.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string
 * @accept: characters of the substring
 *
 * Return: pointer of character location (pointer variable)
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
