/* Napisati program za resavanje zadatog izraza */
#include <math.h>
#include <stdio.h>
int main() {
	float x;
	scanf("%f", &x);
	if (x<2) {
		printf("Error: root of negative number\n");
		return 1;
	}
	printf("%f\n", 2*x + sqrt(x*x + 3*x - 10));
	return 0;
}
