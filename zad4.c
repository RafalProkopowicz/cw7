

//for(i=0; i<lim−1 && (c=getchar()) != ’\n’ && c != EOF; ++i)
int i=0;
while (c != EOF) {
  while (c != '\n') {
    if (c=getchar()) {
      if (i<(lim−1)) {
        ++i;
      }
    }
  }
}
