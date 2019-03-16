#include <stdio.h>
#pragma warning(disable:4996)
#include <string.h>
int main()
{
	int a, b = 1, c = 1;
	scanf("%d", &a);
	while (b < 100) {
		b = a * c;
		if(b<100)
		printf("%d ", b);
		c++;
	}
		
}
