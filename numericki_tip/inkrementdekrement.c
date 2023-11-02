/* Napisati program koji za uneti ceo broj ispisuje njegove inc i dec vrednosti */
#include <stdio.h>
int main() {
	int x;
	scanf("%d", &x);
	x++;
	printf("%d ", x);
	x--;
	x--;
	printf("%d\n", x);
	return 0;
}
