#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2            //大写 大写


void init(char arr[ROWS][COLS], int x,int y, char ch );  //写全 保持一致   初始化
void pr(char arr1[ROWS][COLS], int xi, int yi);           //       打印
void setmine(char arr[ROWS][COLS], int x, int y);  //布雷
void input(char arr[ROWS][COLS],char arr1[ROWS][COLS], int x, int y); //输入坐标
int findmine(char arr[ROWS][COLS], int x, int y);