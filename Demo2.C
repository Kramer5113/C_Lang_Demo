#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//  向内存申请两个位置存放 打印字符串和字符 %S 用于字符的打印输出 第7行后0=\0表示字符串的结束
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//  向内存申请两个位置存放字符串 打印输出字符串个数 通过使用strlen函数（string length-计算字符串长度）
//  arr1输出个数为三 \0表示终止 不代表字符 arr2 在遇到\0后才终止 结果为遇到15个后
//  字符串的结束标志是一个\0的转义字符 在计算字符串长度的时候\0是结束标志 不算字符串内容
//  \n 同为转义字符 表示换行  \t 水平制表符 作用类似于TAB键 空不小的距离
//int main()
//{
//	printf("%d\n", strlen("c:\test\32\test.c"));
//	printf("%c\n", '\132');
//	printf("%c\n", '\x61');
//	return 0;
//}
//  在C中\ddd表示八进制对应的所对应的ASCII码 \xdd表示十六进制所对应的ASCII码
//
//int main()
//{
//	int coding = 0;
//	printf("你会去敲代码吗?  (1/0)>:");
//		scanf("%d", &coding);
//	if (coding == 1)
//	{
//		printf("大厂offer\n");
//	}
//	else 
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}
//  主函数起始 像内存申请一个空间coding 打印输出 语句  然后选择语法 再scanf向内输入数值 取地址coding
//  if语句 如coding为1 打印输出xxx else 否则打印输出xxx

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//	while (line<20000)
//	{
//		printf("敲一行代码：%d\n", line);
//		line++;
//	}
//	if (line >= 2000)
//		printf("好offer\n");
//	return 0;
//}
//  输入主函数 定义line向内存申请空间 打印输出语句 执行循环 如果line小于20000 打印输出语句 反复执行 直到line>=20000
//  输出好offer
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//	sum = Add(a, b);
//	sum = Add(num1, num2);
//
//	printf("sum=%d\n", sum);
//	
//	return 0;
//}
//  通过自定义函数定义ADD内申请两个int 再申请一个int 用于存放x+y的值 在返回值到下方
//  主函数 定义 num1 num2 sum a b sum函数加入上面的自定义函数 打印输出sum的值 


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//  主函数 定义一个数组存放1-10 再定义一个i 实现循环 当i<10时 打印输出i 直到达成目的 
//  93行中定义了一个存放10个整数数字的数组 其下标为 0 1 2 3 4 5 6 7 8 9


//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	printf("%d\n", c);
//	return 0;
//}
//  &代表按位与 同1为1其余为0 |代表按位或 有1为1 ^代表异或 对应的二进制位相同为0 相异为1
//  =为赋值 ==判断相等  a=a+10 等同于 a+=10
//  !取反  sizeof 计算变量或类型所占空间大小 单位字节


//int main()
//{
//	int arr[10] = { 0 };
//	int sz = 0;
//	printf("%d\n", sizeof(arr));
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	return 0;
//}
//  定义有10个整形的数组 定义sz 打印输出arr所占的空间大小  定义sz的数值 为arr总大小/单个大小=元素个数 打印输出

//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a > b)
//		printf("较大值是:%\n", a);
//	else
//		printf("较大值是:%d\n", b);
//	return 0;
//}
//
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 22;
//	int c = 0;
//	c = Max(a, b);     ()函数调用操作符
//	printf("c=%d\n", c);
//	return 0;
//}

