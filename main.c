#include <stdio.h>
#include "snake.h"

int main(void)
{
	bodytile gameboard[10][10];
	end head;
	end tail;
	
	tail.x = 0;
	tail.y = 0;
	head.x = 0;
	head.y = 0;
	
	init_board(gameboard,&head,&tail);

	print_board(gameboard,&head,&tail);
	printf("\nhead(x,y)=(%d,%d)\n",head.x,head.y);
	printf("\ntail(x,y)=(%d,%d)",tail.x,tail.y);

	return 0;
}
