/* Napisati program koji ce odrediti i prikaziti najvecu cifru unetog celog
 * broja */
#include <stdio.h>
int main() {
  int br, cifra = 1;
  scanf("%d", &br);

  while (br > 0) {
    cifra = (cifra > br % 10) ? cifra : br % 10;
    br /= 10;
  }

  printf("%d\n", cifra);

  return 0;
}
