/* Napisati program koji na osnovu uneta dva realna broja a i b izracunava i prikazuje njihov zbir, razliku, proizvod i kolicnik */

#include <stdio.h>
int main() {
	float a, b;
	scanf("%f %f", &a, &b);
	printf("a+b: %.2f\n", a+b);
	printf("a-b: %.2f\n", a-b);
	printf("a*b: %.2f\n", a*b);
	printf("a/b: %.2f\n", a/b);
	return 0;
}
