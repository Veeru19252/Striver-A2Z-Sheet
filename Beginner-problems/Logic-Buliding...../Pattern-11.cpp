/* 907. Pattern 11
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1 

0 1 

1 0 1 

0 1 0 1 

1 0 1 0 1

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
void pattern_11(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i%2==0){
                if(j%2==0)cout<<"1";
                else cout<<"0";
            }else{
                if(j%2!=0)cout<<"1";
                else cout<<"0";
            }
        }cout<<endl;
    }
}
int main(void){
    pattern_11(6);
    return 0;
}