#include "main.h"

/**
 * append_text_to_file - a func that appends text at the end of a file
 * @filename: name of file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
int file, wr, f = 0;

if (filename == NULL)
return (-1);

file = open(filename, O_RDWR | O_APPEND);
if (file == -1)
return (-1);

while (text_content[f])
f++;

if (text_content == NULL)
{
close(file);
return (1);
}
else
{
wr = write(file, text_content, f);
}

if (wr == -1)
return (-1);

close(file);
return (1);
}
