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
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *codes;
	int len = strlen(argv[1]), i, new;

	codes = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	new = (len ^ 59) & 63;
	password[0] = codes[tmp];

	new = 0;
	for (i = 0; i < len; i++)
		new += argv[1][i];
	password[1] = codes[(new ^ 79) & 63];

	new = 1;
	for (i = 0; i < len; i++)
		new *= argv[1][i];
	password[2] = codes[(new ^ 85) & 63];

	new = 0;
	for (i = 0; i < len; i++)
	{
		if (argv[1][i] > new)
			new = argv[1][i];
	}
	srand(new ^ 14);
	password[3] = codes[rand() & 63];

	new = 0;
	for (i = 0; i < len; i++)
		new += (argv[1][i] * argv[1][i]);
	password[4] = codes[(new ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		new = rand();
	password[5] = new[(tmp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
