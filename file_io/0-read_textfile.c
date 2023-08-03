#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to hre POSIX standard output
 * @filename: a pointer of char type.
 * @letters: a size_t.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t openFile, readFile, writeFile;
char *auxiliar = NULL;
if (filename == NULL)
return (-1);
auxiliar = (char *)malloc(sizeof(char) * letters);
if (auxiliar == NULL)
return (-1);
openFile = open(filename, O_RDWR);
if (openFile == -1)
return (0);
readFile = read(openFile, auxiliar, letters);
if (readFile == -1)
return (0);
writeFile = write(STDOUT_FILENO, auxiliar, readFile);
if (writeFile == -1)
return (0);
free(auxiliar);
close(openFile);
return (writeFile);
}
