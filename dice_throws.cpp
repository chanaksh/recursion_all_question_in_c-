#include<iostream>
using namespace std;
void combi(string process,int n){
    if(n==0){
        cout<<process<<endl;
        return;
    }

    for(int i=1;i<=6;i++){
        if(i<=n){
            string new_n = to_string(i);
            combi(process+new_n,n-i);
        }
    }
}
int main(){
    int n;
    cout<<"enter the number: "<<endl;
    cin>>n;
    string process="";
    combi(process,n);
}