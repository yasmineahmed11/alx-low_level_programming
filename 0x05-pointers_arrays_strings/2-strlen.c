#include "main.h"
/**
 * _strlen - function to get the length
 * @s: string pointer
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0' ; s++)
	{
		len += 1;
	}
	return (len);
}
