#include "monty.h"

/**
 * f_pop - Removes the top element from the stack.
 * @head: Stack head
 * @counter: Line number
 * Return: No return value
 */
void f_pop(stack_t **head, unsigned int counter)
{
stack_t *top = *head;
if (*head == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
exit(EXIT_FAILURE);
}
*head = top->next;
free(top);
}
