/* Date su kordinate 3 temene pravouganika sa celim brojevima cije su stranice paralelne sa kordinatnim osama.
 * Temena su data u proizvoljnom redosledu.
 * Napisati program kojim se odredjuje kordinata cetvrtog temena*/
#include <stdio.h>
int main() {
	int x1,y1;
	int x2,y2;
	int x3,y3;
	int x4,y4;

	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);

	if (x1==x2) {
		x4 = x3;
	}
	if (x2==x3) {
		x4 = x1;
	}
	if (x3==x1) {
		x4 = x2;
	}
	if (y1==y2) {
		y4 = y3;
	}
	if (y2==y3) {
		y4 = y1;
	}
	if (y3==y1) {
		y4 = y2;
	}
	printf("%d %d\n", x4, y4);
	
	return 0;
}
