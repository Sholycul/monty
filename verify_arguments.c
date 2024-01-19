#include "monty.h"

/*
 * verify_arguments - confirms number of arguments
 *
 * @argc: Number of arguments
 */

void verify_arguments(int argc)
{
	if (argc == 2)
		return;

	dprintf(2, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
