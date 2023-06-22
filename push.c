#include "monty.h"

/**
 * f_push - add node to the stack
 * @head: head of stack
 * @counter: line number
 * Return: void
 */
void f_push(stack_t **head, unsigned int counter)
{
int i = 0;
int flag = 0;
char *arg = bus.arg;
int n;

if (bus.arg == NULL)
{
fprintf(stderr, "Line %u: usage: push integer\n", counter);
exit(EXIT_FAILURE);
}

if (arg[0] == '-')
i++;

while (arg[i] != '\0')
{
if (arg[i] < '0' || arg[i] > '9')
{
flag = 1;
break;
}
i++;
}

if (flag == 1)
{
fprintf(stderr, "Line %u: usage: push integer\n", counter);
exit(EXIT_FAILURE);
}

n = atoi(arg);

if (bus.lifi == 0)
addnode(head, n);
else
addqueue(head, n);
}
