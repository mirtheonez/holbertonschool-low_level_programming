#include <stdio.h>
/**
*main - prints numbers 0-100,
*	fizz printed instead of multiple 3 numbers
*	buzz printed instead of multiple 5 numbers
*	fizzbuzz printed instead of both 3 & 5 multiples.
*Return: Always 0.
*/
int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if ((n % 3) == 0 && (n % 5) == 0)
printf("FizzBuzz");
else if ((n % 3) == 0)
printf("Fizz");
else if ((n % 5) == 0)
printf("Buzz");
else
printf("%d", n);
if (n == 100)
continue;
printf(" ");
}
printf("\n");
return (0);
}