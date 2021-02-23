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

void D_mine(double p1, double p2, double p3)
{
	

}
int main(void)
{
	double x, y, z;
	printf("Enter x y z:>");
	scanf("%lf%lf%lf", &x, &y, &z);
	D_mine(&x, &y, &z);
}