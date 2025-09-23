// put.c
#include <stdio.h>

#define EN_MSG "I'm sleepy"
#define KO_MSG "배고 파 죽겠다~"

int main(void) {
	// 0. printf() // 서식 문자열 출력하기
	printf("Useing printf(: %s", EN_MSG);

	// 1. puts() // 문자열 출력하기
	puts("\nUsing puts(): ");
	puts(KO_MSG); // 줄바꿈 있다

	// 2. putchar() // 문자 출력하기
	puts("\nUsing putchar(): ");
	for (int i = 0; EN_MSG[i] != '\0'; i++) {
		putchar(EN_MSG[i]); // putchar(i) = putc(i, stdout)

	}

	// 3. putc()
	puts("\nUsing putchar(): ");
	for (int i = 0; KO_MSG[i] != '\0'; i++) {
		putc(KO_MSG[i], stdout);

	}

	return 0;

}