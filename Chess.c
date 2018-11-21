#include"Chess.h"

void Init_board(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', sizeof(board[0][0])*row*col);
}

void Display_board(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i<row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i != row)
		{
			printf("---|---|---\n");

		}
	}
}

void Player_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走棋:\n");
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		if (x > 0 && x < row && y>0 && y < col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("此坐标已有值！\n");
			}
		}
		else
		{
			printf("输入的坐标不存在！\n");
		}
	}
}

void Computer_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走棋：");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '0';
			break;
		}
	}
}

int Check_full(char board[COL][ROW], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}