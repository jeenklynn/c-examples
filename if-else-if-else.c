#include <stdio.h>
#include <conio.h>
main()
// iki sayıyı karşılaştıran program.
{   
	setlocale(LC_ALL, "Turkish");
	
	int sayi1,sayi2;
	printf("Birinci Sayı: ");
	scanf("%d",&sayi1);
	printf("İkinci Sayı: ");
	scanf("%d",&sayi2);
	if(sayi1 > sayi2) // eğer birinci sayı ikinci sayıdan büyükse
		printf("%d daha büyüktür.",sayi1);
	// if altında tek satır kod var ise süslü parantez kullanmaya gerek yok
	else if(sayi2 > sayi1) // eğer ikinci sayı birinci sayıdan büyükse
		printf("%d daha büyüktür.",sayi2);
	else // eğer önceki kontrolleri sağlamadı ise
		printf("Girilen sayılar birbirine eşittir");
	getch();
}
