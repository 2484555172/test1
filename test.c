#define _CRT_SECURE_NO_WARNINGS 1

#include<inttypes.h>
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <math.h>
#include <ctype.h>


//int main(void)
//{
//	char ch;
//	while ((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch)) //isalpha ÅÐ¶ÏchÊÇ·ñÎª,." "
//		{
//			putchar(ch+1);
//		}
//		else
//		{
//			putchar(ch);
//		}
//	}
//
//
//	return 0;
//}


//double min(double x, double y)
//{
//	return (x >= y ? y : x);
//}

//int main(void)
//{
//	double x, y;
//	double ret = 0;
//	printf("Enter x and y:>");
//	scanf("%lf%lf", &x, &y);
//	ret = min(x, y);
//	printf("%lf\n", ret);
//	return 0;
//}

//void chline(char ch, int i, int j)
//{
//	int a, b;
//	for (a = 0; a < j; a++)
//	{
//		for (b = 0; b < i; b++)
//		{
//			printf("%-2c", ch);
//		}
//		printf("\n");
//	}
//
//}

//int main(void)
//{
//	char ch;
//	ch = getchar();
//	int i, j;
//	printf("Enter i and j:>");
//	scanf("%d%d", &i, &j);
//	chline(ch,i,j);
//	return 0;
//}

// double D_ave(double i, double j)
//{
//	 double a, b;
//	 a = 0; b = 0;
//	 a = 1 / i;
//	 b = 1 / j;
//	 return 1 / (a + b);
//
//}

//int main(void)
//{
//	double i, j,ret;
//	ret = 0;
//	printf("Enter i and j:>");
//	scanf("%lf%lf", &i, &j);
//	ret = D_ave(i, j);
//	printf("%lf\n", ret);
//	return 0;
//}

//double larger_of(double x, double y)
//{
//	return (x >= y ? x : y);
//}

//int main(void)
//{
//	double x, y;
//	printf("Enter i nad j:>");
//	scanf("%lf%lf", &x, &y);
//	x = larger_of(x, y);
//	y = x;
//	printf("x=%lf y=%lf\n", x, y);
//	return 0;
//}

//void Do_maxin(double*x, double*y, double*z)
//{
//	double t; double *p = &t;
//	if (*x > *y)
//	{
//		*p = *x;
//		*x = *y;
//		*y = *p;
//	}
//	if (*x > *z)
//	{
//		*p = *x;
//		*x = *z;
//		*z = *p;
//	}
//	if (*y > *z)
//	{
//		*p = *y;
//		*y = *z;
//		*z = *p;
//	}
//}

//int main(void)
//{
//	double i, j, k;
//	scanf("%lf%lf%lf", &i, &j, &k);
//	Do_maxin(&i, &j, &k);
//	printf("%lf %lf %lf", i, j, k);
//	return 0;
//}

//int main(void)
//{
//	int n;
//
//	scanf("%d", &n);
//	if (n <= 1e+9)
//	{
//		printf("%#o %d %#x", n, n, n);
//	}
//	else
//	{
//		;
//	}
//
//	return 0;
//}

/*#define money 50
#define time 0.4
int main(void)
{
	int i;
	double sum = 0;
	scanf("%d", &i);
	sum = money + i * time;
	printf("%0.1lf", sum);
	return 0;
}*/

//int main(void)
//{
//	int a, b;
//	int sum = 0;
//	double c;
//	scanf("%d%lf%d", &a, &c, &b);
//	a = a * (1e4);
//	sum = (a / b) + (a - 0)*c;
//	printf("%d", sum);
//	return 0;
//}

//int main(void)
//{
//	int arr[3];
//	scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);
//	printf("%-8d%-8d%-8d", arr[0], arr[1], arr[2]);
//	return 0;
//}

//int main(void)
//{
//	float a;
//	double a;
//	scanf("%lf", &a);
//	printf("%0.12lf", a);
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	int i;
//	float j;
//	double k;
//	scanf("%c%d%f%lf", &ch, &i, &j, &k);
//	printf("%c %4d %4.2f %4.12lf", ch, i, j, k);
//	return 0;
//}

//int main(void)
//{
//	double a;
//	scanf("%lf", &a);
//	printf("%f\n", a);
//	printf("%0.5f\n", a);
//	printf("%e\n", a);
//	printf("%g\n", a);
//
//	return 0;
//}

//int main(void)
//{
//	char ch;
//	scanf("%c", &ch);
//	for (int i = 1; i <= 3; i++)
//	{
//		for (int j = 1; j <= 3-i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	int n;
//	int sum = 0;
//	int a = 2;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		sum += a;
//		a = 10 * a + 2;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main(void)
//{
//	int a, b;
//	float c;
//	float k = 0;
//	int i, j; i = 0; j = 0;
//	float sum = 0;
//	scanf("%d%d%f", &a, &b, &c);
//	for (int d = 1; d <= a; d++)
//	{
//		i += d;
//	}
//	for (int e = 1; e <= b; e++)
//	{
//		j += e * e;
//	}
//	for (int f = 1.0; f <= c; f++)
//	{
//		k += 1.0 / f;
//	}
//	sum = i + j + k;
//	printf("%0.2f", sum);
//	return 0;
//}

//int main(void)
//{
//	int N;
//	double sum = 0;
//	double t = 0.0;
//	double m, n;
//	m = 1.0; n = 2.0;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		sum += n / m;
//		t = m;
//		m = n;
//		n = m + t;
//	}
//	printf("%0.2lf", sum);
//	return 0;
//}

//int main(void)
//{
//	int N;
//	int s = 1;
//	scanf("%d", &N);
//	for (int i = 1; i < N; i++)
//	{
//		s = (s + 1) * 2;
//	}
//	printf("%d", s);
//	return 0;
//}


//int main()
//{
//	int N, j, i;
//	scanf("%d", &N);
//	for (i = 2; i <= n; i++)
//	{
//		int flag = 1;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//				flag = 0;
//		}
//		if (flag == 1)
//			printf("%d\n", i);
//	}
//}