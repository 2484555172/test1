#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//***循环****//
//2.84
//int main(void)
//{
//	int n;
//	int i, j;
//	char ch = '*';
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%c", ch);
//		}
//    	printf("\n");
//	}
//	return 0;
//}

//2.85
//int main(void)
//{
//	int n;
//	int i, j;           
//		               
//	char ch = '*';      
//	scanf("%d", &n); 
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//	    for (j = 1; j <= n; j++)
//	    {
//		    printf("%c", ch);
//		}	
//	    printf("\n");
//	}
//	return 0;    
//}

//2.86
//int main(void)
//{	
//	char ch = '*';
//	int i, j, n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n-i; j++)//n-i为每行空格数
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%c", ch);
//		}
//		for (j = 0; j < i; j++)
//		{
//			printf("%c", ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//2.87
//int main(void)
//{
//	char ch = '*';
//	int i, j, n;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= n + 2 * i - 2; j++)
//		{
//			printf("%c",ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//2.88
//int main(void)
//{
//	char ch = '*';
//	int i, j, n;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= 2 * n + i - 3; j++)
//		{
//			if (j == n - i + 1 || j > n - i + 1 && (i == 1 || i == n))
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("*\n");
//	}
//	return 0;
//}

