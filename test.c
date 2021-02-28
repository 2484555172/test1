#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <math.h>




//求1+2!+3!+...+N!的和
//
//long long Factorial(int j)
//{
//	if (j == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return j * Factorial(j - 1);
//	}
//}
//
//int main(void)
//{
//	int n;
//	long long S = 0;
//	scanf("%d", &n);
//	if (n <= 20&&n>0)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			S += Factorial(i);
//		}
//	}
//	printf("%lld", S);
//	return 0;
//}




/*角谷猜想:日本一位中学生发现一个奇妙的“定理”,请角谷教授证明,
而教授无能为力，于是产生角谷猜想猜想的内容是：任给一个自然数，若为偶数除以2,
若为奇数则乘3加1,得到一个新的自然数后按照上面的法则继续演算,
若干次后得到的结果必然为1。请编程验证:*/

//int main(void)
//{
//
//	int n;
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	scanf("%d", &n);
//	while (n != 1)
//	{
//		if (n % 2 == 0)
//		{
//			printf("%d/%d=%d\n", n, b, n / b);
//			n = n / 2;
//		}
//		else
//		{
//			printf("%d*%d+%d=%d\n", n, c, a, n*c + a);
//			n = 3 * n + 1;
//		}
//	}
//	return 0;
//}


// 验证尼科彻斯定理,即：任何一个整数m的立方都可以写成m个连续奇数之和

//#define M 100
//void Print(int arr[M],int j,int m)
//{
//
//	printf("%d", arr[j]);
//	if (j < m - 1)
//	{
//		printf("+");
//	}
//}
//int main(void)
//{
//	int m;
//	int S = 0;
//	scanf("%d", &m);
//	int a = m * (m - 1) + 1;
//	int arr[M];
//	arr[0] = a;
//	for (int i =0;i<m;i++)
//	{
//		S += a;
//		 a+= 2;
//		 arr[i+1] = a;
//	}
//	printf("%d*%d*%d=%d=", m, m, m, S);
//	for (int j = 0; j < m; j++)
//	{
//		Print(arr,j,m);
//	}
//	return 0;
//}








//按递增顺序依次列出所有分母为40，分子小于40的最简分数

//int main(void)
//{
//	for (int i = 1; i < 40; i++)
//	{
//		if (i % 2 != 0 && i % 5 != 0)
//		{
//			printf("%d/40,", i);
//		}
//	}
//	return 0;
//}





/*一个自然数被8除余1,所得的商被8除也余1,再将第二次的商被8除后余7, 最后得到一个商为a
又知这个自然数被17除余4.所得的商被17除余15,最后得到一个商是a的2倍求这个自然数*/

//int main(void)
//{
//	int n = 0;
//	for (int a = 1; a < 10; a++)
//	{
//		if ((64 * a + 57) * 8 + 1 == (34 * a + 15) * 17 + 4)
//		{
//			n = (64 * a + 57) * 8 + 1;
//			printf("%d", n);
//		}
//	}
//
//	return 0;
//}


//int main(void)
//{
//	for (int i = 1; i < 9; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


