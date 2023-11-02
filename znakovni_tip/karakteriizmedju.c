/* Napisati program koji ucitava dva znaka i ispisuje koliko ima znakova izmedju njih neracunajuci ta dva znaka */
#include <stdio.h>
int main() {
	int a, b;
	a = getchar();
	b = getchar();
	printf("%d\n", b-a-1);
	return 0;
}
