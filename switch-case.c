#include <stdio.h>
#include <conio.h>
main(){
setlocale(LC_ALL, "Turkish");
char harf;
printf("Bir karakter gir\n");
scanf("%c",&harf);
switch(harf)
	{
		case 'a':
			printf("a harfine bastın\n");
			break;
		case 'b':
			printf("b harfine bastın\n");
			break;
		case 'c':
			printf("c harfine bastın\n");
			break;
		default:
			printf("a, b, c harflerine basmadın");
	}
getch();
}
