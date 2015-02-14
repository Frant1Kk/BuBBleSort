
#include "stdafx.h"
#include<stdlib.h>
#include<stdio.h>

void main()
{
	int N;
	unsigned char*a, *b;
	printf("Vvedite kolichestvo elementov: ");
	scanf_s("%d", &N);
	a = (unsigned char*)malloc(N*sizeof(unsigned char));
	b = (unsigned char*)malloc(N*sizeof(unsigned char));
	printf("Vvedite elementi: \n");
	for (int i = 0; i < N; i++)
	{
		scanf_s("%d", &a[i]);

	}
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				unsigned char buff = a[j];
				a[j] = a[j + 1];
				a[j + 1] = buff;
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		b[i] = a[i];
	}
	printf("Konechniy massiv: \n");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", b[i]);
		printf("\n");
	}
	system("pause");
	return;
}

