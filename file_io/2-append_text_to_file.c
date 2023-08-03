#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - append test at the end of a file.
 * @filename: a pointer of char type.
 * @text_content: a pointer of char type.
 * Return: 1 on succes, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
ssize_t openFile, writeFile, size = 0;
if (filename == NULL)
return (-1);
openFile = open(filename, O_RDWR | O_APPEND, 0600);
if (openFile == -1)
return (-1);
if (text_content != NULL)
size = strlen(text_content);
writeFile = write(openFile, text_content, size);
if (writeFile == -1)
return (-1);
close(openFile);
return (1);
}
