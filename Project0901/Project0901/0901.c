#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}


//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//递归 - 函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
//
//	return 0;
//}

//p48-27:00


//void test(int n)
//{
//	if (n < 10000)            //栈溢出
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}

#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;     //临时变量count
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//
//	//模拟实现一个strlen函数
//	printf("%d\n",my_strlen(arr));
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}



//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);   //阶乘公式
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//
//	printf("%d\n", ret);
//	
//	return 0;
//}

//有一些功能：可以使用迭代的方式实现，也可以使用递归


//斐波那契数列--前两个数之和等于第三个数-- 1 1 2 3 5 8 13 21 ...
//n>2,Fib(n-1)+Fib(n-2)

//int	Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//效率低

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//
//	printf("%d\n", ret);
//
//	return 0;
//}


