#include<iostream>
#include<math.h>
using namespace std;
int reverse1(int n,int total){
    if(n==0){
        return total;
    }
    int dig=n%10;
    total=total*10+dig;
    return reverse1(n/10,total);
}

int helper(int n,int digits){
    if(n%10==n){
        return n;
    }
    int rem = n%10;
    return rem*(pow(10,digits-1))+helper(n/10,digits-1);
}

int reverse2(int n){
    int digits=(int)(log10(n))+1;

    return helper(n,digits);
}

bool palindrome(int n){
    if(n==reverse2(n)){
    return true;
    }
    return false;
}

int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    cout<<reverse1(n,0)<<endl;
    cout<<reverse2(n)<<endl;

    cout<<palindrome(n);

}