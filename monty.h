#ifndef MONTY_H
#define MONTY_H

#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>


/* Structures */
/**
 * struct stack_s - Doubly linked list representation of a stack (or queue)
 * @n: Integer value of the node
 * @prev: Pointer to the previous element in the stack (or queue)
 * @next: Pointer to the next element in the stack (or queue)
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: monty file pointer
 * @content: content of line
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



/* Function Prototypes */

void f_push(stack_t **head, unsigned int counter);
void f_pall(stack_t **head, unsigned int counter);
int main(int argc, char *argv[]);
void f_add(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_mul(stack_t **head, unsigned int counter);
void f_nop(stack_t **head, unsigned int counter);
void f_pint(stack_t **head, unsigned int counter);
void f_pop(stack_t **head, unsigned int counter);
void f_push(stack_t **head, unsigned int counter);
void f_sub(stack_t **head, unsigned int counter);
void f_swap(stack_t **head, unsigned int counter)
void f_pchar(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_rotl(stack_t **head, unsigned int counter);
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter);
void f_queue(stack_t **head, unsigned int counter);
void f_stack(stack_t **head, unsigned int counter);


/* Other Utility Functions */
void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void free_stack(stack_t *head);
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);





#endif /* MONTY_H */
