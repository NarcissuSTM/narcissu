#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//int a = 7 / 2;  //-->3
//	//int b = 7 % 2;   //-->1 取模
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//	// '/' 除号两端都是整数的时候，执行的是证书的除法。如果两端有一个是浮点数就执行浮点数的除法
//	float a = 7 / 2.0;  //-->3
//	int b = 7 % 2;   //-->1 取模
//	//取模操作符的两个操作符只能是整数
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//int main()
//{
//	int a = 0; //初始化
//	int a = 20; // 赋值
//
//	a = a + 3;
//	a += 3;
//
//	return 0;
//}

//   '!' 逻辑反操作-->假的变成真的，真的变成假的
//  c语言中
//  0表示假
//  非0表示真

//int main()
//{
//	int flag = 0;
//	if (!flag) 
//	{
//		printf("xiumu\n");
//	}
//	return 0;
//}


// sizeof是操作符，单目操作符

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));  //4
//	printf("%d\n", sizeof(int));  //4
//	printf("%d\n", sizeof a );  //4
//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));  //40 计算整个数组的大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));  //4
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));  //10 计算数组元素个数
//
//	return 0;
//}


//++

//int main()
//{
//	int a = 10;
//	int b = a++; // 先使用在++ >> a 11
//	             //               b 10
//
//	int b = ++a;  //先++再使用 >> a 11
//	                //            b 11
//
//	return 0;
//}


//  (类型) 强制转换类型

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);
//
//	// 3.14字面浮点数，编译器默认理解为double类型
//
//	return 0;
//}


// && 逻辑于 >>并且
//  || 逻辑或  >>并且

//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a && b)   // 判断  a和b都为真则输出
//	{
//		printf("hanpi\n");
//	}
//	return 0;
//}


//条件操作符 -- 三目操作符
// exp1？exp2：exp3
//  真    算    不算
//  假    不算    算

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

//逗号表达式

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
//	arr[3] = 20;   // 20赋值给第4个元素  []就是下标引用操作符 arr和3就是[]的操作数
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int mian()
//{
//	int sum = Add(2, 3);  // ()就是函数调用操作符，Add和2，3都是()的操作数
//	return 0;
//}

