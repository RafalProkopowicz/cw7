#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int rekurencja(int n){
  switch (n) {
    case 0: return 1;
    break;
    case 1: return 2;
    break;
    default: return (rekurencja(n-1) + rekurencja(n-2));
    break;
  }
}

int main(void){
  int n;
  printf("daj n\n");
  scanf("%d", &n);

  printf("%d\n", rekurencja(n));
  printf("f(2)/f(1) = %d\n", rekurencja(rekurencja(2) / rekurencja(1)));
}
