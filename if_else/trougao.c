/* Date su celobrojne duzine tri stranice trougla.
 * Napisati program kojim se proverava da li postoji jednakostranicni trougao celobrojnih duzina stranica istog obima kao dati trougao i koja mu je duzina stranice */
#include <stdio.h>
int main() {
	int a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	a += b+c;
	if (a % 3) {
		printf("ne postoji takav trougao\n");
	} else {
		printf("postoji takav trougao i duzina stranice mu je %d\n", a/3);
	}
	return 0;
}
