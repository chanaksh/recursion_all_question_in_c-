#include<iostream>
using namespace std;
int binary(int arr[],int start,int end,int n){

    if(start>end){
        return -1;
    }
    int mid=(start+end)/2;
    if(arr[mid]==n){
        return  mid;
    }
    else if(arr[mid]>n){
    return binary(arr,start,mid-1,n);
    }
    else {
      return binary(arr,mid+1,end,n);  
    }

    
}
int main(){
    int n;
    int start=0;
    int end=15;
    int arr[15]={2,4,8,34,51,54,58,60,72,76,79,82,88,89,99};
    cout<<"enter the number to be find: "<<endl;
    cin>>n;
    cout<<binary(arr,start,end,n);
    return 0;
}