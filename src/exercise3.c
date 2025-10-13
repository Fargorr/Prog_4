#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
	int nums[10];
	for (int i = 0; i<10; i++) {
		scanf("%d", &nums[i]);		
	}
	// 1 2 3 4 5 6 7 8 9 10   3 -> 8 9 10 1 2 3 4 5 6 7
	int sdwig = atof(argv[1]);
	if (sdwig >=0) {
		for (int i = 10 - sdwig; i<10; i++) {
			printf("%d ", nums[i]);
		}
		for (int i = 0; i < 10 - sdwig; i++) {
			printf("%d ", nums[i]);
		}
	}else {
                for (int i = sdwig * (-1); i<10; i++) {
			printf("%d ", nums[i]);
                }
                for (int i = 0; i < sdwig * (-1); i++) {
                        printf("%d ", nums[i]);
                }
	}


	
}	
