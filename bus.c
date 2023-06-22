#include "monty.h"
bus_t bus;

/**
 * init_bus - Initialize the bus variable
 */
void init_bus(void)
{

bus.arg = NULL;
bus.file = NULL;
bus.content = NULL;
bus.lifi = 0;
}
