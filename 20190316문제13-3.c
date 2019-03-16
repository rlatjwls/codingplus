#include <stdio.h>
#pragma warning(disable:4996)
#include <string.h>
int main()
{
	int n,i;
	int sum = 0;
	scanf("%d", &n);
	for(i =1; i<=n; i++){
		printf("(1");
		for (int j = 2; j <= i; j++) {
			printf("+%d", j);

		}

		if (i == n)printf(")");
		else
			printf(")+");
		}
}
