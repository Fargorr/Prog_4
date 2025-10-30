#include "../include/advanced_array_function.h"
#include <stdlib.h>

int max_subarray_sum(int* nums, int size) {
	if (nums == NULL) {
		return 0;
	}
	if (size == 1) {
		return nums[0];
	}
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
	if (nums == NULL) {
		return 0;
	}
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
	if (intervals == NULL || intervalsSize <= 0) {
		*returnSize = 0;
		return intervals;
	}

	int size = intervalsSize * 2;
	int sort[size];
	   	 
	for (int i = 0; i < size; i++) {
		sort[i] = intervals[i];
	}
	
	for (int i = 0; i < size-3; i++ ) {
		for (int j = 0; j < size-3-i; j+=2) { 
			if (sort[j] > sort[j+2]) {
				int temp = sort[j];
				int temp2 = sort[j+1];
				sort[j] = sort[j+2];
				sort[j+1] = sort[j+3];
				sort[j+2] = temp;
				sort[j+3] = temp2;
			}	
		}
	}

	int rezultSize = size;
	int index = 2;
	
	for (int i = 1; i < size; i += index) {
		for (int j = i + 2; j < size; j += 2) {
								//			
			if (sort[i] > sort[j]) {
				rezultSize -= 2;
				index += 2;
			}else if (sort[i] > sort[j-1]) {
				rezultSize -= 2;
				break;
			
			} else if (sort[i] == sort[j-1]) {
				rezultSize -= 2;
				break;
			}
		}
	}
	int* rezultArray = (int*)malloc(rezultSize * sizeof(int));	

	int start = sort[0];
	int finish = 52;
	index = 0;

	for (int i = 1; i < size-1; i++) {
		if (sort[i] > sort[i+1]) {
			sort[i+1] = sort[i];
		}
	}
	
	for (int i = 1; i < size - 1; i++) {
		if (sort[i] != sort[i+1] && (i+1) % 2 != 0 ) {
			finish = sort[i+1];

		} else if (sort[i] != sort[i+1] && (i+1) % 2 == 0) {
			rezultArray[index] = start;
			finish = sort[i];
			rezultArray[index+1] = finish;
			start = sort[i + 1];
			
			index += 2;
		}
		if (index > rezultSize) {
			break;
		}
	}
	rezultArray[index] = start;
	rezultArray[index+1] = sort[size-1]; 
	
	*returnSize = rezultSize/2;
	return rezultArray;
}

