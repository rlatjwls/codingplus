#pragma warning(disable:4996)
#include <stdio.h>
#include<string.h>
int main() {
	
	int a, b, c;
	printf("국어 수학 영어 점수를 입력해 주세요\n");
	scanf("%d%d%d", &a, &b, &c);
		if ((a + b + c) / 3 > 90)
			printf("A\n");
		else if ((a + b + c) / 3 > 80)
			printf("B");
		else if ((a + b + c) / 3 > 70)
			printf("C");
		else if ((a + b + c) / 3 > 60)
			printf("D");
		else if ((a + b + c) / 3 < 60)
			printf("F");

	return 0;

}
