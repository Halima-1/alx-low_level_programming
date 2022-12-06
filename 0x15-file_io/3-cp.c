#include "main.h"
/**
 * not_close - prints error.
 * @fd: value to print.
 */

void not_close(int fd)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
exit(100);
}

/**
 * cp - copy a file
 * @from: file to copy
 * @to: file to copy in
 */

void cp(char *from, char *to)
{
int file_r, file_w, r, w;
char buff[1024];

file_r = open(from, O_RDONLY);
if (file_r == -1)

