/* 898. Pattern 10
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*

**

***

****

*****

****

***

**

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
void pattern_10(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<(n-i-1);j++){
            cout<<"*";
        }cout<<endl;
    }
}
int main(void){
    pattern_10(6);
    return 0;
}