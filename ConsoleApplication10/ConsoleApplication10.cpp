// ConsoleApplication10.cpp: 定义控制台应用程序的入口点。
//
#include"stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int s;
	int i, n;
	srand(time_t(NULL));//设置随机数种子。
	scanf_s("%d", &s);//输入加和值。
	
		n = rand() % s;//获取一个0~s-1的随机数。
		printf("%d+%d=%d\n", n, s - n, s);//输出结果。
		printf("%d-%d=%d\n", n, s - n, s);//ke neng cuowu
		printf("%d*%d=%d\n", n, s / n, s);//突然
	return 0;
}

