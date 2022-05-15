#include <stdio.h>
#include "snake.h"

void init_board(bodytile b[10][10],end *head, end *tail)
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
	n.dir = 'l';
	b[5][5] = n;
	head->x = 5;
	head->y = 5; 



	n.x = 6;
	n.y = 5;
	n.dir = 'l';
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


void print_board(bodytile gameboard[10][10],end *head,end *tail)
{
	int i, j; 
	for (i = 0; i < 10; i++){
		for (j = 0; j < 10; j++){
			if (gameboard[i][j].dir != 'n'){
				if (gameboard[i][j].x == tail->x && gameboard[i][j].y == tail->y)
					printf(" T");
				else if (gameboard[i][j].x == head->x && gameboard[i][j].y == head->y)
					printf(" H");
				else
					printf(" S");
			}
			else 
				printf(" *");
		}
		printf("\n");
	}
}


void move_snake(bodytile gameboard[10][10],end *head, end *tail)
{
	/* store the directions at the ends */
	char head_next_dir = gameboard[head->y][head->x].dir;
	char tail_next_dir = gameboard[tail->y][tail->x].dir;

	/* set the next head tile's head's dir be the same */
	/* and also update the head's coords in the gameboard. */
	if (head_next_dir == 'u'){
		gameboard[head->y-1][head->x].dir = 'u';
		head->y--;
	}
	if (head_next_dir == 'l'){
		gameboard[head->y][head->x-1].dir = 'l';
		head->x--;
	}
	if (head_next_dir == 'd'){
		gameboard[head->y+1][head->x].dir = 'd';
		head->y++;
	}
	if (head_next_dir == 'r'){
		gameboard[head->y][head->x+1].dir = 'r';
		head->x++;
	}

	/* make the current tail's direction to nothing */
	gameboard[tail->y][tail->x].dir = 'n';

	/* update the tail's coords in the gameboard */
	if (tail_next_dir == 'u')
		tail->y--;
	if (tail_next_dir == 'l')
		tail->x--;
	if (tail_next_dir == 'd')
		tail->y++;
	if (tail_next_dir == 'r')
		tail->x++;
	
} 
