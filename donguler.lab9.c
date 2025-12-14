#include <stdio.h>
#include <stdlib.h>

int main()
{   //Kullanýcýdan bir tamsayý girmesini isteyen,
    //girilen sayýnýn faktöriyelini hesaplayýp sonucu
    //ekrana yazdýrýn

    int i=1;
    int s;
    int carpim=1;
    printf("bir tam sayi giriniz: ");
    scanf("%d",&s);

    while(i<=s){
        printf("%d   \n",i);
        carpim*=i;
        i++;
    }
    printf("%d sayisinin faktöriyeli: %d",s,carpim);
    return 0;
}
