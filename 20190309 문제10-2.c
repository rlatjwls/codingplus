#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	float k, e, m, avg;
	char grade;

	printf("국어,영어,수학점수를 입력해 주세요\n");
	scanf("%f%f%f", &k, &e, &m);
	avg = (k + e + m) / 3;
	printf("--------------------------\n 총점| 국어 | 영어 | 수학 |\n%3.0f점 %3.0f점  %3.0f점  %3.0f점\n 평균:%f\n",k+e+m, k , e , m,avg);
	if (avg >= 90)
		grade = 'A';
	else if (avg >= 80)
		grade = 'B';
	else if (avg >= 70)
		grade = 'C';
	else if (avg >= 60)
		grade = 'D';
	else
		grade = 'F';

	printf("등급:%c", grade);
		
	}
