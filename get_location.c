#include "main.h"
/**
*
*
*
*/
char *get_location(char *command)
{
	char *path, *path_copy, *path_token, *file_path;
	int command_length, directory_length;
	struct stat buffer;

	path = getenv("PATH");
	path = getenv("PATH");

	if (path)
	{
	path_copy = strdup(path);

	command_length = strlen(command);

	path_token = strtok(path_copy, ":");
	}

	 while (path_token != NULL)
{
	directory_length = strlen(path_token);
	file_path = malloc(command_length + directory_length + 2);
		strcpy(file_path, path_token);
		strcat(file_path, "/");
		strcat(file_path, command);
		strcat(file_path, "\0");
}