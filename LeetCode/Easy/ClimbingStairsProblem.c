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
*/
int climbStairs(int n) {
    int res = 0 ; 
    int temp = n ; 
    if (n % 2 == 0 ){
        while (temp != 0){
            temp = temp /2 ; 
            res += 1 ;
            
        }
    }else {
        res = 1 ; 
         while (temp != 0){
            printf(" tmp 0 : %d \n",temp);
             temp = temp /2 ;
             printf(" tmp 1 : %d\n ",temp);

            res += 1 ;
             
        }
    }
    return res; 
}
void main (){
    climbStairs(1);
}