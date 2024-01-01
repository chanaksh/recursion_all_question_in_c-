#include<iostream>
using namespace std;
void subsequence(string result,string input){
    if(input.length()==0){
        cout<<result<<endl;
        return;
    }

    char ans=input[0];
    subsequence(result+ans,input.substr(1,input.length()));
    subsequence(result,input.substr(1,input.length()));
 

}
int main(){
    string my_input="abcd";
    string result="";
    subsequence(result,my_input);
}