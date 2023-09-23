/* Napisati program koji na osnovu uneta dva cela broja a i b izracunava i prikazuje njihov celobrojni kolicnik i ostatak pri deljenju */

#include <stdio.h>
int main() {
	int a,b;
	scanf("%d %d", &a, &b);
	printf("kolicnik je: %d\n", a / b);
	printf("ostatak je: %d\n", a % b);
	return 0;
}
