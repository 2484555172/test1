#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>

void swap(int* arr, int x, int y)
{
	int tem = 0;
	tem = arr[x];
	arr[x] = arr[y];
	arr[y] = tem;
}


/*          ±º‰∏¥‘”∂»(ave)       Œ»∂®–‘
—°‘Ò≈≈–Ú		n*n					0
√∞≈›≈≈–Ú		n*n				     1
≤Â»Î≈≈–Ú*	n*n                   1
  ∂—≈≈–Ú*    n*log2n               0
œ£∂˚≈≈–Ú		n~1.3				0
πÈ≤¢≈≈–Ú*    n*log2n               0
øÏÀŸ≈≈–Ú*    n*log2n			    1
  Õ∞≈≈–Ú		n+k					1
º∆ ˝≈≈–Ú		n+k					1
ª˘ ˝≈≈–Ú		n*k					1
*/



//—°‘Ò≈≈–Ú

//#define N 5
//int main(void)
//{
//	int minpos = 0;
//	int tem = 0;
//	int arr[N] = {5,4,2,1,3};
//	for (int i = 0; i < N; i++)
//	{
//		 minpos = i;
//		for (int j = i+1; j < N; j++)
//		{
//			if (arr[j] < arr[minpos])
//			{
//				minpos = j;
//			}
//		}
//		tem = arr[i];
//		arr[i] = arr[minpos];
//		arr[minpos] = tem;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%2d", arr[i]);
//	}
//	return 0;
//}

//√∞≈›≈≈–Ú

//#define N  9
//int main(void)
//{
//	int arr[N] = { 9,6,1,3,5,2,4,8,7 };
//	for (int i = 0; i < N - 1; i++)
//	{
//		for (int j = 0; j < N - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//				swap(arr, j, j + 1);
//		}
//		
//	}
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//≤Â»Î≈≈–Ú

//#define N 5
//int main(void)
//{
//	int arr[N] = { 9,6,1,3,5 };
//	for (int i = 1; i < N; i++)
//	{
//		for (int j = i; j > 0; j--)
//		{
//			if (arr[j] < arr[j - 1])
//				swap(arr, j, j - 1);
//		}
//	}
//   for (int i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//œ£∂˚≈≈–Ú
//#define N 15
//int main(void)
//{
//	int arr[N] = { 9,6,11,3,5,12,8,7,10,15,14,4,1,13,2 };
//	
//	for (int h = N>>1; h > 0; h /= 2)
//	{
//		for (int i = h; i < N; i++)
//		{
//			for (int j = i; j > h - 1; j -= h)
//			{
//				if (arr[j] < arr[j - h])
//					swap(arr, j, j - h);
//			}
//		}
//	}
//    for (int i = 0; i < N; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//πÈ≤¢≈≈–Ú
//#define N 10
//#define M 15
//int main(void)
//{
//	int arr[N] = { 1,4,6,7,10,2,3,5,8,9 };
//	int arr1[M];
//	int i = 0;
//	int j = N/2;
//	int k = 0;
//	while (i <= N/2 && j < N)
//	{
//		if (arr[i] <= arr[j])
//		{
//			arr1[k++] = arr[i++];
//		}
//		else
//		{
//			arr1[k++] = arr[j++];		
//		}
//	}
//	while (i <= N/2)
//	{
//		arr1[k++] = arr[i++];
//	}
//	while (j < N)
//	{
//		arr[k++] = arr[j++];
//	}
//	for (int i = 0; i < N; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}