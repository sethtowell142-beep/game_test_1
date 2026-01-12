#define _CRT_SECURE_NO_WARNINGS 
#include "minesweep.h"




void init(char arr[ROWS][COLS], int x, int y, char ch)   
{
	int  g = 0;
	for (g = 0; g < x; g++)
	{
		int k = 0;
		for (k = 0; k < x; k++)
		{
			arr[g][k] = ch;
	
		}
		
	}
}
void pr(char arr1[ROWS][COLS], int xi, int yi)
{
	printf("---minesweeps---\n");
	int gi = 0;
	for (gi = 0; gi <= ROW; gi++)
	{
		printf("%d ", gi);
	}
	printf("\n");
	for (gi = 1; gi <= ROW; gi++)
	{
		printf("%d ", gi);
		int ki = 0;
		for (ki = 1; ki <= COL; ki++)
		{
			
			printf("%c ", arr1[gi][ki]);
		}
		printf("\n");
	}
}
void setmine(char arr[ROWS][COLS], int x, int y)
{

	int mine = 10;
	while (mine)
	{
		int j = rand() % x + 1;  //小于  某某
		int k = rand() % y + 1;
		if (arr[j][k] == '0')
		{
		
			arr[j][k] = '1';
			mine--;
		}
		
	}
}
void input(char arr[ROWS][COLS],char arr1[ROWS][COLS], int x, int y)
{
	int a = 0;
	int b = 0;
	int win = 0;

	while (win<71)
	{
		scanf("%d %d", &a, &b);
		if ((a >= 1) && (a <= x) && (b >= 1) && b <= y)
		{
			if (arr[a][b] == '1')
			{
				printf("game over");
				break;
				pr(arr, x, y);
			}
			else
			{
				if (arr1[a][b] != '*')
				{
					int c = findmine(arr, a, b);      //确认返回类型
					arr1[a][b] = c + '0';               //确认打印类型，是否需要转换。
					pr(arr1, x, y);
					win++;
				}
				else
				{
					printf("err");
				}
			}
		}
		else
		{
			printf("intput again");
		}
	
	}
	if (win == 71)
	{
		printf("\nwin");
		pr(arr, x, y);
	}

}
int findmine(char arr[ROWS][COLS], int x, int y)
{
	int a = 0;
	int b = 0;
	int count = 0;
	for (a = -1; a <= 1; a++)
	{
		for (b = -1; b <= 1; b++)
		{
			if (arr[x+a][y+b] == '1')            //'1' - '0' = 1     '0' = 48     '1' = 49    '2' = 50
			{
				count++;
			}
		}
	}
	return count;
}