#include <stdio.h>
#include <stdlib.h>

int main()
{
    //100 ve 200 arasýnda 9 ile tam
    //bölünebilen sayýlarý ve bunlarýn toplamýný
    //yazdýrýn

    int i=108;
    int top=0;
    while(i<=200){
        top+=i;
        i+=9;
    }
    printf("%d",top);

    return 0;
}
