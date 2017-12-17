#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int a=0, b=0, ca=0, cb=0;

int przywrocab(){
  a=ca;
  b=cb;
}

int main(void){
  int temp2=0, suma=0, sumak = 1;
  scanf("%d %d", &a, &b);
  //B ma byc wieksze
  if (b<a){
    temp2 = a;
    a = b;
    b = temp2;
  }

  //const
  ca = a;
  cb = b;

  //suma
  while (b>a) {
    suma += a;
    a++;
  }
  suma -= ca;
  printf("suma %d\n", suma);

  //kwadraty
  przywrocab();
  while (b>a) {
    sumak *= a*a;
    a++;
  }
  suma /= ca;
  printf("suma kw %d\n", sumak);
}
