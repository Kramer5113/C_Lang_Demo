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
		printf("���Ӯ\n");
	}
	else if (is_win(board, ROW, COL) == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
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
		printf("������ѡ��:>");
		scanf("%d", &intput);
		switch (intput)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
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