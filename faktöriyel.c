#include <stdio.h>
#include <stdlib.h>

int main()
{   int s;
    int i=1;
    int carpim=1;
    printf("ekrana bir tam sayi giriniz\n");
    scanf("%d",&s);

    while(i<=s){
    carpim*=i;
    i++;
    }

    printf("%d sayisinin faktoriyeli : %d",s,carpim);


    return 0;
}
