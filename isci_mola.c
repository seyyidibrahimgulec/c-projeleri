#include <stdio.h>

int main() {
    int isListesi[100],x,n,i,j,toplam = 0,tmp;
    printf("Is listesinin uzunlugunu veriniz :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Is listesinin %d. elemani :",i+1);
        scanf("%d",&isListesi[i]);
    }
    printf("\n\n--Is listesi --\n");
    for (i=0; i<n; i++) {
        printf("%d  ",isListesi[i]);
    }
    printf("\n\n");
    printf("Isci mola vermeden kac saat calisabilir :");
    scanf("%d",&x);
    i = 0;
    int elemanSayisi = n;
    while(i<elemanSayisi)
    {
        if(toplam + isListesi[i] <= x)
        {
            toplam += isListesi[i];
        }
        else
        {
            elemanSayisi++;
            toplam = 0;
            tmp = isListesi[i];
            isListesi[i] = -1;
            
            for (j=elemanSayisi-1; j>i; j--)
            {
                isListesi[j+1] = isListesi[j];
            }
            isListesi[i+1] = tmp;
        }
        i++;
    }
    printf("\n--Molalar yerlestirildikten sonraki is listesi--1\n");
    for (i=0; i<elemanSayisi; i++) {
        printf("%d  ",isListesi[i]);
    }
    printf("\n");
    return 0;
}
