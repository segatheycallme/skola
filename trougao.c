/* Napisati program koji za unetu duzinu stranice jednakostranicnog trougla izracunava i prikazuje njegovu visinu, povrsinu i obim */

#include <stdio.h>
#include <math.h>
int main() {
	float a, h, P, O;
	scanf("%f", &a);
	h = sqrt(3) * a / 2;
	P = sqrt(3) * a * a / 4;
	O = 3 * a;
	printf("h: %f, O: %f, P: %f\n", h, O, P);
	return 0;
}
