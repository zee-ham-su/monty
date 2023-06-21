#include "monty.h"

/**
 * free_stack - frees  doubly linked list
 * @head: stack head
 */
void free_stack(stack_t *head)
{
stack_t *current = head;
stack_t *temp = current;
while (current != NULL)
{
current = current->next;
free(temp);
}
}
