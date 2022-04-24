#include <stdio.h>
#include <conio.h>
#include <locale.h>
int topla(int a,int b);
main(){
	// iki sayıyı toplayan fonksiyon
	setlocale(LC_ALL, "Turkish");
	printf("İki sayının toplamı: %d", topla(5,10));
	getch();
}
int topla(int a, int b)
{
	int toplam = a + b;
	return toplam;
}
