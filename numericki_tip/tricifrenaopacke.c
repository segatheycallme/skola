/* Napisati program koji za uneti trocifreni ceo broj izracunava i ispisuje broj sa istim ciframa ali u obrnutom redosledu */

#include <stdio.h>
int main() {
	int a, b, c, d;
	scanf("%d", &a);
	b = a % 10;
	c = (a % 100) / 10;
	d = a / 100;
	printf("%d%d%d\n", b, c, d);
	return 0;
}
