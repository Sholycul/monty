#include "monty.h"

/**
 * start_args - initializes the pointer to the struct arg_s
 *
 **/

void start_args()
{
	arguments = malloc(sizeof(arg_t));

	if (arguments == NULL)
	{
		dprintf(2, "ERROR: malloc failed\n");
		free(arguments);
		exit(EXIT_FAILURE);
	}

	arguments -> fstream = NULL;
	arguments -> line = NULL;
	
}
