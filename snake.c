#include <stdio.h>
#include "snake.h"

void init_board(bodytile b[10][10],end *first, end *tail)
{
	int y, x;
	bodytile n;
	for (y = 0; y < 10; y++){
		for (x = 0; x < 10; x++){

			n.x = x;
			n.y = y;
			n.dir = 'n';
			b[y][x] = n;
		}
	}
	n.x = 5;
	n.y = 5;
	n.dir = 'r';
	b[5][5] = n;
	first->x = 5;
	first->y = 5; 



	n.x = 6;
	n.y = 5;
	n.dir = 'u';
	b[5][6] = n;

	n.x = 6;
	n.y = 6;
	n.dir = 'u';
	b[6][6] = n;

	n.x = 6;
	n.y = 7;
	n.dir = 'u';
	b[7][6] = n;
	tail->x = 6;
	tail->y = 7;
}


void print_board(bodytile gameboard[10][10])
{
	int i, j; 
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (gameboard[i][j].dir != 'n')
				printf(" S");
			else
				printf(" *");

			
		}
		printf("\n");
	}
}
