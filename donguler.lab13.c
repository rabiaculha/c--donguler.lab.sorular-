#include <stdio.h>
#include <stdlib.h>

int main()
{   /*ullanýcýdan bir tamsayý girmesini isteyen,
    girilen sayýnýn ikilik tabandaki karþýlýðýný
    hesaplayarak sonucu ekrana yazdýran*/

    int s;
    int ikilikdizi[32];
    int i=0;

    printf("bir tam sayi giriniz: ");
    scanf("%d",&s);

    while(s>0){
        ikilikdizi[i]=s%2;
        s=s/2;
        i++;
    }

    printf("ikilik binary karsiligi: ");
    for(int j=i-1;j>=0;j--){
        printf("%d",ikilikdizi[j]);
    }

    return 0;
}
