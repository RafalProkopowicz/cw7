#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int *mytab;
int a = 0, length = 0, blength = 0;

int main(void){
  scanf("%d", &a);

  //zmierzenie tablicy
  length = 1 + (int)log10(a);
  blength = sizeof(int) + (int)log10(a) * sizeof(int);

  printf("długosc int to %d\n", length);
  printf("długosc w bitach to %d\n", blength);

  //utworzenie tablicy
  mytab = (int*)malloc(blength * sizeof(int));
  if (mytab == NULL){
    perror("Error in malloc");
    exit (1);
  }

  //uzupelnienie tablicy
  for (size_t i = 0; i < blength; i++) {
    /*if(a & (1 << i) != 0){
      mytab[i] = 1;
    } else {
      mytab[i] = 0;
    }*/


  }
  //wyswietlenie tablicy
  for (size_t i = 0; i < blength; i++) {
    printf("[%d] ", mytab[i]);
  }
  printf("\n");

  //wyjscie
  free(mytab);
  return EXIT_SUCCESS;
}
