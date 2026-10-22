/* 973. Pattern 22
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
Print the pattern in the function given to you.

Example 1:
Input: n = 4

Output:



Example 2:
Input: n = 2

Output:



Still unsure what the problem is asking ?

Let’s go through a few more examples, step by step, to make it clearer.

Constraints:
1 <= n <= 100 */
#include<iostream>
using namespace std;
void pattern_22(int n){
    int change=0;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            //->Important Formule
            int val=min(min(min(i,j),2*(n-1)-i),2*(n-1)-j);
            cout<<n-val<<" ";
        }cout<<endl;
    }
}
int main(void){
    pattern_22(9);
    return 0;
}