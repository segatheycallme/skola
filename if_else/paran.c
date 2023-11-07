/* Napisati program koji za uneti ceo broj vrsi proveru da li je paran ili ne paran i prikazuje odgovarajucu poruku */
#include <stdio.h>
int main() {
	int a;
	scanf("%d", &a);
	if (a%2) {
		printf("Uneli ste neparan\n");
	} else {
		printf("Uneli ste paran\n");
	}
	return 0;
}
