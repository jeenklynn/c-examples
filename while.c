#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
main(){
   // bir ile yüz arasındaki rastgele yüz sayıda kaçının çift kaçının tek olduğunu gösteren program
   srand(time(NULL));
   int sayac = 1;
   int sayi = 0;
   int tekadet = 0,ciftadet = 0;
   while(sayac <= 100)
   {
   	  sayi= 1 + rand()%100;
	   	  if(sayi % 2 == 0)
	   	  	ciftadet++;
	   	  else
	   	  	tekadet++;
    sayac++;
   }
	printf("Çift adet:%d\n",ciftadet);
	printf("Tek adet :%d\n",tekadet);   
getch();
}

