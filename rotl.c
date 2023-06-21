#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @head: Stack head
 * @counter: Line number (unused)
 * Return: No return value
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *tmp = *head, *new_head;
if (!(*head) || !((*head)->next))
{
return;
}

new_head = (*head)->next;
new_head->prev = NULL;

while (tmp->next)
{
tmp = tmp->next;
}

tmp->next = *head;
(*head)->next = NULL;
(*head)->prev = tmp;
*head = new_head;
}
