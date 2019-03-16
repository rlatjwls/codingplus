#include <stdio.h>
#pragma warning(disable:4996)
#include <string.h>
int main()
{
	int a, b = 1, sum = 0;
	scanf("%d", &a);
	for (;b <= a; b++)
	{
		sum = sum + b;
		
	}
	printf("%d", sum);
	return 0;
}
