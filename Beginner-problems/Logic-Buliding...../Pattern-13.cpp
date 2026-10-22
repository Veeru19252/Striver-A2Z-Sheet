/* 918. Pattern 13
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1 

2 3 

4 5 6 

7 8 9 10 

11 12 13 14 15

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
void pattern_13(int n){
    int val=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<val<<" ";
            val++;
        }cout<<endl;
    }
}
int main(void){
    pattern_13(8);
    return 0;
}