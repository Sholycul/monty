#include "monty.h"
/**
 * malloc-failed: function that frees args when malloc
 * fails
 *
 **/
void malloc_failed(void)
{
	dprintf(2, "ERROR: malloc failed\n");
	free_arguments();
	exit(EXIT_FAILURE);
}
