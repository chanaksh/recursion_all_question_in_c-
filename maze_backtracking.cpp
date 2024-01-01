#include<iostream>
#include<vector>
using namespace std;

void maze_path(string process,vector<vector<bool>>maze_box,int row,int column){
    if(row==maze_box.size()-1 && column==maze_box[0].size()-1){
        cout<<process<<endl;
        return;
    }

    if(maze_box[row][column]==false){
        return;
    }
    
    maze_box[row][column]=false;
    if(column<maze_box[0].size()-1){
          maze_path(process+'R',maze_box,row,column+1);
    }
    if(row<maze_box.size()-1){
          maze_path(process+'D',maze_box,row+1,column);
    }
    if(row>0){
        maze_path(process+'U',maze_box,row-1,column);
    }
    if(column>0){
        maze_path(process+'L',maze_box,row,column-1);
    }

    maze_box[row][column]=true;

}

int main(){
    vector<vector<bool>>maze_box={
        {true,true,true},
        {true,true,true},
        {true,true,true}
    };
    // cout<<"hello";
  string process="";
    maze_path(process,maze_box,0,0);
    return 0;
}