#include "main.h"
#include <string.h>

/**
 * _strstr - function finds the first occurrence of the
 * substring needle in the string haystack
 * @haystack: characters of the superstring
 * @needle: characters of the substring
 *
 * Return: pointer of character location (pointer variable)
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
