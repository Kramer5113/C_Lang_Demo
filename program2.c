#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>

//  在数列中寻找数(Look for numbers in a sequence)
int find_num(int arr[3][3], int k, int* row, int* col)
{
	int x = 0;
	int y = *col - 1;
	while (x <= *row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*row = x;            // 进行了传值调用
			*col = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3} ,{4,5,6} ,{7,8,9} };
	int num = 5;
	int x = 3;
	int y = 3;
	int ret = find_num(arr, num, &x, &y);
	if (ret == 1)
		printf("We found the location: row=%d col=%d\n",x,y);
	else
		printf("we faided\n");
	return 0;
}