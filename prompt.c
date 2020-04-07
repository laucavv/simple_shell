#include "shell.h"

/**
  * prompt - display the prompt
  *
  * Return: input line
  */
char *prompt(void)
{
	char *line_buffer = NULL;
	size_t length;
	ssize_t read;

	write(STDOUT_FILENO, "cisfun$ ", 8);

	read = getline(&line_buffer, &length, stdin);

	if ((read == EOF) || (_strcmp(line_buffer, "exit\n") == 0))
	{
		free(line_buffer);
		exit(0);
	}
	return (line_buffer);
}
