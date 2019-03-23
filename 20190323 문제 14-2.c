#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b;
	int sum = 0;
	scanf("%d", &a);
	int i = 0;
	for (; i < a; i++)
	{
		printf("숫자를 입력하세요");
		scanf("%d", &b);
		if (b % 2 == 0)
		continue;
		sum = sum + b;
	}
	printf("%d", sum);
	return 0;
}

