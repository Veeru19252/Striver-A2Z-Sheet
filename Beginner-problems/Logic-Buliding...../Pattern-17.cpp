/* 940. Pattern 17
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
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
1 <= n <= 26 */


#include<iostream>
using namespace std;
void pattern_17(int n) {
        for(int i=0;i<n;i++){
            char ch='A';
            for(int j=0;j<(n-i-1);j++){
                cout<<" ";
            }
            for(int z=0;z<=i;z++){
                cout<<ch;
                ch++;
            }
            ch-=2;
            for(int k=0;k<i;k++){
                cout<<ch;
                ch--;
            }
            cout<<endl;
        }
    }
int main(void){
    pattern_17(5);
    return 0;
}