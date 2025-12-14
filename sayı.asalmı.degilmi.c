#include <stdio.h>
#include <stdlib.h>
//asal sayý mý degilmi bulan program
int main()
{   int s;
    int i=2;

    printf("ekrana pozitif tam sayi giriniz: ");
    scanf("%d",&s);

    if(s<0){
        printf("ekrana pozitif tam sayi giriniz: ");
        return 0;
    }
    while(i<s/2){
        if(s%i==0){
            printf("%d asal sayi degildir %d sayisi ile bolunur\n",s,i);
            return 0;
        }
        i++;
    }
    printf("%d sayisi asal sayidir.",s);
    return 0;
}
