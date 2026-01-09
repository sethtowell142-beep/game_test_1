#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void menu()
{
	
	printf("1.play\n");
	printf("0.exit\n");
}
void game()
{
	int ret = rand() % 100 + 1;
	int num = -1;
	//printf("%d\n", ret);
	while (num != ret)
	{
		scanf("%d", &num);
		if (num > ret)
		{
			printf("your number is bigger than it\n");
		}
		else if (num < ret)
		{
			printf("your number is less than it\n");
		}
		else
		{
			printf("u are right\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	printf("input\n");
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("intput again\n");
		}

	} while (input);
	return 0;
}