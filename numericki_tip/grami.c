/* Napisati program koji za unetu vrednost u gramima pretvara u kilograme i grame bez decimale */

#include <stdio.h>
int main() {
	int g, kg;

	scanf("%d", &g);
	kg = g / 1000;
	g = g % 1000;

	printf("masa: %dkg %dg\n", kg, g);
	return 0;
}
