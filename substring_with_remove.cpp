#include <iostream>
using namespace std;
void skip(string process, string input)
{
    if (input.length() == 0)
    {
        cout << process;
        return;
    }

    char ch = input[0];
    int len = input.size();
    string new_input = input.substr(1, len);
    if (ch == 'a')
    {

        skip(process, new_input);
    }
    else
    {
        skip(process + ch, new_input);
    }
}

string skip1(string process){
    if(process.length()==0){
        return " ";
    }

    char ch=process[0];
    if(ch=='a'){
        return skip1(process.substr(1,process.length()));
    }
    else{
        return ch + skip1(process.substr(1,process.length()));
    }
}

string skip2(string process){
   if(process.length()==0){
    return" ";
   }

   char ch=process[0];
   
   if(process.substr(0,5)=="apple"){
      return skip2(process.substr(5,process.length()));
   }
   else{
    return ch +skip2(process.substr(1,process.length()));
   }
}


int main()
{
    string input;
    cout << "enter the string: " << endl;
    cin >> input;
    string process = "";
    skip(process, input);
    cout<<endl;

    cout<<skip1(input)<<endl;
    cout<<skip2("abbapplecd");
    return 0;
}