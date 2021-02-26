#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <string.h>


int main(void)
{
	return 0;
}



//void K_fen(int a)
//{
//	int i, j, k, l, m, n;
//	i = 0; j = 0; k = 0;
//	l = 0; m = 0; n = 0;
//	i = a % 10;
//	j = a / 10;
//	k = j % 10;
//	l = j / 10;
//	m = l % 10;
//	n = a / 1000;
//	printf("%d %d %d %d", n, m, k, i);
//}
//
//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//	K_fen(a);
//	return 0;
//}



//int yuanyin(char a[], char b[])
//{
//	int i, j = 0, k, l;
//	char x;
//	l = strlen(a);
//	for (i = 0; i < l; i++)
//	{
//		if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
//		{
//			b[j] = a[i];
//			j++;
//		}
//	}
//	b[j] = '\0';
//	k = strlen(b);
//	for (i = 0; i < k; i++)
//	{
//		for (j = i; j < k; j++)
//		{
//			if (b[i] > b[j])
//			{
//				x = b[j]; b[j] = b[i]; b[i] = x;
//			}
//		}
//	}
//	return 0;
//}
//int main(void)
//{
//	char a[100], b[100];
//	gets(a);
//	yuanyin(a, b);
//	puts(b);
//	return 0;
//}

//#define N 3
//int main(void)
////{
//	int arr[N][N];
//	int tem = 0;
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			if ((i + j == 1 || i + j == 2 || i + j == 3) && i != j)
//			{
//				tem = arr[i][j];
//				arr[i][j] = arr[j][i];
//				arr[j][i] = tem;
//			}
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//void Is_prime(int n)
//{
//	int a = 0;
//	for (int i = 2; i < n; i++)
//	{
//		if (n%i == 0)
//		{
//			a++;
//		}
//	}
//	if (a == 0)
//	{
//		printf("prime");
//	}
//	else
//	{
//		printf("not prime");
//	}
//}
//
//int main(void)
//{
//	int n;
//	scanf("%d", &n);
//	Is_prime(n);
//	return 0;
//}