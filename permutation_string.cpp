#include<iostream>
using namespace std;

void permutation(string process,string name){
    if(name.length()==0){
         cout<<process<<endl;
         return;  
    }
     char element=name[0];
    for(int i=0;i<=process.length();i++){
        permutation(process.substr(0,i)+element+process.substr(i,process.length()),name.substr(1,name.length()));
    }
}
int main(){

    string name="abc";
    string process="";
    permutation(process,name);
    return 0;
}