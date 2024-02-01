/* Odrediti ostatak pri deljenju a sa b (a >= 0; b > 0) bez koriscenja operacija
 * celobrojno deljenje i deljenje po modulu */
#include <stdio.h>
int main() {
  int a, b;
  double x, y;

  scanf("%d %d", &a, &b);

  x = (double)a;
  y = (double)b;

  printf("%d ", (int)(x / y));
  printf("%d\n", a - (int)(x / y) * b);

  return 0;
}
