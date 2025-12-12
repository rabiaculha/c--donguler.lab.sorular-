#include <stdio.h>
#include <stdlib.h>

int main()
{   //Kullanýcýdan bir tamsayý girmesini isteyen,
    //1’den baþlayarak girilen tamsayýya kadar olan
    //sayýlarý ve bunlarýn toplamýný ekrana yazdýrýn

    int i=1;
    int s;
    int top=0;
    printf("bir tam sayi giriniz\n");
    scanf("%d",&s);

    while(i<=s){
        top+=i;
        i++;
    }
    printf("%d",top);


    return 0;
}
