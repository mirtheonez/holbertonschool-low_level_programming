#include <stdio.h>
/**
* main - prints multiplication of two argument numbers.
* @argc: number of arguments.
* @argv: an array of pointers.
* Return: 0 if 2 arguments received, else 1.
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}