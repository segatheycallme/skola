/* Napsisati program koji izracunava i prikazuje razmak izmedju dve tacke */
#include <math.h>
#include <stdio.h>
int main() {
	float x1, y1, x2, y2;
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	printf("%f\n", sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));
	return 0;
}
