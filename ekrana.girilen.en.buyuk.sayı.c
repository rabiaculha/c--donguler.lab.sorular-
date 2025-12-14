#include <stdio.h>
#include <stdlib.h>

int main()
{   //10 sayý gir ve aralarýndan en büyüðünü al
    int s,enbuyuk;
    int i=1;

    printf("%d. sayi= ",i);
    scanf("%d",&s);
    enbuyuk=s;

    for(i=2;i<=10;i++){
         printf("%d. sayi= ",i);
         scanf("%d",&s);

         if(s>enbuyuk){
            enbuyuk=s;
         }

    }
    printf("en buyuk sayi: %d",enbuyuk);

    return 0;
}
