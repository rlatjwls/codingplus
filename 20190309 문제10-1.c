#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
		float weight, hight, obesity, AW;
		printf("비만도 수치 검사를 위해 몸무게와 키를 차례대로 입력해 주세요.\n");
		scanf("%f%f", &weight, &hight);

		AW = (hight - 100) * 0.9;
		obesity = (weight - AW) * 100 / AW;

		if (obesity <= 10)
			printf("정상");
		else if (10 < obesity && obesity <= 20)
			printf("과체중");
		else
			printf("비만");

	}
