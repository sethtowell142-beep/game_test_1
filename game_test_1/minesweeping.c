#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include "minesweep.h"
void game()
{
	char down[ROWS][COLS] = { 0 };
	char up[ROWS][COLS] = { 0 };
	init(down, ROWS, COLS, '0');
	init(up, ROWS, COLS, '*');
	setmine(down, ROW, COL);
	//pr(down, ROWS, COLS);
	//pr(up, ROWS, COLS);
	//pr(up, ROWS, COLS);
	input(down,up, ROW, COL);

}
void menu()
{
	printf("\nminesweeping\n");
	printf("xxxxxxxxxxxxxxx\n");
	printf("xxxxx1.playxxxx\n");
	printf("xxxxx0.exitxxxx\n");
	printf("xxxxxxxxxxxxxxx\n");
}

int main()
{
	int in = 0;
	srand((unsigned int)time(NULL));//转变的数字类型
	do {
		menu();
		scanf("%d", &in);
		switch (in)
		{
		case 1:
			game();
			break;
		case 0:
			printf("\n exit");
			break;
		default:
			printf("\n err");
			break;
		}

	} while (in);
	return 0;
}