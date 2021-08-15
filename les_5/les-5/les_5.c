#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "########";
//	//               bit\0########
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	//strcpy - string copy - 字符串拷贝
//	//strlen - string length -字符串长度有关
//	return 0;
//}


//memset
//memory - 内存 set - 设置

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//把“hello world”前五个字符“hello”改成五个‘*’
//	printf("%s\n", arr);
//	//***** world
//	return 0;
//}



//定义函数
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数的使用	
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}


//交换数值
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}//不能完成任务-当实参传给形参的时候，形参其实是实参的一份零时拷贝
// //对形参的修改是不会改变实参的
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}//可以完成任务
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 00;
//	printf("a=%d b=%d\n", a, b);
//	//Swap1(a, b);//传值调用
//	Swap2(&a, &b);//传址调用
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d b=%d\n", a, b);
//	return 0;
// }



//int main()
//{
//	int len = 0;
//	//1
//	len = strlen("abc");
//	printf("%d\n", len);
//	//2
//	printf("%d\n", strlen("abc"));
//	return 0;
//}//链式访问

//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//结果是啥？
//	//注：printf函数的返回值是打印在屏幕上字符的个数
//	return 0;
//}


//函数声明
//int Add(int x,int y);

#include"add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//函数调用
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

//函数的定义
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}



//函数的递归

//int main()
//{
//	printf("heh\n");
//	main();
//	return 0;
//}

