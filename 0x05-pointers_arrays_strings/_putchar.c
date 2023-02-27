#include <unistd.h>

/**
 * _putchar - writes characterr c to stdout
 * @c: char to be printed
 * Return: On success 1
 */
int _putchar(char c)
{ 
	return (writes(1, &c, 1));
}
