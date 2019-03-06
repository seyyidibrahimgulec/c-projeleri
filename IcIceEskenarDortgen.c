#include <stdio.h>

int main() {
    int i,j,yon,bas,son,m,n,baslangicY = 0,esKenarDKosegen;
    static char matris[100][100];
    printf("M sayisini giriniz :");
    scanf("%d",&m);
    n = 4*m + 1;
    esKenarDKosegen = n;
    
    int esKenarKayma = m + 2;
    while(baslangicY <= (n/2)-1)
    {
        bas = 2*m;
        son = 2*m;
        yon = 1;
        matris[baslangicY][bas] = '*';
        for(i=baslangicY + 1;i<baslangicY +esKenarDKosegen ;i++)
        {
            bas = bas - yon;
            son = son + yon;
            matris[i][bas] = '*';
            matris[i][son] = '*';
            if(i == n/2)
            {
                yon = -yon;
            }
        }
        esKenarDKosegen += -2*(esKenarKayma -2) -4;
        baslangicY += esKenarKayma;
        esKenarKayma = esKenarKayma / 2;
        
    }
    int kareBaslangic = ((2*m + 1)/2)+1;
    int kareBitis = (4*m +1) - kareBaslangic;
    int degisim = (kareBaslangic+1)/2;
    while(kareBaslangic < (n/2))
    {
        for(i=kareBaslangic;i<kareBitis;i++)
        {
            if((i==kareBaslangic)||(i==kareBitis-1))
            {
                for (j=kareBaslangic; j<kareBitis; j++) {
                    matris[i][j] = '*';
                }
            }
            else
            {
                matris[i][kareBaslangic] = '*';
                matris[i][kareBitis-1] = '*';
            }
            
        }
        kareBitis -= degisim;
        kareBaslangic += degisim;
        degisim = degisim /2;
    }
    if((kareBaslangic == n/2)&&(matris[n/2][n/2-1]!='*'))
    {
        matris[n/2][n/2] = '*';
    }
    printf("     ");
    for(i=0;i<n;i++)
    {
        printf("%d",i%10);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(i<10)
            printf("0%d   ",i);
        else
            printf("%d   ",i);
        for(j=0;j<n;j++)
        {
            if(matris[i][j] == '*')
                printf("%c",matris[i][j]);
            else
                printf(" ");
        }
        printf("\n");
    }
    
    
    return 0;
}
