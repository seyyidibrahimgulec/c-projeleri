#include <stdio.h>
#include <string.h>

#define SIZE 50

int main() {
  int i, j, tmp, kontrol, elemanSayisi, altKumeSayisi = 1;
  char kume[SIZE];
  printf("Kumenin elemanlarini bosluk birakmadan giriniz :");
  scanf("%s", kume);
  elemanSayisi = strlen(kume);
  printf("\nGirdiginiz Kume : {");
  for(i=0; i<elemanSayisi-1; i++) {
    printf("%c,", kume[i]);
  }
  printf("%c}\n",kume[i]);
  for(i=0; i<elemanSayisi; i++) {
    altKumeSayisi *= 2;
  }
  printf("\nAlt Kume sayisi: %d\n", altKumeSayisi);
  for(i=0; i<altKumeSayisi; i++) {
    tmp = i;
    kontrol = altKumeSayisi/2;
    printf("{");
    for(j=0; j<elemanSayisi; j++) {
      // Her bir dongude sayi kontrol(altKumeSayisi/2) ile AND'lenir eger sonuc
      // kontrol ise j. eleman ekrana yazdirilir ve sayi bir kere sola shift
      // edilir.
      if((tmp & kontrol) == kontrol)
        printf("%c",kume[j]);
      tmp = tmp << 1;
    }
    printf("}\n");
  }
  return 0;
}
