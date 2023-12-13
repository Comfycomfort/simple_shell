#include "shell.h"
#include <unistd.h>
#include <string.h>

/**
 * comf_print - Writes the given text to standard output (stdout).
 * @text: The string to be written to stdout.
 */
void comf_print(const char *text)
{
	write(STDOUT_FILENO, text, strlen(text));
}


