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


//�ú�����ʽ���������Ľϴ�ֵ

int max(int x, int y)             //���������������
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
	
	int z = max(a, b);             // �����������ֵ��������max-->�ٴ���z����ӡ�����
	printf("%d\n", z);
	return 0;
}