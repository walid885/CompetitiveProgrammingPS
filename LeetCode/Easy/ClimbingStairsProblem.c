/*
the problem is about climbing the stairs, we have too options, we can go either one step or 2 steps at a time. 
there are basically two cases, if the number is even or odd. 
even : exemple 4 
we can have 1 + 1 +1 +1 
            2 +1 +1 
            2 +2 
an other even number 
        6 : 1+1+ ... + 1 
            2+1+1+1+1
            2+2+1+1
            2+2+2
so , basically we are trying to decompose that number into a sequance of one and twwos 



here is the idea : found it in the solutions part in leetcode problemes : 
Approach 1(Math)
Initialization: Start with ways = 1, considering the default way of taking all steps at once.

Iterative Approach:

Iterate from 1 to n / 2 to explore different step sizes.
For each step size, calculate a product using a nested loop, involving a combinatorial formula (C(n, k) = n! / (k! * (n - k)!)).
Accumulation: Accumulate the product in the sum variable.

Result: Add the sum to the ways variable for each step size.

Return: The final value of ways represents the total number of distinct ways to climb the stairs
*/
int climbStairs(int n) {
int res = 1 ; 
  for (int i = 1 ; i <= n/2 ; i++ ){
      double  sum = 1 ; 
      for (int j = i ; j < 2*i ; j++ ){
          sum *= (double)(n-j)/(j-i+1);
      }
      res += sum; 
  }
    return res ; 
}
void main (){
    climbStairs(1);
}