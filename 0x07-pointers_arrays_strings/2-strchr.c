#include "main.h"
#include <string.h>

/**
 * _strchr - function  locates character in string
 * @s: string
 * @c: character to be found
 *
 * Return: pointer of character location (pointer variable)
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
