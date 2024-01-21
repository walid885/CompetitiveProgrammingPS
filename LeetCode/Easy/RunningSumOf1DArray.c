#include<stdio.h>

/**
 * 
 * the idea is simple , you just have to go through the array, and increment the value of the tmp file.
 * 
 * I need to work more on the dynamic allocation, in the C language.
 * 
 * 
 * 
*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    int tmp =  nums[0] ; 

    int* returnSizeArray = malloc(sizeof(int) * numsSize);
    returnSizeArray[0] = nums[0];
    for ( int i =1; i < numsSize ; i++ ){

        tmp += nums[i]; 
        returnSizeArray[i] = tmp; 

    }
   *returnSize = numsSize;

    return returnSizeArray; 
}


