#include <stdio.h>
#include <stdbool.h>

int main()
{
	char grade = 'C';
	char nickname[] = "Shadow";
	char ascii = 110;
	bool alive = true;

	int i = 2147483647;
	unsigned int u = 4294967295;
	short x = 32767;
	long y = 2147483647;
	long long z = 9223372036854775807;
	unsigned long long zz = 18446744073709551615U;

	float PI = 3.141592;
	double precisePI = 3.141592653589793;

	printf("%c\n", grade);
	printf("%s\n", nickname);
	printf("%d\n", alive);

	printf("%d\n", i);
	printf("%u\n", u);
	printf("%d\n", x);
	printf("%ld\n", y);
	printf("%lld\n", z);
	printf("%llu\n", zz);

	printf("%c\n", ascii);
	printf("%d\n", ascii);

	// displays the first 6 digits after the decimal
	printf("%f\n", PI);
	printf("%lf\n", precisePI);

	// displays the first 15 digits after the decimal
	printf("%0.15f\n", PI);			// less precise
	printf("%0.15lf\n", precisePI); // more precise and accurate

	return 0;
}