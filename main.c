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


	if (!move_snake(gameboard,&head,&tail)){
		printf("We lost!\n");
		return 0;
	}
	print_board(gameboard,&head,&tail);
	if (!move_snake(gameboard,&head,&tail)){
		printf("We lost!\n");
		return 0;
	}
	print_board(gameboard,&head,&tail);
	if (!move_snake(gameboard,&head,&tail)){
		printf("We lost!\n");
		return 0;
	}
	print_board(gameboard,&head,&tail);
	if (!move_snake(gameboard,&head,&tail)){
		printf("We lost!\n");
		return 0;
	}

	change_dir('u',gameboard,&head);
	print_board(gameboard,&head,&tail);
	if (!move_snake(gameboard,&head,&tail)){
		printf("We lost!\n");
		return 0;
	}
	print_board(gameboard,&head,&tail);
	if (!move_snake(gameboard,&head,&tail)){
		printf("We lost!\n");
		return 0;
	}

	change_dir('l',gameboard,&head);
	print_board(gameboard,&head,&tail);
	if (!move_snake(gameboard,&head,&tail)){
		printf("We lost!\n");
		return 0;
	}
	print_board(gameboard,&head,&tail);
	if (!move_snake(gameboard,&head,&tail)){
		printf("We lost!\n");
		return 0;
	}

	return 0;
}
