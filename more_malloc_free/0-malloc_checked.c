#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc.
* @b: number of bytes.
* Return: pointer to the allocated memory.
*/
void *malloc_checked(unsigned int b)
{
void *m = malloc(b);
if (m == NULL)
exit(98);
return (m);
}