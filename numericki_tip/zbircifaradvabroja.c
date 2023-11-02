/* Napisati program koji ucitava dvocifreni broj i ispisuje sumu cifara */

#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	printf("%d\n", a/10 + a%10);
	return 0;
}
