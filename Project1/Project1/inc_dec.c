// inc_dec.c
#include <stdio.h>

int main(void) {
	int x = 5;
	int y;
	int post, pre; // post = i++, pre = ++i

	printf("x: %d\n", x); // 5
	y = x;
	printf("y: %d\n", y); // 5

	post = x++; //6
	printf("x++: %d, x: %d\n", post, x); // 6, 6
	printf("x: %d\n", x); // 6

	pre = ++y; // 6
	printf("++y: %d, y: %d\n", pre, y); // 6, 6
	printf("y: %d\n", y); // 6

	return 0;
}