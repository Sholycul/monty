#include "monty.h"

/**
 * start_args - initializes the pointer to the struct arg_s
 *
 **/

void start_args()
{
	arguments = malloc(sizeof(arg_t));

	if (arguments == NULL)
		malloc_failed();


	arguments->fstream = NULL;
	arguments->line = NULL;
	
}
