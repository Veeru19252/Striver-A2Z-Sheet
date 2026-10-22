/* 962. Pattern 20
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *
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
void pattern_20(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int k=0;k<2*(n-i-1);k++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        for(int k=0;k<2*(n-i);k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
}
int main(void){
    pattern_20(6);
    return 0;
}