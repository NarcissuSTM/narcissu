#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//int a = 7 / 2;  //-->3
//	//int b = 7 % 2;   //-->1 ȡģ
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	// '/' �������˶���������ʱ��ִ�е���֤��ĳ��������������һ���Ǹ�������ִ�и������ĳ���
//	float a = 7 / 2.0;  //-->3
//	int b = 7 % 2;   //-->1 ȡģ
//	//ȡģ������������������ֻ��������
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 0; //��ʼ��
//	int a = 20; // ��ֵ
//
//	a = a + 3;
//	a += 3;
//
//	return 0;
//}

//   '!' �߼�������-->�ٵı����ģ���ı�ɼٵ�
//  c������
//  0��ʾ��
//  ��0��ʾ��

//int main()
//{
//	int flag = 0;
//	if (!flag) 
//	{
//		printf("xiumu\n");
//	}
//	return 0;
//}


// sizeof�ǲ���������Ŀ������

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));  //4
//	printf("%d\n", sizeof(int));  //4
//	printf("%d\n", sizeof a );  //4
//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));  //40 ������������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0]));  //4
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));  //10 ��������Ԫ�ظ���
//
//	return 0;
//}


//++

//int main()
//{
//	int a = 10;
//	int b = a++; // ��ʹ����++ >> a 11
//	             //               b 10
//
//	int b = ++a;  //��++��ʹ�� >> a 11
//	                //            b 11
//
//	return 0;
//}


//  (����) ǿ��ת������

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	// 3.14���渡������������Ĭ�����Ϊdouble����
//
//	return 0;
//}


// && �߼��� >>����
//  || �߼���  >>����

//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a && b)   // �ж�  a��b��Ϊ�������
//	{
//		printf("hanpi\n");
//	}
//	return 0;
//}


//���������� -- ��Ŀ������
// exp1��exp2��exp3
//  ��    ��    ����
//  ��    ����    ��

//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int r = (a > b ? a : b);
//	printf("%d\n", r);
//
//	return 0;
//}

//���ű��ʽ

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//          c=8         a=28     5
//	int d = (c = a - 2, a = b + c, c - 3);
//	printf("%d\n", d);  //    5
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9};
//	arr[3] = 20;   // 20��ֵ����4��Ԫ��  []�����±����ò����� arr��3����[]�Ĳ�����
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int mian()
//{
//	int sum = Add(2, 3);  // ()���Ǻ������ò�������Add��2��3����()�Ĳ�����
//	return 0;
//}

