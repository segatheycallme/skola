/* Napisati program koji za unetu hipotenuzu i katetu datog trougla izracunava i ispisiva obim i povrsinu trougla */
#include <math.h>
#include <stdio.h>
int main() {
	float c, a, b;
	scanf("%f %f", &c, &a);
	b = sqrt(c*c - a*a);
	printf("Obim: %f ", b + c + a);
	printf("Povrsina: %f\n", b * a / 2);
	return 0;
}
