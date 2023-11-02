/* Napisati program koji ispisuje koliko memorije zauzimaju razni tipovi podataka */

#include <stdio.h>
int main() {
	printf("integer: %u\n", sizeof(int));
	printf("float: %u\n", sizeof(float));
	printf("double: %u\n", sizeof(double));
	printf("char: %u\n", sizeof(char));
	printf("long: %u\n", sizeof(long));
	printf("short: %u\n", sizeof(short));
	return 0;
}
