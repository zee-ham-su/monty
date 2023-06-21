#include "monty.h"

/**
 * f_mul - Multiplies the top two elements of the stack.
 * @head: Stack head
 * @counter: Line number
 * Return: No return value
 */
void f_mul(stack_t **head, unsigned int counter)
{
stack_t *top = *head;
int result;
if (top == NULL || top->next == NULL)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
exit(EXIT_FAILURE);
}
result = top->next->n * top->n;
top->next->n = result;

*head = top->next;
(*head)->prev = NULL;

free(top);
}
