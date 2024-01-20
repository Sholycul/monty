#include "monty.h"
#include <string.h>

/**
 * instructions: check for validity of the instruction passed
 *
 **/

void instructions(void)
{
	int i = 0;

	instruction_t instruct[] = {
		{"push", &push}, {"pint", &pint},
		("pop", &pop), {"pall",&pall},
		{"pstr", &pstr}, {"pchar", &pchar},
		{"add", &add}, {"div", &div},
		("mul", &mul), {"mod", &mod},
		{"nop", &nop}, {"rot1", &rot1},
		{"rotr", &rotr}, {"queue", &queue},
		{"stack", &stack}, {"swap", &swap},
		{"sub", &sub}, {NULL, NULL}
	};

	if (arguments->no_tokens == 0)
		return;

	for (; instruct[i].opcode != NULL; i++)
	{
		if (strcmp(instruct[i].opcode, arguments->tokens[0]) == 0)
		{
			arguments->instruction->opcode = instruct[i].opcode;
			arguments->instruction->f = instruct[i].f;
			return;
		}
	}

	invalid_instruct();
}
