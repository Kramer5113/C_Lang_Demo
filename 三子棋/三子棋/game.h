#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define ROW 3
#define COL 3


void Initboard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void pcmove(char board[ROW][COL], int row, int col);
char is_win(char board[ROW][COL], int row, int col);