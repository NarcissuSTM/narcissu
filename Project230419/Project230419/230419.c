#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//typedef unsigned int uint;      // 类型重定义
//
//int main()
//{
//	unsigned int num = 0;       // 本处和下面为同一个定义类型
//	uint num2 = 1;              //同上
//
//	return 0;
//}



//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);    // 局部变量的生命周期 结束亦销毁
//}                        //进入 int a   ++等于2 结束  如此反复
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
//	return 0;            //结果是 2 2 2 2 2 2 2 2 2 2
//}

//static
//修饰局部变量
//修饰全局变量
//修饰函数


//修饰局部变量


//void test()
//{
//	static int a = 1;     // static  修饰局部变量的时候，局部变量出了作用域不销毁
//	a++;                   //  本质上，static修饰局部变量的时候，改变了变量的存储区域
//	printf("%d ", a);      //  影响了变量的生命周期，生命周期变长，和程序的生命周期是一样的
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
//	return 0;            //结果是 2 3 4 5 6 7 8 9 10 11
//}



//全局变量

//extern int g_val;  //声明外部符号  
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}



//修饰函数

//int Add(int x, int y)    // void指不返回
//{                         //函数可以不声明
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
