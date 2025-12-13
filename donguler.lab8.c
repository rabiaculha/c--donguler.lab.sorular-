#include <stdio.h>
#include <stdlib.h>

int main()
{   //Kullanýcýdan 20 adet sayý girmesini isteyen,
    // kullanýcýnýn girdiði sayýlarýn toplamýný ve
    //ortalamasýný hesaplayýp ekrana yazdýrýn

    int i=1;
    int s;
    float ort;
    int top=0;
    printf("ekrana 20 adet sayi giriniz\n");

    while(i<=20){
        printf("%d. sayi: ",i);
        scanf("%d",&s);
        top+=i;
        i++;
    }
    ort=top/20;

    printf("girdiginiz sayilarin toplami: %d",top);
    printf("girdiginiz sayilarin ortalamasi: %f",ort);

    return 0;
}
