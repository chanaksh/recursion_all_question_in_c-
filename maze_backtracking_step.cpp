#include<iostream>
#include<vector>
using namespace std;
void step_display(vector<vector<bool>>ans,int row,int column,int step,int path[][3]){
    if(row==ans.size()-1 && column==ans[0].size()-1){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<path[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        

        return;
    }

    if(!ans[row][column]){
         return;
    }

    ans[row][column]=false;
    path[row][column]=step;
    if(row<ans.size()-1){
        step_display(ans,row+1,column, step+1,path);
    }
    if(column<ans[0].size()-1){
        step_display(ans,row,column+1,step+1,path);
    }

    if(column>0){
        step_display(ans,row,column-1,step+1,path);
    }
    if(row>0){
        step_display(ans,row-1,column,step+1,path);
    }
    ans[row][column]=true;
}
int main(){
    vector<vector<bool>>ans={{true,true,true},{true,true,true},{true,true,true}};
    int path[3][3]{0};
    step_display(ans,0,0,1,path);
    
    return 0;
}