#include <stdio.h>
/**
  *main - Entry point
  *Return: Always 0 (success)
  */

int main(void)
{
	unsigned long number = 612852475143;
		unsigned long prime_factor = 2;

		while (prime_factor < number)
		{
			if (number % prime_factor == 0)
			{
				number /= prime_factor;
				prime_factor = 2;
			}
			else
				prime_factor++;
		}
		printf("%lu\n", number);
		return (0);
}
