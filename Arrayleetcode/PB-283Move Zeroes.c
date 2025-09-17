[17/09, 2:03 pm] Prithvi DTC: PB-283 Move Zeroes.c
[17/09, 2:03 pm] Prithvi DTC: void moveZeroes(int* nums, int numsSize) { 
    int j = 0; // index for placing non-zero elements 
    for (int i = 0; i < numsSize; i++) { 
        if (nums[i] != 0) { 
            nums[j++] = nums[i]; 
        } 
    } 
// Fill remaining positions with 0 
    for (int i = j; i < numsSize; i++) { 
        nums[i] = 0; 
    } 
}
