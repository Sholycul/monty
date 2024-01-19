#include "monty.h"
arg_t *arguments = NULL;

/*
 * main - the main function
 * @argc: number of arguments
 * @argv: pointer to string housing CL arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	/*(void) argv;*/
	size_t n - 0;

	verify_arguments(argc);
	start_args();
	get_stream(argv[1]);

	while (getline(&arguments->line, &n, arguments->stream != -1))
	{
		printf("%s", arguments->line);
	}


	return (0);
}
