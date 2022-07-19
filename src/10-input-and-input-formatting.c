#include <stdio.h>
#include <string.h>

int main()
{
	char usr_name[50];

	printf("Hey! What's your name? ");
	printf("\n");
	fgets(usr_name, 50, stdin);
	usr_name[strlen(usr_name) - 1] = '\0';
	printf("\n");
	printf("Ohh! Nice to meet you, %s", usr_name);

	int usr_age;
	printf("\n");
	printf("How old are you? ");
	scanf("%d", &usr_age);
	printf("\n");
	printf("Woah?! you are already %d years old?", usr_age);

	return 0;
}