#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char ogrenci[20]= "	Melek Oral"; 
	char ogrencinum [20] = "1220505054";
	
	printf("******** ZAR SONUCU HESAPLAMA********\n\n\n");
	
	printf("ogrenci adi:%s\n",ogrenci);
	printf("ogrenci numarasi: %s\n\n",ogrencinum);
    int zar,k;
do{
        k++;
        zar=rand()%6+1;//rand kullanarak sayilarin random secimini sagladik
        printf("%d. deneme = %d\n",k,zar);
    }
while(zar<6); //kosul eklendi
    printf("%d denemede %d geldi!",k,zar);
return 0;
}
