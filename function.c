#include <stdio.h>
#include <conio.h>
#include <locale.h>
// iki sayıyı toplayan fonksiyon
int topla(int a,int b);
main(){
	setlocale(LC_ALL, "Turkish");
	printf("iki sayının toplamı: %d", topla(5,10));
	getch();
}
int topla(int a, int b)
{
	int toplam = a + b;
	return toplam;
}
