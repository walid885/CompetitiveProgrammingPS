/*
this is my try in order to solve the problem Richest customer wealth. 
leet code , following the Leetcode beginner Guide 
the idea here is just simple , for each client ( each row in the matrix) we are 
going to calculate his richness , and then , we are going to  store them in an array
and after that , we are going to search the max of the array 
*/

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int* wealth = (int*)malloc(accountsSize * sizeof(int));  // Allocate memory for wealth

    for (int i = 0; i < accountsSize; i++) {
        int tmp = 0;  // Reset tmp for each customer

        for (int j = 0; j < accountsColSize[i]; j++) {
            tmp += accounts[i][j];
        }

        wealth[i] = tmp;
    }

    int res = wealth[0];
    for (int i = 1; i < accountsSize; i++) {
        if (wealth[i] > res) {
            res = wealth[i];
        }
    }

    free(wealth);  // Free the allocated memory

    return res;
}


/**
 * in this problem i have learnt about the dynamic allocation 
 * also , i have had a buffer overflow and i have worked in order to debug it 
 * and solve the problem
 * but i need to work more on the dynamic allocation as well , the manipulation 
 * of the dynamic arrays
*/