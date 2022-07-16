#include <stdio.h>

int main()
{
	int x = 10;
	int y = 20;
	float z = 0.5;

	// addition
	int a = x + y;
	printf("x + y = %d", a); // 30
	printf("\n");

	// subtraction
	int s = x - y;
	printf("x - y = %d", s);
	printf("\n");

	// multiplication
	int m = x * y;
	int m_ = x * z;
	printf("x * y = %d", m);
	printf("\n");
	printf("x * z = %d", m_);
	printf("\n");

	// division
	int d = x / y;
	int d_ = y / x;
	printf("x / y = %d", d);
	printf("\n");
	printf("y / x = %d", d_);
	printf("\n");

	// modulus
	int ms = x % y;
	int ms_ = y % x;
	printf("x mod y = %d", ms);
	printf("\n");
	printf("y mod x = %d", ms_);
	printf("\n");

	// increment & decrement
	x++;
	y--;
	printf("x = %d", x);
	printf("\n");
	printf("y = %d", y);
	printf("\n");

	return 0;
}