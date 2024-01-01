#include<iostream>
using namespace std;
void subset(string name,string result){
    if(name.length()==0){
        cout<<result<<endl;
        return;
    }

    char element = name[0] ;
  
    subset(name.substr(1,name.length()),result+element);
    subset(name.substr(1,name.length()),result+to_string((element+0)));
    subset(name.substr(1,name.length()),result);
}
int main(){

    string name="abc";
    string result="";
    subset(name,result);
    return 0;
}