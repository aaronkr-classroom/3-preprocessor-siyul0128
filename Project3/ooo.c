// ooo.c
// Order Of Operations
#include <stdio.h>

int main(void) {
	// Slide 70 우선순위
	int a = 3 + 5 * 2 - 5;
	int b = 4 * 2 / 3 + 1;
	double c = 4 * 2. / 3 + 1;

	printf("%d\n", a); // 예측 결과: 8
	printf("%d\n", b); // 예측 결과: 3
	printf("%.5f\n", c); // 예측 결과: 3.66667


	return 0;
}