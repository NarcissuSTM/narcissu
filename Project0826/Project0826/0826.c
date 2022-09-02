#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	for (a = 1; a < 100; a++)
//	{
//		if (a % 3 == 0)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = 0;
//
//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2 -> i-1之间去使除i,看能不能整除
//		int p = 0;
//		for (p = 2; p < i; p++)
//		{
//			if (i % p == 0)
//			{
//				break;
//			}
//		}
//		if (i == p)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//goto -- 跳转（一个函数范围内）
//关机

#include <string.h>
#include <stdlib.h>

int main()
{
	//shutdown -s -t 60；设置60s后关机
	//shutdown -a;取消
	char input[20] = { 0 };
	system("shutdown - s - t 60");

	while (1)
	{
		printf("请注意，你的电脑在一分钟后关机，如果输入:摆烂，就取消关机\n");
		scanf("%s", input);

		if (strcmp(input, "摆烂") == 0)
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}