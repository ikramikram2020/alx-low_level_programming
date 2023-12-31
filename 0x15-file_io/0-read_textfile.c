#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file
 * @filename: Pointer to the file name.
 * @letters: Number of letters to read and print.
 * Return: Number of letters read and printed on success, else 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, file, w;
	char *text;

	text = malloc(letters);
	if (text == NULL || filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(text);
		return (0);
	}
	r = read(file, text, letters);
	w = write(STDOUT_FILENO, text, r);
	close(file);
	return (w);
}
