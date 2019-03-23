#include <stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a = 0;
	for (; a <= 100; a++)
	{
		if (a % 2 != 0)
			continue;
		printf("%d ", a);
	}
	return 0; 
}
