#include <stdio.h>

void swap(int* x, int* y) {
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}

int main()
{
	int a = 0, b = 0;

	printf("Enter 2 numbers \n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	
	printf("Before swap: %d %d\n", a, b);

	swap(&a, &b);
	
	printf("After swap: %d %d", a, b);
}