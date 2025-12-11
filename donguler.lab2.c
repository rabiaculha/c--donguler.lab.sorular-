#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1 den 100 e kadar olan sayýlarýn toplamý
    int i=0;
    int top=0;
    while(i<=100){
        i++;
        top+=i;
    }
    printf("%d",top);



    return 0;
}
