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
	ssize_t c;
	size_t line;
	char *buffer = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}

	fpt = fopen(argv[1], "r");
	if (fpt == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	while ((line = custom_getline(&buffer, &c, fpt)) != -1)
	{
		factorize(buffer);
	}

	free(buffer);
	fclose(fpt);

	return (0);
}
int factorize(char *buffer)
{
}
int custom_getline(char **lineptr, size_t *n, FILE *stream)
{
}

