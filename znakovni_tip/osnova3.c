/* Napisati program koji za 5 sifrovanih slova prikazuje 5 desifrovanih slova */
#include <stdio.h>
int main() {
	int a,b,c,d,e;
	printf("unesi brojeve: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	printf("%c%c%c%c%c\n", a,b,c,d,e);
	return 0;
}
