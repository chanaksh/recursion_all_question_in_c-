#include<iostream>
using namespace std;

string reverse(string name,int start,int end){
    
    if(start>end){
        return name;
    }
    swap(name[start],name[end]);
    return reverse(name,start+1,end-1);
   
}
int main(){
    string name="chanaksh";
    int len=name.length();
    cout<<"reverse of string is: "<<reverse(name,0,len-1);
}