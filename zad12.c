#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <unistd.h>



char napis2[10];

char pocoturekurencja(char znak, int pozycja){
  napis2[pozycja] = znak;
}

int main(void){
  char napis[10] = {'qwerty'};

  for (size_t i = 0, j = 10; i < 10; i++, j--) {
    pocoturekurencja(napis[i], j);
  }

  for (size_t i = 0; i < 10; i++) {
    printf("%s", napis2[i]);
  }


}
