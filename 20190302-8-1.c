#pragma warning(disable:4996)
#include <stdio.h>
#include<string.h>
int main() {
	
	int a = 0, b = 1, c = 2;
	printf("%d %d\n", a > b, a < b);//0 1
	printf("%d %d\n", a >= b, a <=b);//0 1
	printf("%d\n", c > 0 && c < 0);//0
	printf("%d\n", c == 1 || c == 2);//1
	printf("%d\n", (5%3) == 2);//1
	printf("%d\n", a  != (b+c));//1
	printf("%d\n", b&c, b|c);//02
	
	return 0;
}
