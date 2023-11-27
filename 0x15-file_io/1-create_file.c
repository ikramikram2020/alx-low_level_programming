#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - Creates a file and writes the specified text content to it.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 * Return: 1 on success, -1 on failure.
 * (Failure includes the inability to create or write to the file.)
 * If filename is NULL, returns -1.
 * If text_content is NULL, creates an empty file.
 */
int create_file(const char *filename, char *text_content)
{
int i = 0, file;

if (filename == NULL)
	return (-1);
if (text_content == NULL)
	text_content = "";
while (text_content[i] != '\0')
	i++;
file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (file == -1)
return (-1);
write(file, text_content, i);
return (1);
}
