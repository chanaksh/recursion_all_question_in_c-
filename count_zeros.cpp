#include<iostream>
using namespace std;
int helper(int n,int c){
    if(n==0){
        return c;
    }

    int rem=n%10;
    if(rem==0){
        c++;
    }
    return helper(n/10,c);
}
int count(int n){
    return helper(n,0);
}
int main(){

    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    cout<<count(n);
    return 0;

}