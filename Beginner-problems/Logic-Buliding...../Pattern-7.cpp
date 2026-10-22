/*997. Pattern 7
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

    *
   ***
  *****
 *******
*********
Print the pattern in the function given to you.

Example 1:
Input: n = 4

Output:



Example 2:
Input: n = 2

Output:


Constraints:
1 <= n <= 100
*/
#include<iostream>
using namespace std;
void pattern_7(int n){
    for(int i=0;i<n;i++){
        for(int j=n-1-i;j>=0;j--){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }cout<<endl;
    }
}
int main(void){
    pattern_7(7);
    return 0;
}