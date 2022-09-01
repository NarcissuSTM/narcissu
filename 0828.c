#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello zhanan";
//	strcpy(arr1, arr2);    //函数，把arr2复制给arr1
//	printf("%s", arr1);
//	return 0;
//}

int main()
{
	char arr[] = "hello friend";
	memset(arr, 'x', 5);

	printf("%s\n", arr);

	return 0;
}
