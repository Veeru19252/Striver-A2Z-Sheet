#include<iostream>
using namespace std;
void pattern_2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
}
int main(void){
    int n=10;
    pattern_2(10);
    return 0;
}