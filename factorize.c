#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "factor.h"

/**
*factorize - a function that factorizes a number
*@buffer - a pointer to the address of a number
*Return - returns the factor
*/

int factorize(char *buffer)
{
	unsigned int n, i;

	n = atoi(buffer);

	if (n < 2)
    {
        printf("%u is not greater than or equal to 2\n", n);
        return (0);
    }

	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%u=%u*%u\n", n, n / i, i);
			break;
		}
	}

	return (0);
}
int main(int argc, char **argv)
{
	return (0);
}
