#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - main.
 * @argc: amount of arguments.
 * @argv: list of arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
  int from, openf, readf, writef, closef;
  char *auxiliar = NULL, *file_from = argv[1], *file_to = argv[2];
  if (argc != 3)
    {
      dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
      exit(97);
    }
  auxiliar = malloc(sizeof(char) * 1024);
  if (auxiliar == NULL)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
      exit(99);
    }
  from = open(file_from, O_RDONLY);
  if (from == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
      exit(98);
    }
  read = read(from, auxiliar, 1024);
  if (read == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
      exit(98);
    }
  openf = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
  if (openf == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", file_to);
      exit(99);
    }
  writef = write(openf, auxiliar, readf);
  if (writef == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
    }
  free(auxiliar);
  closef = close(from);
  if (closef == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", closef);
      exit(100);
    }
  closef = close(openf);
  if (closef == -1)
    {
      dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", closef);
      exit(100);
    }
  return (0);
}
