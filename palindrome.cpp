#include<iostream>
using namespace std;

bool check(string name,int first){
    if(first>name.size()/2){
        return true;
    }
   int last=name.length()-first-1;
    if(name[first]!=name[last]){
       return false;
    }

    return check(name,first+1);
}
int main(){
    string name="aaabbaaa";
    int len=name.size();
    cout<<check(name,0);
}