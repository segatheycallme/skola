/* Napisati program koji za uneti broj n vrsi proveru i ispisuje poruku da li se nalazi unutar intervala a i b */
#include <stdio.h>
int main() {
	int a, b, n;
	scanf("%d %d %d", &a, &b, &n);
	if ((n>a) && (n<b)) {
		printf("broj %d je unutar intervala %d..%d\n", n, a, b);
	} else {
		printf("broj %d nije unutar intervala %d..%d\n", n, a, b);
	}
	return 0;
}
