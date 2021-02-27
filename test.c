#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <math.h>

//输入10个整数，将其中最小的数与第一个数对换，把最大的数与最后一个数对换
//写三个函数: ①输入10个数；②进行处理；③输出10个数
	
#define N 10
void Swap(int arr[N], int x, int y)
{
	int temp = 0;
	temp = arr[x];
	arr[x] = arr[y];
	arr[y] = temp;
}

void Print(int arr[N], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

void Scan_f(int arr[N],int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
}

void Sort_plus(int arr[N])
{
	int minpos = 0;
	int maxpos = N - 1;
	for (int j = 0; j < N; j++)
	{
		if (arr[minpos] > arr[j])
		{
			minpos = j;
		}
		Swap(arr, 0, minpos);
	}
	for (int j = 0; j < N; j++)
	{
		if (arr[maxpos] < arr[j])
		{
			maxpos = j;
		}
		Swap(arr, N - 1, maxpos);
	}

}
int main(void)
{
	int arr[N];
	Scan_f(arr,N);
	Sort_plus(arr);
	Print(arr, N);
	return 0;
}
	




//编写一个程序，输入a、b、c三个值，输出其中最大值
//int Max_find(int max, int a, int b, int c)
//{
//	if (max < a)
//	{
//		max = a;
//	}
//	if (max < b)
//	{
//		max = b;
//	}
//	if (max < c)
//	{
//		max = c;
//	}
//	printf("%d", max);
//}
//
//int main(void)
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	int max = 0;
//    Max_find(max, a, b, c);
//	return 0;
//}


//计算t=1+1/2+1/3+...+1/n
//int main(void)
//{
//	double t = 0;
//	int n;
//	scanf("%d", &n);
//	for (double i = 1.0; i <= n; i++)
//	{
//		t += 1.0 / i;
//	}
//	printf("%0.6lf", t);
//	return 0;
//}


//计算1~N之间所有奇数之和

//int main(void)
//{
//	int N;
//	int S = 0;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		if (i % 2 != 0)
//		{
//			S += i;
//		}
//	}
//	printf("%d", S);
//	return 0;
//}



//求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个一位的整数

//int main(void)
//{
//	int S = 0;
//	int a, n;
//	int m;
//	scanf("%d%d", &a, &n);
//	m = a;
//	if (n >= 1 && a <= 9)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			S += a;
//			a = a * 10 + m;
//		}
//	}
//	printf("%d", S); 
//	return 0;
//}



//最大数问题

//int main(void)
//{
//	int n;
//	int j;
//	scanf("%d", &n);
//	j = n;
//	while (n != -1)
//	{
//		if (n >= j)
//			j = n;
//		scanf("%d", &n);
//	}
//	printf("%d\n", j);
//
//	return 0;
//}




//斐波那契数列

//int  F(int N)
//{
//	if (N <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return F(N - 1) + F(N - 2);
//	}
//}
//int main(void)
//{
//	int N;
//	int ret = 0;
//	scanf("%d", &N);
//	if (N <= 40)
//	{
//		for (int i = 1; i <= N; i++)
//		{
//			ret = F(i);
//			printf("%d ", ret);
//		}
//	}
//	return 0;
//}
