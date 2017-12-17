#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define rozmiar 10

int main(void){
  int tab[rozmiar];

  for (size_t i = 0; i < rozmiar; i++) {
    tab[i] = rand();
  }

  for (size_t i = 0; i < rozmiar; i++) {
    printf("[%d] ", tab[i]);
  }
}
