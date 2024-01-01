#include<iostream>
using namespace std;

void pattern1(int n,int index){
    if(n==0){
        return;
    }
    if(n>index){
        cout<<"*"<<" ";
        pattern1(n,index+1);
    }

    else{
       cout<<endl;
       pattern1(n-1,0);
    }
}
void pattern(int n,int index){
    if(n==0){
        return;
    }
    if(n>index){
        pattern(n,index+1);
        cout<<"*"<<" ";
        
    }

    else{
        pattern(n-1,0);
       cout<<endl;
       
    }
}
int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;

    pattern(n,0);
    return 0;
}