#include <stdio.h>
#define Row 4
#define Col 5
int main()
{
	int array[Row][Col];
	for (int a = 0; a <= 3; a++) {
		for (int i = 0; i <= 4; i++) {
			//if (a == 0) {
				array[a][i] = 5 * a + 1 + i;
				printf("%2d ", array[a][i]);
				/*if(i == 4)
				printf("\n");
				*/
			//}
			/*if (a == 1) {
				array[a][i] = i + 6;
				printf("%2d ", array[a][i]);
				if (i == 4)
					printf("\n");
			}
			if (a == 2) {
				array[a][i] = i + 11;
				printf("%2d ", array[a][i]);
				if (i == 4)
					printf("\n");
			}
			if (a == 3) {
				array[a][i] = i + 16;
				printf("%2d ", array[a][i]);
				if (i == 4)
					printf("\n");
			}*/
		}
		printf("\n");

	}
	return 0;
}
