/* 1006. Pattern 8
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*********
 *******
  *****
   ***
    *
Print the pattern in the function given to you.

Example 1:
Input: n = 4

Output:



Example 2:
Input: n = 2

Output:


Constraints:
1 <= n <= 100 */
#include<iostream>
using namespace std;
void pattern_8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*(n-i-1)+1;k++){
            cout<<"*";
        }cout<<endl;
    }
}
int main(void){
    pattern_8(7);
    return 0;
}