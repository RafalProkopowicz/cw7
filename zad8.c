//zad 8,9

/*zad9: Pewnie że istnieje bo rekurencyjnie wysyła i wraca z wartoscią
 a można by po prostu przeleciec po wszystkich wartosciach do n i od razu dac wynik*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int silnia(int n, int k){
  int a=1;
  if (n==1) {
    return 1;
  } else {

    for (size_t i = 1; i < k; i++) {
      a*=silnia(n-1, k);
    }
    return a*silnia(n-1, k);
  }
}

int main(void){
  int n, k;
  printf("daj n , k\n");
  scanf("%d %d", &n , &k);

  printf("%d\n", silnia(n, k));
}
