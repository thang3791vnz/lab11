#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[20];
	/* ten khai bai la mang du lieu 1 chieu */ 
	/* clrscr(); */ /* xoa man hinh */
	puts("Enter your name: "); /* hien thi message */
	gets(name); /* dau vao input */
	puts("Hi there: ");
	puts(name); /* dau ra input */
	getch();
}
