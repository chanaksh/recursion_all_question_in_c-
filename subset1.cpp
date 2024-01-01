#include<iostream>
#include<vector>
using namespace std;

void subset(vector<int>&input,vector<int>temp,vector<vector<int>>&result,int index){
    if(index>=input.size()){
       result.push_back(temp);
       return;
    }

    int element=input[index];
    subset(input,temp,result,index+1);
    temp.push_back(element);
    subset(input,temp,result,index+1);
}
int main(){
    vector<int>input={1,2,3};
    vector<int>temp;
    vector<vector<int>>result;
    subset(input,temp,result,0);

    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}