/* Napisati program za prevodjenje unetog znaka od '0' do '9' u cifru od 0 do 9 */
#include <stdio.h>
int main() {
	char c;
	c = getchar();
	printf("%d\n", c - 48);
	return 0;
}
