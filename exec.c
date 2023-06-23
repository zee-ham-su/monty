#include "monty.h"
/**
 * execute - Executes the opcode.
 * @content: Line content.
 * @stack: Head linked list - stack.
 * @counter: Line counter.
 * @file: Pointer to the monty file.
 *
 * Return: 0 if opcode is executed successfully, 1 otherwise.
 */
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
unsigned int i = 0;
char *op;
op = strtok(content, " \n\t");
if (op != NULL && op[0] != '#')
{
bus.arg = strtok(NULL, " \n\t");
while (opst[i].opcode != NULL)
{
if (strcmp(op, opst[i].opcode) == 0)
{
opst[i].f(stack, counter);
return (0);
}
i++;
}
fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
fclose(file);
free_stack(*stack);
exit(EXIT_FAILURE);
}
return (1);
}
