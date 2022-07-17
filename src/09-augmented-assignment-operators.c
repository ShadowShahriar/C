#include <stdio.h>

int main()
{
	int a = 4, b = 32, c = 11, d = 44, e = 68;

	a += 10;
	printf("%d\n", a);

	b -= 2;
	printf("%d\n", b);

	c *= 6;
	printf("%d\n", c);

	d /= 4;
	printf("%d\n", d);

	e %= 2;
	printf("%d\n", e);

	return 0;
}