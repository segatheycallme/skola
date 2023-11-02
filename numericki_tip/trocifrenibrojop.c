/* Napisati program koji ucitava trocifreni broj i odredjuje njihov zbir, kolicnik, razliku i proizvod cifara */

#include <stdio.h>
int main() {
	int a;
	float c1, c2, c3;
	scanf("%d", &a);
	c3 = (float) (a % 10);
	c2 = (float) ((a / 10) % 10);
	c1 = (float) (a/100);
	// printf("%f %f %f", c1, c2, c3);
	printf("%.0f\n", c1 + c2 + c3);
	printf("%.2f\n", c1 / c2 / c3);
	printf("%.0f\n", c1 - c2 - c3);
	printf("%.2f\n", c1 * c2 * c3);
	return 0;
}
