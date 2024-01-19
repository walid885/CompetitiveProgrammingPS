/* 
I have had the Idea, you just need to use , frist of all , a new table to store in it the different values of the different array elements. 
then , foundout the max of it , and calculate the sum of that max 

my main issues was related to the syntax, the allocation and freeing the memory , i think that i have to redo and develop more , via practising the the syntax of differenet problems

here is the solution down below, it ranked within the best in Leetcode 

*/
int maxFrequencyElements(int* nums, int numsSize) {
    int* frequencies[numsSize];
    int res = 0, tmp = 0;

    for (int i = 0; i < numsSize; i++) {
        int freqNum = 0;

        for (int j = i; j < numsSize; j++) {
            if (nums[j] == nums[i]) {
                freqNum += 1;
            }
        }

        frequencies[i] = (int*)malloc(sizeof(int)); // Allocate memory for the pointer
        *(frequencies[i]) = freqNum; // Store the frequency count in the allocated memory
        printf("%d |", freqNum);
    }

    int max = 0;

    for (int i = 0; i < numsSize; i++) {
        if (*(frequencies[i]) > max) {
            max = *(frequencies[i]);
        }
    }

    for (int i = 0; i < numsSize; i++) {
        if (*(frequencies[i]) == max) {
            res += max;
        }
        free(frequencies[i]); // Free the allocated memory
    }

    return res;
}