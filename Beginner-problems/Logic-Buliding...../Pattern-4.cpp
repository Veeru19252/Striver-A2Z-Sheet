/*
Questions:
    984. Pattern 4
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

1

22

333

4444

55555

Print the pattern in the function given to you.

Example 1:
Input: n = 4

Output:



Example 2:
Input: n = 2

Output:


*/
#include<iostream>
using namespace std;
void pattern_4(int n){int val=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<val;
        }cout<<endl;
        val++;
    }
}
int main(void){
    pattern_4(6);
}