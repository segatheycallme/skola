#include <stdio.h>
int main() {
  int n;
  printf("unesite pozitivni broj: ");
  scanf("%d", &n);

  // for (int i = 1; i < n + 1; i++) {
  //   for (int j = 0; j < i; j++) {
  //     printf("*");
  //   }
  //   printf("\n");
  // }

  int i = 1, j;
  while (i < n + 1) {
    j = 0;
    while (j < i) {
      printf("#");
      j++;
    }
    printf("\n");
    i++;
  }

  return 0;
}
