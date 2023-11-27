#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file to append text to.
 * @text_content: The NULL-terminated string to add at the end of the file.
 * Return: 1 on success, -1 on failure.
 * (Failure includes the inability to open or write to the file,
 * the file not existing, or insufficient permissions.)
 * If filename is NULL, returns -1.
 * If text_content is NULL, no text is added to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int i = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[i] != '\0')
	{
		i++;
	}

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, i);

	return (1);
}
