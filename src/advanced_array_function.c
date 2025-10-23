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
	if (intervals == NULL) {
		return NULL;
	}
	int size = intervalsSize * 2;
	int sort[size];
	sort[0] = intervals[0];
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (intervals[j] > intervals[j+1]) {
				
				sort[j] = intervals[j+1];
				sort[j+1] = intervals[j];
			}
		}
	}
	int rezultSize = size;
	for (int i = 1; i < size; i+=2) {
		int start = intervals[i-1];
		int finish = intervals[i];
		
		for (int j = 0; j < size-1; j++) {
			if (sort[j] == start) {
				for (int k = j+1; k < size-1; k++) {
					if (sort[k] != finish) {
						rezultSize -= 1;
					} else if (sort[k] == finish && sort[k+1] == finish) {
						rezultSize -= 1;
					}
				}
			}
		}	
	}

	int result_arr[rezultSize];
	int index = 0;

	for (int i = 1; i < size; i+=2) {
                int start = intervals[i-1];
                int finish = intervals[i];

                for (int j = 0; j < size-1; j++) { 
                        if (sort[j] == start) {
				result_arr[index] = sort[j];
				index += 1;
                                for (int k = j+1; k < size-1; k++) {
                                        if (sort[k] == finish && sort[k+1] != finish) {
                                       		result_arr[index] = sort[k];
						index += 1;
						break;	
					}
                                }
                        }
                }
        }
	
       	*returnSize = rezultSize / 2;
		
}



