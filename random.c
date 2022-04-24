#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
main(){
setlocale(LC_ALL, "Turkish");
srand(time(NULL));
int sayi=0;
sayi = 5 + rand()%295; // 5 ile 5+295 arasında bir sayı üretir.
printf("%d",sayi);
getch();
}
