#include <stdio.h>
#include <stdlib.h>
//ekrana girilen sayýya kadar olan asal sayýlarý bulma

int main()
{  int sinir,sayi,bolen,asalmi;
   printf("kaca kadar olan asal sayilari bulalim?\n");
   scanf("%d",&sinir);

   printf("asal sayilar: ");

   for(sayi=2;sayi<sinir;sayi++){
    asalmi=1;

     for(bolen=2;bolen<sayi;bolen++){
        if(sayi%bolen==0){
            asalmi=0;
            break;
        }
     }

     if(asalmi==1){
        printf("%d   ",sayi);
     }
   }

    return 0;
}
