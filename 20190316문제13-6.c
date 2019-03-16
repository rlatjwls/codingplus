#include <stdio.h>
#pragma warning(disable:4996)
int main(void)
{
	int count = 0;
	int a;
	int j;
	scanf("%d", &a);
	for (j = 2; j <= a; j++) {
		count = 0;
		for (int i = 1; i <= j; i++)
		{

			if (j%i == 0)
				count++;
			
		}
		if (count == 2)
			printf("%d ", j);
	}
}
