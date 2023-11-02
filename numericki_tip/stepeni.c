/* Napisati program za pretvaranje celzijusa u kelvine */

#include <stdio.h>
int main() {
	float celsius;
	scanf("%f", &celsius);
	printf("%.2f\n", celsius - 273.5);
	return 0;
}
