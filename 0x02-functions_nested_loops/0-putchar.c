#include <unistd.h>

/**
 * main - entry point
 *
 * Discription: Print "_putchar"
 *
 *  Return: Always 0 (success)
 */
int main(void)
{
write(STDOUT_FILENO, "_putchar\n", 9);
return (0);
}
