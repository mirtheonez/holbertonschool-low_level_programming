#include "main.h"

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
    unsigned long int num1 = 1, num2 = 2, num3;
    int count = 2;

    _putchar('1');
    _putchar(',');
    _putchar(' ');
    _putchar('2');
    _putchar(',');
    _putchar(' ');

    while (count < 98)
    {
        num3 = num1 + num2;
        _putchar(num3 / 1000000000 + '0');
        _putchar(num3 / 100000000 % 10 + '0');
        _putchar(num3 / 10000000 % 10 + '0');
        _putchar(num3 / 1000000 % 10 + '0');
        _putchar(num3 / 100000 % 10 + '0');
        _putchar(num3 / 10000 % 10 + '0');
        _putchar(num3 / 1000 % 10 + '0');
        _putchar(num3 / 100 % 10 + '0');
        _putchar(num3 / 10 % 10 + '0');
        _putchar(num3 % 10 + '0');

        if (count != 97)
        {
            _putchar(',');
            _putchar(' ');
        }

        num1 = num2;
        num2 = num3;
        count++;
    }

    _putchar('\n');

    return (0);
}
