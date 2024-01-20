#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void invalid_instruct(void);
void instructions(void);
void tokenizer(void);
void start_args();
void get_stream_err(char *file_name);
void get_stream(char *file_name);
void free_arguments(void);
void malloc_failed(void);
void verify_arguments(int argc);
void push(stack_t **stack, unsigned int line_no);
void pop(stack_t **stack, unsigned int line_no);
void pint(stack_t **stack, unsigned int line_no);
void pall(stack_t **stack, unsigned int line_no);
void pstr(stack_t **stack, unsigned int line_no);
void pchar(stack_t **stack, unsigned int line_no);
void add(stack_t **stack, unsigned int line_no);
void _div(stack_t **stack, unsigned int line_no);
void mod(stack_t **stack, unsigned int line_no);
void mul(stack_t **stack, unsigned int line_no);
void nop(stack_t **stack, unsigned int line_no);
void queue(stack_t **stack, unsigned int line_no);
void stack(stack_t **stack, unsigned int line_no);
void swap(stack_t **stack, unsigned int line_no);
void rot1(stack_t **stack, unsigned int line_no);
void rotr(stack_t **stack, unsigned int line_no);
void sub(stack_t **stack, unsigned int line_no);


/**
 * struct arg_s: files,tokens,and line numbers 
 **/
typedef struct arg_s
{
	FILE *fstream;
	char *line;
	unsigned int line_no;
	char **tokens;
	int no_tokens;
	instruction_t *instruction;
} arg_t;

extern arg_t *arguments;

/*
 * invalid_instruct: handles invalid instructions
 *
 **/

void invalid_instruct(void)
{
        dprintf(2, "L%d: unknown instruction %s\n", arguments->line_no, arguments->tokens[0]);
        close();
        free_tokens();
        free_arguments();
        exit(EXIT_FAILURE);
}
#endif /* MONTY_H */
