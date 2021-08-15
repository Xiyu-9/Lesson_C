#define _CRT_SECURE_NO_WARNINGS 1


//写一个函数可以判断一个数是不是素数。
//#include<math.h>
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j<= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//	
//}
//int main()
//{
//	//打印100-200之间的素数
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d,i");
//	}
//	return 0;
//}


//写一个函数判断一年是不是闰年。
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int mian()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if (1 == is_leap_year(year))
//		{
//			printf("%d", year);
//		}
//	}
//	return 0;
//}



//写一个函数，实现一个整形有序数组的二分查找。
					//本质上arr是一个指针，数组传参的时候传的是首元素的地址

//int binary_search(int arr[], int k,int sz)
//{
//	//算法实现
//	int left = 0;
//	
//    int right = sz - 1;//右下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体某个数
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n");
//	}
//
//}




//写一个函数，每调用一次这个函数，就会将num的值增加1。
//void Add(int* p)
//{
//	(*p)++;//考虑优先级后要加括号
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);//1
//	Add(&num);
//	printf("num=%d\n", num);//2
//	Add(&num);
//	printf("num=%d\n", num);//3
//	return 0;
//}



//接受一个整型值（无符号），按照顺序打印它的每一位。
//例如：
//输入：1234，输出 1 2 3 4.
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num); 
//	//递归
//	print(num);
//	//print(1234)
//	//print(123）4
//	//print(12) 3 4
//	//print(1) 2 3 4 
//	return 0;
//}


//编写函数不允许创建临时变量，求字符串的长度。
#include<string.h>

//int my_strlen(char* str)
//{
//	//计算字符串的长度
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}//创建临时变量

//不创建临时变量
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////把大事化小
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0
////3
//int main()
//{
//	char arr[] = "bit";
//	int len = strlen(arr);//求字符串长度
//	//printf("%d\n",len);
//
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//
//	printf("len=%d\n", len);
//	return 0;
//
//}



//求n的阶乘。（不考虑溢出）
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	//求n的阶乘
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);//循环的方式
//	printf("%d\n", ret);
//	return 0;
//
//}




//求第n个斐波那契数。（不考虑溢出）

//斐波那契数列
//1 1 2 3 5 8 13 21 34 55.....
//描述第n个斐波那契数Fib(n)
//n<=2, 1
//n>2, Fib(n-1)+Fib(n-2)

//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//测试第三个斐波那契数的计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}//效率低

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
//
//	}
//	return c;
//}//迭代
////50
////49 48
////48 47 47 46
////47 46 46 45 46 45 44  
////....
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD - 测试驱动开发
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("count=%d\n", count);
//	return 0;
//}