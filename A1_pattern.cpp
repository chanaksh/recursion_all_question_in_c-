#include<iostream>
using namespace std;

void pattern(int n){
    if(n==0){
        return;
    }
    for(int i=0;i<n;i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
 pattern(n-1);
}
int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;

    pattern(n);
    return 0;
}