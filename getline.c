#include "shell.h"

/**
 * _getline - Prompt the user, read their input and store it in buffer.
 * @buffer: Pointer to a pointer to store user input.
 * Return: Number of characters read on success, -1 on failure.
 */
int _getline(char **buffer)
{
size_t size = 0;

printf("$ ");

if (getline(buffer, &size, stdin) == -1)
{
return (-1);
}
else
return (size);
    /* Free memory allocated by getline() in the main program */
}
