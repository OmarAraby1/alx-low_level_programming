#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - function prints whether a number is positive or negative or zero
 * Return: 0 (Success)
 */

int main(void)
{
        for(int x = 'A'; x <= 'Z'; x++)
    	{
        	x = tolower(x);
        	putchar(x);
    	}
        return (0);
}
