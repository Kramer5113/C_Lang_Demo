#include"game.h"

#include<stdio.h>

void game()
{
	char board[ROW][COL] = { 0 };
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1)
    {
		playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		if (is_win(board, ROW, COL) != 'C')
			break;
		pcmove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		if (is_win(board, ROW, COL) != 'C')
			break;
	}
	if (is_win(board, ROW, COL) == '*')
	{
		printf("玩家赢\n");
	}
	else if (is_win(board, ROW, COL) == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void menu()
{
	printf("**************************************\n");
	printf("***1.PLAY********************2.QUIT***\n");
	printf("**************************************\n");
}
void test()
{
	int intput = 0;
	menu();
	do 
	{
		printf("请输入选择:>");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}

	}
	while (intput);
}
int main()
{
	test();
	return 0;
}