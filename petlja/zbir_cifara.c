/* Koristeci naredbu while izracunati zbir cifara unetog celog broja */
#include <stdio.h>
int main() {
  int br, zbir = 0;
  scanf("%d", &br);

  while (br > 0) {
    zbir += br % 10;
    br /= 10;
  }

  printf("%d\n", zbir);

  return 0;
}
