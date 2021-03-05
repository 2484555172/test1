#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

/*输入10个学生的成绩（0-100），计算平均分（保留一位小数）
并统计不及格（成绩低于60分）的学生人数*/
//#define N 10
//int main(void)
//{
//	int arr[N + 1] = { 0 };
//	int count = 0;
//	double ave = 0;
//	double sum = 0;
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < N; i++) 
//	{
//		if (arr[i] < 60)
//		{
//			count++;
//		}
//		sum += arr[i];
//	}
//	ave = sum / 10.0;
//	printf("%0.1lf ", ave);
//	printf("%d", count);
//	return 0;
//}


//输入10个数，找出其中绝对值最小的数，将它和最后一个数交换，然后输出这10个数

//#define N 10
//
//void Swap(int arr[N],int minpos,int n)
//{
//	int k = 0;
//	k = arr[n];
//	arr[n] = arr[minpos];
//	arr[minpos] = k;
//
//}
//
//int main(void)
//{
//	int arr[N + 1] = { 0 };
//	int t = 0;
//	int minpos = 0;
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 1; i < N; i++)
//	{
//		if (fabs(arr[minpos]) > fabs(arr[i]))
//		{
//			t = minpos;
//			minpos = i;
//			i = t;
//		}
//	}
//	//printf("%d", minpos);
//	Swap(arr,minpos,N-1);
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
 


//int main(void)
//{
//	double  x;
//	double y = 0;
//	scanf("%lf", &x);
//	if (x < 1)
//	{
//		printf("%0.2lf", x);
//	}
//	if (x >= 1 && x < 10)
//	{
//		y = 2 * x - 1;
//		printf("%0.2lf", y);
//	}
//	if (x >= 10)
//	{
//		y = 3 * x - 11;
//		printf("%0.2lf", y);
//	}
//	return 0;
//}


//编程,输入一个１０进制正整数,然后输出它所对应的八进制数

//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	printf("%o", n);
//	return 0;
//}

//#define N 10

//int main(void)
//{
//	char ch = '*';
//	int i, j;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("%c", ch);
//		//	printf("二爷牛逼");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < N-1; i++)
//	{
//		for (j = 0; j <=i+1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*N-3-2*i; j++)
//		{
//			printf("%c", ch);
//		//	printf("二爷牛逼");
//		}
//		printf("\n");
//	}
//}


