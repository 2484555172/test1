#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

/*����10��ѧ���ĳɼ���0-100��������ƽ���֣�����һλС����
��ͳ�Ʋ����񣨳ɼ�����60�֣���ѧ������*/
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


//����10�������ҳ����о���ֵ��С���������������һ����������Ȼ�������10����

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


//���,����һ����������������,Ȼ�����������Ӧ�İ˽�����

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
//		//	printf("��үţ��");
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
//		//	printf("��үţ��");
//		}
//		printf("\n");
//	}
//}


