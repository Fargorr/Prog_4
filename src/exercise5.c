#include <stdio.h>

int main(int argc, char** argv) {
	
	int matrix_1[10][3];
       	int matrix_2[3][10];
	printf("matrix_1: \n");	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &matrix_1[i][j]);
		}
	}
	printf("matrix_2: \n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 10; j++) {
                        scanf("%d", &matrix_2[i][j]);
                }
        }
	printf("\n"); 	
	int result[10][10];

	for (int i = 0; i < 10; i++) {
		for (int stolb_2 = 0; stolb_2 < 10; stolb_2++) {
			int sum = 0;
			for (int j = 0; j < 3; j++) {
				sum += matrix_1[i][j]*matrix_2[j][stolb_2];	
			}
			result[i][stolb_2] = sum;
		}
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                        printf("%d ", result[i][j]);
                }
		printf("\n");
        }

	
	return 0;
}
