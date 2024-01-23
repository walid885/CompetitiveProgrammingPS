/**
 * in this program I am going to solve the problem 412 of leetcode, in ordre to improve my programming capabilites 
 * 
 * I am going to develop it using the dynamic memory management, in ordre to boost the program, so that , for each time there is 
 * an execution , I am going to create a table having the exact n number of fields in the array 
 * 
 * 
 * 
*/

#include <cstddef>
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

/**
 *  What I have learnt through this problem 
 * the usage of the dynamic memory for strings is basically , having the array of strings, and 
 * in c we consider each string as an array 
 * 
 * there was a challenging problem in the buffer overflow, and hoenstly I don't know why it happend
 * so It was a little bit tricky to iterate that number of times , but calculate upon the (i+1) , because i is 
 * starting from 0 , and i DOn't know why it couldln't just iterate from 1 ----->n 
 * 
 * 
 * it is the first time dealing and using the snprintf functionality 
 * 
 * here is some documnetation about it : "int snprintf ( char * s, size_t n, const char * format, ... );
Write formatted output to sized buffer
Composes a string with the same text that would be printed if format was used on printf, but instead of being printed, the content is stored as a C string in the buffer pointed by s (taking n as the maximum buffer capacity to fill).

If the resulting string would be longer than n-1 characters, the remaining characters are discarded and not stored, but counted for the value returned by the function.

A terminating null character is automatically appended after the content written.

After the format parameter, the function expects at least as many additional arguments as needed for format.
"

and here is the link of it : " https://cplusplus.com/reference/cstdio/snprintf/"

happy CODING, and consistancy is the key ! 
*/