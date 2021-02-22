#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//输出Hello World!
//int main(void)  
//{
//	printf("**************************\n");
//	printf("Hello World!\n");
//	printf("**************************\n");
//	return 0;
//}

//打印图案
//int main(void)   
//{
//	printf("  *  \n");
//	printf(" * * \n");
//	printf("*****\n");
//
//	return 0;
//}


//[编程入门]密码破译
//int main(void)  //密码破译,输入China
//{               //输出Glmre
//	char c1, c2, c3, c4, c5;
//	scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);
//	printf("%c%c%c%c%c", c1 + 4, c2 + 4, c3 + 4, c4 + 4, c5 + 4);
//	return 0;
//}

//[编程入门]温度转换
//int main(void) 
//{
//	double C, F;
//	scanf("%lf", &F);
//	C = 5 * (F - 32) / 9;
//	printf("%0.2lf\n", C);
//	return 0;
//}

//求平方和
//int main(void)  
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//	printf("%d", A*A + B * B);
//	return 0;
//}

//求圆的面积
//#define Pi 3.1415926
//int main(void)     
//{
//	double r;
//	scanf("%lf", &r);
//	printf("%0.2f\n", Pi*r*r);
//	return 0;
//}

//求长方形面积
//int main(void)  
//{
//	int A, B;
//	scanf("%d %d", &A, &B);
//	printf("C:%d\n", 2 * (A + B));
//	printf("S:%d\n", A*B);
//	return 0;
//}
	
//[编程入门]三个数找最大值
//int main(void)
//{
//	int a, b, c;
//	int max = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (max < a)
//		max = a;
//	if (max < b)
//		max = b;
//	if (max < c)
//		 max = c;
//	printf("%d", max); 
//	
//}

//[编程入门]分段函数求值
//int main(void)
//{
//	int x, y;
//	scanf("%d", &x);
//	if (x < 1)
//		y = x;
//	else if (x >= 1 && x < 10)
//		y = 2 * x - 1;
//	else
//		y = 3 * x - 11;
//	printf("%d\n", y);
//	return 0;
//}

//[编程入门]三个数字的排序
//int  swap(int* x, int* y)
//{
//	int tem = 0;
//	tem = *x;
//	*x = *y;
//	*y = tem;
//	
//}

//int main(void)
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b)
//	{
//		swap(&a, &b);
//	}
//	if (a > c)
//	{
//		swap(&a,&c);
//	}
//	if (b > c)
//	{
//		swap(&b,&c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

//[编程入门]成绩评定	

//int main(void)
//{
//	int a;
//	scanf("%d", &a);
//	if (a >= 0 && a <= 100)
//	{
//		if (a >= 90 && a <= 100)
//			printf("A");
//		if (a <= 80 && a >= 89)
//			printf("B");
//		if (a <= 70 && a >= 79)
//			printf("C");
//		if (a <= 60 && a >= 69)
//			printf("D");
//		if (a < 60)
//			printf("E");
//	}
//	else
//		printf("输入错误\n");
//	return 0;
//}

//[编程入门]数字的处理与判断	

//[编程入门]利润计算

//#define LEN  999
//int main()
//{
//	int n;
//	int sum = 0;
//	int arr[LEN];
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int j = 0; j < n; j++)
//	{
//		if (arr[j] % 2 == 0)
//			sum = sum + arr[j];
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main(void)
//{
//	int n, i;
//	int j = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		j = 3 * i - 1;
//		sum += j;
//	}
//	printf("%d", sum);
//	return 0;
//}

//[编程入门]求和训练
//int main(void)
//{
//	int a, b, c, n;
//	float i, j, k;
//	i = 0; j = 0; k = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	for (n = 1; n <= a; n++)
//	{
//		i += n;
//	}
//	for (n = 1; n <= b; n++)
//	{
//		j += n * n;
//	}
//	for (n = 1; n <= c; n++)
//	{
//		k += 1.0 / n;
//	}
//	printf("%0.2f", i + j + k);
//	return 0;
//}

//[编程入门]最大公约数与最小公倍数
//int GCD(int x, int y)  //欧几里得算法  /  辗转相除法
//{
//	if (y == 0)
//	{
//		return x;
//	}
//	else
//		return GCD(y, x%y);
//}
//
//int LCM(int x, int y)
//{
//	return y / x;
//}
//int main(void)
//{
//	int m, n, a;
//	int ret1 = 0;
//	int ret2 = 0;
//	scanf("%d%d", &m, &n);
//	a = m * n;
//	ret1 = GCD(m, n);
//	ret2 = LCM(ret1,a);
//	printf("%d %d", ret1,ret2);
//	return 0;
//}

//int main(void)
//{
//	int N, i;
//	float sum = 0;
//	float	m = 1.0, n = 2.0;
//	int t = 0;
//	scanf("%d", &N);
//	for (i = 1; i <= N; i++)
//	{
//		sum = sum + n / m;
//		t = m;
//		m = n;
//		n = t + n;
//	}
//	printf("%0.2f", sum);
//	return 0;
//}

//int main(void)
//{
//	int N, i;
//	float Sum = 0;
//	float sum = 0;
//	float M = 0;
//	float m = 0;
//	scanf("%f%d", &M, &N);
//	m = M;
//	for (i = 1; i <= N; i++)
//	{
//		sum = sum + M;
//		M = M / 2;
//	}
//	Sum = (sum - m) * 2 + m;
//	printf("%0.2f %0.2f", M, Sum);
//	return 0;
//}


//int main(void)
//{
//	int N, i;
//	int sum = 1;
//	scanf("%d", &N);
//	for (i = 1; i < N; i++)
//	{
//		sum = (sum + 1) * 2;
//	}
//	printf("%d", sum);
//	return 0;
//}

//int main(void)
//{
//	int a;
//	int i, j, k,l;
//	scanf("%d", &a);
//	if (a <= 999)
//	{
//		i = a % 10;
//		j = a / 10;
//		k = j % 10;
//		l = j / 10;
//	}
//	printf("%d %d %d",i, k,l );
//	return 0;
//}

//int main(void)
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			
//			printf("%d*%d=%-3d", i, j, i*j);
//			printf(" ");
//		}
//		printf("\n");
//	}
//}

//int main(void)
//{
//	int i;
//	for (i = 10; i <= 1000; i++)
//	{
//		if (i % 2 == 0 && i % 3 == 0 && i % 7 == 0)
//			printf("%d\n", i);
//	}
//
//}

int main(void)
{
	int arr[20];
	int i=0;
	int count = 0;
	float sum = 0;
	float j = 0.0;
	float k = 0.0;
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9], &arr[10], &arr[11], &arr[12], &arr[13], &arr[14], &arr[15], &arr[16], &arr[17], &arr[18], &arr[19]);
	for (i = 0; i < 20; i++)
	{
		if (arr[i] < 0)
			count++;
		else
			sum = sum + arr[i];
	}
	j = 20 - count;
	k = sum / j;
	printf("%d\n", count);
	printf("%0.2f", k);

	return 0;
}