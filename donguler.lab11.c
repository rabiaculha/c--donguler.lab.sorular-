#include <stdio.h>
#include <stdlib.h>

int main()
/*Kullanýcýdan iki tamsayý girmesini isteyen,
girilen iki sayýnýn en büyük ortak bölenini
(EBOB) hesaplayarak sonucu ekrana yazdýrýn*/

{   int s1,s2,i,ebob;
    printf("iki tam sayi giriniz\n");
    scanf("%d %d",&s1,&s2);

    for(i=1;i<=s1 && i<=s2;i++){
        if(s1%i==0 && s2%i==0)
            ebob=i;

    }
    printf("%d ve %d sayilarinin EBOB u : %d",s1,s2,ebob);

    return 0;
}
