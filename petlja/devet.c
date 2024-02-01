#include <stdio.h>
int main(void) {
  for (int i = 3, skok = 1; i <= 1000000000; i += skok) {
    if (i % 9)
      ;
    else {
      printf("%d\n", i);
      skok = 9;
    }
  }

  return 0;
}
