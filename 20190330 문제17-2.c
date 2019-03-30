#include <stdio.h>
int main()
{
	int i = 0;
	int array[10];
	int array1[10];
	for (int a = 1; a <= 30; a++) {
		if (a % 3 == 0) {
			array[i] = a;
			printf("%d ", array[i]);
			i++;
		}
	}
	printf("\n");

	for (int b = 0; b < 10; b++) {
		array1[(b + 1) % 10] = array[b];
	}
	for (int c = 0; c <= 9; c++) {
		printf("%d ", array1[c]);
	}
		return 0;


}
