#include"game.h"
void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{

		for (j = 0;j < col;j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}

		}
	printf("\n");
	if (i < row - 1)
	{
		for (j = 0;j < col;j++)
		{
			printf("---");
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}
}
void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	
	while (1)
	{
		scanf("%d%d", &x, &y);
		if (x <= row && x >= 1 && y >= 1 && y <= col)
		{
			if ((board[x - 1][y - 1]) == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("棋盘格已占用\n");
			}
		}
		else
		{
			printf("输入错误\n");
		}
	}

}
int is_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		for (j = 0;j < col;j++)
		{
			if (board[i][j] == ' ')
			{
				return 'C';
			}
		}
	}
	return 'Q';
}
void pcmove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0;i < row;i++)
	{
		if (board[i][0] == board[i][1] && board[i][2] == board[i][1] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	for (j = 0;j < col;j++)
	{
		if (board[0][1] == board[1][i] && board[2][i] == board[1][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (is_full(board, ROW, COL) == 1)
	{
		return 'Q';
	}
	else
	{
		return 'C';
	}
}