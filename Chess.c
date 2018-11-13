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

void PrintBoard(int array[])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("  |");
		}
	}
}