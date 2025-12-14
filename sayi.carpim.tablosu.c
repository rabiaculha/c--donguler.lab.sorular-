#include <stdio.h>
#include <stdlib.h>
//istenilen sayi ile basit carpim tablosu
int main()
{
    int i=1;
    int number;

    printf("1 den 10 a kadar bir tam sayi giriniz");
    scanf("%d",&number);

    if (number<0 || number>10){
        printf("lutfen gecerli degerler arasindan aliniz");
        return 0;
    }
    while (i<=10){
        printf("%d x %d=%d\n",number,i,number*i);
        i++;
    }



    return 0;
}
