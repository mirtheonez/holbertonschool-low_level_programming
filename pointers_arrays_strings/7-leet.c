#include "main.h"
/**
* leet - encodes a string into 1337.
* @str: string to be encoded.
* Return: pointer to the encoded string.
*/
char *leet(char *str)
{
int i1 = 0, i2;
char leet[5] = {'O', 'L', 'T', 'E', 'A'};
while (str[i1])
{
for (i2 = 0; i2 <= 4; i2++)
{
if (str[i1] == leet[i2] || str[i1] - 32 == leet[i2])
str[i1] = i2 + '0';
}
i1++;
}
return (str);
}