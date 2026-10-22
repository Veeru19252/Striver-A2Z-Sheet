/*995. Pattern 6
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

12345

1234

123

12

1

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
void Pattern_6(int n){
    for(int i=n-1;i>=0;i--){
        int val=1;
        for(int j=0;j<=i;j++){
            cout<<val;
            val++;
        }cout<<endl;
    }
}
int main(void){
    Pattern_6(7);
    return 0;
}