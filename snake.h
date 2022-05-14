struct bodytile {
	int x;
	int y;
	char dir;
};
typedef struct bodytile bodytile;
struct end {
	int x;
	int y;
};
typedef struct end end;

bodytile gameboard[10][10];
void init_board(bodytile b[10][10],end *, end *);

void print_board(bodytile gameboard[10][10]);

