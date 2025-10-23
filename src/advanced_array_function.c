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

int length_of_lis(int* nums, int numSize) {
	int max_sum = 0;
        int current_sum = nums[0];
	int count = 1;

        for (int i = 1; i < numSize; i++) {
                if (nums[i] > current_sum) {
                        current_sum = nums[i];
			count += 1;
                } else {
                        current_sum = nums[i];
			max_sum = (max_sum < count ? count : max_sum);
			count = 1;
                }
        }
	max_sum = (max_sum < count ? count : max_sum);
        return max_sum;
}

int* merge(int* intervals, int intervalsSize, int* returnSize) {
	int arr[1] = {intervals[0]};
	*returnSize = intervalsSize;
	return NULL;	

}



