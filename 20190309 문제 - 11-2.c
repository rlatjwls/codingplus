#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{ 
	int a;
	int rkfh, tpfh, r, alxqus, high;

	printf("넓이를 구하고자 하는 도형을 선택해 주세요.\n 1.사각형의 넓이  구하기\n 2.원의 넓이 구하기\n 3.삼각형의 넓이 구하기\n");
	scanf("%d", &a);

	switch(a){
		case 1: 
			printf("사각형의 넓이를 구합니다.\n 가로 세로의 길이를 각자 입력해 주세요(정수로만).\n");
			scanf("%d%d", &rkfh, &tpfh);
			printf("%d", rkfh * tpfh);
			break;
	
		case 2: 
			printf("원의 넓이를 구합니다.\n반지름의 길이를 입력해 주세요(정수로만)\n");
			scanf("%d", &r);
			printf("%f", 3.14*r*r);
			break;
		
		case 3: 
			printf("삼각형의 넓이를 구합니다.\n밑변과 높이를 입력해 주세요(정수로만)\n");
			scanf("%d%d", &alxqus, &high);
			printf("%d", alxqus * high / 2);
			break;

		}
	return 0;


}
