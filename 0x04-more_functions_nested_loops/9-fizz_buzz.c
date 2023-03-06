#include "main.h"
#include <stdio.h>
/**
 * main - print 1 to 100 and words in case of 3 and 5
 */
void main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if ((i % 3 != 0) && (i % 5 != 0))
		{
			printf("%d ", i);
		}
		else if ((i % 3 == 0) && (i % 5 != 0))
		{
			printf("Fizz ");
		}
		else if ((i % 3 != 0) && (i % 5 == 0))
		{
			printf("Buzz ");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
	}
}
