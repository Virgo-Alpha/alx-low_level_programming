#include <stdio.h>

/**
 * main - Print all possible combinations of single digit numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int num1;
 int num2 = 1;

for (num1 = 0; num1 < num2; num1++)
{
putchar(num1);
putchar(num2);
num2++;
if (num2 < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
