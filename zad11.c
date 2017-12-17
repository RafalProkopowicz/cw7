#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>


int tab[10];

int rekurencja(int n){
  if (n<1) {
    return 0;
  } else {
    printf("%d \n", tab[n-1]);
    sleep(1);
    return rekurencja(n-1);
  }
}

int main(void){
  int n;
  printf("daj n\n");
  scanf("%d", &n);

  for (size_t i = 0; i < 10; i++) {
    tab[i] = rand();
  }





  printf("\n");
  printf("%d\n", rekurencja(n));
}
