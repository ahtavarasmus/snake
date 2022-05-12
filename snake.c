#include <stdio.h>
#include "snake.h"

void init_board(bodytile b[100][100])
{
	int y, x;
	bodytile n;
	for (y = 0; y < 100; y++){
		for (x = 0; x < 100; x++){

			n.x = x;
			n.y = y;
			n.dir = 'n';
			b[y][x] = n;
		}
	}
}

void put_new_shell(bodytile b[100][100])
{
	bodytile new_tile = {25,25,'u'};
	b[25][25] = new_tile;
}



