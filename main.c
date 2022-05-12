#include <stdio.h>
#include "snake.h"

int main(void)
{
	bodytile gameboard[100][100];
	init_board(gameboard);
	put_new_shell(gameboard);
	printf("%c",gameboard[25][25].dir);
	return 0;
}
