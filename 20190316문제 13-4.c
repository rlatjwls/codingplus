#include <stdio.h>
#pragma warning(disable:4996)
#include <string.h>
int main()
{
	int a, i;
	scanf("%d", &a);
	for (i = a; i > 0; i--) {
		// 스페이스바 출력 for
		for (int j = 0; j < a - i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= i; k++) {
			printf("*");
		}
		printf("\n");
	}

}
