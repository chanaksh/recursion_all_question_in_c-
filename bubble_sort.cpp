#include <iostream>
using namespace std;

void bubble_sort(int arr[],int size,int count){
    if(size==0){
        return;
    }

    if(count<size){
    if(arr[count]>arr[count+1]){
      int temp=arr[count];
      arr[count]=arr[count+1];
      arr[count+1]=temp;
      bubble_sort(arr,size,count+1);
    }
    else{
        bubble_sort(arr,size,count+1);
    }
    }
    else{
        bubble_sort(arr,size-1,0);
    }
  
}

int main()
{
    
  
    int arr[11] = {2, 4, 12, 34, 67, 22, 45, 66, 33, 46, 89};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,size-1,0);

    for(int i=0;i<size;i++){
   cout<<arr[i]<<" ";
    }
    return 0;
}