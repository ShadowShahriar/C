#include <stdio.h>

int main()
{
	int x;		// declaration
	x = 2005;	// initialization
	int y = 25; // declaration + initialization

	int maxZoom = 5;		   // int = integer
	float zoomFactor = 1.0332; // float = floating point number
	char zoomAxis = 'Y';	   // char = one character
	char pane[] = "XZ";		   // char x[] = array of characters (string)

	printf("Preferred zoom factor is %f", zoomFactor);
	printf("\n");
	printf("Enable zoom at %c-axis", zoomAxis);
	printf("\n");
	printf("Maximum zoom is %d times", maxZoom);
	printf("\n");
	printf("This is a %s pane", pane);

	return 0;
}