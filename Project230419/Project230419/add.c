#define _CRT_SECURE_NO_WARNINGS 1

//全局变量

//int g_val = 2022;

//static int g_val = 2022;   //此时无法使用该命令

//static 修饰全局变量的时候，这个全局变量的外部链接属性就变成的内部连接属性
//其他源文件( .c )就不能再使用到这个全局变量了

//static 修饰函数
//static int Add(int x, int y)    // 失去连接属性
//{
//	return x + y;
//}

//一个函数本来是具有外部连接属性的
//但是被static 修饰的时候，外部连接属性变成了内部连接属性，
//其他源文件( .c )就不能再使用到这个全局变量了