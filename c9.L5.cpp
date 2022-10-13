#include <stdio.h>
int main() {
	int x, i;
	printf("\nNhap so nguyen: ");
	scanf("%d", &x);
	printf("\nUoc cua %d la: ", x);
	for(i = 1; i <= x; i++) {
		if((x%i) == 0){
			printf("\n%d", i);
			printf("\n");
		}
	}
	
	return 0;
}
