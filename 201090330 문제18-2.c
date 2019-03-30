#include <stdio.h>
#define Row 5
#define Col 5
int main()
{
	int array[Row][Col];
	for (int a = 0; a < Col; a++) {
		for (int i = 0; i < Row; i++) {
		
			array[a][i] = 5 * i + 1 + a;
			printf("%2d ", array[a][i]);
			
		}
		printf("\n");

	}
	return 0;
}
