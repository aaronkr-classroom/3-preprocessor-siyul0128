// try.c
#include <stdio.h>
//#include "../../calc.h"

#define NAME "Aaron"
#define VERSION_NUMBER 2.0
#define GAME_ID 0xafed3218 // 16���� (0x���� �����ϸ�...)
#define PLAYER_LIVES 015    // 8�ܹ� (0���� �����ϸ�...)

#define ADD_FIVE(i) (i+5)

int main(void) {
	for (int i = 0; i <= 10; i = ADD_FIVE(i)) {
		printf("(%d)\tMy name is %s!\n", i, NAME);

	}

	return 0;
}