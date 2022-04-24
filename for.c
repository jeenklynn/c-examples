#include <stdio.h>
#include <conio.h>
main()
// 10'a kadar olan tüm sayıları 5'er kez yazdıran program.
{
	for(int i = 1; i < 10; i++){
		for(int a = 0; a < 5; a++){
			printf("%d \n",i);
		}
	}
getch();
}
