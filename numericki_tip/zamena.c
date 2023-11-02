/* Napisati program koji ucitava vrednosti dve promenljive zamenjuje ih bez koriscenja dodatne promenljive i zatim ih ispisuje */

#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	a += b;
	b = a - b;
	a -= b;
	printf("a: %d\nb: %d\n", a, b);
	return 0;
}
