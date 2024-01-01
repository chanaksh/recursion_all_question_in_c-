#include<iostream>
using namespace std;

void count(string process,int row,int column){
   if(row==1 && column==1){
    cout<<process<<endl;
    return;
   }
    if(column>1){
   count(process+"H",row,column-1);
    }
    if(row>1){
   count(process+"V",row-1,column);
    }

    if(row> 1 && column>1){
       count(process+"D",row-1,column-1) ;
    }
}

 int main(){

    int row=3;
    int column=3;
    string process="";
    count(process,row,column);
    
    return 0;
 }