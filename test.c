#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <math.h>




//��1+2!+3!+...+N!�ĺ�
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




/*�ǹȲ���:�ձ�һλ��ѧ������һ������ġ�����,��ǹȽ���֤��,
����������Ϊ�������ǲ����ǹȲ������������ǣ��θ�һ����Ȼ������Ϊż������2,
��Ϊ�������3��1,�õ�һ���µ���Ȼ����������ķ����������,
���ɴκ�õ��Ľ����ȻΪ1��������֤:*/

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


// ��֤��Ƴ�˹����,�����κ�һ������m������������д��m����������֮��

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








//������˳�������г����з�ĸΪ40������С��40��������

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





/*һ����Ȼ����8����1,���õ��̱�8��Ҳ��1,�ٽ��ڶ��ε��̱�8������7, ���õ�һ����Ϊa
��֪�����Ȼ����17����4.���õ��̱�17����15,���õ�һ������a��2���������Ȼ��*/

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


