#include <stdio.h>
#pragma warning(disable:4996)
int main()
{	
	int i = 0;
	int arr[10];
	for (int a = 1; a <= 30; a++)
	{
		if (a % 3 == 0)
		{
			arr[i] = a;
			printf("%d ", arr[i]);
			i++;
		}
	}
	return 0;
}
