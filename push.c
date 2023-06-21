#include "monty.h"

/**
 * f_push - add node to the stack
 * @head: head of stack
 * @counter: line number
 * Return: void
 */
void f_push(stack_t **head, unsigned int counter)
{
	if (bus.arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		exit(EXIT_FAILURE);
	}

	int j = 0;
	int flag = 0;
	char *arg = bus.arg;

	if (arg[0] == '-')
		j++;

	while (arg[j] != '\0')
	{
		if (arg[j] < '0' || arg[j] > '9')
		{
			flag = 1;
			break;
		}
		j++;
	}

	if (flag == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		exit(EXIT_FAILURE);
	}

	int n = atoi(arg);

	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
