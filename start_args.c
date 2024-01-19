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

	arguments->instruction = malloc(sizeof(instruction_t));
	if (arguments->instruction == NULL)
		malloc_failed();

	arguments->fstream = NULL;
	arguments->line = NULL;
	arguments->no_tokens = 0;
	arguments->line_no = 0;

	
}
