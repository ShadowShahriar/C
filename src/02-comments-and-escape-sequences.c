#include <stdio.h>

// This is a single line comment

/**
 * This
 * is
 * a
 * multi-line
 * comment
 */

int main()
{
	printf("Woah!");
	printf("\n");
	printf("C comments are just like JavaScript comments!");

	printf("\n\n");
	printf("But the prinf method is different than JavaScript's console.log.");
	printf("\n");
	printf("printf logs inline text in the terminal. So, we need to add a new line using a \\n escape sequence.");
	printf("\n\n");
	printf("...and \\n\\n for a paragraph!");
	printf("\n\n");

	printf("I think I can totally create a 3x3 grid using \\t and \\n -");
	printf("\n");
	printf("1\t2\t3");
	printf("\n");
	printf("4\t5\t6");
	printf("\n");
	printf("7\t8\t9");

	return 0;
}