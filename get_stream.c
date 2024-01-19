#include "monty.h"

/**
 * get_stream_err - Shows error if get stream fails
 * @file_name: name of the file
 */

void get_stream_err(char *file_name)
{
	fprintf(stderr, "ERROR: cannot open file %s\n", file_name);
	free_arguments();
	exit(EXIT_FAILURE);
}

/**
 * get_stream - get the stream for reading from the file.
 * @file_name: name of the file 
 */

void get_stream(char *file_name)
{
	FILE *file_data;

	file_data = fopen(file_name, O_RDONLY);
	if (file_data == NULL)
		get_stream_err(file_name);

	arguments->fstream = file_data;
	if (arguments->fstream == NULL)
	{
		fclose(file_data);
		get_stream_err(file_name);
	}
}
