#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LENGTH 100
/**
 * main - Monty code interpreter
 * @argc: Number of arguments
 * @argv: file location
 * Return: 0 on success
 */


int main(int argc, char *argv[])
{
FILE *file;
stack_t *stack = NULL;
unsigned int counter = 1;
char content[MAX_LINE_LENGTH];
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

file = fopen(argv[1], "r");
if (!file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

bus.file = file;

while (fgets(content, sizeof(content), file))
{
if (content[strlen(content) - 1] == '\n')
{
content[strlen(content) - 1] = '\0';
}
bus.content = content;
execute(content, &stack, counter, file);
counter++;
}
free_stack(stack);
fclose(file);
return (EXIT_SUCCESS);
}
