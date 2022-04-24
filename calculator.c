#include <stdio.h>
#include <conio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1, sayi2;
	char islem;
	printf("Birinci sayı: ");
	scanf("%d", sayi1);
	printf("İkinci sayı: ");
	scanf("%d", sayi2);
	printf("İşlem: ");
	scanf("%c", islem);
	if (islem == '+')
		printf("%d + %d = %d", sayi1, sayi2, sayi1 + sayi2);
	else if (islem == '-')
		printf("%d - %d = %d", sayi1, sayi2, sayi1 - sayi2);
	else if (islem == '*')
		printf("%d * %d = %d", sayi1, sayi2, sayi1 * sayi2);
	else if (islem == '/')
		printf("%d * %d / %d", sayi1, sayi2, sayi1 / sayi2);
	else
		printf("Bir şeyler yanlış gitti!");
	getch();
}
