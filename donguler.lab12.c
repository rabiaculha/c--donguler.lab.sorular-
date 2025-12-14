#include <stdio.h>
#include <stdlib.h>

int main()
{   /* Kullanýcýdan iki tamsayý girmesini isteyen,
    girilen iki sayýnýn en küçük ortak katýný (EKOK)
    hesaplayarak sonucu ekrana yazdýran*/

    int s1,s2,kat;
    printf("iki tam sayi giriniz: ");
    scanf("%d %d",&s1,&s2);

    if(s1>s2){
        kat=s1;
    }
    else{
        kat=s2;
    }
    while(1){
        if (kat%s1==0 && kat%s2==0){
            printf("EKOK(%d,%d)=%d",s1,s2,kat);
            break;
        }
        kat++;
    }

    return 0;
}
