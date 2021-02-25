#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <math.h>


//void Q_jfc(a, b, k)
//{
//	double x1, x2;
//	x1 = (sqrt(k) - b) / 2 * a;
//	x2 = (-sqrt(k) - b) / 2 * a;
//	printf("%")
//}
//
//
//int main(void)
//{
//	double k;
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	k = b * b - (4 * a*c);
//	if (k > 0)
//	{
//		Q_jfc(a, b, k);
//	}
//	else if (k < 0)
//	{
//
//	}
//	else
//	{
//
//	}
//	return 0;
//}


//#define N 10
//int main(void)
//{
//	
//	int n;
//	int sum = 0;
//	scanf("%d", &n);
//	int arr[N][N];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j||i+j==n-1)
//				sum += arr[i][j];
//		}
//	}
//
//		printf("%d", sum);
//
//	return 0;
//}



//int main(void)
//{
//	int arr[3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[0][i]);
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[1][i]);
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[2][i]);
//	}
//
//	printf("%d ", arr[0][0] + arr[1][1] + arr[2][2]);
//	printf("%d", arr[0][2] + arr[1][1] + arr[2][0]);
//
//	return 0;
//}


//int main(void)
//{
//	int arr[10];
//	for (int i = 0; i <= 9; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int j = 9; j >= 0; j--)
//	{
//		printf("%d ", arr[j]);
//	}
//
//	return 0;
//}


//int main(void)
//{
//	int arr[100];
//	int count = 0;
//	int sum = 0;
//	double s = 0;
//	for (int i = 0; i < 20; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int j = 0; j < 20; j++)
//	{
//		if (arr[j] < 0)
//		{
//			count++;
//		}
//		if(arr[j]>0)
//		{
//			sum += arr[j];
//		}
//	}
//	s = (sum) / (20.0 - count);
//	printf("%d\n", count);
//	printf("%0.2lf\n", s);
//	return 0;
//}


//int main(void)
//{
//	for (int i = 10; i <= 1000; i++)
//	{
//		if (i % 2 == 0 && i % 3 == 0 && i % 7 == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//int main(void)
//{
//	for (int i = 1; i <= 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//			printf("%d*%d=%-3d", j, i, i*j);
//		puts("");
//	}
//	return 0;
//}

//int main(void)
//{
//	int a;
//	int i, j, k, l;
//	i = 0; j = 0; k = 0; l = 0;
//	scanf("%d", &a);
//	i = a % 10;  //个位
//	j = a / 10;
//	k = j % 10;  //十位
//	l = a / 100; //百位
//	printf("%d %d %d", i, k, l);
//	return 0;
//}


//int main(void)
//{
//	double M, m, g;
//	int N;
//	double h = 0;
//	double s = 0;
//	scanf("%lf%d", &M, &N);
//	m = M;
//	g = M;
//	for (int i = 0; i < N; i++)
//	{
//		M /= 2;
//	}
//	for (int j =0; j < N; j++)
//	{
//		h += m;
//		m = m / 2;
//	}
//	s = 2 * h - g;
//	printf("%0.2lf %0.2lf",M, s);
//	
//	return 0;
//}


//int GCD(int x, int y)
//{
//	if (y == 0)
//		return x;
//	else
//		return GCD(y, x%y);
//}
//
//int LCD(int ret1, int m, int n)
//{
//	return (m / ret1)*n;
//}
//
//int main(void)
//{
//	int m, n;
//	int ret1 = 0;
//	int ret2 = 0;
//	scanf("%d%d", &m, &n);
//	ret1 = GCD(m, n);
//	ret2 = LCD(ret1, m, n);
//	printf("%d %d", ret1, ret2);
//	return 0;
//}


//int main(void)
//{
//	int N, Sum;
//	int a = 2;
//	Sum = 0;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		Sum += a;
//		a += 3;
//	}
//	printf("%d\n", Sum);
//	return 0;
//}


//int main(void)
//{
//	int a[100];
//	int n;
//	int S = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int j = 0; j < n; j++)
//	{
//		if (a[j] % 2 == 0)
//		{
//			S += a[j];
//		}
//	}
//	printf("%d", S);
//	return 0;
//}


//int main(void)
//{
//	double F;
//	double C = 0;
//	scanf("%lf", &F);
//	C = ((F - 32) * 5) / 9;
//	printf("%0.2lf", C);
//	return 0;
//}


//int main(void)
//{
//	int i, j, k, l;
//	i = 0; j = 0; k = 0; l = 0;
//	for (int a = 100; a <= 999; a++)
//	{
//			i = a % 10;
//			j = a / 10;
//			k = j % 10;
//			l = a / 100;
//			if (i*i*i + k * k*k + l * l*l == a)
//			{
//				printf("%d\n", a);
//			}
//
//	}
//	
//	return 0;
//}


//int main(void)
//{
//	int a;
//	int i, j, k, l;
//	i = 0; j = 0; k = 0; l = 0;
//	scanf("%d", &a);
//	if (a <= 999 && a >= 100)
//	{
//		i = a % 10;
//		j = a / 10;
//		k = j % 10;
//		l = a / 100;
//	}
//	if (i*i*i + k * k*k + l * l*l == a)
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0");
//	}
//	return 0;
//}


//int main(void)
//{
//	int arr[10];
//	int Count = 0;
//	int S = 0;
//	float Ave = 0;
//	scanf("%d%d%d%d%d%d%d%d%d%d",
//		&arr[0], &arr[1], &arr[2], &arr[3], &arr[4],
//		&arr[5], &arr[6] ,& arr[7], &arr[8], &arr[9]);
//	for (int i = 0; i < 10; i++)
//	{
//		S += arr[i];
//	}
//	Ave = S / 10.0;
//	for (int j = 0; j < 10; j++)
//	{
//		if (arr[j ]> Ave)
//		{
//			Count++;
//		}
//	}
//	printf("%d\n", Count);
//	return 0;
//}