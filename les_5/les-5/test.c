#define _CRT_SECURE_NO_WARNINGS 1


//дһ�����������ж�һ�����ǲ���������
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
//	//��ӡ100-200֮�������
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d,i");
//	}
//	return 0;
//}


//дһ�������ж�һ���ǲ������ꡣ
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
//		//�ж�year�Ƿ�Ϊ����
//		if (1 == is_leap_year(year))
//		{
//			printf("%d", year);
//		}
//	}
//	return 0;
//}



//дһ��������ʵ��һ��������������Ķ��ֲ��ҡ�
					//������arr��һ��ָ�룬���鴫�ε�ʱ�򴫵�����Ԫ�صĵ�ַ

//int binary_search(int arr[], int k,int sz)
//{
//	//�㷨ʵ��
//	int left = 0;
//	
//    int right = sz - 1;//���±�
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
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
//	//���ֲ���
//	//��һ�����������в��Ҿ���ĳ����
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int ret=binary_search(arr, k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n");
//	}
//
//}




//дһ��������ÿ����һ������������ͻὫnum��ֵ����1��
//void Add(int* p)
//{
//	(*p)++;//�������ȼ���Ҫ������
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



//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ��
//���磺
//���룺1234����� 1 2 3 4.
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
//	//�ݹ�
//	print(num);
//	//print(1234)
//	//print(123��4
//	//print(12) 3 4
//	//print(1) 2 3 4 
//	return 0;
//}


//��д��������������ʱ���������ַ����ĳ��ȡ�
#include<string.h>

//int my_strlen(char* str)
//{
//	//�����ַ����ĳ���
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}//������ʱ����

//��������ʱ����
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////�Ѵ��»�С
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0
////3
//int main()
//{
//	char arr[] = "bit";
//	int len = strlen(arr);//���ַ�������
//	//printf("%d\n",len);
//
//	//ģ��ʵ����һ��strlen����
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//
//	printf("len=%d\n", len);
//	return 0;
//
//}



//��n�Ľ׳ˡ��������������
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
//	//��n�Ľ׳�
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//
//}




//���n��쳲����������������������

//쳲���������
//1 1 2 3 5 8 13 21 34 55.....
//������n��쳲�������Fib(n)
//n<=2, 1
//n>2, Fib(n-1)+Fib(n-2)

//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//���Ե�����쳲��������ļ������
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}//Ч�ʵ�

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
//}//����
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
//	//TDD - ������������
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("count=%d\n", count);
//	return 0;
//}