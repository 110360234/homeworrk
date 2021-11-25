#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int bubbleSort1(int a[], int size);
int bubbleSort2(int a[], int size);

int main(void)
{
	int dt[SIZE] = { 10,58,36,11,8,7,44,28,20, }, i, c;
	printf("The original :\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%3d  ", dt[i]);
	}
	printf("\n");
	c = bubbleSort1(dt, SIZE);
	printf("\n\nThe bubbleSort1 array are :\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%3d  ", dt[i]);
	}
	printf("\nuse %d times", c);
	return 0;
}

int bubbleSort1(int a[], int size)
{
	int i, j, ram, c = 0, ii;
	for (i = size; i >= 0; i--)
	{
		for (j = 1; j < i; j++)
		{
			if (a[j - 1] > a[j])
			{
				ram = a[j];
				a[j] = a[j - 1];
				a[j - 1] = ram;

			}

		}
		c++;

		printf("\n");
		for (ii = 0; ii < SIZE; ii++)
		{
			printf("%3d  ", a[ii]);
		}
	}
	return c;
}

int bubbleSort2(int a[], int size)
{
	int i, j, ram, c = 0, flag, ii;
	for (i = size; i >= 0; i--)
	{
		flag = 0;
		for (j = 1; j < i; j++)
		{

			if (a[j - 1] > a[j])
			{
				flag = 1;
				ram = a[j];
				a[j] = a[j - 1];
				a[j - 1] = ram;
			}
		}
		c++;

		printf("\n");
		if (flag == 0)
		{
			c--;
			return c;
		}
		for (ii = 0; ii < SIZE; ii++)
		{
			printf("%3d  ", a[ii]);
		}
	}
	return c;
}