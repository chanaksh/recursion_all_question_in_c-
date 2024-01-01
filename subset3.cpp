#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int arr[]={1,2,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<pow(2,size);i++){
        for(int j=0;j<size;j++){
            
            if((1<<j)&i){
                cout<<arr[j]<<" ";
                
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}