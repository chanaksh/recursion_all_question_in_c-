#include<iostream>
using namespace std;

int power(int a,int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    if(b%2==0){
        return power(a,b/2)*power(a,b/2);
    }
    else{
        return a * power(a,b/2) * power(a,b/2);
    }
}
int main(){
    int a,b;
    cout<<"enter the number a and b"<<endl;
    cin>>a>>b;
    int result=power(a,b);
    cout<<"the result of and b is: "<<result;
    return 0;
}