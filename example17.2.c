#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[20];
	/* name is declared as a single dimensional character array */
	printf("Enter your name: "); /* hien thi message */
	scanf("%s", name); /* co the thay = gets */
	printf("Hi there: %s", name);
	getch();
}
