/* 909. Pattern 12
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1        1
12      21
123    321
1234  4321
1234554321
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
void pattern_12(int n){
    for(int i=0;i<n;i++){
        int val=1;
        for(int j=0;j<=i;j++){
            cout<<val;
            val++;
        }
        val--;
        for(int k=1;k<2*(n-i-1)+1;k++){
            cout<<" ";
        }
        for(int z=0;z<=i;z++){
            cout<<val;
            val--;
        }cout<<endl;
    }
}
int main(void){
    pattern_12(6);
    return 0;
}