#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest:char dest
 * @src: char src
 * @n:length int
 * Return:char
 */
char *_strncat(char *dest, char *src, int n)
{
	int l, m;

	for (l = 0; dest[l] != '\0'; l++)
	{
		continue;
	}
	for (l = 0; src[m] != '\0' && j < n; j++)
	{
		dest[l + m] = src[j];
	}
	dest[l + m] = '\0';
	return (dest);
}
