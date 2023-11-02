/* Napisati program koji za uneta dva broja ako su jednaka ispisuje 1 u suprotnom ispisuje 0 bez koriscenja if/else */
#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", a==b);
	return 0;
}
