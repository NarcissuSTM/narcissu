#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//typedef unsigned int uint;      // �����ض���
//
//int main()
//{
//	unsigned int num = 0;       // ����������Ϊͬһ����������
//	uint num2 = 1;              //ͬ��
//
//	return 0;
//}



//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);    // �ֲ��������������� ����������
//}                        //���� int a   ++����2 ����  ��˷���
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;            //����� 2 2 2 2 2 2 2 2 2 2
//}

//static
//���ξֲ�����
//����ȫ�ֱ���
//���κ���


//���ξֲ�����


//void test()
//{
//	static int a = 1;     // static  ���ξֲ�������ʱ�򣬾ֲ�������������������
//	a++;                   //  �����ϣ�static���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢����
//	printf("%d ", a);      //  Ӱ���˱������������ڣ��������ڱ䳤���ͳ��������������һ����
//}                       
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;            //����� 2 3 4 5 6 7 8 9 10 11
//}



//ȫ�ֱ���

//extern int g_val;  //�����ⲿ����  
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}



//���κ���

//int Add(int x, int y)    // voidָ������
//{                         //�������Բ�����
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//}
