#include <stdio.h>

int main()
{
	float audience_retention = 57.33214;
	float click_through_rate = 6.461127;
	int impressions = 29501;

	printf("Audience Retention: %12.3f\n", audience_retention);
	printf("Click-through Rate: %12.3f\n", click_through_rate);
	printf("Impressions: %19d\n", impressions);

	float seek_at = 10.2324;
	printf("Seek at: %.2f\n", seek_at); // Seek at: 10.23
	printf("Seek at: %.3f\n", seek_at); // Seek at: 10.232

	int seek = 10;
	printf("Seek to: %9d\n", seek); // Seek to: <7 spaces>10
	printf("Seek to: %4d\n", seek); // Seek to: <2 spaces>10

	int seeknext = 10;
	int seekprev = 7;
	printf("Next: %-9d\n", seeknext); // Seek to: 10<7 spaces>
	printf("Back: %-9d\n", seekprev); // Seek to: 7<8 spaces>

	return 0;
}