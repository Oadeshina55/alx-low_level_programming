#include <unistd.h>
/**
 * main - A program that prints a lone to the standard error
 * Return: Success (1)
 */
int main(void)
{
char msg[] = ("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
write(2, msg, sizeof(msg) - 1);
return (1);
}
