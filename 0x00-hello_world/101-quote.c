#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of code
 *
 * Description: Prints a string
 *
 * Return: Always 1 (failure)
 */

int main(void)
{

char *s;

s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, s, 59);
return (1);
}
