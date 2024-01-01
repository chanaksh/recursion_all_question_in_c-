#include<iostream>
using namespace std;
int digit(int total,int dig){
    if(dig==0){
        return total;
    }
                         
    total+=dig%10;
    return digit(total,dig/10);

}
int main(){
    int n;
    cout<<"enter the digit: "<<endl;
    cin>>n;
    cout<<digit(0,n);
}