/* Napisati program koji ime od 5 znakova sifruje ASCII kodovima slova u njemu 
 * Program unosi jedno po jedno slovo imena pa zatim ga pretvara u brojeve i te brojeve prikazuje */
#include <stdio.h>
int main() {
	char a,b,c,d,e, A;
	printf("unesite ime: \n");
	a = getchar();
	b = getchar();
	c = getchar();
	d = getchar();
	e = getchar();
	printf("%d %d %d %d %d\n", a,b,c,d,e);
	printf("%c %c %c %c %c\n", a,b,c,d,e);
	return 0;
}
