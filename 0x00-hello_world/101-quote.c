#include <stdio.h>
#include <unistd.h>

/**
 * main - starts the code
 * Description: prints a sentence
 * Return: 1
 */

int main(void)
{
char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(2, ch, sizeof(ch));
return (1);
}
