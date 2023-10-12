/* Napisati program koji izracunava povrsinu trougla ako su poznate kordinate njegovih temena */
#include <math.h>
#include <stdio.h>
int main() {
	float x1, y1, x2, y2, x3, y3, a, b, c, s;
	scanf("%f %f", &x1, &y1);
	scanf("%f %f", &x2, &y2);
	scanf("%f %f", &x3, &y3);
	a = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
	b = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
	c = sqrt((x3-x2)*(x3-x2) + (y3-y2)*(y3-y2));
	s = (a+b+c)/2;
	printf("P: %f ", sqrt(s*(s-a)*(s-b)*(s-c)));
	return 0;
}
