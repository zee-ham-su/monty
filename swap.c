#include "monty.h"

/**
 * f_swap - Swaps the top two elements of the stack.
 * @head: Stack head
 * @counter: Line number
 * Return: No return value
 */
void f_swap(stack_t **head, unsigned int counter)
{
stack_t *top = *head;
int temp;

if (*head == NULL || (*head)->next == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
exit(EXIT_FAILURE);
}
temp = top->n;
top->n = top->next->n;
top->next->n = temp;
}
