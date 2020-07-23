/**
 * Exercise 1.9 - Write a Program to copy its input to its output, replacing
 * each string of one or more blanks by a single blank.
 *
 * */

#include <stdio.h>
/* Checking next character if it is space/blank or not! */
int main() 
{

int c;

while ((c=getchar())!=EOF)
	{

	if (c== ' ')
		{
		while ((c=getchar())==' ') /* This loop will advance the pointer in text stream as long as the next character is space */
			{;} /* or instead of these two lines "while ((c=getchar())==' ');" */
		printf(" ");
		}
putchar (c);
	}


}

