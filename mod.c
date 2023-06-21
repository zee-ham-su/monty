#include "monty.h"

/**
 * f_mod - Computes the remainder of dividing the second top element
 *         of the stack by the top element of the stack.
 * @head: Stack head
 * @counter: Line number
 * Return: No return value
 */



void f_mod(stack_t **head, unsigned int counter)
{
stack_t *top = *head;

if (top == NULL || top->next == NULL)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
exit(EXIT_FAILURE);
}

if (top->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
exit(EXIT_FAILURE);
}

top->next->n %= top->n;
*head = top->next;
(*head)->prev = NULL;

free(top);
}
