#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//����--һ����ͬ����Ԫ�صļ���

//
//int main()
//{
//	int arr[8];
	//char ch[5];
	//	int arr[8];
	//char ch[5];
	//int n = 8;
	//int arr[8];

	//int a = 10;//��ʼ��
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};//��ȫ��ʼ��
	//int arr[10] = { 1,2,3,4,5 };//����ȫ��ʼ��
	//int arr2[] = { 1,2,3,4,5 };
	//int arr2[5] = { 1,2,3,4,5 };

	//char ch1[5] = {'b', 'i', 't'};
	//char ch2[] = { 'b', 'i', 't' };

	//char ch3[5] = "bit";//b i t \0 0
	//char ch4[] = "bit";//b i t \0

	//char ch5[] = "bit";
	//[b i t \0]
	//char ch6[] = { 'b', 'i', 't' };
	//[b i t]

	//printf("%d\n", strlen(ch5));//3
	//printf("%d\n", strlen(ch6));//���ֵ

	//printf("%s\n", ch5);
	//printf("%s\n", ch6);


//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr[4]=5;//[]�±����ò�����
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr[0]));
//	printf("-------------\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//%p - �ǰ���ַ�ĸ�ʽ��ӡ - ʮ�����ƵĴ�ӡ

//int main()
//{
//	//printf("%x\n", 0x12);
//	//printf("%p\n", 0x12);
//
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//
//	return 0;
//}




int main()
{
	//printf("%x\n", 0x12);
	//printf("%p\n", 0x12);

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	int* p = arr;//��������������Ԫ�صĵ�ַ
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}

	return 0;
}