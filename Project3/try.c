// try.c
#include <stdio.h>
//#include "../../calc.h"

#define NAME "Aaron"
#define VERSION_NUMBER 2.0
#define GAME_ID 0xafed3218 // 16진법 (0x부터 시작하면...)
#define PLAYER_LIVES 015    // 8잔법 (0부터 시작하면...)

#define ADD_FIVE(i) (i+5)

int main(void) {
	for (int i = 0; i <= 10; i = ADD_FIVE(i)) {
		printf("(%d)\tMy name is %s!\n", i, NAME);

	}

	return 0;
}