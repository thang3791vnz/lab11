#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char str1[15] = "T2004m";
	char str2[30] = "Tap The T2004m";
	char chr = "T2004m"; /* e dung 'T2004m' thi no chi thong bao ket qua la 'm' */ 
						/* neu e dung "T2004m" thi no k hien ra ma la khoang trong a */
	if(strchr(str1, chr) != NULL) /* neu khac NULL la thay chu trong chuoi str 1 */
	printf("\n'%c' co trong chuoi \n%s\n", chr, str1); /* in ra thong bao xuat hien */
	else
	printf("\n'%c' khong xuat hien trong chuoi \n%s\n", chr, str2);
	if(strchr(str2, chr) !=NULL) /*kiem tra xem 'm' co nam trong chuoi str2 khong */
	printf("\n'%c' xuat hien trong \n%s\n", chr, str2);
	else
	printf("\n'%c'khong xuat hien trong chuoi \n%s\n", chr, str2); /* in ra ket qua */
	getch();
}
