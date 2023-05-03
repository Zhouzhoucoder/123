#define _CRT_SECURE_NO_WARNINGS 1

////写代码
////1.写出主函数(main函数)
////100-500 代码
////如何执行呢？ - C语言是从主函数的第一行开始执行的
////所以C语言代码中得有main函数-入口
////int 函数的返回类型(整型) main 函数名  { } 函数体
//
////有且仅有一个main函数
////1.一个工程中可以有多个.c文件
////2.但是多个.c文件中只能有一个main函数
//
////写个代码，在屏幕上打印：比特
////printf - 库函数 - 在屏幕上打印信息的
////printf 的使用，也得打招呼(引用头文件 stdio.h)
//
////包含头文件
//#include<stdio.h>
//int main()
//{
//	printf("比特\n");
//	return 0;
//}

//编译+链接+运行代码
//快捷键：1.ctrl + f5
//				2.ctrl + fn + f5
//				3.菜单中：[调试]->[开始执行不调试]
//程序执行的太快，没有看到
//为了看到结果，设置一下vs2013的属性(演示)


//数据类型
//计算机语言 - 写程序 - 解决生活中问题
//必须有能力来描述生活中的问题！
//购物商城 - 上架商品，价格 - 15.6元 - 小数
// 年龄 - 50
//C语言 - 浮点数
//          - 整型                                                


//a
//'a' - 字符a

//int main()
//{
//	//字符类型
//	char  ch = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	//long
//	//long long
//	
//	//单精度浮点型
//	float  weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//	return 0;
//} 
#include<stdio.h>
int main()
{
	/*printf("hehe\n");
	printf("bite\n");
	printf("%d\n",100)*/;//打印一个整数
	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
	//sizeof的单位是什么？- 字节byte
	printf("%d\n",sizeof(char));
	printf("%d\n",sizeof(short));
	printf("%d\n",sizeof(int));
	printf("%d\n",sizeof(long));
	printf("%d\n",sizeof(long long));
	printf("%d\n",sizeof(float));
	printf("%d\n",sizeof(double));
	return 0;
}
//计算机中的单位：
//bit - 比特位 - 存放一个二进制位的
//byte - 字节 = 8bit
//kb - 1024 byte
//mb - 1024 kb
//gb - 1024 mb
//tb - 1024 gb
//pb - 1024 tb
//
//C语言标准:
//sizeof(long)>=sizeof(int)