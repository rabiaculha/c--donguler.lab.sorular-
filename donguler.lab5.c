#include <stdio.h>
#include <stdlib.h>

int main()
{   //Kullanýcýdan bir tamsayý girmesini isteyen,
    //1’den baþlayarak girilen tamsayýya kadar olan
    //sayýlarýn küpünü karþýsýna yazdýrýn

    int i=1;
    int s,kup;
    printf("bir sayi giriniz: ");
    scanf("%d",&s);

    while(i<=s){
        kup=i*i*i;
        printf("%d sayisinin kupu =%d\n",i,kup);
        i++;
    }

    return 0;
}
