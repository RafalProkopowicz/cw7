#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const int innyformat(int czas){
  int minuty = 0, godziny = 0;
  godziny = czas / 60;
  minuty = (czas % 60);
  printf("h:%d min:%d\n", godziny, minuty);
}

int main(void){
  int min = 0;
  scanf("%d",&min);
  innyformat(min);
}
