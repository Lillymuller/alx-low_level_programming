#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Generates and prints passwords for the crackme5 executable.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Usage: ./keygen5 username\n");
return (1);
}

char *username = argv[1];
int key = 0;
int i = 0;
for (i = 0; i < strlen(username); i++)
{
key += username[i];
}

printf("Key: %d\n", key);

return (0);
}
