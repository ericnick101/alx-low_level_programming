#include "main.h" 
#include <stdlib.h>

/**
 * _isspace - check if a character is whitespace
 * @c: the character to check
 *
 * Return: 1 is c is a whitespace character, otherwise 0
 */
int _isspace(int c)
{
	if (c == 0x20 || (c >= 0x09 && c <= 0x0d))
		return (1);
	return (0);
}


/**
 * strtow - split a string into words
 * @str: a pointer to the string to split
 *
 * Return: NULL if memory allocation fails or if str is NULL or empty (""),
 * otherwise return a pointer to the array of words terminated by a NULL
 */
char **strtow(char *str)
{
	char **words, *pos = str;
	int w = 0, c;

	if (!(str && *str))
		return (NULL);
	do {
		while (_isspace(*pos))
				++pos;
		if (!*pos)
			break;
		while (*(++pos) && !_isspace(*pos))

