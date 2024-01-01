#include<iostream>
using namespace std;

int sum(int arr[],int total,int size){

    if(size==0){
        return total;
    }
    total+=arr[0];
    return sum(arr+1,total,size-1);
}
int main(){
    int arr[]={2,5,3,55,12,45};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"the array sum is: "<<sum(arr,0,size);
}