#include<stdio.h>

/**
 * main - function prints natural numbers  1024 that are
 * multiples of  3 and 5
 *
 * Return: Always 0
 */
int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++;
	}
	printf("%d\n", z);
	return (0);
}
