#include <stdio.h>
#include <conio.h>
main(){
setlocale(LC_ALL, "Turkish");
char harf;
printf("Bir karakter girin\n");
scanf("%c",&harf);
switch(harf)
	{
		case 'a':
			printf("a harfine bastınız\n");
			break;
		case 'b':
			printf("b harfine bastınız\n");
			break;
		case 'c':
			printf("c harfine bastınız\n");
			break;
		default:
			printf("a, b, c harflerine basmadınız");
	}
getch();
}
