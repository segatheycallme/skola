/* Napisati program koji za dati prirodni broj n ispisuje da li je stepen broja
 * tri */
#include <stdio.h>
int main(void) {
  int br;
  char flag = 1;
  scanf("%d", &br);

  while (br > 1) {
    if (br % 3) {
      flag = br % 3;
      break;
    }

    br /= 3;
  }

  if (flag) {
    printf("nije stepen broja tri\n");
  } else {
    printf("jeste stepen broja tri\n");
  }

  return 0;
}
