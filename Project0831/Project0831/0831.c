#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "abc";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int get_max(int x,int y)
//{
//	int z = 0;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//�����ĵ���
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}


//�����������͵ĵط�дvoid����ʾ��������������κ�ֵ��Ҳ����Ҫ����
//void Swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//дһ������ - ����2�����α�����ֵ
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	Swap(&a,&b);
//	printf("������:a=%d b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//} 


//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}


//int is_leap_year(int x)
//{
//	if (x % 4 == 0)
//	{
//		if (x % 100 != 0)
//		{
//			return 1;
//		}
//		if (x % 400 == 0)
//		{
//			return 1;
//		}
//	
//	}
//	else
//		return 0;
//}

//���õ�һ��д���뷽ʽ
//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n%100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}


//int binary_search(int a[], int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid < k])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˾ͷ����ҵ���λ�õ��±�
//	//�Ҳ����ͷ���-1
//	//����arr���Σ�ʵ�ʴ��ݵĲ�������ı���
//	//��������ȥ��������Ԫ�صĵ�ַ
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	return 0;
//}


//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	return 0;
// }


//������Ƕ�׵��ú���ʽ����
//void test3()
//{
//	printf("hehe\n");
//}
//
//int test2()
//{
//	test3();
//	return 0;
//}
//
//int main()
//{
//	test2();
//	return 0;
//}


//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//	//��ʽ����
//	//printf("%d\n", strlen("abc"));
//
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//
//	//printf("%s\n", strcpy(arr1, arr2));
//
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	//��������һ��
//	int Add(int, int);
//
//	int c = Add(a, b);
//
//	printf("%d\n", c);
//
//	return 0;
//}
//
////�����Ķ���
//int Add(int x, int y)
//{
//	return x + y;
//}

//
//#include "add.h"
#include "sub.h"

//���뾲̬��
#pragma comment(lib,"sub.lib")

int main()
{
	int a = 10;
	int b = 20;
	//int c = Add(a, b);
	int c = Sub(a, b);
	printf("%d\n", c);
	return 0;
}