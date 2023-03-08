#include "main.h"
/**
 * _strstr - function to locate a substring
 * @haystack: input to search within
 * @needle: input to search for
 * Return: pointer to the beginning of the substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

			while (*i == *p && *p != '\0')
			{
				if (*p == '\0')
					return (haystack);
			}
		return ('\0');
	}
}
