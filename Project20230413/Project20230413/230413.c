#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("enter two numbers:");
//	scanf("%d%d",& a, &b);
//	if (a > b)
//	{
//		printf("%d\n", a);
//	}
//	else
//		printf("%d\n", b);
//	return 0;
//}


//用函数方式求两个数的较大值

int max(int x, int y)             //根据情况设置类型
{
	if (x > y)
		return x;
	else
		return y;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("enter two numbers:");
	scanf("%d%d", &a, &b);
	
	int z = max(a, b);             // 把输入的两个值传给函数max-->再传给z，打印输出。
	printf("%d\n", z);
	return 0;
}