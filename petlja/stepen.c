/* Odrediti stepen i vrednost prvog stepena dvojke koji je veci od zadate
 * vrednosti */
#include <stdio.h>
int main(void) {
  int br, stepen = -1;
  scanf("%d", &br);

  while (br) {
    br = br >> 1;
    stepen++;
  }

  printf("%d\n", stepen);
  return 0;
}
