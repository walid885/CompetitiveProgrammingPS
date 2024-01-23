/**
 * in this program I am going to solve the problem 412 of leetcode, in ordre to improve my programming capabilites 
 * 
 * I am going to develop it using the dynamic memory management, in ordre to boost the program, so that , for each time there is 
 * an execution , I am going to create a table having the exact n number of fields in the array 
 * 
 * 
 * 
*/

char** fizzBuzz(int n, int* returnSize) {
    char** res = (char**)malloc((n) * sizeof(char*));
    for (int i = 0; i < n; i++) {


      
        if ((i+1) % 15 == 0) {
            res[i] = "FizzBuzz";
        } else if ((i+1) % 3 == 0) {
            res[i] = "Fizz";
        } else if ((i+1) % 5 == 0) {
            res[i] = "Buzz";
        } else {
            // Convert the number to a string
            int len = snprintf(NULL, 0, "%d", (i+1));
            res[i] = (char*)malloc((len + 1) * sizeof(char));
            snprintf(res[i], len + 1, "%d", (i+1));
        }
    
      }
    *returnSize = n;
    return res;
}

