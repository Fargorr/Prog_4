#include "../include/advanced_array_function.h"


int max_subarray_sum(int* nums, int size) {
	int max_sum = nums[0];
	int current_sum = nums[0];

	for (int i = 1; i < size; i++) {
		if (nums[i] > current_sum + nums[i]) {
			current_sum = nums[i];
		} else {
			current_sum += nums[i];
		}
		
		if (max_sum < current_sum) {
			max_sum = current_sum;
		}	
	}
	return max_sum;	
	
}

int length_of_lis(int* nums, int numsSize) {
    return 0;
}

int* merge(int* intervals, int intervalsSize, int* returnSize) {
    return NULL;
}

int main() { return 0; }
