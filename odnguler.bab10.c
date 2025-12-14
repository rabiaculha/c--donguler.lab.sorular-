#include <stdio.h>
#include <stdlib.h>

int main()
{/*Kullanýcýdan bir taban deðeri a ve
  bir üs deðeri b girmesini isteyen ve a üssü b’yi (ab)
  hesaplayarak sonucu ekrana yazdýrýn*/
//1.cozum yolu
int a,b,i;
long long sonuc=1;
    printf("taban degerini giriniz: ");
    scanf("%d",&a);

    printf("us degerini giriniz: ");
    scanf("%d",&b);

    for (i=0;i<b;i++){
        sonuc*=a;
    }
    printf("%d uzeri %d = %lld\n",a,b,sonuc);
    return 0;
}



#include <stdio.h>
#include<math.h>  //bu kütüphanede þart
int main(){
double a,b,sonuc;        //pow fonksiyonu double ile çalýþýr

printf("sirasiyla taban ve usu giriniz:  ");
scanf("%lf %lf",&a,&b);

sonuc=pow(a,b);
printf("sonuc: %2.lf",sonuc);






    return 0;
}
