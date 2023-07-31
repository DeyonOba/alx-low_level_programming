#include "main.h"
#include <string.h>

/**
 * _strspn - get the lenght of a prefix of a substring
 * @s: string
 * @accept: characters of the substring
 *
 * Return: pointer of character location (pointer variable)
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
