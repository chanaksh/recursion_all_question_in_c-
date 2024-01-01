#include<iostream>
using namespace std;

int count(int row,int column){
   if(row==1 || column==1){
    return 1;
   }

   return count(row-1,column)+count(row,column-1);
}
 int main(){

    int row=3;
    int column=3;
    cout<<count(row,column);
    return 0;
 }