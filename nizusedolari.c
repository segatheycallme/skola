/* Napisati program koji izracunava i prikazuje koliko se dinara moze dobiti za d dolara po kursu k ako menjacnica uzima proviziju od 1.5% */
#include <stdio.h>
int main() {
	const float k = 111;
	float d;
	scanf("%f", &d);
	printf("%.2f\n", d*k * 0.985);
	return 0;
}
