#include <stdio.h>
#include "snake.h"

int main(void)
{
	bodytile gameboard[10][10];
	end first;
	end tail;
	
	
	init_board(gameboard,&first,&tail);

	print_board(gameboard);

	return 0;
}
