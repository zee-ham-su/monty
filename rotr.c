#include "monty.h"

/**
 * f_rotr - Rotates the stack to the bottom.
 * @head: Stack head
 * @counter: Line number (unused)
 * Return: No return value
 */


void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *last = *head;
if (*head == NULL || (*head)->next == NULL)
return;

while (last->next)
last = last->next;
last->next = *head;
(*head)->prev = last;
(*head) = last;
last->prev->next = NULL;
last->prev = NULL;
}
