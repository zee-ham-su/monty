#include "monty.h"

/**
 * f_queue - Sets the lifi variable to 1, indicating queue mode.
 * @head: Pointer to the stack head
 * @counter: Line number
 * Return: No return value
*/
void f_queue(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
bus.lifi = 1;
}



/**
 * addqueue - Adds a node with a new value to the tail of the stack.
 * @n: New value to be added
 * @head: Pointer to the head of the stack
 * Return: No return value
*/


void addqueue(stack_t **head, int n)
{
stack_t *new_node, *current;

current = *head;
new_node = malloc(sizeof(stack_t));
if (!new_node)
{
printf("Error: Memory allocation failed\n");
exit(EXIT_FAILURE);
}
new_node->n = n;
new_node->next = NULL;
if (current)
{
for (; current->next; current = current->next)
;
}
if (!current)
{
*head = new_node;
new_node->prev = NULL;
}
else
{
current->next = new_node;
new_node->prev = current;
}
}
