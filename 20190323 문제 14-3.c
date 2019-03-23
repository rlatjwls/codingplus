#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a;
	int sum = 0;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++) {
			if (i > 1000)
			break;
			sum = sum + i;
	}
	printf("%d", sum);

	return 0;
}

