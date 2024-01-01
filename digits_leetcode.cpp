#include<iostream>
#include<string>
using namespace std;
void subsets(string process,string digits){
       if(digits.length()==0){
          cout<<process<<endl;
          return;
       }

       int mydigits=(((stoi(digits.substr(0,1)))-1)*3)-3; 
       for(int i=0;i<3;i++){
         char data = 97+mydigits+i;
          
    subsets(process + data,digits.substr(1,digits.length()));
   

     
       }
}
int main(){
    string digits="23";
    string process="";
    subsets(process,digits);
}