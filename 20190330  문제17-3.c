#include <stdio.h>
int main()
{
	int array[12];
	for (int i = 2; i <= 9; i++) {
		for (int a = 1; a <= 9; a++) {
			array[i] = i * a;
			printf("%d * %d = %d\n",i,a, array[i]);
		}
	}
		return 0;
}
