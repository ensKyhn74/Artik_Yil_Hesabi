#include <stdio.h>
// Genel bir kural olarak,artık yıllar 4 rakamının katı olan yıllardır.1980,1984,1988,1992,1996,2000
// 100’ün katı olan yıllardan sadece 400’e kalansız olarak bölünebilenler artık yıldır:
// Örneğin 1600 ve 2000 yılları artık yıldır ancak 1800 ve 1900 artık yıl değildir.

int main() 

{
 
 int yil;
 
 printf("Yil Girin: ");
 scanf("%d",&yil);
      
    if(yil % 4 == 0) 
    {
        if(yil % 100 == 0) 
        {
            if(yil % 400 == 0) 
                printf("%d artik yildir.",yil);
            else
                printf("%d artik yil degildir.",yil);
        }
        else
            printf("%d artik yildir.",yil);
    }
    else
        printf("%d artik yil degildir.",yil);
    
  return 0;

}