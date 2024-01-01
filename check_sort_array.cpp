#include<iostream>
using namespace std;
bool helper1(int arr[],int start,int end){
    if(start==end-1){
        return true;
    }

    if(arr[start]>arr[start+1]){
       return false;
    }
    
    return helper1(arr,start+1,end);
}


bool helper(int arr[],int start,int end){
    if(start==end-1){
        return true;
    }

    return arr[start]<arr[start+1] && helper(arr,start+1,end);
}
bool check(int* arr){
    
    return helper(arr,0,10);
}
int main(){

    int arr[10]={2,4,6,8,20,45,60,70,99,100};
    
    cout<<check(arr);
    return 0;
}