#include <stdlib.h>
#include <unistd.h>
#include "factor.h"

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: void
 */
int main(int argc, char **argv)
{
	FILE *fpt = NULL;
	size_t count;
	ssize_t line;
	char *buffer = NULL;

	if (argc != 2)
	{
		fprintf(2, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}

	fpt = fopen(argv[1], "r");
	if (fpt == NULL)
	{
		fprintf(2, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
	{
		fprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	while ((line = getline(&buffer, &count, fpt)) != -1)
	{
		factorize(buffer);
	}

	free(buffer);
	fclose(fpt);

	return 0;
}
