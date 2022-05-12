struct bodytile {
	int x;
	int y;
	char dir;
};

typedef struct bodytile bodytile;

bodytile gameboard[100][100];
void init_board(bodytile b[100][100]);
void put_new_shell(bodytile b[100][100]);

