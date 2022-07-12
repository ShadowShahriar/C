#include <stdio.h>

int main()
{
	// integers numbers
	printf("char size:	%luB\n", sizeof(char));
	printf("int size:	%luB\n", sizeof(int));
	printf("short size:	%luB\n", sizeof(short));
	printf("long size:	%luB\n", sizeof(long));
	printf("long long size:	%luB\n", sizeof(long long));

	// floating point numbers
	printf("\n");
	printf("float size:		%luB\n", sizeof(float));
	printf("double size:		%luB\n", sizeof(double));
	printf("long double size:	%luB\n", sizeof(long double));

	return 0;
}