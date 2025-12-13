#include <stdio.h>
#include <stdlib.h>
//Kullanýcýdan bir tamsayý s deðeri girmesini isteyen,
//ilk s tane çift doðal sayýyý ve bunlarýn
//ortalamasýný alýn

int main()
{   int s;
    int i=2;
    int sonuc;
    int top=0;

    printf("bir sayi giriniz:");
    scanf("%d",&s);

    while(i<=s*2){
        printf("%d  ",i);
        top+=i;
        i+=2;
    }
    sonuc=top/s;
    printf("\nortalamalari: %d",sonuc);


    return 0;
}
