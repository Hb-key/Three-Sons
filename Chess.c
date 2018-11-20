#include"Chess.h"
void menu()
{
	printf("***************************\n");
	printf("****   Welcome Chess   ****\n");
	printf("***************************\n");
	printf("****  1.play   0.exit  ****\n");
	printf("***************************\n");
}

int main()
{
	int input = 0;
	scanf("&d", &input);
	switch (input)
	{
	case 1:
		Game();
		break;
	case 0:
		printf("Exit!!!\n");
		break;
	default:
		printf("Please enter again:\n");
		break;
	}
}

void Init_board(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', sizeof(board[0][0])*row*col);
}

void Display_board(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i<row; i++)
	{
		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		if (i != row)
		{
			printf("---|---|---\n");

		}
	}
}
