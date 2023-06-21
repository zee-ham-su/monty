#include "monty.h"

/**
 * f_div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_div(stack_t **head, unsigned int counter)
{
stack_t *top = *head;

if (top == NULL || top->next == NULL)
{
fprintf(stderr, "L%d: can't div, stack too short\n", counter);
exit(EXIT_FAILURE);
}

if (top->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
exit(EXIT_FAILURE);
}

top->next->n /= top->n;
*head = top->next;
(*head)->prev = NULL;

free(top);
}
