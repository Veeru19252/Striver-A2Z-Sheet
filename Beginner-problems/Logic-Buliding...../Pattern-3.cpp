#include<iostream>
using namespace std;
void pattern_3(int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }
}
int main(void){
    pattern_3(5);
    return 0;
}