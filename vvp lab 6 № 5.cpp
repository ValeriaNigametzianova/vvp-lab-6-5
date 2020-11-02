#include<stdio.h>

int F(x)
{
	int t = pow(x - 3, 3);
	int y = 4 * t * t - 7 * t + 2;
}
int main()
{
	int y, x, t;
	printf("x = ");
	scanf_s("%d", &x);
	y = F(x);
	printf("y = %d", y);
	return 0;
}
