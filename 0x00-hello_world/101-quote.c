#include <unistd.h>

/**
 * main - Program that prints a string without printf or puts.
 *
 * Return: Always 1 (Failure)
 *
 */
int main(void)
{
char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

while (*str)
write(STDERR_FILENO, str++, 1);

return (1);
}
