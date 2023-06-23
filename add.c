#include "monty.h"

/**
 * f_add - adds the two top elements in the stack.
 * @head: head of stack
 * @counter: line_number
 * Return: no return
 */
void f_add(stack_t **head, unsigned int counter)
{
stack_t *top = *head;
bus_t bus;

bus.file = NULL;
bus.content = NULL;


if (top == NULL || top->next == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

top->next->n += top->n;
*head = top->next;
(*head)->prev = NULL;

free(top);

}

