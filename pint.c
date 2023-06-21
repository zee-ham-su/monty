#include "monty.h"

/**
 * f_pint - Prints the value at the top of the stack.
 * @head: Stack head
 * @counter: Line number
 * Return: No return value
 */
void f_pint(stack_t **head, unsigned int counter)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
exit(EXIT_FAILURE);
}

printf("%d\n", (*head)->n);
}
