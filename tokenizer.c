#include "monty.h"
#include <string.h>
/*
 * tokenizer: function that tokenize the line for reading
 */

void tokenizer(void)
{
	int i = 0;
	char *delim = " \n", *token = NULL, *linecopy = NULL;
	
	linecopy = malloc(sizeof(char) * (strlen(arguments->line) + 1));

	strcpy(linecopy, arguments->line);
	arguments-> no_tokens = 0;
	token = strtok(linecopy, delim);
	while (token)
	{
		arguments->no_tokens += 1;
		token = strtok(NULL, delim);
	}

	arguments->tokens = malloc(sizeof(char *) * (arguments->no_tokens + 1));
	strcpy(linecopy, arguments->line);
	token = strtok(linecopy, delim);

	while (token)
	{
		arguments->tokens[i] =  malloc(sizeof(char) * (strlen(token) + 1));
		if (arguments->tokens[i] == NULL)
			malloc_failed();
		strcpy(arguments->tokens[i], token);
		token = strtok(NULL, delim);
		i++;
	}

	arguments->tokens[i] = NULL;
	free(linecopy);
}
