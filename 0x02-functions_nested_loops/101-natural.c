#include <stdio.h>
/**
 *main _Entry point
 *Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int sum;

	int_vaule(3 ,5);
	sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
