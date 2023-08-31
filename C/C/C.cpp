#include <stdio.h>
int main()
{
	int a, b, c;
	
	scanf_s("%d %d %d", &a, &b, &c);

	double d = (a + b + c) / 3;

	printf("这个三个整数%d %d %d 的平均数为%f", a, b, c, d);

	return 0;
}