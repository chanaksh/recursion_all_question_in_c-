#include<iostream>
#include<vector>
using namespace std;
  
  void solve(vector<int>nums,vector<vector<int>>&ans,vector<int>input,int index){
        if(index>=nums.size()){
            ans.push_back(input);
            return;

        }

        solve(nums,ans,input,index+1);
        int element = nums[index];
        input.push_back(element);
        solve(nums,ans,input,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>input;
        int index=0;

        solve(nums,ans,input,index);
        return ans;
    }


int main(){
   vector<int>ans={1,2,3};
   vector<vector<int>>vec = subsets(ans);
    for (int i = 0; i < vec.size(); i++) { 
        for (int j = 0; j < vec[i].size(); j++) 
            cout << vec[i][j] << " "; 
        cout << endl; 
    } 
}
