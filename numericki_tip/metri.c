/* Napisati program koji za unetu vrednost u metrima pretvara u kilometre i metre bez decimale */

#include <stdio.h>
int main() {
	int m, km;

	scanf("%d", &m);
	km = m / 1000;
	m = m % 1000;

	printf("duzina: %dkm %dm\n", km, m);
	return 0;
}
