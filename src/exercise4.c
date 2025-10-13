#include <stdio.h>
#include <stdlib.h>


int main(int argc, char** argv) {
	
	int nums[10];
	for (int i = 0; i < 10; i++) {
		scanf("%d", &nums[i]);
	}
	
	int num = atof(argv[1]);
	int pos = atof(argv[2]);
	
		for (int i = 0; i < pos; i++) {
			printf("%d ", nums[i]);
		}
		printf("%d ", num);
		for (int i = pos; i < 9; i++) {
			printf("%d ", nums[i]); 
		}

	printf("\n");
	return 0;
}
