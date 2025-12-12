#include <stdio.h>
#include <stdlib.h>

int main()
{   int i=1;
    int s;
    printf("bir tam sayi giriniz\n");
    scanf("%d",&s);

    while(i<=s){
        printf("%d  ",i);
        i+=2;
    }
    return 0;
}
