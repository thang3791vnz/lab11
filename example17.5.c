#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[15] = "New York";
	char str2[15] = "Washington";
	char chr = 'a', *loc;
	rloc = strchr(str1, chr);
	/* checks for the occurrence of the character value held by chr in the first city name */
	/* kiem tra su xuat hien boi ky tu dc giu boi chr trong ten thanh pho dau tien < str1 > */
	if(loc != NULL)
	printf("%c occurs in %s\n", chr, str1);
	else
	printf("%c does not occur in %s\n", chr, str1);
	loc = strchr(str2, chr);
	/* checks for the occurrence of the character in the second city name */
	/* kiem tra su xuat hien trong ten thanh pho thu 2 < str2 > */
	if(loc != NULL)
	printf("%c occurs in %s\n", char, str2);
	else
	printf("%c does not occur in %s\n", chr, str2);
	getch();
}
