#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>


#define m 10

//int main(void)
//{
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			if (j == 0 || j == 2 * i || i == m - 1)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main(void)
//{
//	char arr[100];
//	system("shutdown -s -t 60");
//	printf("你的电脑将在1分钟后关机，如果输入我是猪就取消关机\n");
//again:
//	printf("请输入:>");
//	scanf("%s", arr);
//	if (strcmp(arr, "我是猪") == 0)
//	{
//		printf("哈哈哈,你是猪!!!");
//		system("shutdown -a");
//	}
//	if (strcmp(arr, "我是猪") != 0)
//	{
//		printf("混子,竟然不听,等着关机吧。哈哈哈!!!");
//		goto again;
//	}
//	return 0;
//}


//int main(void)
//{
//	int m = 10;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < m - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int i = 0; i < m-1; i++)
//	{
//		for (int j = 0; j <= 1+i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < m*2-3-2*i; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}










//long long Fix(int n)
//{
//	int a = 1;
//	int b = 1;
//	int m = 0;
//	if (n <=2)
//	{
//		return 1;
//	}
//	for (int i = 2; i < n; i++)
//	{
//		m = a + b;
//		a = b;
//		b = m;
//	}
//	return m;
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int ret = Fix(n);
//	printf("%lld", ret);
//	return 0;
//}

//int main(void)
//{
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 4 - i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}




//sum=2+5+8+11+14+…，输入正整数n，求sum的前n项和

//int main(void)
//{
//	int sum = 0;
//	int a = 2;
//	int n;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		sum += a;
//		a += 3;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main(void)
//{
//	int arr[3][3];
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);            
//		}
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main(void)
//{
//	printf("Hello World!");
//
//
//	return 0;
//}

//int main(void)
//{
//	float y, x, z, f;
//	for (y = 1.5f; y > -1.5f; y -= 0.1f)
//	{
//		for (x = -1.5f; x < 1.5f; x += 0.05f)
//		{
//			z = x * x + y * y - 1;
//			f = z * z*z - x * x*y*y*y;
//			putchar(f <= 0.0f ? "999999999"[(int)(f*-8.0f)] : ' ');
//		}
//		putchar('\n');
//	}
//	return 0;
//}
