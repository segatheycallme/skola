/* Od cifara unetog trocifrenog broja formirati najveci moguci trocifreni broj */
#include <stdio.h>
int main() {
	int x, c1, c2, c3;
	scanf("%d", &x);
	c1 = x/100;
	c2 = (x/10)%10;
	c3 = x%10;
	if (c1>c2 && c2>c3) {
		printf("%d%d%d\n", c1, c2, c3);
	} 
	else if (c1>c3 && c3>c2) {
		printf("%d%d%d\n", c1, c3, c2);
	} 
	else if (c2>c1 && c1>c3) {
		printf("%d%d%d\n", c2, c1, c3);
	} 
	else if (c2>c3 && c3>c1) {
		printf("%d%d%d\n", c2, c3, c1);
	} 
	else if (c3>c1 && c1>c2) {
		printf("%d%d%d\n", c3, c1, c2);
	} 
	else if (c3>c2 && c2>c1) {
		printf("%d%d%d\n", c3, c2, c1);
	} 

	return 0;
}
