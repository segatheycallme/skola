/* Napisati program koji ucitava cele brojeve a i b 
 * Prvi od njih udvostrucuje, a drugi povecava za 1 pa ispisuje njihove nove vrednosti i proizvod */

#include <stdio.h>
int main() {
	int a, b;

	scanf("%d %d", &a, &b);
	a *= 2;
	b++;

	printf("nove vrednosti su: %d, %d\n", a, b);
	printf("njihov proizvod je: %d\n", a * b);
	return 0;
}
