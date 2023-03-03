#include <stdio.h>

/**
 * main - prints the value of a variable in memory
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int *p;
    int a[5];

    a[2] = 1024;
    p = &n;
    /*
     * write your line of code here...
     * Remember:
     * - you are not allowed to use the variable a in your new line of code
     * - you are not allowed to modify the variable p
     * - you can only write one statement
     * - you are not allowed to code anything else than the line of expected line of code at the expected line
     * - Your code should be written at line 19, before the ;
     * - Do not remove anything from the initial code (not even the comments)
     * - and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)
     */
    *(p + 5) = 98;
    /* ...so that this prints 98\n */
    printf("a[2] = %d\n", a[2]);
    return (0);
}
