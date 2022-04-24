#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
main(){  
// hangi indekste hangi değerin olduğunu gösteren döngü
setlocale(LC_ALL, "Turkish");
int sayi[10];
for (int i=0; i < 10; i++)//0 1 2.....9
     sayi[i] = i+10;// sayi[0] , sayi[1]... sayi[9]
//  10 11 12......19
for (int i = 0; i < 10; i++)
	printf("sayi[%d]. indeks elemanının değeri = %d \n", i, sayi[i]);

getch();
}

