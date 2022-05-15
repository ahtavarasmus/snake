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

/* init_board initializes the board with snake and empty tiles */
void init_board(bodytile b[10][10],end *, end *);

/* print_board just prints the board and snake */
void print_board(bodytile gameboard[10][10],end *, end *);

/* move_snake returns 1 if move was successful and 0 if not */
int move_snake(bodytile gameboard[10][10],end *, end *);

/* change_dir changes the snake's head tile's direction. If illegal change it doesn't do anything. */
void change_dir(char dir, bodytile gameboard[10][10],end *);
