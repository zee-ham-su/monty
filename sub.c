#include "monty.h"

/**
 * f_sub - Subtracts the top element of the stack from the second top element.
 * @head: Stack head
 * @counter: Line number
 * Return: No return value
 */
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *current;
int difference, node_count;

current = *head;
for (node_count = 0; aux != NULL; node_count++)
aux = current->next;

if (node_count < 2)
{
fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

aux = *head;
difference = current->next->n - current->n;
current->next->n = difference;
*head = current->next;
free(current);
}
