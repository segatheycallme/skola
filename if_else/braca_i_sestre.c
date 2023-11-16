/* Petar, Mika i Lazo su tri brata rodjena u istom danu a Ana je njihova tri godine starija sestra .
 * Napisati program kojim se proverava da li uneti broj moze biti zbir njihovih godina */
#include <stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	if (!((x-3) % 4) && x>6) {
		printf("mogu biti\n");
	} else {
		printf("ne mogu biti\n");
	}
	return 0;
}
