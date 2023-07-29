#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char hexi[17];
    long long decimal, place;
    int i = 0, val, len;
    decimal = 0;
    place = 1;
    printf("Enter any hexadecimal number: ");
    gets(hexi);
    len = strlen(hexi); //Basamak ustunu almada kullanacagiz, a*16^basamak iþlemi için
    len--;  
    for(i=0; hexi[i]!='\0'; i++) {  //degerlerini verebilecek sekilde ASCII islemleri
        if(hexi[i]>='0' && hexi[i]<='9') {
            val = hexi[i] - 48;
        }
        else if(hexi[i]>='A' && hexi[i]<='F') {
            val = hexi[i] - 65 + 10;
        }
        else if(hexi[i]>='a' && hexi[i]<='f') { //kucuk harflerin de gecerli olmasi icin
            val = hexi[i] - 97 + 10;
        }                                           
         //Kacinci basamakta oldugu ile orantili olmasi icin uzunlugu-1 i kullaniyoruz ve her dongude azaltiyoruz
        decimal += val * pow(16, len);
        len--;//16^0 dan baslayýp 16^(len -1) e kadar
    }
    printf("Hexadecimal number = %s\n", hexi);
    printf("Hex Length: %d\n",strlen(hexi));
    printf("Decimal Equvilant = %lld\n", decimal);
    int dizi[100],temp[100];
    i=0;
    //binnary e cevirmek icin yapilan matematiksel islemler
    while(decimal != 0) {
        temp[i] = decimal%2;
        decimal -= (decimal%2);
        decimal /= 2;
        i++;
    }
    //temp e tersden atama oldugu icin tekrardan ters cevirmeliyiz
    int a=0;
    printf("Binnary Equvilant: ");
    for(i=i-1;i>=0;i--) {
        dizi[a] = temp[i];
        printf("%d",temp[i]);
        a++;
    }
    printf("\nBinnary Length: %d \n",a);
    return 0;
}
