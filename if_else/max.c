/* Od dva ucitana broja a, b sa tastature naci veci */
#include <stdio.h>
int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	if (a>b) {
		printf("%d\n", a);
	} else if (a<b) {
		printf("%d\n", b);
	} else {
		printf("1\n");
	}
	return 0;
}
