#include<iostream>
#include<vector>
using namespace std;

void maze_restriction(string process,vector<vector<bool>>value,int row,int column){
    if(row==value.size()-1 && column==value[0].size()-1){
        cout<<process<<endl;
        return;
    }

  if(row==1 && column==1 ){
    return;
  }

  if(row<value.size()-1){
    maze_restriction(process+'D',value,row+1,column);
  }
  if(column<value[0].size()-1){
    maze_restriction(process+'R',value,row,column+1);
  }
   
}
int main(){
    vector<vector<bool>>value={
        {true,true,true},
        {true,false,true},
        {true,true,true}
    };
    string process="";
    maze_restriction(process,value,0,0);
}