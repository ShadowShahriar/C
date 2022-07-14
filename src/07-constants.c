#include <stdio.h>
#define RESOLUTION 1080

int main()
{
	float pi = 3.141592; // declaration + initialization
	pi = 42.7;			 // re-initialization
	printf("%f", pi);	 // 42.700001

	// const float PI = 3.141592;
	// PI = 42.7;
	// printf("%f", PI);
	// error: assignment of read-only variable 'PI'

	printf("\n");
	printf("%u", RESOLUTION); // 1080

	return 0;
}