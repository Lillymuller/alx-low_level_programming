#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
char ab;
for (ab = 'z'; ab >= 'a'; ab--)
{
putchar(ab);
}
putchar('\n');
return (0);
}
