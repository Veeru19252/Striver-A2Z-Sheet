#include<iostream>
using namespace std;
void pattern_1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
            if(i==j)cout<<"->"<<i+1;
        }cout<<endl;
    }
}
int main(void){
    pattern_1(10);
    return 0;
}