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
//	//strcpy - string copy - �ַ�������
//	//strlen - string length -�ַ��������й�
//	return 0;
//}


//memset
//memory - �ڴ� set - ����

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//�ѡ�hello world��ǰ����ַ���hello���ĳ������*��
//	printf("%s\n", arr);
//	//***** world
//	return 0;
//}



//���庯��
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
//	//������ʹ��	
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}


//������ֵ
//void Swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//}//�����������-��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ����
// //���βε��޸��ǲ���ı�ʵ�ε�
//void Swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}//�����������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int tmp = 00;
//	printf("a=%d b=%d\n", a, b);
//	//Swap1(a, b);//��ֵ����
//	Swap2(&a, &b);//��ַ����
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
//}//��ʽ����

//#include <stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	//�����ɶ��
//	//ע��printf�����ķ���ֵ�Ǵ�ӡ����Ļ���ַ��ĸ���
//	return 0;
//}


//��������
//int Add(int x,int y);

#include"add.h"
int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	//��������
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

//�����Ķ���
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}



//�����ĵݹ�

//int main()
//{
//	printf("heh\n");
//	main();
//	return 0;
//}

